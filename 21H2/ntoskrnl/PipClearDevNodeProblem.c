/*
 * XREFs of PipClearDevNodeProblem @ 0x140739754
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036E5C8 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407316C4 (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessClearDeviceProblem @ 0x140731768 (PiProcessClearDeviceProblem.c)
 *     PiRestartRemovalRelations @ 0x14073358C (PiRestartRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736914 (PnpProcessQueryRemoveAndEject.c)
 *     PiDevCfgProcessDevice @ 0x140739D90 (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x140740770 (PnpProcessAssignResourcesWorker.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074ED50 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x14089DAB4 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x1408A1D8C (PnpDisableDevice.c)
 *     PiProcessResourceRequirementsChanged @ 0x1408A26E8 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408AB080 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x140608730 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140634680 (PiPnpRtlBeginOperation.c)
 *     PnpTraceClearDevNodeProblem @ 0x140739828 (PnpTraceClearDevNodeProblem.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746040 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140746A74 (PipClearDevNodeFlags.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1408B55D0 (PiAuditDeviceEnableDisableAction.c)
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
    PipClearDevNodeFlags(a1, 0x2000LL);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13LL);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
