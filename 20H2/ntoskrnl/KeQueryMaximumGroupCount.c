/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1402D6A60
 * Callers:
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
