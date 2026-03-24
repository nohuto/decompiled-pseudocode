/*
 * XREFs of KeAreAllApcsDisabled @ 0x14025AC80
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x1402BD930 (EtwpTraceImageUnloadApc.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1402EE838 (PnpIsSafeToExamineUserModeTeb.c)
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 *     IopCopyCompleteReadIrp @ 0x1403F16B0 (IopCopyCompleteReadIrp.c)
 *     EtwpEnumerateAddressSpace @ 0x14061A45C (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x14061B230 (PsCallImageNotifyRoutines.c)
 *     PerfLogImageUnload @ 0x140629C50 (PerfLogImageUnload.c)
 *     MmFlushVirtualMemory @ 0x140689134 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x1409EC7F4 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1403506D0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
