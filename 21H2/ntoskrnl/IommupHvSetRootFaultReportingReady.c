/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x1403F0348
 * Callers:
 *     HalpIommuInitSystem @ 0x14099B9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvSetRootFaultReportingReady()
{
  return ((__int64 (*)(void))qword_140C4A350)();
}
