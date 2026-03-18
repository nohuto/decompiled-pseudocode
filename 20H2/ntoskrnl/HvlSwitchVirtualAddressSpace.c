/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1404F91C0
 * Callers:
 *     KiSwapProcess @ 0x140268550 (KiSwapProcess.c)
 *     KiAttachProcess @ 0x140268660 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x140268920 (KiDetachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x140269570 (MiTrimOrAgeWorkingSet.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140387D40 (KiSwapDirectoryTableBaseTarget.c)
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FFF0 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
