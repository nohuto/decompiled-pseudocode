/*
 * XREFs of ?CleanupMonitorRestartTimer@CMonitorManager@@AEAAXXZ @ 0x1800FA210
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061704 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800FF5E8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057894 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

void __fastcall CMonitorManager::CleanupMonitorRestartTimer(CMonitorManager *this)
{
  struct _TP_TIMER *v2; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x39u,
      (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
      this);
  }
  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 256);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 37);
  *((_QWORD *)this + 37) = 0LL;
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Au,
        (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids,
        this);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v2, 1);
    CloseThreadpoolTimer(v2);
  }
}
