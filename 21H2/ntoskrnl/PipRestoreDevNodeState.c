/*
 * XREFs of PipRestoreDevNodeState @ 0x14025B96C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpCancelRemoveLockedDeviceNode @ 0x1409473F0 (PnpCancelRemoveLockedDeviceNode.c)
 *     PnpCancelStopDeviceNode @ 0x140959B60 (PnpCancelStopDeviceNode.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x1402DEAB0 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1402DEB00 (PipAreDriversLoadedWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipRestoreDevNodeState(__int64 a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ebp
  int IsDevNodeDNStarted; // eax
  __int64 v5; // rcx
  int v6; // esi
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
  IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
  v5 = *(unsigned int *)(a1 + 388);
  v6 = IsDevNodeDNStarted;
  *(_DWORD *)(a1 + 300) = v7;
  *(_DWORD *)(a1 + 4 * v5 + 308) = v8;
  *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  KxReleaseSpinLock(&PnpSpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( (unsigned int)PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304)) != v3
      || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v6) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, v11, 11LL);
      result = PipIsDevNodeDNStarted(a1);
      if ( (_DWORD)result != v6 )
        return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *(_QWORD *)(a1 + 48), 26LL);
    }
  }
  return result;
}
