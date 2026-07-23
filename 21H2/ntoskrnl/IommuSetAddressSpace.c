/*
 * XREFs of IommuSetAddressSpace @ 0x1404D9B80
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommuSetAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  KIRQL v4; // r12
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  _QWORD *v7; // r15
  _QWORD *v8; // rdi
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v14; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  KIRQL v22; // [rsp+80h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( a2 != *(_QWORD *)(v2 + 32) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&IommupPasidTableLock);
    v22 = v4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 24));
    v7 = (_QWORD *)(v2 + 40);
    *(_QWORD *)(v2 + 32) = a2;
    v8 = *(_QWORD **)(v2 + 40);
    if ( v8 != (_QWORD *)(v2 + 40) )
    {
      do
      {
        v9 = (_QWORD *)v8[3];
        if ( v9 != v8 + 3 )
        {
          do
          {
            v10 = v9[5];
            v11 = *(_QWORD *)(v10 + 24);
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 224))(
              *(_QWORD *)(v11 + 16),
              *(_QWORD *)(v10 + 64),
              *(unsigned int *)(v2 + 16),
              a2);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _DWORD, _QWORD))(v11 + 232))(
              *(_QWORD *)(v11 + 16),
              *(unsigned int *)(v2 + 16),
              1LL,
              v9[1],
              0,
              0LL);
            v9 = (_QWORD *)*v9;
          }
          while ( v9 != v8 + 3 );
          v7 = (_QWORD *)(v2 + 40);
        }
        v8 = (_QWORD *)*v8;
      }
      while ( v8 != v7 );
      v4 = v22;
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 24));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & v14[5]) == 0;
          v14[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    KxReleaseSpinLock(&IommupPasidTableLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && v4 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (v4 + 1));
          v16 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick((__int64)v18);
        }
      }
    }
    __writecr8(v4);
  }
  return 0LL;
}
