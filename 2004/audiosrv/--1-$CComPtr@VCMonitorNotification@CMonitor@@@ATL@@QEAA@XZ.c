/*
 * XREFs of ??1?$CComPtr@VCMonitorNotification@CMonitor@@@ATL@@QEAA@XZ @ 0x1800FA768
 * Callers:
 *     _CMonitor::CMonitor_::_1_::dtor$8 @ 0x1800FA43D (_CMonitor--CMonitor_--_1_--dtor$8.c)
 *     _CMonitor::CMonitor_::_1_::dtor$16 @ 0x1800FA4D5 (_CMonitor--CMonitor_--_1_--dtor$16.c)
 * Callees:
 *     ?Release@CMonitorNotification@CMonitor@@UEAAKXZ @ 0x1800FF740 (-Release@CMonitorNotification@CMonitor@@UEAAKXZ.c)
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
