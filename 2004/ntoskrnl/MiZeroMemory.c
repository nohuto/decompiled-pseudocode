/*
 * XREFs of MiZeroMemory @ 0x1402DFB30
 * Callers:
 *     MiZeroWithSystemPtes @ 0x1403EF588 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EF868 (MiZeroWithUltraSpace.c)
 * Callees:
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroMemory(__int64 a1, __int64 a2, __int64 a3)
{
  return KeZeroPages(a1, a2, a3);
}
