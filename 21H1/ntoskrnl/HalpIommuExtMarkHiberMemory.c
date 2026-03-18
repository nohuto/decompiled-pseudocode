/*
 * XREFs of HalpIommuExtMarkHiberMemory @ 0x1404C6A40
 * Callers:
 *     HsaMarkHiberRegions @ 0x1409A6E70 (HsaMarkHiberRegions.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403847F0 (PoSetHiberRange.c)
 */

void __fastcall HalpIommuExtMarkHiberMemory(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
