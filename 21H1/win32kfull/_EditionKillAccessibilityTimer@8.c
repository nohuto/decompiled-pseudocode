/*
 * XREFs of _EditionKillAccessibilityTimer@8 @ 0x178254
 * Callers:
 *     <none>
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

int __stdcall EditionKillAccessibilityTimer(unsigned int a1, int a2)
{
  return FindTimer(a1, a2, 4u, 1, 0);
}
