/*
 * XREFs of HalpInterruptSetX2ApicPolicy @ 0x1404BAF18
 * Callers:
 *     HalpIommuInitSystem @ 0x1409A16B0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptSetX2ApicPolicy(char a1)
{
  HalpInterruptX2ApicPolicy = a1;
}
