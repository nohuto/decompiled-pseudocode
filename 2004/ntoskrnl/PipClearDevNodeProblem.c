/*
 * XREFs of PipClearDevNodeProblem @ 0x14073015C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036C6D8 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14071F344 (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessClearDeviceProblem @ 0x14071F3E8 (PiProcessClearDeviceProblem.c)
 *     PiRestartRemovalRelations @ 0x14072134C (PiRestartRemovalRelations.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x140729CF0 (PnpProcessAssignResourcesWorker.c)
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407303C4 (PnpProcessQueryRemoveAndEject.c)
 *     IopInitializeDeviceInstanceKey @ 0x140739284 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x14089A9B4 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x14089EC8C (PnpDisableDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x14089F5E8 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408A7F80 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406190D0 (SeAuditingWithTokenForSubcategory.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140726F44 (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x140730230 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1408B24D0 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v2 )
  {
    PiPnpRtlBeginOperation(&P);
    PipClearDevNodeFlags(a1, 0x2000);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
