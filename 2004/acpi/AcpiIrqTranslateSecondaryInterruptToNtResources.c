/*
 * XREFs of AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C004AD64
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0092500 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C0096BD8 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AEE18 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 */

__int64 AcpiIrqTranslateSecondaryInterruptToNtResources()
{
  return AcpiExternalQueryTranslatedDescriptorForGsiv();
}
