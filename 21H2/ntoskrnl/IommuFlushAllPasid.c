/*
 * XREFs of IommuFlushAllPasid @ 0x1404D8D90
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuFlushAllPasid(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  KSPIN_LOCK *v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *i; // rdi
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v4 = (KSPIN_LOCK *)(a1 + 24);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 24));
  v5 = (_QWORD *)(a1 + 32);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD, _QWORD))(i[2] + 232LL))(
      *(_QWORD *)(i[2] + 16LL),
      0xFFFFFFFFLL,
      0LL,
      i + 3,
      0,
      0LL);
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
