/*
 * XREFs of HalpInterruptSetRemappedLineState @ 0x14050850C
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403BACF8 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403D59D4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetRemappedLineState(int *a1)
{
  ULONG_PTR *v1; // rax
  unsigned int *v2; // r9
  __int64 v3; // r10

  v1 = HalpInterruptLookupController(*a1);
  if ( v1 )
    return HalpInterruptSetRemappedLineStateInternal((__int64)v1, v2, v3);
  HalpInterruptSetProblemEx(0, 17, 1, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 3282);
  return 3221225485LL;
}
