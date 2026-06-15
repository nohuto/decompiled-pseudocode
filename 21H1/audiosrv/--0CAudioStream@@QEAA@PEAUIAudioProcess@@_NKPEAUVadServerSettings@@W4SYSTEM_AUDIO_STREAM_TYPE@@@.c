/*
 * XREFs of ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1800322E0
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800319A0 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAudioStream::CAudioStream(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, int a6)
{
  bool v9; // al
  signed __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  int v15; // [rsp+34h] [rbp-95h] BYREF
  int v16; // [rsp+38h] [rbp-91h] BYREF
  int v17; // [rsp+3Ch] [rbp-8Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-89h] BYREF
  __int64 v19; // [rsp+48h] [rbp-81h]
  __int64 v20; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v21[2]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v22; // [rsp+60h] [rbp-69h]
  __int64 v23; // [rsp+68h] [rbp-61h]
  __int64 v24; // [rsp+70h] [rbp-59h]
  unsigned __int16 *v25; // [rsp+80h] [rbp-49h]
  int v26; // [rsp+88h] [rbp-41h]
  int v27; // [rsp+8Ch] [rbp-3Dh]
  void *v28; // [rsp+90h] [rbp-39h]
  int v29; // [rsp+98h] [rbp-31h]
  int v30; // [rsp+9Ch] [rbp-2Dh]
  int *v31; // [rsp+A0h] [rbp-29h]
  __int64 v32; // [rsp+A8h] [rbp-21h]
  int *v33; // [rsp+B0h] [rbp-19h]
  __int64 v34; // [rsp+B8h] [rbp-11h]
  __int64 *v35; // [rsp+C0h] [rbp-9h]
  __int64 v36; // [rsp+C8h] [rbp-1h]
  int *v37; // [rsp+D0h] [rbp+7h]
  __int64 v38; // [rsp+D8h] [rbp+Fh]

  v19 = a1;
  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 8) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *(_QWORD *)(a1 + 16) = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *(_QWORD *)(a1 + 24) = &CPerStreamVolumeAudioStream::`vftable'{for `IDuckingController'};
  *(_QWORD *)(a1 + 32) = &CAudioStream::`vftable'{for `CUnknown'};
  *(_DWORD *)(a1 + 48) = 1;
  *(_BYTE *)(a1 + 52) = a3;
  *(_BYTE *)(a1 + 53) = a4 & 1;
  v9 = (a4 & 0x200000) != 0 || a6 == 2;
  *(_BYTE *)(a1 + 54) = v9;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 1065353216;
  v23 = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  v24 = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 128) = *(_DWORD *)(a5 + 136) != 0;
  *(_DWORD *)(a1 + 132) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 136), 0, 0);
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_BYTE *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = -1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 232), 0, 0);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 296) = 255;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_DWORD *)(a1 + 336) = *(_DWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 340) = a6;
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a5 + 60);
  *(_BYTE *)(a1 + 348) = *(_DWORD *)(a5 + 68) != 0;
  *(_OWORD *)(a1 + 352) = *(_OWORD *)a5;
  *(_DWORD *)(a1 + 368) = a4;
  *(_BYTE *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 436) = 0;
  *(_OWORD *)(a1 + 376) = *(_OWORD *)(a5 + 72);
  *(_OWORD *)(a1 + 392) = *(_OWORD *)(a5 + 88);
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_DWORD *)(a1 + 416) = 0;
  do
  {
    v10 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *(_QWORD *)(a1 + 328) = v10 + 1;
  }
  while ( v10 == -1 );
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_18019F838;
    qword_18019F838[0] = &wil::details::FeatureLogging::`vftable';
    qword_18019F850 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_18019F838,
      qword_18019F850,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18019F838);
  }
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 4u )
  {
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v15 = *(_DWORD *)(a1 + 336);
    v20 = *(_QWORD *)(a1 + 328);
    v16 = a6;
    v17 = v12;
    v37 = &v15;
    v38 = 4LL;
    v35 = &v20;
    v36 = 8LL;
    v33 = &v16;
    v34 = 4LL;
    v31 = &v17;
    v32 = 4LL;
    v21[0] = 184549376;
    v21[1] = 4;
    v22 = 0LL;
    v25 = *(unsigned __int16 **)(v11 + 8);
    v26 = *v25;
    v27 = 2;
    v28 = &unk_180168040;
    v29 = 66;
    v30 = 1;
    LODWORD(v19) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v11 + 32), v21, 0LL);
  }
  return a1;
}
