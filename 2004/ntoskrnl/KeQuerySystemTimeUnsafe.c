/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1402F9514
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspExitThread @ 0x1406B05E0 (PspExitThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
