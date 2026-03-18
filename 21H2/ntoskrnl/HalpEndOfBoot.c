/*
 * XREFs of HalpEndOfBoot @ 0x140865520
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140A54628 (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
