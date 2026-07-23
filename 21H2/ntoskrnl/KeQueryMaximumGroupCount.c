/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140266E90
 * Callers:
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
