/*
 * XREFs of HalpTscAdvSynchSkewCounter @ 0x1404C1354
 * Callers:
 *     HalpTscAdvSynchTarget @ 0x14039D33C (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchToTarget @ 0x1404C15A8 (HalpTscAdvSynchToTarget.c)
 * Callees:
 *     HalpProcessorFence @ 0x1403F9EA0 (HalpProcessorFence.c)
 */

unsigned __int64 __fastcall HalpTscAdvSynchSkewCounter(__int64 a1)
{
  unsigned __int64 result; // rax

  HalpProcessorFence();
  result = a1 + __rdtsc();
  __writemsr(0x10u, result);
  return result;
}
