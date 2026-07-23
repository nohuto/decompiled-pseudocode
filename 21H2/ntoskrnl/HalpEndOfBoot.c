/*
 * XREFs of HalpEndOfBoot @ 0x1407D5920
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x14099C49C (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
