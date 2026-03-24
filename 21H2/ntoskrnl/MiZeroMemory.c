/*
 * XREFs of MiZeroMemory @ 0x1402E65E4
 * Callers:
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 * Callees:
 *     KeZeroPages @ 0x140402DB0 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroMemory(__int64 a1, __int64 a2, __int64 a3)
{
  return KeZeroPages(a1, a2, a3);
}
