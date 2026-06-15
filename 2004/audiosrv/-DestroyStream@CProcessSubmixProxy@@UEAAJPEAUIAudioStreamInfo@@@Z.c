/*
 * XREFs of ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180050B70
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x180074C5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800E7470 (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800E7554 (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800E7634 (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::DestroyStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  CProcessSubmixProxy *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned __int64 v16; // rcx
  struct IAudioStreamInfo **v17; // r15
  struct IAudioStreamInfo **v18; // rdx
  unsigned __int64 v19; // rax
  int v21; // [rsp+20h] [rbp-E0h]
  unsigned __int16 **v22; // [rsp+28h] [rbp-D8h]
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  CProcessSubmixProxy *v28; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  _BYTE v31[1264]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v32; // [rsp+560h] [rbp+460h] BYREF
  int v33; // [rsp+568h] [rbp+468h]
  int v34; // [rsp+56Ch] [rbp+46Ch]
  void *v35; // [rsp+570h] [rbp+470h]
  int v36; // [rsp+578h] [rbp+478h]
  int v37; // [rsp+57Ch] [rbp+47Ch]
  CProcessSubmixProxy **v38; // [rsp+580h] [rbp+480h]
  __int64 v39; // [rsp+588h] [rbp+488h]
  __int64 *v40; // [rsp+590h] [rbp+490h]
  __int64 v41; // [rsp+598h] [rbp+498h]
  __int64 *v42; // [rsp+5A0h] [rbp+4A0h]
  __int64 v43; // [rsp+5A8h] [rbp+4A8h]
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+4E8h]

  v2 = (__int64 *)*((_QWORD *)this + 5);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 32))(v2, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA41,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v21);
  v8 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_18019F828;
    qword_18019F828 = &wil::details::FeatureLogging::`vftable';
    qword_18019F840 = (struct _tlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)&qword_18019F828,
      qword_18019F840,
      (void (*)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))AudioSrvTelemetryProvider::Callback);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18019F828);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v11 = *((_QWORD *)this + 24);
    v26 = v10;
    v27 = v11;
    v42 = &v26;
    v43 = 8LL;
    v40 = &v27;
    v12 = 0LL;
    if ( this != (CProcessSubmixProxy *)8 )
      v12 = this;
    v41 = 8LL;
    v28 = v12;
    v38 = &v28;
    v29[1] = 4;
    v32 = *(unsigned __int16 **)(v9 + 8);
    v39 = 8LL;
    v29[0] = 184549376;
    v30 = 0LL;
    v33 = *v32;
    v35 = &unk_1801687ED;
    v34 = 2;
    v13 = *(_QWORD *)(v9 + 32);
    v36 = 72;
    v37 = 1;
    LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    v22 = &v32;
    v21 = 5;
    EtwEventWriteTransfer(v13, v29, 0LL);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
    --*((_DWORD *)this + 28);
  v14 = *(_QWORD *)a2;
  v23 = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v14 + 120))(a2, &v23);
  v15 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v16 = *((_QWORD *)this + 22);
  v17 = (struct IAudioStreamInfo **)*((_QWORD *)this + 21);
  if ( v17 != (struct IAudioStreamInfo **)v16 )
  {
    do
    {
      if ( *v17 == a2 )
        break;
      ++v17;
    }
    while ( v17 != (struct IAudioStreamInfo **)v16 );
    if ( v17 != (struct IAudioStreamInfo **)v16 )
    {
      v18 = v17 + 1;
      v19 = (v16 - (unsigned __int64)(v17 + 1) + 7) >> 3;
      if ( (unsigned __int64)(v17 + 1) > v16 )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          if ( *v18 != a2 )
            *v17++ = *v18;
          ++v18;
          ++v8;
        }
        while ( v8 != v19 );
      }
    }
  }
  memmove_0(v17, *((const void **)this + 22), 0LL);
  *((_QWORD *)this + 22) = v17;
  memset_0(v31, 0, sizeof(v31));
  (*(void (__fastcall **)(struct IAudioStreamInfo *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v31, 0LL);
  if ( this != (CProcessSubmixProxy *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, int, unsigned __int16 **))(*(_QWORD *)v23 + 200LL))(
    v23,
    2LL,
    0xFFFFFFFFLL,
    v15,
    v21,
    v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return 0LL;
}
