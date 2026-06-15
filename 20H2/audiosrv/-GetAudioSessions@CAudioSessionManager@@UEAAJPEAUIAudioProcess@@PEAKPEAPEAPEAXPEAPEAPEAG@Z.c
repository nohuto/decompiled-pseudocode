/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CEBF0
 * Callers:
 *     AudioSessionManagerGetAudioSessions @ 0x1800D0400 (AudioSessionManagerGetAudioSessions.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180001F80 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180002010 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019E70 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002C4A0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180044494 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     MIDL_user_allocate @ 0x180045540 (MIDL_user_allocate.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800BD710 (WPP_SF_qS.c)
 *     WPP_SF_qd @ 0x1800BD798 (WPP_SF_qd.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800CF35C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     WPP_SF_Ddq @ 0x1800D08F0 (WPP_SF_Ddq.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800D3B28 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        const unsigned __int16 **this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  __int64 v6; // rax
  char *v8; // r14
  _BYTE *v9; // r15
  int v10; // r13d
  int v11; // r12d
  int v12; // ebx
  struct _RTL_CRITICAL_SECTION *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rsi
  int v17; // eax
  char *v18; // rax
  unsigned int *v19; // rdx
  void ***v20; // rax
  unsigned __int16 ***v21; // rcx
  _BYTE *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  struct CAudioSession *v26; // rsi
  CAudioSessionManager *v27; // rcx
  int v28; // eax
  unsigned int v29; // eax
  CAudioSessionManager *v30; // rcx
  struct CServerAudioSessionControl *v31; // rcx
  void **v32; // rdi
  __int64 v33; // rcx
  int v34; // [rsp+40h] [rbp-C0h]
  __int64 StartPosition; // [rsp+48h] [rbp-B8h] BYREF
  struct CServerAudioSessionControl *v36; // [rsp+50h] [rbp-B0h] BYREF
  const unsigned __int16 **v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  unsigned int *v39; // [rsp+68h] [rbp-98h]
  void ***v40; // [rsp+70h] [rbp-90h]
  unsigned __int16 ***v41; // [rsp+78h] [rbp-88h]
  struct CAudioSession *v42; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+88h] [rbp-78h]
  struct IAudioProcess *v44; // [rsp+90h] [rbp-70h]
  _BYTE v45[80]; // [rsp+A0h] [rbp-60h] BYREF

  v41 = a5;
  v6 = *(_QWORD *)a2;
  v40 = a4;
  v8 = 0LL;
  v39 = a3;
  v9 = 0LL;
  v44 = a2;
  v10 = 0;
  v34 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v6 + 48))(a2);
  v42 = 0LL;
  v11 = 0;
  *v40 = 0LL;
  *v41 = 0LL;
  *v39 = 0;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v45);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x29u,
      (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
      this,
      v34);
  }
  v12 = CAudioSessionInstanceId::Initialize(
          (CAudioSessionInstanceId *)v45,
          a2,
          this[37],
          &GUID_SystemSounds_AudioSessionId,
          1);
  if ( v12 < 0
    || (v12 = CAudioSessionManager::CreateAudioSession(
                (CAudioSessionManager *)this,
                a2,
                (struct CAudioSessionInstanceId *)v45,
                0xEu,
                0,
                0,
                &v42),
        v12 < 0) )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v45);
    goto LABEL_66;
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v45);
  v13 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  v43 = (struct _RTL_CRITICAL_SECTION *)(this + 2);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 2));
  v37 = this + 7;
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)(this + 7));
  if ( StartPosition )
  {
    v15 = v14;
    do
    {
      v16 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                         v15,
                         &StartPosition);
      if ( v16 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Au,
            (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
            0LL);
        }
        v17 = *(_DWORD *)(v16 + 716);
        if ( (!v17 || v17 == v34) && *(_DWORD *)(v16 + 408) != 2 )
          ++v10;
      }
    }
    while ( StartPosition );
    v13 = v43;
    v9 = 0LL;
    v11 = 0;
  }
  v38 = v10;
  v18 = (char *)MIDL_user_allocate(8LL * v10);
  v8 = v18;
  if ( !v18 || (memset_0(v18, 0, 8LL * v10), v23 = MIDL_user_allocate(8LL * v10), (v9 = v23) == 0LL) )
  {
    v12 = -2147024882;
    goto LABEL_23;
  }
  memset_0(v23, 0, 8LL * v10);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)v37);
  if ( !StartPosition )
  {
LABEL_23:
    if ( v13 )
      LeaveCriticalSection(v13);
    goto LABEL_25;
  }
  v25 = 0LL;
  while ( 1 )
  {
    v26 = *(struct CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                      v24,
                                      &StartPosition);
    if ( !v26 )
      goto LABEL_57;
    v36 = 0LL;
    v27 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
        0LL);
      v27 = WPP_GLOBAL_Control;
    }
    v28 = *((_DWORD *)v26 + 179);
    if ( v28 )
    {
      if ( v28 != v34 )
        goto LABEL_57;
    }
    if ( *((_DWORD *)v26 + 102) == 2 )
      goto LABEL_57;
    if ( v27 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v27 + 28) & 0x40) != 0
      && *((_BYTE *)v27 + 25) >= 4u )
    {
      WPP_SF_qS(*((_QWORD *)v27 + 2), 0x2Cu, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, v26, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v44 + 40LL))(v44);
    v12 = CAudioSessionManager::CreateAudioSessionControl(v30, v26, v29, 0, &v36);
    if ( v12 < 0 )
      break;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
        0LL);
    }
    if ( v25 >= v38 )
      goto LABEL_23;
    v31 = v36;
    *(_QWORD *)&v8[8 * v25] = v36;
    v12 = (*(__int64 (__fastcall **)(struct CServerAudioSessionControl *, _BYTE *))(*(_QWORD *)v31 + 120LL))(
            v31,
            &v9[8 * v11]);
    if ( v12 < 0 )
      goto LABEL_63;
    ++v11;
    ++v25;
LABEL_57:
    if ( !StartPosition )
      goto LABEL_23;
    v24 = (__int64)v37;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, v12);
  }
LABEL_63:
  if ( v13 )
    LeaveCriticalSection(v13);
  if ( v11 >= 0 )
  {
LABEL_66:
    v32 = (void **)&v9[8 * v11];
    do
    {
      if ( v8 )
      {
        v33 = *(__int64 *)((char *)v32 + v8 - v9);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      if ( v9 && *v32 )
        operator delete(*v32);
      --v32;
      --v11;
    }
    while ( v11 >= 0 );
  }
  if ( v8 )
    operator delete(v8);
  v8 = 0LL;
  if ( v9 )
    operator delete(v9);
  v9 = 0LL;
  v11 = 0;
LABEL_25:
  v19 = v39;
  v20 = v40;
  v21 = v41;
  *v39 = v11;
  *v20 = (void **)v8;
  *v21 = (unsigned __int16 **)v9;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Ddq(*((_QWORD *)WPP_GLOBAL_Control + 2), v19, &WPP_GLOBAL_Control, (unsigned int)v12, *v19, *v20);
  }
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessions", 1408, v12);
  if ( v42 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v42 + 16LL))(v42);
  return (unsigned int)v12;
}
