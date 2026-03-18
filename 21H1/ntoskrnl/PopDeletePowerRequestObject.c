/*
 * XREFs of PopDeletePowerRequestObject @ 0x140700000
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 */

LONG_PTR __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
