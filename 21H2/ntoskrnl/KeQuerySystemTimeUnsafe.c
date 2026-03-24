/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x140278EC8
 * Callers:
 *     PspExitThread @ 0x14064A838 (PspExitThread.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
