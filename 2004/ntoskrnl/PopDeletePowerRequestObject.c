/*
 * XREFs of PopDeletePowerRequestObject @ 0x14064D470
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 */

LONG_PTR __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
