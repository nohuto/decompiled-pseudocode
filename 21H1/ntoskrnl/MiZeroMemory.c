/*
 * XREFs of MiZeroMemory @ 0x140324C30
 * Callers:
 *     MiZeroWithSystemPtes @ 0x1403EE228 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403EE508 (MiZeroWithUltraSpace.c)
 * Callees:
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroMemory(__int64 a1, __int64 a2)
{
  return KeZeroPages(a1, a2);
}
