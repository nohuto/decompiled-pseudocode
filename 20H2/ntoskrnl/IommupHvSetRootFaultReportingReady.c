/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x1403EF9A8
 * Callers:
 *     HalpIommuInitSystem @ 0x1409A16B0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 IommupHvSetRootFaultReportingReady()
{
  return ((__int64 (*)(void))qword_140C4A430)();
}
