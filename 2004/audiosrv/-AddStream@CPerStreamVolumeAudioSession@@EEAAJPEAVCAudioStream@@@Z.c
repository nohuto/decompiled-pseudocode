/*
 * XREFs of ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002D620
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x18000263C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTempl.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_tlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18002D9A0 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002E3B0 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     _freea @ 0x180047860 (_freea.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800541E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     atexit @ 0x18006AC38 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180074BB0 (_alloca_probe.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::AddStream(CPerStreamVolumeAudioSession *this, struct CAudioStream *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  char v4; // r12
  bool v5; // r13
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  WINBOOL v9; // xmm0_4
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // edi
  unsigned __int64 v13; // rax
  size_t v14; // rcx
  __int64 v15; // rax
  void *v16; // rsp
  LPVOID *p_Memory; // rdi
  LPVOID *p_Context; // rbx
  __int64 v19; // rdx
  struct CAudioStream *v20; // rcx
  unsigned int v21; // r15d
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  WINBOOL v26; // ebx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  _DWORD *v35; // rax
  void *v36; // r15
  _DWORD *v37; // r9
  HANDLE ProcessHeap; // rax
  unsigned int i; // edx
  __int64 v40; // rcx
  struct CAudioStream *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // eax
  unsigned __int64 v45; // rcx
  size_t v46; // rdx
  __int64 v47; // rax
  void *v48; // rsp
  _DWORD *v49; // rax
  _BYTE v50[32]; // [rsp+0h] [rbp-40h] BYREF
  int v51[2]; // [rsp+20h] [rbp-20h]
  __int64 v52; // [rsp+28h] [rbp-18h]
  WINBOOL Memory; // [rsp+40h] [rbp+0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+10h] BYREF
  int v56[2]; // [rsp+58h] [rbp+18h] BYREF
  __int64 v57; // [rsp+60h] [rbp+20h] BYREF
  __int64 v58; // [rsp+68h] [rbp+28h] BYREF
  _DWORD *v59; // [rsp+70h] [rbp+30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+78h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 808);
  *((_QWORD *)a2 + 9) = this;
  v4 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 808));
  v5 = *((_DWORD *)this + 213) != 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  *(float *)&Memory = FLOAT_1_0;
  *(_QWORD *)v56 = 0LL;
  if ( a2 )
    v6 = (char *)a2 + 16;
  else
    v6 = 0LL;
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
  GetPolicyVolumeForAudioStream(v7, v6, *((_QWORD *)Context + 1), &Memory, v56, 0);
  v9 = Memory;
  fPending = Memory;
  v10 = *(float *)&Memory == *((float *)a2 + 25);
  *((_QWORD *)a2 + 13) = *(_QWORD *)v56;
  if ( !v10 )
  {
    v10 = *((_QWORD *)a2 + 9) == 0LL;
    *((_DWORD *)a2 + 25) = v9;
    if ( !v10 )
    {
      v59 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                    v8,
                                    _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                      + 1);
      if ( *v59 > 4u )
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 10) + 40LL))(*((_QWORD *)a2 + 10));
        v27 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 80LL))((char *)a2 + 8);
        v28 = *((_QWORD *)a2 + 9);
        v29 = v27;
        Memory = v26;
        v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL))(v28);
        LODWORD(Context) = fPending;
        v58 = v29;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v59,
          byte_180167FBB,
          v30,
          v31,
          (__int64)&Context,
          (__int64)&v58,
          (void **)&v57,
          (__int64)&Memory);
      }
    }
  }
  v11 = (*(__int64 (__fastcall **)(struct CAudioStream *, bool, _QWORD))(*(_QWORD *)a2 + 104LL))(a2, v5, 0LL);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAA3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v11,
      v51[0]);
LABEL_34:
    *((_QWORD *)a2 + 9) = 0LL;
    return v12;
  }
  EnterCriticalSection(v2);
  v13 = 4LL * *((unsigned int *)this + 240);
  v14 = v13 + 16;
  if ( v13 + 16 < v13 )
  {
    p_Memory = 0LL;
  }
  else if ( v14 > 0x400 )
  {
    v32 = malloc(v14);
    p_Memory = (LPVOID *)v32;
    if ( v32 )
    {
      *v32 = 56797;
      p_Memory = (LPVOID *)(v32 + 4);
    }
  }
  else
  {
    v15 = v13 + 31;
    if ( v14 + 15 < v14 )
      v15 = 0xFFFFFFFFFFFFFF0LL;
    v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
    p_Memory = (LPVOID *)&Memory;
    if ( v50 != (_BYTE *)-64LL )
    {
      Memory = 52428;
      p_Memory = &Context;
    }
  }
  p_Context = p_Memory;
  if ( p_Memory )
  {
    memcpy_0(p_Memory, *((const void **)this + 121), 4LL * *((unsigned int *)this + 240));
    v20 = a2;
    if ( *((_QWORD *)this + 121) )
    {
      v21 = *((_DWORD *)this + 240);
      if ( v21 >= *((_DWORD *)a2 + 23) )
        goto LABEL_19;
    }
    v34 = 4LL * *((unsigned int *)a2 + 23);
    if ( !is_mul_ok(*((unsigned int *)a2 + 23), 4uLL) )
      v34 = -1LL;
    v35 = operator new[](v34, (const struct std::nothrow_t *)&std::nothrow);
    v36 = (void *)*((_QWORD *)this + 121);
    v37 = v35;
    *((_QWORD *)this + 121) = v35;
    if ( v36 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v36);
      v37 = (_DWORD *)*((_QWORD *)this + 121);
    }
    if ( v37 )
    {
      for ( i = 0; i < *((_DWORD *)this + 240); v37[v40] = *((_DWORD *)p_Memory + v40) )
        v40 = i++;
      v41 = a2;
      if ( i < *((_DWORD *)a2 + 23) )
      {
        v42 = *((_QWORD *)this + 121);
        do
        {
          v43 = i++;
          *(_DWORD *)(v42 + 4 * v43) = 1065353216;
          v41 = a2;
        }
        while ( i < *((_DWORD *)a2 + 23) );
      }
      v44 = *((_DWORD *)v41 + 23);
      *((_DWORD *)this + 240) = v44;
      v45 = 4LL * v44;
      v46 = v45 + 16;
      if ( v45 + 16 < v45 )
        v46 = 0LL;
      if ( v46 )
      {
        if ( v46 > 0x400 )
        {
          v49 = malloc(v46);
          p_Context = (LPVOID *)v49;
          if ( v49 )
          {
            *v49 = 56797;
            p_Context = (LPVOID *)(v49 + 4);
          }
        }
        else
        {
          v47 = v46 + 15;
          if ( v46 + 15 < v46 )
            v47 = 0xFFFFFFFFFFFFFF0LL;
          v48 = alloca(v47 & 0xFFFFFFFFFFFFFFF0uLL);
          p_Context = (LPVOID *)&Memory;
          if ( v50 != (_BYTE *)-64LL )
          {
            Memory = 52428;
            p_Context = &Context;
          }
        }
      }
      else
      {
        p_Context = 0LL;
      }
      freea(p_Memory);
      if ( p_Context )
      {
        memcpy_0(p_Context, *((const void **)this + 121), 4LL * *((unsigned int *)this + 240));
        v20 = a2;
        v21 = *((_DWORD *)this + 240);
LABEL_19:
        if ( v2 )
        {
          LeaveCriticalSection(v2);
          v20 = a2;
        }
        v22 = *(_QWORD *)v20;
        LOBYTE(v52) = 1;
        *(_QWORD *)v51 = 0LL;
        v23 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD, LPVOID *))(v22 + 96))(
                v20,
                v19,
                v21,
                p_Context);
        v12 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xADC,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v23,
            v51[0]);
        }
        else
        {
          v24 = CAudioSession::AddStream(this, a2);
          v12 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xADE,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v24,
              v51[0]);
          }
          else
          {
            v4 = 0;
            v12 = 0;
          }
        }
        goto LABEL_24;
      }
      v33 = 2767LL;
    }
    else
    {
      v33 = 2745LL;
    }
  }
  else
  {
    v33 = 2731LL;
  }
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v33,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)0x8007000ELL,
    v51[0]);
  if ( v2 )
    LeaveCriticalSection(v2);
LABEL_24:
  if ( p_Context && *((_DWORD *)p_Context - 4) == 56797 )
    free(p_Context - 2);
  if ( v4 )
    goto LABEL_34;
  return v12;
}
