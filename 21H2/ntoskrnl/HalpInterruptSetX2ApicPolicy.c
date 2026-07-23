/*
 * XREFs of HalpInterruptSetX2ApicPolicy @ 0x1404BCB18
 * Callers:
 *     HalpIommuInitSystem @ 0x14099C9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptSetX2ApicPolicy(char a1)
{
  HalpInterruptX2ApicPolicy = a1;
}
