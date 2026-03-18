/*
 * XREFs of PoQueryWatchdogTime @ 0x14030F300
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     PopComputeWatchdogTimeout @ 0x14039813C (PopComputeWatchdogTimeout.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall PoQueryWatchdogTime(PDEVICE_OBJECT Pdo, PULONG SecondsRemaining)
{
  unsigned __int64 v2; // rbx
  BOOLEAN v3; // si
  _QWORD *DeviceNode; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 OldIrql; // rdi
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = -1LL;
  v3 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( Pdo )
    DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  v6 = DeviceNode[33];
  if ( v6 )
  {
    v15 = *(char *)(v6 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 72 * v15 + 200) + 196LL) )
    {
      v16 = PopComputeWatchdogTimeout(*(_QWORD *)(v6 + 72 * v15 + 200));
      v18 = *(_QWORD *)(v17 + 48) + 10000000LL * v16;
      if ( v18 != -1 )
        v2 = v18;
    }
  }
  v7 = DeviceNode[35];
  if ( v7 )
  {
    v11 = *(char *)(v7 + 66);
    if ( *(_BYTE *)(*(_QWORD *)(v7 + 72 * v11 + 200) + 196LL) )
    {
      v12 = PopComputeWatchdogTimeout(*(_QWORD *)(v7 + 72 * v11 + 200));
      v14 = *(_QWORD *)(v13 + 48) + 10000000LL * v12;
      if ( v14 < v2 )
        v2 = v14;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v23 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v2 != -1LL )
  {
    v3 = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( UnbiasedInterruptTime > v2 )
      *SecondsRemaining = 0;
    else
      *SecondsRemaining = (v2 - UnbiasedInterruptTime) / 0x989680;
  }
  return v3;
}
