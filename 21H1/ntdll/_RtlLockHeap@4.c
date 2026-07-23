/*
 * XREFs of _RtlLockHeap@4 @ 0x4B2DDA90
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _RtlpLockUlockAllHeapsCallback@8 @ 0x4B3589D0 (_RtlpLockUlockAllHeapsCallback@8.c)
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     _RtlpHpStackTraceHeapSerialize@8 @ 0x4B36E530 (_RtlpHpStackTraceHeapSerialize@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpLogHeapLockEvent@4 @ 0x4B36F0FE (_RtlpLogHeapLockEvent@4.c)
 *     _RtlpHpHeapLock@8 @ 0x4B378F59 (_RtlpHpHeapLock@8.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  _DWORD *SharedData; // eax
  int v2; // eax
  char v4; // [esp+Bh] [ebp-1h] BYREF

  v4 = -1;
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
  {
    RtlpHpHeapLock(HeapHandle, &v4);
LABEL_6:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v2 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v2 = 2147353472;
    if ( *(_BYTE *)v2 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapLockEvent(HeapHandle);
    }
    return 1;
  }
  if ( (*((_DWORD *)HeapHandle + 17) & 0x1000000) != 0 )
    return dword_4B3A3768(dword_4B3A3768, HeapHandle);
  if ( *((_DWORD *)HeapHandle + 24) == -285217025 )
  {
    if ( (*((_BYTE *)HeapHandle + 64) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
      ++*((_WORD *)HeapHandle + 116);
    }
    goto LABEL_6;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", HeapHandle);
  DbgPrint(", passed to %s", "RtlLockHeap");
  DbgPrint("\n");
  if ( NtCurrentPeb()->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return 0;
}
