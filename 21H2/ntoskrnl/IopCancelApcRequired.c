/*
 * XREFs of IopCancelApcRequired @ 0x1403649EC
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407215D4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x140891340 (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopCancelApcRequired(__int64 a1, __int64 a2, __int64 a3)
{
  KSPIN_LOCK *v3; // r14
  KIRQL v7; // al
  _QWORD *v8; // rdx
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rcx
  unsigned int v11; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v16; // edx
  bool v17; // zf

  v3 = (KSPIN_LOCK *)(a1 + 1416);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1416));
  v8 = (_QWORD *)(a1 + 1200);
  v9 = v7;
  v10 = *(_QWORD **)(a1 + 1200);
  if ( v10 == (_QWORD *)(a1 + 1200) )
  {
LABEL_2:
    v11 = 0;
  }
  else if ( a3 || (v11 = 1, a2) )
  {
    while ( (*(_DWORD *)(v10 - 2) & 2) != 0 || (v10[5] != a3 || a2 && v10[20] != a2) && (a3 || v10[20] != a2) )
    {
      v10 = (_QWORD *)*v10;
      if ( v8 == v10 )
        goto LABEL_2;
    }
    v11 = 1;
  }
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v11;
}
