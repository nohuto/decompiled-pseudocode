/*
 * XREFs of PopClosePowerRequestObject @ 0x140670E10
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 */

__int64 __fastcall PopClosePowerRequestObject(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return PopPowerRequestCleanUp(a2);
  return result;
}
