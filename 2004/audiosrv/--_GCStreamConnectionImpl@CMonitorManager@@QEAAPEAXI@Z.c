/*
 * XREFs of ??_GCStreamConnectionImpl@CMonitorManager@@QEAAPEAXI@Z @ 0x1800FAB14
 * Callers:
 *     _std::shared_ptr_CStreamConnection_::_Setp_CMonitorManager::CStreamConnectionImpl__::_1_::catch$1 @ 0x1800FA239 (_std--shared_ptr_CStreamConnection_--_Setp_CMonitorManager--CStreamConnectionImpl__--_1_--catch$.c)
 *     ?_Destroy@?$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@EEAAXXZ @ 0x180100800 (-_Destroy@-$_Ref_count@VCStreamConnectionImpl@CMonitorManager@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x1800FFA0C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
CMonitorManager::CStreamConnectionImpl *__fastcall CMonitorManager::CStreamConnectionImpl::`scalar deleting destructor'(
        CMonitorManager::CStreamConnectionImpl *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CMonitorManager::CStreamConnectionImpl::`vftable';
  CMonitorManager::RemoveMonitor(
    *((CMonitorManager **)this + 3),
    *((const struct CMonitorManager::CaptureMonitor *const *)this + 4),
    1);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
