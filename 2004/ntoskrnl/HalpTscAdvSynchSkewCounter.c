/*
 * XREFs of HalpTscAdvSynchSkewCounter @ 0x1404BC224
 * Callers:
 *     HalpTscAdvSynchTarget @ 0x14039A45C (HalpTscAdvSynchTarget.c)
 *     HalpTscAdvSynchToTarget @ 0x1404BC478 (HalpTscAdvSynchToTarget.c)
 * Callees:
 *     HalpProcessorFence @ 0x1403F2EE0 (HalpProcessorFence.c)
 */

unsigned __int64 __fastcall HalpTscAdvSynchSkewCounter(__int64 a1)
{
  unsigned __int64 result; // rax

  HalpProcessorFence();
  result = a1 + __rdtsc();
  __writemsr(0x10u, result);
  return result;
}
