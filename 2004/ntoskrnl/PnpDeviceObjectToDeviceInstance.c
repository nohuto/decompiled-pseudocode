/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x14072C03C
 * Callers:
 *     PnpSaveDeviceCapabilities @ 0x140724328 (PnpSaveDeviceCapabilities.c)
 *     PiCreateDriverSwDevices @ 0x14072ABFC (PiCreateDriverSwDevices.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x14072B38C (PiUpdateDevicePanel.c)
 *     PiQueryRemovableDeviceOverride @ 0x140750EF8 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14089B418 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1405E180C (_CmOpenDeviceRegKey.c)
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
