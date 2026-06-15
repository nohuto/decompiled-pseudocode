/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x1800284B0
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180027DA0 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180053A44 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     atexit @ 0x18006A2D8 (atexit.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        struct PROCESS_SUBMIX_DESCRIPTOR *a3,
        struct IStreamGroupProxy *a4)
{
  HRESULT Instance; // eax
  int v9; // ebx
  HRESULT v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v14; // r15
  __int64 v15; // rbx
  void *v16; // rax
  void *v17; // r14
  void *v18; // rcx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  IUnknown *v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rsi
  int v25; // eax
  int ppv; // [rsp+20h] [rbp-B1h]
  int ppva; // [rsp+20h] [rbp-B1h]
  char v29; // [rsp+40h] [rbp-91h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-89h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-81h] BYREF
  int v32; // [rsp+54h] [rbp-7Dh] BYREF
  LPVOID Context; // [rsp+58h] [rbp-79h] BYREF
  __int64 v34; // [rsp+60h] [rbp-71h] BYREF
  unsigned int v35; // [rsp+68h] [rbp-69h]
  char *v36; // [rsp+70h] [rbp-61h] BYREF
  _DWORD v37[2]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v38; // [rsp+80h] [rbp-51h]
  unsigned __int16 *v39; // [rsp+90h] [rbp-41h]
  int v40; // [rsp+98h] [rbp-39h]
  int v41; // [rsp+9Ch] [rbp-35h]
  void *v42; // [rsp+A0h] [rbp-31h]
  int v43; // [rsp+A8h] [rbp-29h]
  int v44; // [rsp+ACh] [rbp-25h]
  char **v45; // [rsp+B0h] [rbp-21h]
  __int64 v46; // [rsp+B8h] [rbp-19h]
  int *v47; // [rsp+C0h] [rbp-11h]
  __int64 v48; // [rsp+C8h] [rbp-9h]
  char *v49; // [rsp+D0h] [rbp-1h]
  __int64 v50; // [rsp+D8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_5d857e80_f074_4ad8_a9ce_0ddca68d8212,
               (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9DA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
  }
  else
  {
    v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E0,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v10,
        ppva);
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, struct PROCESS_SUBMIX_DESCRIPTOR *))pProxy->lpVtbl[3].QueryInterface)(
              pProxy,
              a3);
      v9 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E2,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v11,
          ppva);
      }
      else
      {
        *((_BYTE *)this + 124) = *((_BYTE *)a2 + 8);
        v12 = *(_QWORD *)a2;
        v13 = *((_QWORD *)this + 14);
        *((_QWORD *)this + 14) = *(_QWORD *)a2;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v14 = (unsigned __int16 *)*((_QWORD *)a3 + 6);
        v15 = v14[8];
        v16 = CoTaskMemAlloc(v15 + 18);
        v17 = v16;
        if ( v16 )
        {
          memcpy_0(v16, v14, v15 + 18);
          v9 = 0;
        }
        else
        {
          v9 = -2147024882;
        }
        v18 = (void *)*((_QWORD *)this + 26);
        *((_QWORD *)this + 26) = v17;
        if ( v18 )
          CoTaskMemFree(v18);
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x9E6,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v9,
            ppva);
        }
        else
        {
          v34 = 0LL;
          v19 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(*(_QWORD *)a4 + 248LL))(a4, &v34);
          v9 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x9EA,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v19,
              ppva);
          }
          else
          {
            v20 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].AddRef)(pProxy, v34);
            v9 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x9EB,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                (const char *)(unsigned int)v20,
                ppva);
            }
            else
            {
              v21 = *((_QWORD *)this + 6);
              v22 = pProxy;
              *((_QWORD *)this + 6) = pProxy;
              if ( v22 )
                ((void (__fastcall *)(IUnknown *))v22->lpVtbl->AddRef)(v22);
              if ( v21 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
              v23 = *((_QWORD *)this + 25);
              *((_QWORD *)this + 25) = a4;
              (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a4 + 8LL))(a4);
              if ( v23 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
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
              v24 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v24 > 4u )
              {
                v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
                v29 = *((_BYTE *)this + 124);
                v32 = v25;
                v36 = (char *)this + 8;
                v49 = &v29;
                v50 = 1LL;
                v47 = &v32;
                v48 = 4LL;
                v45 = &v36;
                v46 = 8LL;
                v37[0] = 184549376;
                v37[1] = 4;
                v38 = 0LL;
                v39 = *(unsigned __int16 **)(v24 + 8);
                v40 = *v39;
                v41 = 2;
                v42 = &unk_180167637;
                v43 = 55;
                v44 = 1;
                v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EtwEventWriteTransfer(*(_QWORD *)(v24 + 32), v37, 0LL);
              }
              *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
              v9 = 0;
            }
          }
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
