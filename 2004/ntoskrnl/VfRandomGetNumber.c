/*
 * XREFs of VfRandomGetNumber @ 0x1409C3280
 * Callers:
 *     VfPendingShouldForce @ 0x1409D29AC (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x1409D981C (VfFaultsInjectResourceFailure.c)
 *     ViInitPickRandomTargets @ 0x140A6C43C (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x1402E2150 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
