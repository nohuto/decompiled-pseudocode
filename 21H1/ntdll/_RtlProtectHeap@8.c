/*
 * XREFs of _RtlProtectHeap@8 @ 0x4B2A9010
 * Callers:
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _LdrProtectMrdataHeap@4 @ 0x4B2EC610 (_LdrProtectMrdataHeap@4.c)
 * Callees:
 *     _RtlpProtectHeap@8 @ 0x4B2A90B8 (_RtlpProtectHeap@8.c)
 *     _RtlpAddHeapToProtectedList@4 @ 0x4B2A91B0 (_RtlpAddHeapToProtectedList@4.c)
 *     _RtlpRemoveHeapFromProtectedList@4 @ 0x4B2A9206 (_RtlpRemoveHeapFromProtectedList@4.c)
 *     _RtlpGetHeapProtection@8 @ 0x4B2AF0A0 (_RtlpGetHeapProtection@8.c)
 *     _RtlpRemoveHeapFromUnprotectedList@4 @ 0x4B2AFAAC (_RtlpRemoveHeapFromUnprotectedList@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpAddHeapToUnprotectedList@4 @ 0x4B2E663D (_RtlpAddHeapToUnprotectedList@4.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 *     _RtlpHpHeapProtect@8 @ 0x4B379008 (_RtlpHpHeapProtect@8.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // edi
  int v3; // eax
  ULONG_PTR *v4; // [esp+0h] [ebp-28h]
  PVOID MemoryInformation; // [esp+Ch] [ebp-1Ch] BYREF
  int v6; // [esp+10h] [ebp-18h]

  if ( *((_DWORD *)HeapHandle + 2) == -571548178 || (*((_DWORD *)HeapHandle + 17) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
    {
      HeapProtection = (*((_DWORD *)HeapHandle + 3) & 0x40000000) != 0 ? 64 : 4;
      if ( (*((_DWORD *)HeapHandle + 3) & 0x40000000) != 0
        && (NtQueryVirtualMemory(
              (HANDLE)0xFFFFFFFF,
              HeapHandle,
              MemoryRegionInformation,
              &MemoryInformation,
              0x1CuLL,
              v4) < 0
         || (v6 & 0x60) == 0
         || MemoryInformation != HeapHandle) )
      {
        RtlpLogHeapFailure(1, v6, 0, 0);
        HeapProtection = 4;
      }
    }
    else
    {
      HeapProtection = RtlpGetHeapProtection(HeapHandle);
    }
    if ( MakeReadOnly )
    {
      RtlpRemoveHeapFromUnprotectedList(HeapHandle);
      RtlpAddHeapToProtectedList(HeapHandle);
      HeapProtection = HeapProtection != 64 ? 2 : 32;
    }
    if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
      v3 = RtlpHpHeapProtect(HeapHandle, HeapProtection);
    else
      v3 = RtlpProtectHeap(HeapHandle, HeapProtection);
    if ( v3 >= 0 && !MakeReadOnly )
    {
      RtlpRemoveHeapFromProtectedList(HeapHandle);
      RtlpAddHeapToUnprotectedList(HeapHandle);
    }
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
