/*
 * XREFs of ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800372B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::ConnectStreamGroupToSaDevice(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5)
{
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-71h]
  WINBOOL fPending; // [rsp+30h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-51h]
  __int64 v17; // [rsp+48h] [rbp-49h] BYREF
  __int64 v18; // [rsp+50h] [rbp-41h] BYREF
  _DWORD v19[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-31h]
  unsigned __int16 *v21; // [rsp+70h] [rbp-21h]
  int v22; // [rsp+78h] [rbp-19h]
  int v23; // [rsp+7Ch] [rbp-15h]
  void *v24; // [rsp+80h] [rbp-11h]
  int v25; // [rsp+88h] [rbp-9h]
  int v26; // [rsp+8Ch] [rbp-5h]
  __int64 *v27; // [rsp+90h] [rbp-1h]
  __int64 v28; // [rsp+98h] [rbp+7h]
  __int64 *v29; // [rsp+A0h] [rbp+Fh]
  __int64 v30; // [rsp+A8h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a2 + 176LL))(a2, a3, a4, a5);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7,
      v13);
    return v8;
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
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
      v17 = a3;
      v29 = &v17;
      v18 = a2;
      v27 = &v18;
      v19[1] = 4;
      v10 = *(unsigned __int16 **)(v9 + 8);
      v11 = *(_QWORD *)(v9 + 32);
      v21 = v10;
      v30 = 8LL;
      v28 = 8LL;
      v19[0] = 184549376;
      v20 = 0LL;
      v22 = *v10;
      v24 = &unk_180168963;
      v23 = 2;
      v25 = 57;
      v26 = 1;
      v16 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(v11, v19, 0LL);
    }
    return 0LL;
  }
}
