/*
 * XREFs of KeAreAllApcsDisabled @ 0x14024CD10
 * Callers:
 *     PnpIsSafeToExamineUserModeTeb @ 0x140275180 (PnpIsSafeToExamineUserModeTeb.c)
 *     EtwpTraceImageUnloadApc @ 0x14034A540 (EtwpTraceImageUnloadApc.c)
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     PsCallImageNotifyRoutines @ 0x140602BC0 (PsCallImageNotifyRoutines.c)
 *     EtwpEnumerateAddressSpace @ 0x140603964 (EtwpEnumerateAddressSpace.c)
 *     PerfLogImageUnload @ 0x1406B3AEC (PerfLogImageUnload.c)
 *     MmFlushVirtualMemory @ 0x1406FF904 (MmFlushVirtualMemory.c)
 *     ViZwCheckApcRequirement @ 0x1409E97D4 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
