/*
 * XREFs of ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180012B64
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x180010090 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800129C0 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001FA04 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContext@@@Z @ 0x1800205B0 (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAUBCMStartupGracePeriodExpiredContex.c)
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002BB70 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_S @ 0x18000A610 (WPP_SF_S.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x1800121E8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180012748 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::CleanupBCMStartupLatencyGracePeriod(CApplication *this)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v5; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-10h] BYREF
  char v7; // [rsp+38h] [rbp-8h]

  v6 = (LPCRITICAL_SECTION)((char *)this + 440);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v6);
  if ( *((_DWORD *)this + 122) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x21u,
        &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
        *((const wchar_t **)this + 3));
    }
    SetThreadpoolTimer(*((PTP_TIMER *)this + 60), 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 60), 1);
    *((_DWORD *)this + 122) = 0;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this) )
    {
      CApplication::RemoveAudioPlaybackRestriction(this);
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
      v5 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      v2 = (_QWORD *)*((_QWORD *)this + 9);
      while ( v2 )
      {
        v3 = (_DWORD *)v2[2];
        v2 = (_QWORD *)*v2;
        if ( !v3[112] && v3[127] == 7 )
        {
          v3[127] = 0;
          v3[128] = 0;
          v3[129] = 4;
        }
      }
      if ( v5 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v5 = 0;
      }
    }
  }
  if ( v7 )
    LeaveCriticalSection(v6);
}
