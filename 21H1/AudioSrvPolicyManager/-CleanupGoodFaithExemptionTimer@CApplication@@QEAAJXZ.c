/*
 * XREFs of ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x1800173F8
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x180031430 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x180032380 (-Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_S @ 0x18000FF70 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupGoodFaithExemptionTimer(CApplication *this)
{
  struct _TP_TIMER *v2; // r10
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 384);
  v5 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 53) )
  {
    v2 = (struct _TP_TIMER *)*((_QWORD *)this + 53);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
        *((const wchar_t **)this + 3));
      v2 = (struct _TP_TIMER *)*((_QWORD *)this + 53);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 53), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 53));
    *((_DWORD *)this + 109) = 1;
    *((_QWORD *)this + 53) = 0LL;
  }
  if ( v5 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v5 = 0;
  }
  return 0LL;
}
