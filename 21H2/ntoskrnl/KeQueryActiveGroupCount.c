/*
 * XREFs of KeQueryActiveGroupCount @ 0x1402942A0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     EtwpProcessorRundown @ 0x14093EA5C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
