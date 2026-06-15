/*
 * XREFs of ?CreateStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180033570
 * Callers:
 *     <none>
 * Callees:
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x1800337E0 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180053A44 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800E67E0 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800E68C4 (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800E69A4 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::CreateStream(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  int v10; // eax
  unsigned int v11; // r12d
  int v12; // eax
  unsigned int v13; // esi
  CProcessSubmixProxy *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  CProcessSubmixProxy *v18; // rdx
  __int64 v19; // rcx
  int v21; // [rsp+20h] [rbp-99h]
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-79h]
  __int64 v25; // [rsp+48h] [rbp-71h] BYREF
  __int64 v26; // [rsp+50h] [rbp-69h] BYREF
  CProcessSubmixProxy *v27; // [rsp+58h] [rbp-61h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v29; // [rsp+68h] [rbp-51h]
  unsigned __int16 *v30; // [rsp+70h] [rbp-49h]
  int v31; // [rsp+78h] [rbp-41h]
  int v32; // [rsp+7Ch] [rbp-3Dh]
  void *v33; // [rsp+80h] [rbp-39h]
  int v34; // [rsp+88h] [rbp-31h]
  int v35; // [rsp+8Ch] [rbp-2Dh]
  CProcessSubmixProxy **v36; // [rsp+90h] [rbp-29h]
  __int64 v37; // [rsp+98h] [rbp-21h]
  __int64 *v38; // [rsp+A0h] [rbp-19h]
  __int64 v39; // [rsp+A8h] [rbp-11h]
  __int64 *v40; // [rsp+B0h] [rbp-9h]
  __int64 v41; // [rsp+B8h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 288LL))(*((_QWORD *)this + 24));
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA21,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v10,
      v21);
    return v11;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct IAudioGraphCallback *, struct SYSTEM_AUDIO_STREAM *))(**((_QWORD **)this + 5) + 24LL))(
            *((_QWORD *)this + 5),
            a3,
            a4,
            a6);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA23,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v12,
        v21);
      return v13;
    }
    else
    {
      v14 = 0LL;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_18019E7E8;
        qword_18019E7E8 = &AudioSrvTelemetryProvider::`vftable';
        qword_18019E800 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register(
          (wil::TraceLoggingProvider *)&qword_18019E7E8,
          qword_18019E800,
          (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019E7E8);
      }
      v15 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v15 > 4u )
      {
        v16 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
        v17 = *((_QWORD *)this + 24);
        v25 = v16;
        v26 = v17;
        v40 = &v25;
        v41 = 8LL;
        v38 = &v26;
        v18 = 0LL;
        if ( this != (CProcessSubmixProxy *)8 )
          v18 = this;
        v39 = 8LL;
        v27 = v18;
        v36 = &v27;
        v28[1] = 4;
        v30 = *(unsigned __int16 **)(v15 + 8);
        v37 = 8LL;
        v28[0] = 184549376;
        v29 = 0LL;
        v31 = *v30;
        v33 = &unk_1801675A0;
        v32 = 2;
        v19 = *(_QWORD *)(v15 + 32);
        v34 = 70;
        v35 = 1;
        v24 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(v19, v28, 0LL);
      }
      if ( this != (CProcessSubmixProxy *)8 )
        v14 = this;
      *((_QWORD *)a6 + 6) = v14;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 8LL))((char *)this - 8);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
        CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), 1);
      if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
        ++*((_DWORD *)this + 28);
      CProcessSubmixProxy::AddStream((CProcessSubmixProxy *)((char *)this - 8), a2, a6, a5);
      return 0LL;
    }
  }
}
