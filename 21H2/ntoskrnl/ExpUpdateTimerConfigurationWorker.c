/*
 * XREFs of ExpUpdateTimerConfigurationWorker @ 0x140210980
 * Callers:
 *     <none>
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140210A74 (KiSendClockInterruptToClockOwner.c)
 *     KiSetClockInterval @ 0x140210B2C (KiSetClockInterval.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetTimeAdjustment @ 0x1403928A4 (KeSetTimeAdjustment.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpUpdateTimerConfigurationWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // cl
  _QWORD *v6; // rcx
  char *v7; // rax
  __int64 result; // rax
  int v9; // ebx
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v12; // rdx
  int v13; // eax
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  bool v16; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&ExpKernelResolutionLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v3;
  }
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)a2 )
  {
    LOBYTE(v3) = 1;
    v9 = KiSetClockInterval((unsigned int)ExpLastRequestedTime, v3, &ExpClockIntervalRequest);
    KiSendClockInterruptToClockOwner();
    **(_DWORD **)a2 = v9;
  }
  KxReleaseSpinLock(&ExpKernelResolutionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = CurrentPrcb->SchedulerAssist;
      v13 = v12[5];
      v12[5] = v13;
      if ( !v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(0xFuLL);
  v6 = *(_QWORD **)(a2 + 8);
  if ( v6 )
    *(_DWORD *)(a2 + 24) = KeSetTimeAdjustment(*v6);
  v7 = *(char **)(a2 + 16);
  if ( v7 )
    KeTimeSynchronization = *v7;
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v15 = v14->SchedulerAssist;
        v16 = ((unsigned int)result & v15[5]) == 0;
        v15[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(v14);
      }
    }
  }
  __writecr8(v4);
  return result;
}
