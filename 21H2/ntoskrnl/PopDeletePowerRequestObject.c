/*
 * XREFs of PopDeletePowerRequestObject @ 0x140670030
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x140270A38 (PopPowerRequestCleanUp.c)
 */

__int64 __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
