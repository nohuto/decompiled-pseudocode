/*
 * XREFs of ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x18010044C
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061E9C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x180100278 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180058034 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180104DC4 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::StopIfRunning(CMonitor *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v3 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 14) == 3 )
    CMonitor::Stop(this);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
