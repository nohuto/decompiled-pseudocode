/*
 * XREFs of ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x1800FF680
 * Callers:
 *     ??1?$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x1800FA6A8 (--1-$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ.c)
 *     ??1CMonitor@@IEAA@XZ @ 0x180100C78 (--1CMonitor@@IEAA@XZ.c)
 *     ?Attach@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonitor@@@Z @ 0x1801010C8 (-Attach@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXPEAVCMonitorNotification@CMonit.c)
 *     ?Release@?$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ @ 0x1801041C0 (-Release@-$CComPtrBase@VCMonitorNotification@CMonitor@@@ATL@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
