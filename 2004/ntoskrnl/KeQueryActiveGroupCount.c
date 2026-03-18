/*
 * XREFs of KeQueryActiveGroupCount @ 0x14030B900
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
 *     EtwpProcessorRundown @ 0x14093B28C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
