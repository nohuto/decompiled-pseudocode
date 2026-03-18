/*
 * XREFs of KeAreAllApcsDisabled @ 0x1402A5D40
 * Callers:
 *     EtwpTraceImageUnloadApc @ 0x14030D250 (EtwpTraceImageUnloadApc.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14035B334 (PnpIsSafeToExamineUserModeTeb.c)
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     PsCallImageNotifyRoutines @ 0x140637C00 (PsCallImageNotifyRoutines.c)
 *     EtwpEnumerateAddressSpace @ 0x1406389A4 (EtwpEnumerateAddressSpace.c)
 *     MmFlushVirtualMemory @ 0x1406DC964 (MmFlushVirtualMemory.c)
 *     PerfLogImageUnload @ 0x14070993C (PerfLogImageUnload.c)
 *     ViZwCheckApcRequirement @ 0x1409E9774 (ViZwCheckApcRequirement.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
