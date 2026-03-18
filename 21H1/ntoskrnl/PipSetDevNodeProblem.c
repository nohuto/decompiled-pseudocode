/*
 * XREFs of PipSetDevNodeProblem @ 0x140734AA4
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14036C538 (PnpRemoveLockedDeviceNode.c)
 *     PiProcessSetDeviceProblem @ 0x14071D584 (PiProcessSetDeviceProblem.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14071D6C4 (PiProcessQueryRemoveNoFdo.c)
 *     PnpProcessAssignResources @ 0x140725C1C (PnpProcessAssignResources.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140727BA8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x14072ABEC (PipProcessEnumeratedChildDevice.c)
 *     PnpQueryID @ 0x14072C7E0 (PnpQueryID.c)
 *     PiDevCfgProcessDevice @ 0x140734D34 (PiDevCfgProcessDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140736D5C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140737704 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407BCE60 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x14089D96C (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408A6C60 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x1406707F0 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     PipSetDevNodeFlags @ 0x14072ACAC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14072B6D0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpTraceSetDevNodeProblem @ 0x140734BAC (PnpTraceSetDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x1408B11B0 (PiAuditDeviceEnableDisableAction.c)
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
