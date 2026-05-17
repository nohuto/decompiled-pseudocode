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

void __stdcall RtlProtectHeap(_DWORD *a1, char a2)
{
  int HeapProtection; // edi
  int v3; // eax
  _DWORD *v4; // [esp+Ch] [ebp-1Ch] BYREF
  int v5; // [esp+10h] [ebp-18h]

  if ( a1[2] == -571548178 || (a1[17] & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( a1[2] == -571548178 )
    {
      HeapProtection = (a1[3] & 0x40000000) != 0 ? 64 : 4;
      if ( (a1[3] & 0x40000000) != 0
        && ((int)NtQueryVirtualMemory(-1, a1, 3, &v4, 28, 0) < 0 || (v5 & 0x60) == 0 || v4 != a1) )
      {
        RtlpLogHeapFailure(1, v5, 0, 0);
        HeapProtection = 4;
      }
    }
    else
    {
      HeapProtection = RtlpGetHeapProtection(a1, 1);
    }
    if ( a2 )
    {
      RtlpRemoveHeapFromUnprotectedList(a1);
      RtlpAddHeapToProtectedList(a1);
      HeapProtection = HeapProtection != 64 ? 2 : 32;
    }
    if ( a1[2] == -571548178 )
      v3 = RtlpHpHeapProtect(a1, HeapProtection);
    else
      v3 = RtlpProtectHeap(a1, HeapProtection);
    if ( v3 >= 0 && !a2 )
    {
      RtlpRemoveHeapFromProtectedList(a1);
      RtlpAddHeapToUnprotectedList(a1);
    }
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
