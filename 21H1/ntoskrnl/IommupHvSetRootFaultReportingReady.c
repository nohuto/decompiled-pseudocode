/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x1403EBFF8
 * Callers:
 *     HalpIommuInitSystem @ 0x140997040 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvSetRootFaultReportingReady()
{
  return ((__int64 (*)(void))qword_140C4A528)();
}
