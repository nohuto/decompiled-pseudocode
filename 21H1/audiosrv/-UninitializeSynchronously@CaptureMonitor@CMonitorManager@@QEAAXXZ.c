/*
 * XREFs of ?UninitializeSynchronously@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x180100440
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061D9C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FC9CC (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FD0D4 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1801001B8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057F34 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x180104EC4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::UninitializeSynchronously(CMonitorManager::CaptureMonitor *this)
{
  __int64 v2; // rbx
  int v3; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(*((_QWORD *)this + 25) + 272LL) = 0LL;
  v2 = *((_QWORD *)this + 25);
  lpCriticalSection = (LPCRITICAL_SECTION)(v2 + 16);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = *(_DWORD *)(v2 + 56);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 != 6 )
  {
    *(_QWORD *)(v2 + 272) = 0LL;
    CMonitor::Terminate((CMonitor *)v2, 0, 0LL);
  }
  (*(void (__fastcall **)(_QWORD, CMonitorManager::CaptureMonitor *))(**((_QWORD **)this + 5) + 32LL))(
    *((_QWORD *)this + 5),
    this);
  *((_BYTE *)this + 48) = 0;
}
