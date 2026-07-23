/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1404FACE0
 * Callers:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiSwapProcess @ 0x1402ABB30 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x1402ABC40 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1402ABF00 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1402ACB50 (MiTrimOrAgeWorkingSet.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1403885F0 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
