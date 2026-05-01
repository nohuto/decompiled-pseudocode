/*
 * XREFs of ?StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXIUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18025A304
 * Callers:
 *     ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180259220 (-ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800237B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C048 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18024623C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180256FB0 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444@Z @ 0x18025851C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlg.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::StartActivity(
        __int64 a1,
        int a2,
        int *a3)
{
  __int64 v6; // rcx
  _DWORD *v7; // rsi
  const GUID *v8; // rax
  int v9; // [rsp+80h] [rbp+7h] BYREF
  int v10; // [rsp+84h] [rbp+Bh] BYREF
  int v11; // [rsp+88h] [rbp+Fh] BYREF
  int v12; // [rsp+8Ch] [rbp+13h] BYREF
  int v13; // [rsp+90h] [rbp+17h] BYREF
  int v14; // [rsp+94h] [rbp+1Bh] BYREF
  int v15; // [rsp+98h] [rbp+1Fh] BYREF
  int v16; // [rsp+9Ch] [rbp+23h] BYREF
  int v17; // [rsp+A0h] [rbp+27h] BYREF
  int v18; // [rsp+A4h] [rbp+2Bh] BYREF
  DWORD CurrentThreadId; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+B0h] [rbp+37h] BYREF

  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v7 = (_DWORD *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                   v6,
                   _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 4u )
  {
    v9 = a3[6];
    v10 = a3[8];
    v11 = a3[7];
    v12 = a3[3];
    v13 = a3[2];
    v14 = a3[1];
    v15 = *a3;
    v16 = a3[5];
    v17 = a3[4];
    v18 = a2;
    v20 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_18050A8F9,
      (const GUID *)(*(_QWORD *)(a1 + 48) + 8LL),
      v8,
      (__int64)&v20,
      (__int64)&CurrentThreadId,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
