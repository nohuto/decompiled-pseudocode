/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x18001CC70
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FBA0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180018A10 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180018B00 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180018F20 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001A4F0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001BBA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001BCF0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18002C8BC (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x180034A94 (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045134 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800540E4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     atexit @ 0x18006AB38 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006B51E (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180074B5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800BE2B0 (WPP_SF_qS.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        const unsigned __int16 ****a1,
        _QWORD *a2,
        int a3,
        volatile signed __int32 **a4,
        void **a5)
{
  int v8; // r13d
  void *v9; // rbx
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const unsigned __int16 ***v13; // rdi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // esi
  int v22; // r14d
  int OwningThread; // ebx
  bool v24; // zf
  int v25; // ebx
  unsigned int v26; // esi
  struct IAudioProcess *v27; // r12
  const unsigned __int16 **v28; // rdi
  __int64 (__fastcall *v29)(__int64 *); // rax
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64 *); // rax
  struct CAudioSession *v32; // r14
  __int64 v33; // rax
  GUID v34; // xmm0
  __int64 v35; // rax
  struct IAudioProcess *v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdi
  _WORD *v39; // rax
  void **v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int16 v43; // cx
  __int64 v44; // rax
  unsigned int v45; // ebx
  unsigned int v46; // eax
  unsigned int v47; // eax
  volatile signed __int32 *v48; // rbx
  unsigned int v49; // esi
  CAudioSessionManager *v50; // rcx
  char *v51; // rax
  volatile signed __int32 *v52; // rdi
  __int64 v53; // r8
  volatile signed __int32 *v54; // rdi
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  _QWORD *v60; // rdx
  __int64 v62; // rax
  const void *v63; // rdi
  __int64 v64; // rbx
  int *v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rax
  const void *v68; // rdi
  __int64 v69; // rbx
  _DWORD *v70; // r10
  unsigned __int64 v71; // rsi
  int v72; // eax
  __int64 v73; // rcx
  unsigned __int64 v74; // r12
  __int64 v75; // r15
  char *v76; // r10
  unsigned __int64 v77; // rsi
  int v78; // eax
  __int64 v79; // rcx
  unsigned __int64 v80; // r15
  rsize_t v81; // rdx
  char *v82; // rdx
  void *v83; // rbx
  HANDLE ProcessHeap; // rax
  void **v85; // rdi
  void *v86; // rbx
  HANDLE v87; // rax
  int v88; // [rsp+20h] [rbp-E0h]
  int v89; // [rsp+20h] [rbp-E0h]
  int v91; // [rsp+40h] [rbp-C0h]
  unsigned int v92; // [rsp+44h] [rbp-BCh]
  int v93; // [rsp+48h] [rbp-B8h]
  struct CAudioSession *v94; // [rsp+50h] [rbp-B0h] BYREF
  void **v95; // [rsp+58h] [rbp-A8h]
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  int v97; // [rsp+64h] [rbp-9Ch] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  __int64 v99; // [rsp+70h] [rbp-90h] BYREF
  __int64 v100; // [rsp+78h] [rbp-88h] BYREF
  __int64 v101; // [rsp+80h] [rbp-80h] BYREF
  struct IAudioProcess *v102; // [rsp+88h] [rbp-78h] BYREF
  CAudioSessionManager *v103; // [rsp+90h] [rbp-70h]
  struct _FILETIME pftDueTime; // [rsp+98h] [rbp-68h] BYREF
  struct IAudioProcess *v105; // [rsp+A0h] [rbp-60h]
  _QWORD *v106; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 **v107; // [rsp+B0h] [rbp-50h]
  _QWORD pv[2]; // [rsp+B8h] [rbp-48h] BYREF
  DWORD v109; // [rsp+C8h] [rbp-38h]
  const wchar_t *v110; // [rsp+D0h] [rbp-30h]
  void *v111; // [rsp+D8h] [rbp-28h]
  char v112; // [rsp+E0h] [rbp-20h]
  __int64 v113; // [rsp+E4h] [rbp-1Ch]
  __int64 v114; // [rsp+F0h] [rbp-10h] BYREF
  GUID Destination; // [rsp+F8h] [rbp-8h] BYREF
  GUID v116; // [rsp+108h] [rbp+8h]
  __int64 v117; // [rsp+118h] [rbp+18h]
  int v118; // [rsp+120h] [rbp+20h]
  int v119; // [rsp+128h] [rbp+28h]
  int v120; // [rsp+12Ch] [rbp+2Ch]
  int v121; // [rsp+130h] [rbp+30h]
  __int64 v122; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v107 = a4;
  v106 = a2;
  v95 = a5;
  v8 = 0;
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
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v111 = v9;
  v109 = CurrentThreadId;
  v110 = L"AudioSessionManagerGetCurrentSession";
  v112 = 0;
  v113 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  *a5 = 0LL;
  *a4 = 0LL;
  v13 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, *v13);
  }
  v102 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL))(
          g_PolicyManager,
          0LL,
          &v102);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v14,
      v88);
    goto LABEL_100;
  }
  v101 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          (*v13)[37],
          &v101);
  v15 = v16;
  if ( v16 >= 0 )
  {
    v100 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v101)(
            v101,
            &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
            &v100);
    v15 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E1,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v17,
        v88);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x845,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v15,
        v89);
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v100 + 24LL))(v100, &v97);
      v15 = v18;
      if ( v18 >= 0 )
      {
        v19 = a3;
        if ( (a3 & 0x80000) != 0 )
          v20 = 0;
        else
          v20 = 2;
        v21 = v20 | ((a3 & 0x10000000) != 0);
        v22 = a3 & 0x60000000;
        v93 = a3 & 0x60000000;
        if ( g_ADGProcess )
        {
          OwningThread = (int)g_ADGProcess[2].OwningThread;
          v24 = OwningThread == (*((unsigned int (__fastcall **)(const unsigned __int16 **))*v13[1] + 5))(v13[1]);
          v19 = a3;
          if ( v24 )
          {
            v22 = a3 & 0x40000000 | 0x20000000;
            v93 = v22;
          }
        }
        if ( (*((unsigned int (__fastcall **)(const unsigned __int16 **))*v13[1] + 11))(v13[1]) )
        {
          v93 = v22 | 0x200000;
          v21 |= 0x40000000u;
        }
        v25 = v19 & 0x10000;
        v91 = v25;
        if ( v97 == 1 )
          v26 = v21 & 0xFFFFFFFD;
        else
          v26 = v21 | 8;
        v27 = v102;
        v28 = *v13;
        v92 = v26;
        LOBYTE(v8) = v25 != 0;
        v29 = *(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24);
        v105 = v102;
        v103 = (CAudioSessionManager *)v28;
        v99 = v29(&ATL::g_strmgr) + 24;
        v114 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
        *(_QWORD *)&Destination.Data1 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
        *(_QWORD *)Destination.Data4 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
        v30 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
        v120 = -1;
        v117 = v30 + 24;
        v116 = GUID_00000000_0000_0000_0000_000000000000;
        v118 = 0;
        v119 = 0;
        v31 = *(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24);
        v121 = 0;
        v94 = 0LL;
        v32 = 0LL;
        v122 = v31(&ATL::g_strmgr) + 24;
        *v95 = 0LL;
        v15 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v114, v28[37]);
        if ( v15 < 0 )
          goto LABEL_154;
        if ( v25 )
        {
          if ( !a2 )
          {
            v15 = -2147024809;
            goto LABEL_131;
          }
          v33 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v33 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( !v33 )
          {
            v15 = -2147024809;
            goto LABEL_131;
          }
        }
        if ( a2 )
          v34 = *(GUID *)a2;
        else
          v34 = GUID_00000000_0000_0000_0000_000000000000;
        v116 = v34;
        if ( v25 )
        {
LABEL_31:
          v118 = v8;
          v15 = CAppAudioSessionId::CalculateStaticId(&Destination);
          if ( v15 >= 0 )
          {
LABEL_32:
            if ( v15 >= 0 )
            {
              v35 = *(_QWORD *)v27;
              v36 = v27;
              v121 = v8;
              if ( v25 )
              {
                v119 = 0;
              }
              else
              {
                v119 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v35 + 40))(v27);
                v36 = v27;
                v35 = *(_QWORD *)v27;
              }
              v120 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v35 + 48))(v36);
              v15 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v114);
              if ( v15 >= 0 )
              {
LABEL_36:
                if ( v15 < 0 )
                  goto LABEL_183;
                v15 = CAudioSessionInstanceId::ToString((__int64)&v114, &v99);
                if ( v15 < 0 )
                  goto LABEL_183;
                v37 = v99;
                v38 = (unsigned int)(*(_DWORD *)(v99 - 16) + 1);
                if ( (unsigned __int64)(2 * v38) > 0x40000 )
                {
                  *v95 = 0LL;
                }
                else
                {
                  v39 = operator new[](2 * v38, (const struct std::nothrow_t *)&std::nothrow);
                  v40 = v95;
                  *v95 = v39;
                  if ( v39 )
                  {
                    v15 = 0;
                    if ( (unsigned __int64)(v38 - 1) > 0x7FFFFFFE )
                      v15 = -2147024809;
                    if ( v15 < 0 )
                    {
                      if ( !v38 )
                      {
LABEL_50:
                        if ( v15 < 0 )
                        {
                          v83 = *v40;
                          ProcessHeap = GetProcessHeap();
                          HeapFree(ProcessHeap, 0, v83);
                          *v40 = 0LL;
LABEL_80:
                          if ( v15 < 0 )
                            AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x793u, v15);
                          v55 = (_QWORD *)(v122 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v122 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v55 + 8LL))(*v55);
                          v56 = (_QWORD *)(v117 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v117 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v56 + 8LL))(*v56);
                          v57 = (_QWORD *)(*(_QWORD *)Destination.Data4 - 24LL);
                          if ( _InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*(_QWORD *)Destination.Data4 - 24LL + 16),
                                 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v57 + 8LL))(*v57);
                          v58 = (_QWORD *)(*(_QWORD *)&Destination.Data1 - 24LL);
                          if ( _InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*(_QWORD *)&Destination.Data1 - 24LL + 16),
                                 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v58 + 8LL))(*v58);
                          v59 = (_QWORD *)(v114 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v114 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v59 + 8LL))(*v59);
                          v60 = (_QWORD *)(v99 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v99 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v60 + 8LL))(*v60);
                          if ( v15 < 0 )
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x86F,
                              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                              (const char *)(unsigned int)v15,
                              v88);
                          else
                            v15 = 0;
                          goto LABEL_96;
                        }
                        if ( v91 )
                        {
                          v44 = *v106 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
                          if ( *v106 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                            v44 = v106[1] - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
                          v45 = v92;
                          if ( !v44 )
                            v45 = v92 | 4;
                        }
                        else
                        {
                          v45 = v92;
                        }
                        v46 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 40LL))(v27);
                        v15 = CAudioSessionManager::CreateAudioSession(
                                v103,
                                v27,
                                (struct CAudioSessionInstanceId *)&v114,
                                v45,
                                v93,
                                v46,
                                &v94);
                        if ( v15 < 0 )
                        {
                          v32 = v94;
                          goto LABEL_183;
                        }
                        v47 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 40LL))(v27);
                        v48 = 0LL;
                        v49 = v47;
                        v103 = 0LL;
                        v50 = WPP_GLOBAL_Control;
                        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
                        {
                          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                          {
                            WPP_SF_d(
                              *((_QWORD *)WPP_GLOBAL_Control + 2),
                              13LL,
                              &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
                              v47);
                            v50 = WPP_GLOBAL_Control;
                          }
                          if ( v50 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
                          {
                            if ( (*((_BYTE *)v50 + 28) & 0x40) != 0 && *((_BYTE *)v50 + 25) >= 4u )
                            {
                              WPP_SF_S(
                                *((_QWORD *)v50 + 2),
                                14LL,
                                &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
                                0LL);
                              v50 = WPP_GLOBAL_Control;
                            }
                            if ( v50 != (CAudioSessionManager *)&WPP_GLOBAL_Control
                              && (*((_BYTE *)v50 + 28) & 0x40) != 0
                              && *((_BYTE *)v50 + 25) >= 4u )
                            {
                              WPP_SF_S(
                                *((_QWORD *)v50 + 2),
                                11LL,
                                &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
                                0LL);
                            }
                          }
                        }
                        v51 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
                        v52 = (volatile signed __int32 *)v51;
                        if ( v51 )
                        {
                          *((_DWORD *)v51 + 4) = 1;
                          *((_DWORD *)v51 + 6) = 0;
                          *(_QWORD *)v51 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
                          *((_QWORD *)v51 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
                          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v51 + 32), 0, 0);
                          *((_QWORD *)v52 + 9) = 0LL;
                          *((_BYTE *)v52 + 84) = 0;
                          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                          {
                            WPP_SF_S(
                              *((_QWORD *)WPP_GLOBAL_Control + 2),
                              10LL,
                              &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
                              0LL);
                          }
                          LOBYTE(v53) = 1;
                          v32 = v94;
                          v15 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, __int64, struct CAudioSession *))(*(_QWORD *)v52 + 256LL))(
                                  v52,
                                  v49,
                                  v53,
                                  v94);
                          if ( v15 >= 0 )
                          {
                            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                            {
                              WPP_SF_qS(
                                *((_QWORD *)WPP_GLOBAL_Control + 2),
                                12,
                                (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
                                (_DWORD)v52,
                                0LL);
                            }
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
                            _InterlockedIncrement(v52 + 6);
                            v48 = v52;
                            v103 = (CAudioSessionManager *)v52;
                            v32 = v94;
LABEL_70:
                            if ( v52 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
                            if ( v15 )
                            {
                              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                              {
                                WPP_SF_d(
                                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                                  15LL,
                                  &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
                                  (unsigned int)v15);
                              }
                              v54 = 0LL;
                              if ( v15 < 0 )
                                AudSrvTraceLoggingErrorHelper(
                                  "CAudioSessionManager::GetAudioSessionControl",
                                  0x232u,
                                  v15);
                              if ( v48 )
                                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
                            }
                            else
                            {
                              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                              {
                                WPP_SF_qS(
                                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                                  16,
                                  (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
                                  (_DWORD)v48,
                                  0LL);
                              }
                              v54 = v48;
                            }
                            if ( v15 >= 0 )
                            {
                              *v107 = v54;
LABEL_78:
                              if ( v32 )
                                (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v32 + 16LL))(v32);
                              goto LABEL_80;
                            }
LABEL_183:
                            v85 = v95;
                            v86 = *v95;
                            if ( *v95 )
                            {
                              v87 = GetProcessHeap();
                              HeapFree(v87, 0, v86);
                              *v85 = 0LL;
                            }
                            goto LABEL_78;
                          }
                        }
                        else
                        {
                          v52 = 0LL;
                          v15 = -2147024882;
                          v32 = v94;
                        }
                        AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1FEu, v15);
                        goto LABEL_70;
                      }
                    }
                    else
                    {
                      v15 = 0;
                      if ( v38 )
                      {
                        v41 = 2147483646 - v38;
                        v42 = v37 - (_QWORD)v39;
                        while ( v38 + v41 )
                        {
                          v43 = *(_WORD *)((char *)v39 + v42);
                          if ( !v43 )
                            break;
                          *v39++ = v43;
                          if ( !--v38 )
                            goto LABEL_156;
                        }
                      }
                      else
                      {
LABEL_156:
                        --v39;
                        v15 = -2147024774;
                      }
                    }
                    *v39 = 0;
                    goto LABEL_50;
                  }
                }
                v15 = -2147024882;
                goto LABEL_183;
              }
            }
LABEL_154:
            AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v15);
            goto LABEL_36;
          }
LABEL_131:
          AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v15);
          goto LABEL_32;
        }
        v62 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 72LL))(v27);
        v63 = (const void *)v62;
        if ( !v62 )
          goto LABEL_107;
        v64 = -1LL;
        do
          ++v64;
        while ( *(_WORD *)(v62 + 2 * v64) );
        if ( (_DWORD)v64 )
        {
          v76 = *(char **)Destination.Data4;
          v77 = (v62 - *(_QWORD *)Destination.Data4) >> 1;
          v78 = *(_DWORD *)(*(_QWORD *)Destination.Data4 - 12LL) - v64;
          v79 = v78 | (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)Destination.Data4 - 8LL));
          v80 = *(unsigned int *)(*(_QWORD *)Destination.Data4 - 16LL);
          if ( (v78 | (1 - *(_DWORD *)(*(_QWORD *)Destination.Data4 - 8LL))) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)Destination.Data4, v64);
            v76 = *(char **)Destination.Data4;
          }
          v81 = 2LL * (int)v64;
          if ( v77 > v80 )
          {
            memcpy_s(v76, v81, v63, 2LL * (int)v64);
          }
          else if ( v81 )
          {
            if ( v76 && &v76[2 * v77] )
            {
              memmove_0(v76, &v76[2 * v77], 2LL * (int)v64);
            }
            else
            {
              *(_DWORD *)_o__errno(v79) = 22;
              invalid_parameter_noinfo();
            }
          }
          ATL::CSimpleStringT<unsigned short,0>::SetLength(Destination.Data4, (unsigned int)v64);
        }
        else
        {
LABEL_107:
          v65 = (int *)(*(_QWORD *)Destination.Data4 - 24LL);
          v66 = *(_QWORD *)(*(_QWORD *)Destination.Data4 - 24LL);
          if ( *(_DWORD *)(*(_QWORD *)Destination.Data4 - 24LL + 8) )
          {
            if ( v65[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v65);
              *(_QWORD *)Destination.Data4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 24LL))(v66) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(Destination.Data4, 0LL);
            }
          }
        }
        v67 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 80LL))(v27);
        v68 = (const void *)v67;
        if ( !v67 )
          goto LABEL_153;
        v69 = -1LL;
        do
          ++v69;
        while ( *(_WORD *)(v67 + 2 * v69) );
        if ( !(_DWORD)v69 )
        {
LABEL_153:
          ATL::CSimpleStringT<unsigned short,0>::Empty(&Destination);
          v25 = v91;
          goto LABEL_31;
        }
        v70 = *(_DWORD **)&Destination.Data1;
        v71 = (v67 - *(_QWORD *)&Destination.Data1) >> 1;
        v72 = *(_DWORD *)(*(_QWORD *)&Destination.Data1 - 12LL) - v69;
        v73 = v72 | (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)&Destination.Data1 - 8LL));
        v74 = *(unsigned int *)(*(_QWORD *)&Destination.Data1 - 16LL);
        if ( (v72 | (1 - *(_DWORD *)(*(_QWORD *)&Destination.Data1 - 8LL))) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Destination, v69);
          v70 = *(_DWORD **)&Destination.Data1;
        }
        v75 = 2LL * (int)v69;
        if ( v71 <= v74 )
        {
          v82 = (char *)v70 + 2 * v71;
          if ( !v75 )
          {
LABEL_117:
            if ( (int)v69 < 0 || (int)v69 > *(v70 - 3) )
              ATL::AtlThrowImpl(-2147024809);
            v27 = v105;
            *(v70 - 4) = v69;
            v25 = v91;
            *(_WORD *)(*(_QWORD *)&Destination.Data1 + v75) = 0;
            goto LABEL_31;
          }
          if ( v70 && v82 )
          {
            memmove_0(v70, v82, 2LL * (int)v69);
          }
          else
          {
            *(_DWORD *)_o__errno(v73) = 22;
            invalid_parameter_noinfo();
          }
        }
        else
        {
          memcpy_s(v70, 2LL * (int)v69, v68, 2LL * (int)v69);
        }
        v70 = *(_DWORD **)&Destination.Data1;
        goto LABEL_117;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x848,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v18,
        v88);
    }
LABEL_96:
    if ( v100 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 16LL))(v100);
    goto LABEL_98;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x842,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v16,
    v88);
LABEL_98:
  if ( v101 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v101 + 16LL))(v101);
LABEL_100:
  if ( v102 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v102 + 16LL))(v102);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v15;
}
