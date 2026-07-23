/*
 * XREFs of _RtlQueryTagHeap@20 @ 0x4B356E90
 * Callers:
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 *     _TpDbgDumpHeapUsage@12 @ 0x4B384700 (_TpDbgDumpHeapUsage@12.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlQueryTagHeap@20 @ 0x4B356E90 (_RtlQueryTagHeap@20.c)
 *     _RtlDebugQueryTagHeap@20 @ 0x4B35FB69 (_RtlDebugQueryTagHeap@20.c)
 */

PWSTR __cdecl RtlQueryTagHeap(
        PVOID HeapHandle,
        ULONG Flags,
        USHORT TagIndex,
        BOOLEAN ResetCounters,
        PRTL_HEAP_TAG_INFO TagInfo)
{
  WCHAR *TagHeap; // ebx
  int v6; // ecx
  int v7; // edx
  ULONG *v8; // ecx
  int v9; // edx
  ULONG *v10; // ecx
  char v12; // [esp+1Bh] [ebp-19h]

  TagHeap = 0;
  v12 = 0;
  if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
    return 0;
  v6 = *((_DWORD *)HeapHandle + 17);
  if ( (v6 & 0x1000000) != 0 || (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
    return 0;
  if ( ((v6 | Flags) & 0x61000000) != 0 && ((v6 | Flags) & 0x10000000) == 0 )
  {
    TagHeap = (WCHAR *)RtlDebugQueryTagHeap(TagIndex, ResetCounters, TagInfo);
  }
  else
  {
    if ( (((unsigned __int8)v6 | (unsigned __int8)Flags) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
      v12 = 1;
    }
    if ( TagIndex < *((_WORD *)HeapHandle + 66) && (v7 = *((_DWORD *)HeapHandle + 34)) != 0 )
    {
      v8 = (ULONG *)(v7 + (TagIndex << 6));
      if ( TagInfo )
      {
        TagInfo->NumberOfAllocations = *v8;
        TagInfo->NumberOfFrees = v8[1];
        LODWORD(TagInfo->BytesAllocated) = 8 * v8[2];
      }
      if ( ResetCounters )
      {
        *v8 = 0;
        v8[1] = 0;
        v8[2] = 0;
      }
      TagHeap = (WCHAR *)(v8 + 4);
    }
    else if ( (TagIndex & 0x8000u) != 0 && (TagIndex ^ 0x8000u) < 0x81 )
    {
      v9 = *((_DWORD *)HeapHandle + 47);
      if ( v9 )
      {
        v10 = (ULONG *)(v9 + 12 * (TagIndex ^ 0x8000));
        if ( TagInfo )
        {
          TagInfo->NumberOfAllocations = *v10;
          TagInfo->NumberOfFrees = v10[1];
          LODWORD(TagInfo->BytesAllocated) = 8 * v10[2];
        }
        if ( ResetCounters )
        {
          *v10 = 0;
          v10[1] = 0;
          v10[2] = 0;
        }
        TagHeap = (WCHAR *)&dword_4B285DEC;
      }
    }
  }
  if ( v12 )
    RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 50));
  return TagHeap;
}
