/*
 * XREFs of PipSetDevNodeProblem @ 0x140765114
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1402DDAE4 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1406602DC (PiProcessQueryRemoveNoFdo.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14067B998 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406CF970 (IopInitializeDeviceInstanceKey.c)
 *     PiDevCfgProcessDevice @ 0x140747740 (PiDevCfgProcessDevice.c)
 *     PnpProcessAssignResources @ 0x140749294 (PnpProcessAssignResources.c)
 *     PnpQueryID @ 0x14074C8DC (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14076FAB0 (PipProcessEnumeratedChildDevice.c)
 *     PipCallDriverAddDevice @ 0x1407743C8 (PipCallDriverAddDevice.c)
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862BA0 (PnpDriverLoadingFailed.c)
 *     IopQueueDeviceResetEvent @ 0x1409457D0 (IopQueueDeviceResetEvent.c)
 *     PnpDisableDevice @ 0x140946EF8 (PnpDisableDevice.c)
 *     PiProcessSetDeviceProblem @ 0x140947A8C (PiProcessSetDeviceProblem.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14094F860 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x14095975C (PiInitializeDevice.c)
 * Callees:
 *     PnpTraceSetDevNodeProblem @ 0x14076520C (PnpTraceSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140772044 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14095B624 (PiAuditDeviceEnableDisableAction.c)
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
      if ( *(_DWORD *)(a1 + 404) == 22 && (unsigned __int8)SeAuditingWithTokenForSubcategory(137LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation(P);
  }
}
