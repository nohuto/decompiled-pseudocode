/*
 * XREFs of HalpInterruptSetX2ApicPolicy @ 0x1404B79F8
 * Callers:
 *     HalpIommuInitSystem @ 0x14099B5B0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptSetX2ApicPolicy(char a1)
{
  HalpInterruptX2ApicPolicy = a1;
}
