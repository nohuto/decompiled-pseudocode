/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x1C00196A0
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020060 (DxgkQueryConnectionChanges.c)
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0057F30 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpEvalAcpiMethod @ 0x1C0153370 (DpEvalAcpiMethod.c)
 *     DpiPdoIsChildConnected @ 0x1C01652A4 (DpiPdoIsChildConnected.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C01657D8 (DpiPdoHandleChildConnectionChange.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C0169F78 (DpiGetMonitorColorimetryOverride.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C016A8A4 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C016AEF0 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0188D94 (DpiSetTargetAdjustedColorimetry.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02C63B4 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1C02D4500 (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiGetIntegratedMonitorLinkInfo @ 0x1C02D456C (DpiGetIntegratedMonitorLinkInfo.c)
 *     DpiPdoPollingWorkItem @ 0x1C02D4A20 (DpiPdoPollingWorkItem.c)
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
