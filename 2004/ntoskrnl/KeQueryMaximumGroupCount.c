/*
 * XREFs of KeQueryMaximumGroupCount @ 0x1402F9560
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryMaximumGroupCount(void)
{
  return KiMaximumGroups;
}
