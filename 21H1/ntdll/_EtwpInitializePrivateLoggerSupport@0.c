/*
 * XREFs of _EtwpInitializePrivateLoggerSupport@0 @ 0x4B2F1ADF
 * Callers:
 *     _EtwpGetNextAvailableLoggerId@8 @ 0x4B2F1A70 (_EtwpGetNextAvailableLoggerId@8.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __stdcall EtwpInitializePrivateLoggerSupport()
{
  _DWORD *Heap; // edx
  unsigned int i; // eax
  SIZE_T v3; // [esp-4h] [ebp-8h]

  if ( EtwpLoggerArray )
    return 0;
  LODWORD(v3) = 512;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v3);
  if ( Heap )
  {
    for ( i = 0; i < 0x40; ++i )
      Heap[2 * i] = 1;
    if ( _InterlockedCompareExchange(&EtwpLoggerArray, (signed __int32)Heap, 0) )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 0;
  }
  return 1450;
}
