/*
 * XREFs of KeAreApcsDisabled @ 0x1402DD4E0
 * Callers:
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
