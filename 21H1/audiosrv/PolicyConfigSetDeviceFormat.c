/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x1800DA5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180051AC4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1800D51AC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrap.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, void *a2, unsigned __int16 *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // eax
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  unsigned __int16 v20[2]; // [rsp+60h] [rbp-39h] BYREF
  int v21; // [rsp+64h] [rbp-35h] BYREF
  __int64 v22; // [rsp+68h] [rbp-31h] BYREF
  int v23; // [rsp+70h] [rbp-29h] BYREF
  int v24; // [rsp+74h] [rbp-25h] BYREF
  void *v25; // [rsp+78h] [rbp-21h] BYREF
  GUID *v26; // [rsp+80h] [rbp-19h] BYREF
  const wchar_t *v27; // [rsp+88h] [rbp-11h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+90h] [rbp-9h] BYREF
  GUID v29; // [rsp+C8h] [rbp+2Fh] BYREF

  v6 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v6[1],
    v7,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat");
  v22 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v22) >= 0 )
  {
    if ( a3 )
    {
      v9 = *a3;
      v29 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v29.Data1 = v9;
      v10 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v8,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v10 > 4u )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
        v25 = a2;
        v21 = v11;
        v26 = &v29;
        v23 = *((_DWORD *)a3 + 2);
        v24 = *((_DWORD *)a3 + 1);
        v20[0] = a3[1];
        v27 = L"WFEX";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          (__int64)v10,
          byte_18016820D,
          v12,
          v13,
          &v25,
          (__int64)&v21,
          (void **)&v27,
          (__int64)v20,
          (__int64)&v24,
          (__int64)&v23,
          (__int64 *)&v26);
      }
    }
    else
    {
      v14 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v8,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
      if ( *v14 > 4u )
      {
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
        v25 = a2;
        v21 = v15;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v14,
          byte_1801681D1,
          v16,
          v17,
          &v25,
          (__int64)&v21);
      }
    }
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v18 = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyConfig + 48LL))(
          g_PolicyConfig,
          a2,
          a3,
          0LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v18;
}
