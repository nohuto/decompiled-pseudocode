/*
 * XREFs of KeAreApcsDisabled @ 0x1403632C0
 * Callers:
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
