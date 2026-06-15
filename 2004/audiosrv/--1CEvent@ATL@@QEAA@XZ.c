/*
 * XREFs of ??1CEvent@ATL@@QEAA@XZ @ 0x1800FA794
 * Callers:
 *     _CMonitor::CMonitor_::_1_::dtor$7 @ 0x1800FA42D (_CMonitor--CMonitor_--_1_--dtor$7.c)
 *     _CMonitor::CMonitor_::_1_::dtor$17 @ 0x1800FA4E8 (_CMonitor--CMonitor_--_1_--dtor$17.c)
 *     _CMonitor::CMonitor_::_1_::dtor$18 @ 0x1800FA4FB (_CMonitor--CMonitor_--_1_--dtor$18.c)
 *     _CMonitor::CMonitor_::_1_::dtor$19 @ 0x1800FA50E (_CMonitor--CMonitor_--_1_--dtor$19.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$0 @ 0x1800FA6AE (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180074990 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CEvent::~CEvent(void **this)
{
  if ( *this )
    ATL::CHandle::Close(this);
}
