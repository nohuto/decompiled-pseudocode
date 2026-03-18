/*
 * XREFs of KeQueryActiveGroupCount @ 0x1403379E0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     PsCreateSystemThreadEx @ 0x1406EE080 (PsCreateSystemThreadEx.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     EtwpProcessorRundown @ 0x1409410BC (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
