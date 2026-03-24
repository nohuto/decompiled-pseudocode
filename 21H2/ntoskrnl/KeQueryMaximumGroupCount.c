/*
 * XREFs of KeQueryMaximumGroupCount @ 0x140278EF0
 * Callers:
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
