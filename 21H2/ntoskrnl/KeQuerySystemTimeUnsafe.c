/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140266E68
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
