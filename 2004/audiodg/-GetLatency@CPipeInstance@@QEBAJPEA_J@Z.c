/*
 * XREFs of ?GetLatency@CPipeInstance@@QEBAJPEA_J@Z @ 0x140008210
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008010 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z @ 0x140008110 (-GetLatency@CAudioDeviceGraph@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x14000538C (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x14001BA2C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     atexit @ 0x14001D2FC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14003BBF4 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

__int64 __fastcall CPipeInstance::GetLatency(CPipeInstance *this, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v7; // r14d
  __int64 v8; // rdi
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  _DWORD *v14; // rcx
  int v15; // r8d
  int v16; // r9d
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  int v18; // [rsp+34h] [rbp-65h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-61h] BYREF
  __int64 v20; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-51h]
  double v22; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+58h] [rbp-41h] BYREF
  _DWORD v24[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 v25; // [rsp+68h] [rbp-31h]
  unsigned __int16 *v26; // [rsp+70h] [rbp-29h] BYREF
  int v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+7Ch] [rbp-1Dh]
  void *v29; // [rsp+80h] [rbp-19h]
  int v30; // [rsp+88h] [rbp-11h]
  int v31; // [rsp+8Ch] [rbp-Dh]
  __int64 v32; // [rsp+90h] [rbp-9h]
  __int64 v33; // [rsp+98h] [rbp-1h]
  double *v34; // [rsp+A0h] [rbp+7h]
  __int64 v35; // [rsp+A8h] [rbp+Fh]

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = 0LL;
  while ( v2 )
  {
    v5 = v2[2];
    v2 = (_QWORD *)*v2;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, &v20);
    if ( v7 < 0 )
    {
      if ( *(_DWORD *)(v5 + 40) == 2 )
      {
        v13 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v13 + 4) )
        {
          v14 = (_DWORD *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                            v6,
                            _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
          if ( *v14 > 2u )
          {
            v18 = v7;
            v23 = v13 + 8;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
              (_DWORD)v14,
              (unsigned int)&unk_140071D4D,
              v15,
              v16,
              (__int64)&v23,
              (__int64)&v18);
          }
        }
      }
    }
    else
    {
      v3 += v20;
      if ( *(_DWORD *)(v5 + 40) == 2 )
      {
        v8 = *(_QWORD *)(v5 + 32);
        if ( *(_DWORD *)(v8 + 4) )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
            && fPending )
          {
            Context = &qword_1400852F8;
            qword_1400852F8 = (__int64)&AudioDgTelemetryProvider::`vftable';
            qword_140085310 = (__int64)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
            qword_140085300 = qword_140085310;
            byte_140085308 = 1;
            TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation();
            dword_14008530C = 1;
            (*(void (__fastcall **)(__int64 *))(qword_1400852F8 + 8))(&qword_1400852F8);
            InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1400852F8);
          }
          v10 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v10 > 4u )
          {
            v35 = 8LL;
            v33 = 16LL;
            v34 = &v22;
            v24[0] = 184549376;
            v32 = v8 + 8;
            v24[1] = 4;
            v11 = *(unsigned __int16 **)(v10 + 8);
            v12 = *(_QWORD *)(v10 + 32);
            v26 = v11;
            v25 = 0LL;
            v22 = (double)(int)v20 / 10000000.0;
            v27 = *v11;
            v28 = 2;
            v29 = &unk_140071D8C;
            v30 = 37;
            v31 = 1;
            v21 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            EtwEventWriteTransfer(v12, v24, 0LL, 0LL, 4, &v26);
          }
        }
      }
    }
  }
  *a2 = v3;
  return 0LL;
}
