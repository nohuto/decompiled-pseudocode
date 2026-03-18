/*
 * XREFs of KeQueryHighestNodeNumber @ 0x14033F570
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406F9D80 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x14076F810 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1409410BC (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
