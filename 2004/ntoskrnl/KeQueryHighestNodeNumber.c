/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1402DE420
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406A6FC4 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140761200 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x14093B28C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
