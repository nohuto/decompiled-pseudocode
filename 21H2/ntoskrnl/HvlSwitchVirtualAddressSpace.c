/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x14054CAE0
 * Callers:
 *     KiSwapProcess @ 0x1402D0BA0 (KiSwapProcess.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x1402F25C0 (KiSwapDirectoryTableBaseTarget.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x140346E50 (KiAttachProcess.c)
 *     KiDetachProcess @ 0x1403470F0 (KiDetachProcess.c)
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 */

__int64 HvlSwitchVirtualAddressSpace()
{
  return HvcallInitiateHypercall(65537);
}
