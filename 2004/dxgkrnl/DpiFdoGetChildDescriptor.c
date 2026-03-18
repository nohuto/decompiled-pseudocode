/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C00198B0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C00200B0 (DxgkQueryConnectionChanges.c)
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0058F40 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpEvalAcpiMethod @ 0x1C0162F30 (DpEvalAcpiMethod.c)
 *     DpiPdoIsChildConnected @ 0x1C0174CF4 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0175228 (DpiPdoHandleChildConnectionChange.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0188914 (DpiGetMonitorColorimetryOverride.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C0189240 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C018988C (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0198D98 (DpiSetTargetAdjustedColorimetry.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02CA934 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C02D8A80 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C02D8AEC (DpiGetIntegratedMonitorLinkInfo.c)
 *     DpiPdoPollingWorkItem @ 0x1C02D8FA0 (DpiPdoPollingWorkItem.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  v2 = (_QWORD *)(a1 + 3464);
  v3 = *(_QWORD **)(a1 + 3464);
  do
  {
    if ( v3 == v2 )
      return 0LL;
    v4 = v3 - 4;
    v3 = (_QWORD *)*v3;
  }
  while ( *((_DWORD *)v4 + 6) != a2 );
  return v4;
}
