/*
 * XREFs of KeAreAllApcsDisabled @ 0x14027C1F0
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x14023BF70 (EtwpTraceImageUnloadApc.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1402F9588 (PnpIsSafeToExamineUserModeTeb.c)
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     IopCopyCompleteReadIrp @ 0x1403F1580 (IopCopyCompleteReadIrp.c)
 *     MmFlushVirtualMemory @ 0x1405E85C4 (MmFlushVirtualMemory.c)
 *     PerfLogImageUnload @ 0x1405FE2D4 (PerfLogImageUnload.c)
 *     EtwpEnumerateAddressSpace @ 0x1406840BC (EtwpEnumerateAddressSpace.c)
 *     PsCallImageNotifyRoutines @ 0x140684E90 (PsCallImageNotifyRoutines.c)
 *     ViZwCheckApcRequirement @ 0x1409ED7F4 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
