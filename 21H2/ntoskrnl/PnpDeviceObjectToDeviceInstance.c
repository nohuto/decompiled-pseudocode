/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x1407470F4
 * Callers:
 *     PnpSaveDeviceCapabilities @ 0x140743E58 (PnpSaveDeviceCapabilities.c)
 *     PiUpdateDevicePanel @ 0x140748294 (PiUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14074AB70 (PipProcessStartPhase3.c)
 *     PiCreateDriverSwDevices @ 0x14074B23C (PiCreateDriverSwDevices.c)
 *     PiQueryRemovableDeviceOverride @ 0x140763F00 (PiQueryRemovableDeviceOverride.c)
 *     IoReportDetectedDevice @ 0x1407AE910 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14089E518 (PiGetDeviceRegistryProperty.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x140641B70 (_CmOpenDeviceRegKey.c)
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
