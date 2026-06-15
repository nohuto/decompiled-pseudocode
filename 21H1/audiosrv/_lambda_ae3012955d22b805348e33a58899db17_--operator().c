/*
 * XREFs of _lambda_ae3012955d22b805348e33a58899db17_::operator() @ 0x1800E1FE0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ae3012955d22b805348e33a58899db17__void_::_Do_call @ 0x1800E28D0 (std--_Func_impl_no_alloc__lambda_ae3012955d22b805348e33a58899db17__void_--_Do_call.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BE48C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800D861C (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

void __fastcall lambda_ae3012955d22b805348e33a58899db17_::operator()(__int64 a1)
{
  _DWORD *v2; // r8
  __int64 v3; // r9
  void **v4; // rax
  void *v5; // rcx
  const unsigned __int16 **v6; // rax
  const unsigned __int16 *v7; // rcx
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  void *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   a1,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 4u )
  {
    v4 = *(void ***)(a1 + 8);
    if ( v4 )
      v5 = *v4;
    else
      v5 = 0LL;
    v10 = *(_DWORD *)a1;
    v11 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (__int64)v2,
      byte_180168754,
      (__int64)v2,
      v3,
      (__int64)&v10,
      &v11);
  }
  v6 = *(const unsigned __int16 ***)(a1 + 8);
  if ( v6 )
    v7 = *v6;
  else
    v7 = 0LL;
  refreshed = CPolicyConfig::RefreshConnectorFormats(v7);
  if ( refreshed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      192LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)refreshed);
}
