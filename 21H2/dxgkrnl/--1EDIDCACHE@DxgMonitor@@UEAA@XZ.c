/*
 * XREFs of ??1EDIDCACHE@DxgMonitor@@UEAA@XZ @ 0x1C03B1650
 * Callers:
 *     ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006B230 (--_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DxgMonitor::EDIDCACHE::~EDIDCACHE(DxgMonitor::EDIDCACHE *this)
{
  *(_QWORD *)this = &DxgMonitor::EDIDCACHE::`vftable';
  DXGFASTMUTEX::~DXGFASTMUTEX((DxgMonitor::EDIDCACHE *)((char *)this + 616));
}
