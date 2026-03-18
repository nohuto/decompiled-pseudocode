/*
 * XREFs of DeviceSlot_GetXilCoreDeviceSlotData @ 0x1C0010840
 * Callers:
 *     UsbDevice_SetDeviceDisabled @ 0x1C000D1B0 (UsbDevice_SetDeviceDisabled.c)
 *     XilDeviceSlot_SetDeviceContext @ 0x1C00105E0 (XilDeviceSlot_SetDeviceContext.c)
 *     XilDeviceSlot_Create @ 0x1C00173C8 (XilDeviceSlot_Create.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall DeviceSlot_GetXilCoreDeviceSlotData(__int64 a1, int a2, int a3, int a4)
{
  __int64 result; // rax

  result = a1 + 16;
  if ( *(_BYTE *)(a1 + 80) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
    return 0LL;
  }
  return result;
}
