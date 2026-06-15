/*
 * XREFs of PolicyConfigSetDeviceSpatialSettings @ 0x1800DA890
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180008A50 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x1800D539C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByRef@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U1@U5@U2@U2@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@37446@Z @ 0x1800D5478 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlg_ea_1800D5478.c)
 */

__int64 __fastcall PolicyConfigSetDeviceSpatialSettings(__int64 a1, void *a2, char *a3, unsigned __int16 *a4)
{
  struct _TP_TIMER **v8; // rax
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // eax
  _DWORD *v15; // r15
  __int16 v16; // bx
  char v17; // di
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // r15
  __int16 v22; // bx
  char v23; // di
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  _BYTE v29[2]; // [rsp+70h] [rbp-69h] BYREF
  __int16 v30; // [rsp+72h] [rbp-67h] BYREF
  unsigned __int16 v31; // [rsp+74h] [rbp-65h] BYREF
  int v32; // [rsp+78h] [rbp-61h] BYREF
  __int64 v33; // [rsp+80h] [rbp-59h] BYREF
  int v34; // [rsp+88h] [rbp-51h] BYREF
  int v35; // [rsp+8Ch] [rbp-4Dh] BYREF
  int v36[2]; // [rsp+90h] [rbp-49h] BYREF
  void *v37; // [rsp+98h] [rbp-41h] BYREF
  GUID *v38; // [rsp+A0h] [rbp-39h] BYREF
  const wchar_t *v39; // [rsp+A8h] [rbp-31h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+B0h] [rbp-29h] BYREF
  GUID v41; // [rsp+E8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v8 = (struct _TP_TIMER **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                              a1,
                              _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, v8[1], v9, (struct _TP_TIMER *)L"PolicyConfigSetDeviceSpatialSettings");
  if ( a3 )
  {
    v33 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v33) >= 0 )
    {
      if ( a4 )
      {
        v14 = *a4;
        v41 = GUID_00000000_0000_0010_8000_00aa00389b71;
        v41.Data1 = v14;
        v15 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      v13,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v15 > 4u )
        {
          v16 = *((_WORD *)a3 + 34);
          v17 = *a3;
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
          v30 = v16;
          v32 = v18;
          v38 = &v41;
          v34 = *((_DWORD *)a4 + 2);
          v35 = *((_DWORD *)a4 + 1);
          v31 = a4[1];
          v39 = L"WFEX";
          *(_QWORD *)v36 = a3 + 12;
          v29[0] = v17;
          v37 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
            (__int64)v15,
            byte_180168133,
            v19,
            v20,
            &v37,
            (__int64)&v32,
            (__int64)v29,
            (__int64 *)v36,
            (__int64)&v30,
            (void **)&v39,
            (__int64)&v31,
            (__int64)&v35,
            (__int64)&v34,
            (__int64 *)&v38);
        }
      }
      else
      {
        v21 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      v13,
                                      _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                        + 1);
        if ( *v21 > 4u )
        {
          v22 = *((_WORD *)a3 + 34);
          v23 = *a3;
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
          v30 = v22;
          v32 = v24;
          v37 = a3 + 12;
          v29[0] = v23;
          *(_QWORD *)v36 = a2;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<2>>(
            (__int64)v21,
            byte_1801680C3,
            v25,
            v26,
            (void **)v36,
            (__int64)&v32,
            (__int64)v29,
            (__int64 *)&v37,
            (__int64)&v30);
        }
      }
    }
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v27 = (*(__int64 (__fastcall **)(CPolicyConfig *, void *, char *, unsigned __int16 *))(*(_QWORD *)g_PolicyConfig
                                                                                         + 280LL))(
            g_PolicyConfig,
            a2,
            a3,
            a4);
    v10 = v27;
    if ( v27 >= 0 )
    {
      v10 = 0;
      goto LABEL_15;
    }
    v12 = (unsigned int)v27;
    v11 = 4539LL;
  }
  else
  {
    v10 = -2147467261;
    v11 = 4505LL;
    v12 = 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)v12);
LABEL_15:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
