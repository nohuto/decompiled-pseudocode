/*
 * XREFs of KeQueryActiveGroupCount @ 0x1402E2F50
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PsCreateSystemThreadEx @ 0x1406D0190 (PsCreateSystemThreadEx.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     EtwpProcessorRundown @ 0x14093E88C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
