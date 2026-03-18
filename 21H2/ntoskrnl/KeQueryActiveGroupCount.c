/*
 * XREFs of KeQueryActiveGroupCount @ 0x1402622B0
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     EtwpProcessorRundown @ 0x1409EB100 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
