/*
 * XREFs of _RtlInitializeExceptionLog@4 @ 0x4B368689
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void *RtlInitializeExceptionLog()
{
  void *result; // eax

  result = (void *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 40800);
  RtlpExceptionLog2 = (int)result;
  if ( result )
    return memset(result, 0, 0x9F60u);
  return result;
}
