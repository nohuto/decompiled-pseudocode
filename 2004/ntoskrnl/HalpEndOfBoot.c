/*
 * XREFs of HalpEndOfBoot @ 0x1407C2B30
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140997EDC (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
