/*
 * XREFs of ??$NuiAudioTrace@AEAY0CAA@D@NUIAudioTracing@@SAXAEAY0CAA@D@Z @ 0x180133F6C
 * Callers:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180134018 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800B9C64 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18010C860 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G_ea_18010C860.c)
 *     ?get@?$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z @ 0x18013408C (-get@-$static_lazy@VNUIAudioTracing@@@details@wil@@QEAAPEAVNUIAudioTracing@@P6AXXZ@Z.c)
 */

char __fastcall NUIAudioTracing::NuiAudioTrace<char (&)[512]>(__int64 a1)
{
  wil::TraceLoggingProvider *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = (wil::TraceLoggingProvider *)wil::details::static_lazy<NUIAudioTracing>::get(
                                      a1,
                                      _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
  LOBYTE(v3) = wil::TraceLoggingProvider::IsEnabled_(v2);
  if ( (_BYTE)v3 )
  {
    wil::details::static_lazy<NUIAudioTracing>::get(
      v4,
      _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
    v3 = wil::details::static_lazy<NUIAudioTracing>::get(
           v5,
           _lambda_904e72f60f56877f633fc2ab0ce9f5f8_::_lambda_invoker_cdecl_);
    v8 = *(_DWORD **)(v3 + 8);
    if ( *v8 > 2u )
    {
      v10 = a1;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                     (__int64)v8,
                     byte_18016D658,
                     v6,
                     v7,
                     (const CHAR **)&v10);
    }
  }
  return v3;
}
