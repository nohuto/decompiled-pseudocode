/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002D350
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002EA90 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qd @ 0x1800BE428 (WPP_SF_qd.c)
 *     WPP_SF_dq @ 0x1800CBF1C (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800CC120 (WPP_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18013D6E8 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  struct CAudioStream *v9; // r8
  __int64 v10; // rsi
  BOOL v11; // edi
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // edx
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  DWORD LastError; // edi
  __int64 v22; // rcx
  __int64 v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v5 = *((_QWORD *)this + 13);
  v6 = 0LL;
  if ( v5 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 12);
      v9 = *(struct CAudioStream **)(v8 + 8 * v7);
      if ( v9 == a2 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v7 = (unsigned int)v6;
      if ( (unsigned int)v6 >= v5 )
        goto LABEL_29;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v24 = *(_QWORD *)(v8 + 8 * v7);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 48LL, v9, v6);
    }
    if ( v7 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v10 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7);
    (*(void (__fastcall **)(__int64, __int64, struct CAudioStream *, __int64))(*(_QWORD *)v10 + 72LL))(v10, v4, v9, v6);
    v11 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 64LL))(v10 + 8) != 0;
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 80) + 120LL))(*(_QWORD *)(v10 + 80));
    v13 = *(unsigned int *)(v10 + 336);
    if ( v11 )
      v14 = dword_180161550[v13];
    else
      v14 = dword_1801614F0[v13];
    v15 = *(_DWORD *)(v10 + 228);
    v16 = 0;
    if ( v12 )
      v16 = 16;
    v17 = (*(_BYTE *)(v10 + 224) == 0) + 2 * (v14 + v16);
    if ( v17 != v15 )
    {
      v18 = *(_QWORD *)(v10 + 64);
      *(_DWORD *)(v10 + 228) = v17;
      v27 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 80LL))(v18, &v27);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v27 + 200LL))(v27, 1LL, v17, v15);
      v20 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EA,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v19,
          v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB8A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)v20,
          v25);
      }
      else if ( v27 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    if ( ++*((_DWORD *)this + 68) == 1 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v24) = *((_DWORD *)this + 68);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          49LL,
          &WPP_7cf3fc3344fb31d0ce2bf36427d5d6eb_Traceguids,
          this,
          v24);
      }
      if ( this != (CAudioSession *)-48LL )
      {
        LastError = GetLastError();
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
        SetLastError(LastError);
      }
      (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 136LL))(this, 1LL);
    }
    else if ( this != (CAudioSession *)-48LL )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    }
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    if ( *(_DWORD *)(v10 + 296) == 1 )
      MicrosoftTelemetryAssertTriggeredArgs(v22, 1LL, 1LL);
    *(_DWORD *)(v10 + 296) = 1;
    *(_QWORD *)(v10 + 304) = L"CAudioSession::StartStream";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
  else
  {
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB88,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x88890004LL,
      v24);
    if ( this != (CAudioSession *)-48LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    return 2290679812LL;
  }
}
