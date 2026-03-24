/*
 * XREFs of PipSetDevNodeProblem @ 0x1407394EC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036E5C8 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessSetDeviceProblem @ 0x140731584 (PiProcessSetDeviceProblem.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407316C4 (PiProcessQueryRemoveNoFdo.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736198 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDevCfgProcessDevice @ 0x140739D90 (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResources @ 0x14074058C (PnpProcessAssignResources.c)
 *     PipProcessDevNodeTree @ 0x140741204 (PipProcessDevNodeTree.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140742518 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14074555C (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x140747150 (PnpQueryID.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074ED50 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2C50 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x1408A1D8C (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408AB080 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x140608730 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140634680 (PiPnpRtlBeginOperation.c)
 *     PnpTraceSetDevNodeProblem @ 0x1407395F4 (PnpTraceSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14074561C (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746040 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1408B55D0 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v5; // esi
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v3 = a3;
  v5 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a2 || v7 != a3 )
  {
    PiPnpRtlBeginOperation(&P);
    PipSetDevNodeFlags(a1, 0x2000LL);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = v3;
    if ( v9 )
    {
      if ( a2 != v5 )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, v9, 12LL);
        v3 = *(_DWORD *)(a1 + 408);
      }
      if ( v3 != v7 )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 13LL);
        v3 = *(_DWORD *)(a1 + 408);
      }
      PnpTraceSetDevNodeProblem(a1 + 40, a1 + 56, *(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 404), v3, v5, v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
