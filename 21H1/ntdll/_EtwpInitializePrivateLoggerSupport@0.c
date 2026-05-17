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
  int Heap; // edx
  unsigned int i; // eax

  if ( EtwpLoggerArray )
    return 0;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 512);
  if ( Heap )
  {
    for ( i = 0; i < 0x40; ++i )
      *(_DWORD *)(Heap + 8 * i) = 1;
    if ( _InterlockedCompareExchange(&EtwpLoggerArray, Heap, 0) )
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
    return 0;
  }
  return 1450;
}
