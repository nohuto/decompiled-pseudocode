/*
 * XREFs of KeAreAllApcsDisabled @ 0x1402339C0
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140243F94 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwpTraceImageUnloadApc @ 0x14031B820 (EtwpTraceImageUnloadApc.c)
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0900 (IopCopyCompleteReadIrp.c)
 *     PsCallImageNotifyRoutines @ 0x140628420 (PsCallImageNotifyRoutines.c)
 *     EtwpEnumerateAddressSpace @ 0x140629054 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageUnload @ 0x140699AB0 (PerfLogImageUnload.c)
 *     MmFlushVirtualMemory @ 0x1406D2554 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x1409EF7F4 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
