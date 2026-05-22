/*
 * XREFs of ?InputReportIgnored_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXKPEB_W@Z @ 0x1800D0044
 * Callers:
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D1360 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180090E78 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D415C (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::InputReportIgnored_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = (__int64)this;
  v5 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
         this,
         _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v5 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 2LL) )
  {
    v9 = (__int64)a3;
    LODWORD(v8) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v7,
      (unsigned __int8 *)dword_1801C9564,
      v6,
      v7,
      (__int64)&v8,
      (const wchar_t **)&v9);
  }
}
