/*
 * XREFs of ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x180160324
 * Callers:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x18015B128 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 *     ?PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows@@CAKPEAX@Z @ 0x180162D20 (-PropertyUpdatedListenerThreadProcV2Static@SpatialGraphDriverClient@Holographic@Internal@Windows.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180090E78 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167AE4 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::Log_Information_(
        HolographicDriverClientTrace *this,
        int a2,
        const wchar_t *a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = (__int64)this;
  v5 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v5 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v5 + 8), 2LL) )
  {
    v9 = (__int64)a3;
    LODWORD(v8) = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v7,
      (unsigned __int8 *)dword_1801CF7F1,
      v6,
      v7,
      (__int64)&v8,
      (const wchar_t **)&v9);
  }
}
