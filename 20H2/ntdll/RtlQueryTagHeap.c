/*
 * XREFs of RtlQueryTagHeap @ 0x1800F2C40
 * Callers:
 *     RtlDebugQueryTagHeap @ 0x1800F99F4 (RtlDebugQueryTagHeap.c)
 *     TpDbgDumpHeapUsage @ 0x180112440 (TpDbgDumpHeapUsage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlDebugQueryTagHeap @ 0x1800F99F4 (RtlDebugQueryTagHeap.c)
 */

PWSTR __cdecl RtlQueryTagHeap(
        PVOID HeapHandle,
        ULONG Flags,
        USHORT TagIndex,
        BOOLEAN ResetCounters,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  int v7; // ecx
  WCHAR *TagHeap; // rdi
  char v9; // dl
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v14; // [rsp+30h] [rbp-28h]

  v14 = 0;
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
    return 0LL;
  v7 = *((_DWORD *)HeapHandle + 29);
  if ( (v7 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0LL;
  TagHeap = 0LL;
  v9 = v7 | Flags;
  if ( ((v7 | Flags) & 0x61000000) != 0 && ((v7 | Flags) & 0x10000000) == 0 )
  {
    TagHeap = (WCHAR *)RtlDebugQueryTagHeap(HeapHandle, TagInfo);
  }
  else
  {
    if ( (v9 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      v14 = 1;
    }
    if ( TagIndex < *((_WORD *)HeapHandle + 112) && (v10 = *((_QWORD *)HeapHandle + 29)) != 0 )
    {
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *(_DWORD *)(v10 + 72LL * TagIndex);
        TagInfo->NumberOfFrees = *(_DWORD *)(v10 + 72LL * TagIndex + 4);
        TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v10 + 72LL * TagIndex + 8);
      }
      if ( ResetCounters )
      {
        *(_QWORD *)(v10 + 72LL * TagIndex) = 0LL;
        *(_QWORD *)(v10 + 72LL * TagIndex + 8) = 0LL;
      }
      TagHeap = (WCHAR *)(v10 + 20 + 72LL * TagIndex);
    }
    else if ( (TagIndex & 0x8000u) != 0 && (TagIndex ^ 0x8000u) < 0x81 )
    {
      v11 = *((_QWORD *)HeapHandle + 41);
      if ( v11 )
      {
        v12 = v11 + 16LL * (TagIndex ^ 0x8000u);
        if ( TagInfo )
        {
          TagInfo->NumberOfAllocations = *(_DWORD *)v12;
          TagInfo->NumberOfFrees = *(_DWORD *)(v12 + 4);
          TagInfo->BytesAllocated = 16LL * *(_QWORD *)(v12 + 8);
        }
        if ( ResetCounters )
        {
          *(_QWORD *)v12 = 0LL;
          *(_QWORD *)(v12 + 8) = 0LL;
        }
        TagHeap = (WCHAR *)&word_180122374;
      }
    }
  }
  if ( v14 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
  return TagHeap;
}
