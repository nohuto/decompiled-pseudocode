/*
 * XREFs of MiZeroMemory @ 0x140297934
 * Callers:
 *     MiZeroWithSystemPtes @ 0x1403F5238 (MiZeroWithSystemPtes.c)
 *     MiZeroWithUltraSpace @ 0x1403F5518 (MiZeroWithUltraSpace.c)
 * Callees:
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 */

__int64 __fastcall MiZeroMemory(__int64 a1, __int64 a2)
{
  return KeZeroPages(a1, a2);
}
