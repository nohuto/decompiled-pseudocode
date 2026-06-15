/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800CE6F8
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800D0DEC (-DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800D1074 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180001F80 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180002010 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180004AD0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18002C4A0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x1800C238C (WPP_SF_dd.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800CE9D4 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800CF35C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::DisconnectSessionsForTsSession(
        CAudioSessionManager *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  const struct _GUID *v6; // r8
  __int64 v7; // rbx
  int AudioSession; // ebx
  struct CAudioSession *v9; // rdi
  _BYTE v11[120]; // [rsp+40h] [rbp-78h] BYREF
  struct CAudioSession *v12; // [rsp+C0h] [rbp+8h] BYREF
  __int64 StartPosition; // [rsp+D8h] [rbp+20h] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v11);
  v12 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)this + 56);
  while ( StartPosition )
  {
    v7 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                      (char *)this + 56,
                      &StartPosition);
    v12 = (struct CAudioSession *)v7;
    if ( v7
      && *(_DWORD *)(v7 + 716) == a2
      && (a3 == eAll || a3 == eRender && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7)) )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)(v7 + 16) + 32LL))(v7 + 16, 0LL, v6);
    }
  }
  if ( this != (CAudioSessionManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  AudioSession = CAudioSessionManager::FindAudioSession(this, a2, v6, &v12);
  v9 = v12;
  if ( AudioSession >= 0 )
    AudioSession = CAudioSessionManager::OnStateChanged(
                     (struct _RTL_CRITICAL_SECTION *)this,
                     v12,
                     AudioSessionStateInactive,
                     2u);
  if ( v9 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::DisconnectSessionsForTsSession", 1803, AudioSession);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v11);
  return (unsigned int)AudioSession;
}
