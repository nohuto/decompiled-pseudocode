/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140263710
 * Callers:
 *     IoGetDeviceNumaNode @ 0x1406EAE80 (IoGetDeviceNumaNode.c)
 *     ExpQueryNumaProcessorMap @ 0x1406F2350 (ExpQueryNumaProcessorMap.c)
 *     EtwpProcessorRundown @ 0x1409EB100 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
