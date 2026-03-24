/*
 * XREFs of HalpInterruptSetX2ApicPolicy @ 0x1404BC8D8
 * Callers:
 *     HalpIommuInitSystem @ 0x14099B9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptSetX2ApicPolicy(char a1)
{
  HalpInterruptX2ApicPolicy = a1;
}
