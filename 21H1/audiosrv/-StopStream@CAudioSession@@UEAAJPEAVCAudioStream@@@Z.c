/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18002D090
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x180002914 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002EA90 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJ$$QEAVCList.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x1800BBF40 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800C6BE8 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     WPP_SF_dq @ 0x1800CBE5C (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800CC060 (WPP_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18013DA38 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rsi
  int updated; // edi
  __int64 v7; // rdx
  struct CAudioStream *v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  CAudioSessionManager *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  struct CAudioStream *v26; // r8
  CAudioStream *v27; // rdi
  __int64 v28; // [rsp+20h] [rbp-78h]
  _BYTE v29[32]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v31; // [rsp+A0h] [rbp+8h] BYREF

  v2 = 0;
  v4 = 0LL;
  updated = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids, this, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v9 = *((_QWORD *)this + 13);
  v10 = 0LL;
  if ( v9 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *((_QWORD *)this + 12);
      v8 = *(struct CAudioStream **)(v12 + 8 * v11);
      if ( v8 == a2 )
        break;
      v10 = (unsigned int)(v10 + 1);
      v11 = (unsigned int)v10;
      if ( (unsigned int)v10 >= v9 )
        goto LABEL_24;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v28 = *(_QWORD *)(v12 + 8 * v11);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, v8, v10);
    }
    if ( v11 >= *((_QWORD *)this + 13) )
      goto LABEL_67;
    _mm_lfence();
    v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v11);
    (*(void (__fastcall **)(__int64, __int64, struct CAudioStream *, __int64))(*(_QWORD *)v4 + 80LL))(v4, v7, v8, v10);
    v13 = (*((_DWORD *)this + 68))-- == 1;
    if ( v13 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          52LL,
          &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
          *((unsigned int *)this + 68));
      }
      (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 136LL))(this, 0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 64LL))(v4 + 8) )
      updated = 1;
    v8 = (struct CAudioStream *)(*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 80) + 120LL))(*(_QWORD *)(v4 + 80));
    v14 = *(unsigned int *)(v4 + 336);
    if ( updated )
      v7 = (unsigned int)dword_180161510[v14];
    else
      v7 = (unsigned int)dword_1801614B0[v14];
    v15 = *(_DWORD *)(v4 + 228);
    v10 = 16LL;
    v16 = 0;
    if ( (_DWORD)v8 )
      v16 = 16;
    v17 = (*(_BYTE *)(v4 + 224) == 0) + 2 * (v7 + v16);
    if ( v17 == v15 )
      goto LABEL_23;
    v18 = *(_QWORD *)(v4 + 64);
    *(_DWORD *)(v4 + 228) = v17;
    v31 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 80LL))(v18, &v31);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v31 + 200LL))(v31, 1LL, v17, v15);
    updated = v19;
    if ( v19 >= 0 )
    {
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_23:
      updated = 0;
      goto LABEL_24;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v19,
      v28);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  }
LABEL_24:
  if ( this != (CAudioSession *)-48LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v4 )
  {
    (*(void (__fastcall **)(CAudioSession *, __int64, struct CAudioStream *, __int64))(*(_QWORD *)this + 8LL))(
      this,
      v7,
      v8,
      v10);
    v21 = *(unsigned int *)(v4 + 296);
    if ( !(_DWORD)v21 )
    {
      MicrosoftTelemetryAssertTriggeredArgs(v20, 0LL, 0LL);
      v21 = *(unsigned int *)(v4 + 296);
    }
    if ( (_DWORD)v21 != 1 )
      MicrosoftTelemetryAssertTriggeredArgs(v20, 0LL, v21);
    *(_DWORD *)(v4 + 296) = 0;
    *(_QWORD *)(v4 + 304) = L"CAudioSession::StopStream: in _Streams";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    goto LABEL_32;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v23 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids);
    v23 = WPP_GLOBAL_Control;
  }
  if ( *((_QWORD *)this + 22) )
  {
    v24 = *((_QWORD *)this + 22);
    v25 = 0LL;
    if ( v24 )
    {
      while ( 1 )
      {
        v26 = *(struct CAudioStream **)(*((_QWORD *)this + 21) + 8 * v25);
        if ( v26 == a2 )
          break;
        v25 = ++v2;
        if ( v2 >= v24 )
          goto LABEL_53;
      }
      if ( v23 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v23 + 28) & 0x40) != 0
        && *((_BYTE *)v23 + 25) >= 4u )
      {
        WPP_SF_dq(*((_QWORD *)v23 + 2), 54LL, v26, v2);
      }
      if ( v25 < *((_QWORD *)this + 22) )
      {
        _mm_lfence();
        v27 = *(CAudioStream **)(*((_QWORD *)this + 21) + 8 * v25);
        (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v27 + 80LL))(v27);
        v13 = (*((_DWORD *)this + 68))-- == 1;
        if ( v13 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              55LL,
              &WPP_8a9aba7feb7a3955c09918de3b09cfe4_Traceguids,
              *((unsigned int *)this + 68));
          }
          (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 136LL))(this, 0LL);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
          CAudioStreamStateChanged::CAudioStreamStateChanged(v29, this, 1LL);
          CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
        }
        updated = CAudioStream::UpdateStreamPriority(v27);
        goto LABEL_53;
      }
    }
LABEL_67:
    ATL::AtlThrowImpl(-2147024809);
  }
LABEL_53:
  if ( this != (CAudioSession *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
LABEL_32:
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StopStream", 0xC2Fu, updated);
  return (unsigned int)updated;
}
