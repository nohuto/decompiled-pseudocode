/*
 * XREFs of HalpEndOfBoot @ 0x1407D1330
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x14099DF1C (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
