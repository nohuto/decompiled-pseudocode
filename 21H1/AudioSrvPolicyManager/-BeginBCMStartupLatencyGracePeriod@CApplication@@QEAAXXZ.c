/*
 * XREFs of ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180018320
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180025364 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x18000FF70 (WPP_SF_S.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x180016E18 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180017ADC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x1800180A8 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800184C4 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplication::BeginBCMStartupLatencyGracePeriod(CApplication *this)
{
  signed int v2; // edi
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 440);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CApplication::CleanupBCMStartupLatencyGracePeriod(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
      *((const wchar_t **)this + 3));
  }
  if ( *((_QWORD *)this + 60)
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            CApplication::BCMStartupGracePeriodExpiredCallback,
                            this,
                            (PTP_CALLBACK_ENVIRON)((char *)ThreadPool + 8)),
        (*((_QWORD *)this + 60) = ThreadpoolTimer) != 0LL) )
  {
    pftDueTime.dwLowDateTime = -100000000;
    pftDueTime.dwHighDateTime = -1;
    *((_DWORD *)this + 122) = 1;
    if ( (unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(this) )
    {
      CApplication::AddCategoryOverrideToProcesses((__int64)this, 7, 1, 0);
      CApplication::RestrictAudioPlaybackToPrimaryCategories(this);
    }
    SetThreadpoolTimer(*((PTP_TIMER *)this + 60), &pftDueTime, 0, 0x64u);
  }
  else
  {
    LastError = GetLastError();
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
  }
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x20u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v2);
    }
    AudPolicyLogError("CApplication::BeginBCMStartupLatencyGracePeriod", 2291, v2);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
