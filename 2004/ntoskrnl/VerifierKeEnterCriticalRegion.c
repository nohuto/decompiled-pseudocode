/*
 * XREFs of VerifierKeEnterCriticalRegion @ 0x1409D7B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14059CCB8 (ViKeLogCriticalRegionStackTrace.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

void VerifierKeEnterCriticalRegion()
{
  unsigned __int8 CurrentIrql; // al

  if ( (MmVerifierData & 2) != 0 && (MmVerifierData & 0x20000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 1u )
      VerifierBugCheckIfAppropriate(0xC4u, 0x11AuLL, CurrentIrql, 0LL, 0LL);
  }
  ((void (*)(void))pXdvKeEnterCriticalRegion)();
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 0x21) != 0 )
    ViKeLogCriticalRegionStackTrace();
}
