/*
 * XREFs of KeAreApcsDisabled @ 0x140280EC0
 * Callers:
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
