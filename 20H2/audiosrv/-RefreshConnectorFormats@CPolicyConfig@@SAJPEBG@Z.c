/*
 * XREFs of ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800D7A4C
 * Callers:
 *     _lambda_ae3012955d22b805348e33a58899db17_::operator() @ 0x1800E1410 (_lambda_ae3012955d22b805348e33a58899db17_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B7524 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18011E4F8 (-RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::RefreshConnectorFormats(const unsigned __int16 *a1)
{
  int refreshed; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v13; // [rsp+68h] [rbp+28h] BYREF
  CEndpointCharacteristics *v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  refreshed = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
                g_pEndpointCharacteristicsCache,
                a1,
                0LL,
                0LL,
                &v14);
  v3 = refreshed;
  if ( refreshed >= 0 )
  {
    v5 = *((_QWORD *)v14 + 2);
    v15 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    refreshed = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 48LL))(v5, &v13);
    v3 = refreshed;
    if ( refreshed >= 0 )
    {
      if ( v13 == 4 )
        goto LABEL_11;
      v7 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                   v6,
                                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                     + 1);
      if ( *v7 > 4u )
      {
        *(_QWORD *)v11 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (__int64)v7,
          byte_18016708C,
          v8,
          v9,
          (void **)v11);
      }
      refreshed = CEndpointCharacteristics::RefreshConnectorFormats(v14);
      v3 = refreshed;
      if ( refreshed >= 0 )
      {
LABEL_11:
        v3 = 0;
        goto LABEL_12;
      }
      v4 = 2278LL;
    }
    else
    {
      v4 = 2270LL;
    }
  }
  else
  {
    v4 = 2264LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)refreshed);
LABEL_12:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  return v3;
}
