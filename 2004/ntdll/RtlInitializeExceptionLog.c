/*
 * XREFs of RtlInitializeExceptionLog @ 0x180100568
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

void *RtlInitializeExceptionLog()
{
  void *result; // rax

  result = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 71200LL);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
    return memset(result, 0, 0x11620uLL);
  return result;
}
