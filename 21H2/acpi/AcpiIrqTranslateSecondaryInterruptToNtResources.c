/*
 * XREFs of AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C0049974
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0099940 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C00B6D8C (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00ADD88 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 */

__int64 AcpiIrqTranslateSecondaryInterruptToNtResources()
{
  return AcpiExternalQueryTranslatedDescriptorForGsiv();
}
