/*
 * XREFs of HalpEndOfBoot @ 0x1407BF5D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140996B0C (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
