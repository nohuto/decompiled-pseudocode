/*
 * XREFs of _RtlApplicationVerifierStop@40 @ 0x4B33A020
 * Callers:
 *     _RtlCheckHeldCriticalSections@8 @ 0x4B2E8510 (_RtlCheckHeldCriticalSections@8.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpPageHeapStop@40 @ 0x4B33A097 (_RtlpPageHeapStop@40.c)
 */

unsigned int __stdcall RtlApplicationVerifierStop(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int result; // eax

  result = NtCurrentPeb()->NtGlobalFlag & 0x2000100;
  if ( result == 0x2000000 )
    return RtlpPageHeapStop(a3, a4, a5, a6, a7, a8, a9, a10);
  if ( AVrfpVerifierStopMessageFunction )
    return AVrfpVerifierStopMessageFunction(AVrfpVerifierStopMessageFunction, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return result;
}
