/*
 * XREFs of PopDeletePowerRequestObject @ 0x14071DCB0
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 */

LONG_PTR __fastcall PopDeletePowerRequestObject(unsigned int *a1)
{
  return PopPowerRequestCleanUp(a1);
}
