/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800752AC
 * Callers:
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x18002283C (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x180077518 (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x18008CB44 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z @ 0x1800969EC (-TelemetryDdiDevice_Removed_@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800D29F8 (-StartActivity@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?StartActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800D94F0 (-StartActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v10 = 0;
  v9 = 8;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 4u, &v7);
}
