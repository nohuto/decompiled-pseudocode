/*
 * XREFs of KeQueryHighestNodeNumber @ 0x140328240
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406F0C54 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x14075EE00 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x140939FEC (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
