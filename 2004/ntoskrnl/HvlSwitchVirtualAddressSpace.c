/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1404F5930
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140203D20 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapProcess @ 0x1402055A0 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140205710 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402059D0 (KiDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140385BA0 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1403FE130 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038DB00 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
