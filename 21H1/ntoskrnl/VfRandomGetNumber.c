/*
 * XREFs of VfRandomGetNumber @ 0x1409C3270
 * Callers:
 *     VfPendingShouldForce @ 0x1409D294C (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D97BC (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x140A6C1AC (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x1403284B0 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
