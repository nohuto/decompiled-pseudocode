/*
 * XREFs of _RtlSetCriticalSectionSpinCount@8 @ 0x4B2E8980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlSetCriticalSectionSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  unsigned int v2; // eax
  ULONG v3; // ecx

  v2 = CriticalSection->SpinCount;
  v3 = v2 ^ (SpinCount ^ v2) & 0xFFFFFF;
  if ( NtCurrentPeb()->NumberOfProcessors == 1 )
    v3 &= 0xFF000000;
  CriticalSection->SpinCount = v3;
  return v2 & 0xFFFFFF;
}
