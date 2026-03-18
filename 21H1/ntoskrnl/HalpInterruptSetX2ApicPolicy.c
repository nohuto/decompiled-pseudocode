/*
 * XREFs of HalpInterruptSetX2ApicPolicy @ 0x1404B7318
 * Callers:
 *     HalpIommuInitSystem @ 0x140997040 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptSetX2ApicPolicy(char a1)
{
  HalpInterruptX2ApicPolicy = a1;
}
