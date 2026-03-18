/*
 * XREFs of IommupHvSetRootFaultReportingReady @ 0x140527B60
 * Callers:
 *     HalpIommuInitSystem @ 0x140A55270 (HalpIommuInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 IommupHvSetRootFaultReportingReady()
{
  return ((__int64 (*)(void))qword_140C4C650)();
}
