/*
 * XREFs of _SetGDITimer@16 @ 0x1561E1
 * Callers:
 *     _UserSetTimer@8 @ 0x1A5A50 (_UserSetTimer@8.c)
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 */

int __stdcall SetGDITimer(int a1, int a2)
{
  return InternalSetTimer(0, 0, 0x32u, (int)GreSynchronizeTimer, 0, 132);
}
