/*
 * XREFs of VfRandomGetNumber @ 0x1409C92A0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D89CC (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x1409DF83C (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x140A72D1C (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x140336C50 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
