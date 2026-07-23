/*
 * XREFs of _RtlInitializeExceptionLog@4 @ 0x4B368689
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

PVOID RtlInitializeExceptionLog()
{
  PVOID result; // eax
  SIZE_T v1; // [esp-4h] [ebp-8h]
  size_t v2; // [esp-4h] [ebp-8h]

  LODWORD(v1) = 40800;
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  RtlpExceptionLog2 = (int)result;
  if ( result )
  {
    LODWORD(v2) = 40800;
    return memset(result, 0, v2);
  }
  return result;
}
