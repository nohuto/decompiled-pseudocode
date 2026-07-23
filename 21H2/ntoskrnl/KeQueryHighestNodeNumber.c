/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1402942B0
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406A7700 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1407738E0 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x14093EA5C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
