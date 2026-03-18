/*
 * XREFs of KeAreApcsDisabled @ 0x14035C8A0
 * Callers:
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
