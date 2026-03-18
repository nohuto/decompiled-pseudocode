/*
 * XREFs of MiZeroMemory @ 0x1403338A0
 * Callers:
 *     MiZeroWithSystemPtes @ 0x1403F39F8 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F3CD8 (MiZeroWithUltraSpace.c)
 * Callees:
 *     KeZeroPages @ 0x140400950 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroMemory(__int64 a1, __int64 a2)
{
  return KeZeroPages(a1, a2);
}
