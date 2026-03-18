/*
 * XREFs of ??_GEDIDCACHE@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006B230
 * Callers:
 *     ?DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ @ 0x1C03B1678 (-DeleteGlobalCache@EDIDCACHE@DxgMonitor@@SAXXZ.c)
 * Callees:
 *     ??1EDIDCACHE@DxgMonitor@@UEAA@XZ @ 0x1C03B1650 (--1EDIDCACHE@DxgMonitor@@UEAA@XZ.c)
 */

DxgMonitor::EDIDCACHE *__fastcall DxgMonitor::EDIDCACHE::`scalar deleting destructor'(
        DxgMonitor::EDIDCACHE *P,
        char a2)
{
  DxgMonitor::EDIDCACHE::~EDIDCACHE(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
