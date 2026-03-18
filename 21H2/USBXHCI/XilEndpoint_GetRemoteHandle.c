/*
 * XREFs of XilEndpoint_GetRemoteHandle @ 0x1C00377C4
 * Callers:
 *     TR_CreateSecureObject @ 0x1C003F59C (TR_CreateSecureObject.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x1C003609C (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall XilEndpoint_GetRemoteHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]

  if ( *(_BYTE *)(a1 + 1336) )
    return *(_QWORD *)(a1 + 1312);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_sds(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      a3,
      a4,
      v5,
      "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
      32,
      "Unexpected code path hit");
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return 0LL;
}
