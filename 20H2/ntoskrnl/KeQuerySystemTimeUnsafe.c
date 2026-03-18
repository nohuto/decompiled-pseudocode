/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1402D6A04
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
