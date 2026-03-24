/*
 * XREFs of PopDeletePowerRequestObject @ 0x14067C4F0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x14028278C (PopPowerRequestCleanUp.c)
 */

__int64 __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
