/*
 * XREFs of ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x1800FF740
 * Callers:
 *     ??1?$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x1800FA768 (--1-$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x180100D38 (--1CMonitor@@IEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x180101188 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x180104280 (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CMonitor::CMonitorNotification::Release(CMonitor::CMonitorNotification *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 5);
  if ( !v1 && this )
  {
    *(_QWORD *)this = &CMonitor::CMonitorNotification::`vftable';
    operator delete(this, (const struct std::nothrow_t *)0x18);
  }
  return v1;
}
