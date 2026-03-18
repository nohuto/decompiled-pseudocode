/*
 * XREFs of HalpSetIrtEntry @ 0x1404CFBA8
 * Callers:
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 * Callees:
 *     HalpIommuUpdateRemappingTableEntry @ 0x1404C3C64 (HalpIommuUpdateRemappingTableEntry.c)
 */

void __fastcall HalpSetIrtEntry(char a1, _DWORD *a2, __int64 a3)
{
  HalpIommuUpdateRemappingTableEntry(a1, *a2 & 0x3FFFFFFF, a3);
}
