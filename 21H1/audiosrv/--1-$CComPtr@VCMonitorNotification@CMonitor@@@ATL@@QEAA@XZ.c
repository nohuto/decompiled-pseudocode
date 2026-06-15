/*
 * XREFs of ??1?$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x1800FA6A8
 * Callers:
 *     _CMonitor::CMonitor_::_1_::dtor$8 @ 0x1800FA37D (_CMonitor--CMonitor_--_1_--dtor$8.c)
 *     _CMonitor::CMonitor_::_1_::dtor$16 @ 0x1800FA415 (_CMonitor--CMonitor_--_1_--dtor$16.c)
 * Callees:
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x1800FF680 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
 */

unsigned int __fastcall ATL::CComPtr<CMonitor::CMonitorNotification>::~CComPtr<CMonitor::CMonitorNotification>(
        CMonitor::CMonitorNotification **a1)
{
  CMonitor::CMonitorNotification *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CMonitor::CMonitorNotification::Release(v1);
  return result;
}
