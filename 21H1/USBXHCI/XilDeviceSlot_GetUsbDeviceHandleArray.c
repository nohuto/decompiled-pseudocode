/*
 * XREFs of XilDeviceSlot_GetUsbDeviceHandleArray @ 0x1C0035E70
 * Callers:
 *     DeviceSlot_LocateDeviceByPortPath @ 0x1C003595C (DeviceSlot_LocateDeviceByPortPath.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0074F94 (Controller_TelemetryAddControllerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilDeviceSlot_GetUsbDeviceHandleArray(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 80) )
    return *(_QWORD *)(a1 + 24);
  else
    return *(_QWORD *)(a1 + 72);
}
