/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x1403ECE78
 * Callers:
 *     HalpIommuInitSystem @ 0x14099B5B0 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 IommupHvSetRootFaultReportingReady()
{
  return ((__int64 (*)(void))qword_140C4A3C8)();
}
