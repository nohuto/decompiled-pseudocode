/*
 * XREFs of KdAllocateDynamicMemory @ 0x140A54954
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     KdSetDbgPrintBufferSize @ 0x14050C284 (KdSetDbgPrintBufferSize.c)
 */

__int64 KdAllocateDynamicMemory()
{
  __int64 result; // rax

  result = 0LL;
  if ( (_DWORD)KdPrintBufferAllocateSize )
    return KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
  return result;
}
