/*
 * XREFs of _RtlUnlockHeap@4 @ 0x4B2DD9F0
 * Callers:
 *     _RtlValidateHeap@12 @ 0x4B2A7420 (_RtlValidateHeap@12.c)
 *     _RtlExitUserProcess@4 @ 0x4B2DD5D0 (_RtlExitUserProcess@4.c)
 *     _RtlUnlockProcessHeapOnProcessTerminate@0 @ 0x4B2DD99E (_RtlUnlockProcessHeapOnProcessTerminate@0.c)
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _RtlpLockUlockAllHeapsCallback@8 @ 0x4B3589D0 (_RtlpLockUlockAllHeapsCallback@8.c)
 *     _RtlpQueryExtendedHeapInformation@12 @ 0x4B3589F0 (_RtlpQueryExtendedHeapInformation@12.c)
 *     _RtlpHpStackTraceHeapSerialize@8 @ 0x4B36E530 (_RtlpHpStackTraceHeapSerialize@8.c)
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlBackoff@4 @ 0x4B2DBA90 (_RtlBackoff@4.c)
 *     _RtlpUnWaitCriticalSectionEx@8 @ 0x4B2DF2D0 (_RtlpUnWaitCriticalSectionEx@8.c)
 *     _RtlpCreateDeferredCriticalSectionEvent@4 @ 0x4B2DFE90 (_RtlpCreateDeferredCriticalSectionEvent@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpNotOwnerCriticalSection@4 @ 0x4B34A880 (_RtlpNotOwnerCriticalSection@4.c)
 *     _RtlpLogHeapUnlockEvent@4 @ 0x4B36F567 (_RtlpLogHeapUnlockEvent@4.c)
 *     _RtlpHpHeapUnlock@12 @ 0x4B379185 (_RtlpHpHeapUnlock@12.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  int v1; // ecx
  PVOID v2; // esi
  int v3; // edi
  _DWORD *SharedData; // eax
  int v6; // eax
  volatile signed __int32 *v8; // esi
  signed __int32 i; // ebx
  unsigned int v10; // [esp+10h] [ebp-Ch] BYREF
  signed __int32 v11; // [esp+14h] [ebp-8h]
  int DeferredCriticalSectionEvent; // [esp+18h] [ebp-4h]

  v2 = HeapHandle;
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
  {
    RtlpHpHeapUnlock(v1);
LABEL_7:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v6 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v6 = 2147353472;
    if ( *(_BYTE *)v6 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapUnlockEvent(v2);
    }
    return 1;
  }
  if ( (*((_DWORD *)HeapHandle + 17) & 0x1000000) != 0 )
    return dword_4B3A376C(dword_4B3A376C, HeapHandle);
  if ( *((_DWORD *)HeapHandle + 24) == -285217025 )
  {
    if ( (*((_BYTE *)HeapHandle + 64) & 1) == 0 )
    {
      v3 = *((_DWORD *)HeapHandle + 50);
      --*((_WORD *)HeapHandle + 116);
      if ( (*(_DWORD *)(v3 + 8))-- == 1 )
      {
        *(_DWORD *)(v3 + 12) = 0;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 4), -1, -2);
        if ( v11 != -2 )
        {
          if ( (*(_BYTE *)(v3 + 4) & 1) != 0 )
            RtlpNotOwnerCriticalSection(v3);
          DeferredCriticalSectionEvent = *(_DWORD *)(v3 + 16);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v3);
          v10 = 0;
          v8 = (volatile signed __int32 *)(v3 + 4);
          for ( i = v11; _InterlockedCompareExchange(v8, (i & 2 | 1) + i, i) != i; i = *v8 )
            RtlBackoff(&v10);
          v2 = HeapHandle;
          if ( (i & 2) != 0 )
            RtlpUnWaitCriticalSectionEx(v3, DeferredCriticalSectionEvent);
        }
      }
    }
    goto LABEL_7;
  }
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint("Invalid heap signature for heap at %p", HeapHandle);
  DbgPrint(", passed to %s", "RtlUnlockHeap");
  DbgPrint("\n");
  if ( NtCurrentPeb()->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return 0;
}
