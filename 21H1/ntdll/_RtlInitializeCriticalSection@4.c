/*
 * XREFs of _RtlInitializeCriticalSection@4 @ 0x4B2DC2E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  return RtlInitializeCriticalSectionEx(CriticalSection, 0, 0);
}
