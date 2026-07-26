/*
 * XREFs of NdisMWanSendComplete @ 0x1C00C2600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NdisMWanSendComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  KIRQL v3; // di
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *i; // rbp

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
    v3 = KfRaiseIrql(2u);
  if ( !a3 )
  {
    v7 = *(_QWORD *)(a1 + 3152);
    if ( v7 )
    {
      v8 = 112LL * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(v7 + v8 + 64);
      v9 = *(_QWORD *)(a1 + 3152);
      if ( v9 )
      {
        v10 = v9 + 112LL * KeGetPcr()->Prcb.Number;
        *(_QWORD *)(v10 + 88) += *(unsigned int *)(a2 + 24);
        *(_QWORD *)(v10 + 56) += *(unsigned int *)(a2 + 24);
      }
    }
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  for ( i = *(_QWORD **)(a1 + 56); ; i = (_QWORD *)i[49] )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    if ( !i )
      break;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(i[3] + 240LL))(i[4], a2, a3);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 && v3 != 2 )
    KeLowerIrql(v3);
}
