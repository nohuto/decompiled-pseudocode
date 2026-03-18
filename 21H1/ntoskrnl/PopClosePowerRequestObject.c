/*
 * XREFs of PopClosePowerRequestObject @ 0x1406FF6A0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 */

LONG_PTR __fastcall PopClosePowerRequestObject(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  LONG_PTR result; // rax

  if ( a4 == 1 )
    return PopPowerRequestCleanUp(a2);
  return result;
}
