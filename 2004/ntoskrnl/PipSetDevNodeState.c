/*
 * XREFs of PipSetDevNodeState @ 0x14036B438
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036C6D8 (PnpRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x14071F4B8 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1407220BC (PnpQueryRemoveLockedDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140725850 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407282D4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140728E04 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x140729138 (PipEnumerateDevice.c)
 *     PnpProcessAssignResources @ 0x140729B0C (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PnpStartDeviceNode @ 0x14072C52C (PnpStartDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1407334D0 (PnpRequestDeviceRemovalWorker.c)
 *     PipProcessStartPhase2 @ 0x140734258 (PipProcessStartPhase2.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x14073D9A4 (IopLegacyResourceAllocation.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14075C2E4 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407BFFD0 (PnpDriverLoadingFailed.c)
 *     PiInitializeDevice @ 0x1408B0B6C (PiInitializeDevice.c)
 *     PipProcessRestartPhase2 @ 0x1408B2230 (PipProcessRestartPhase2.c)
 *     PnpQueryStopDeviceNode @ 0x1408B5614 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1408B59E8 (PnpStopDeviceSubtree.c)
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x1402DCDBC (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x1402DCE0C (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14037ED74 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  BOOL v4; // r15d
  int v5; // esi
  char v6; // r14
  KIRQL v7; // al
  int v8; // r8d
  unsigned __int64 v9; // rdi
  BOOL IsDevNodeDNStarted; // eax
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
    v4 = PipAreDriversLoadedWorker(v8, *(_DWORD *)(a1 + 304));
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
      if ( PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v4
        || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v5) )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, v15, 11LL);
        result = PipIsDevNodeDNStarted(a1);
        if ( (_DWORD)result != v5 )
          result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *(_QWORD *)(a1 + 48), 26LL);
      }
    }
  }
  if ( a2 == 788 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
