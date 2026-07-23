/*
 * XREFs of _RtlInitializeCriticalSectionAndSpinCount@8 @ 0x4B2E1B50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  return RtlInitializeCriticalSectionEx(CriticalSection, SpinCount & 0xFFFFFF, 0);
}
