/*
 * XREFs of PipSetDevNodeState @ 0x1402DE844
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x14066044C (PnpRestartDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14067B998 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1406E60B0 (PiProcessNewDeviceNodeAsync.c)
 *     PnpProcessAssignResources @ 0x140749294 (PnpProcessAssignResources.c)
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x14074B420 (PipEnumerateDevice.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PipProcessStartPhase2 @ 0x140768EA8 (PipProcessStartPhase2.c)
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x14076F8AC (PipEnumerateCompleted.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407730FC (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     IopLegacyResourceAllocation @ 0x14081F570 (IopLegacyResourceAllocation.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140947628 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140959F9C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14095A388 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14095B398 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x140B0046C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x1402DEAB0 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1402DEB00 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403A6D44 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r15d
  int v5; // esi
  char v6; // r14
  KIRQL v7; // al
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdi
  int IsDevNodeDNStarted; // eax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v8 = *(_DWORD *)(a1 + 300);
  v9 = v7;
  if ( v8 != a2 )
  {
    v4 = PipAreDriversLoadedWorker(v8, *(unsigned int *)(a1 + 304));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    v11 = *(unsigned int *)(a1 + 388);
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v12;
    *(_DWORD *)(a1 + 300) = a2;
    v6 = 1;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v12;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KxReleaseSpinLock(&PnpSpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( (unsigned int)PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304)) != v4
        || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v5) )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, v15, 11LL);
        result = PipIsDevNodeDNStarted(a1);
        if ( (_DWORD)result != v5 )
          result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *(_QWORD *)(a1 + 48), 26LL);
      }
    }
  }
  if ( a2 == 790 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
