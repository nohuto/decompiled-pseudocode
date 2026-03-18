/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x14073AACC
 * Callers:
 *     PnpSaveDeviceCapabilities @ 0x140732DB8 (PnpSaveDeviceCapabilities.c)
 *     PiCreateDriverSwDevices @ 0x14073968C (PiCreateDriverSwDevices.c)
 *     PipProcessStartPhase3 @ 0x140739750 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140739E1C (PiUpdateDevicePanel.c)
 *     PiQueryRemovableDeviceOverride @ 0x14075FAD8 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x1408A0F48 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x14066D59C (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v5, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
