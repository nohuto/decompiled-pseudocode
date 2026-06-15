/*
 * XREFs of ?Fire@AudioSrvVolumeTelemetrySessionVolume@@EEAAX_KI@Z @ 0x1800B6B20
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByVal@$07@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapperByVal@$07@@5@Z @ 0x1800B6178 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapperByVal@$07@@U3@@-$_tlgWrit.c)
 */

void __fastcall AudioSrvVolumeTelemetrySessionVolume::Fire(
        AudioSrvVolumeTelemetrySessionVolume *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+50h] [rbp-20h] BYREF
  int v10; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v11; // [rsp+58h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  void *v13; // [rsp+68h] [rbp-8h] BYREF
  int v14; // [rsp+98h] [rbp+28h] BYREF

  v4 = a3;
  v6 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               (__int64)this,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v6 > 4u )
  {
    v14 = *((_DWORD *)this + 22);
    v9 = *((_DWORD *)this + 21);
    v10 = *((_DWORD *)this + 20);
    v13 = (void *)*((_QWORD *)this + 9);
    v11 = a2;
    v12 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)v6,
      byte_180165BB9,
      v7,
      v8,
      &v13,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v14,
      (__int64)&v12,
      (__int64)&v11);
  }
}
