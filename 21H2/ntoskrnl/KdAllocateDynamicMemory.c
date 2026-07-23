/*
 * XREFs of KdAllocateDynamicMemory @ 0x140A575F8
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     KdSetDbgPrintBufferSize @ 0x140511924 (KdSetDbgPrintBufferSize.c)
 */

__int64 KdAllocateDynamicMemory()
{
  __int64 result; // rax

  result = 0LL;
  if ( (_DWORD)KdPrintBufferAllocateSize )
    return KdSetDbgPrintBufferSize((unsigned int)KdPrintBufferAllocateSize);
  return result;
}
