/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1402E2F60
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406D0420 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140773720 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x14093E88C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
