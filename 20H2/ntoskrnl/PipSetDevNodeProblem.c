/*
 * XREFs of PipSetDevNodeProblem @ 0x1407424D8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036F2E0 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessSetDeviceProblem @ 0x14072D254 (PiProcessSetDeviceProblem.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14072D394 (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1407344BC (PipProcessEnumeratedChildDevice.c)
 *     PipProcessDevNodeTree @ 0x140735A50 (PipProcessDevNodeTree.c)
 *     PipCallDriverAddDevice @ 0x1407361D4 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140736D64 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PnpProcessAssignResources @ 0x14073859C (PnpProcessAssignResources.c)
 *     PiDevCfgProcessDevice @ 0x14073EAE0 (PiDevCfgProcessDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     PnpQueryID @ 0x14075F870 (PnpQueryID.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14076AA54 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407CE860 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x1408A47BC (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408ADAB0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x1406312F0 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlBeginOperation @ 0x14063C8BC (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14064120C (PiPnpRtlEndOperation.c)
 *     PipSetDevNodeFlags @ 0x14073457C (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140734FA0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpTraceSetDevNodeProblem @ 0x1407425E0 (PnpTraceSetDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1408B80F0 (PiAuditDeviceEnableDisableAction.c)
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
    PipSetDevNodeFlags(a1, 0x2000);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = v3;
    if ( v9 )
    {
      if ( a2 != v5 )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, v9, 12);
        v3 = *(_DWORD *)(a1 + 408);
      }
      if ( v3 != v7 )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 13);
        v3 = *(_DWORD *)(a1 + 408);
      }
      PnpTraceSetDevNodeProblem(a1 + 40, a1 + 56, *(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 404), v3, v5, v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
  }
}
