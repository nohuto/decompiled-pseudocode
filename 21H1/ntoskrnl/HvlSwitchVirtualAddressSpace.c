/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1404F52E0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14025CC40 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapProcess @ 0x14025E4C0 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x14025E630 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x14025E8F0 (KiDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140384C30 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1403FCEA0 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
