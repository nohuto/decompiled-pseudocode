/*
 * XREFs of KeQuerySystemTimeUnsafe @ 0x1402F0880
 * Callers:
 *     PspAllocateProcess @ 0x14070BD10 (PspAllocateProcess.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PspAllocateThread @ 0x1407A34A0 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 KeQuerySystemTimeUnsafe()
{
  return MEMORY[0xFFFFF78000000014];
}
