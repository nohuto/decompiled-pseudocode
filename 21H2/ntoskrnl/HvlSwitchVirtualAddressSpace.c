/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1404FAD60
 * Callers:
 *     KiSwapProcess @ 0x140207230 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140207340 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140207600 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140208250 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403884A0 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1404067C0 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403904C0 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
