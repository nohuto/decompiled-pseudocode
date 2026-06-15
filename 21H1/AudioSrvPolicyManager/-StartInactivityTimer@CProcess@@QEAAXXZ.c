/*
 * XREFs of ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001B3B0
 * Callers:
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x1800319E0 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::StartInactivityTimer(char *pv)
{
  signed int v2; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(pv + 352);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
      *((_DWORD *)pv + 48));
  }
  if ( !*((_QWORD *)pv + 49) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(
                        CProcess::InactivityTimerCallback,
                        pv,
                        (PTP_CALLBACK_ENVIRON)((char *)ThreadPool + 8));
    *((_QWORD *)pv + 49) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      _InterlockedIncrement((volatile signed __int32 *)pv + 2);
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      SetThreadpoolTimer(*((PTP_TIMER *)pv + 49), &pftDueTime, 0, 0x64u);
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
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v2);
      }
      AudPolicyLogError("CProcess::StartInactivityTimer", 3531, v2);
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
