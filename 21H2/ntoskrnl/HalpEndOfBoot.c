/*
 * XREFs of HalpEndOfBoot @ 0x1407D57B0
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x14099B49C (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
