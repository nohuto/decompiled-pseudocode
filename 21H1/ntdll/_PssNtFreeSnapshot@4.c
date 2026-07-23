/*
 * XREFs of _PssNtFreeSnapshot@4 @ 0x4B386AF0
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 *     _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93 (_PsspDuplicateSnapshotLocalToRemote@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _PssNtValidateDescriptor@8 @ 0x4B386E10 (_PssNtValidateDescriptor@8.c)
 */

int __stdcall PssNtFreeSnapshot(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  PVOID BaseAddress; // [esp+Ch] [ebp-8h] BYREF
  ULONG_PTR RegionSize; // [esp+10h] [ebp-4h] BYREF
  void *retaddr; // [esp+18h] [ebp+4h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( result >= 0 )
  {
    v2 = *(_DWORD *)(a1 + 4);
    if ( (v2 & 2) != 0 )
    {
      if ( *(_DWORD *)(a1 + 776) )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)(a1 + 776));
        v2 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(a1 + 776) = 0;
      }
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFFD;
    }
    else if ( (v2 & 4) != 0 && *(_DWORD *)(a1 + 776) )
    {
      BaseAddress = *(PVOID *)(a1 + 776);
      LODWORD(RegionSize) = 0;
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
      *(_DWORD *)(a1 + 4) &= ~4u;
      *(_DWORD *)(a1 + 776) = 0;
    }
    if ( *(_DWORD *)(a1 + 848) )
    {
      NtClose(*(HANDLE *)(a1 + 848));
      *(_DWORD *)(a1 + 848) = 0;
    }
    if ( *(_DWORD *)(a1 + 824) )
    {
      NtClose(*(HANDLE *)(a1 + 824));
      *(_DWORD *)(a1 + 824) = 0;
    }
    if ( *(_DWORD *)(a1 + 788) )
    {
      NtClose(*(HANDLE *)(a1 + 788));
      *(_DWORD *)(a1 + 788) = 0;
    }
    if ( *(_DWORD *)(a1 + 804) )
    {
      NtClose(*(HANDLE *)(a1 + 804));
      *(_DWORD *)(a1 + 804) = 0;
    }
    if ( *(_DWORD *)(a1 + 772) )
    {
      NtClose(*(HANDLE *)(a1 + 772));
      *(_DWORD *)(a1 + 772) = 0;
    }
    if ( *(_DWORD *)(a1 + 752) )
    {
      NtClose(*(HANDLE *)(a1 + 752));
      *(_DWORD *)(a1 + 752) = 0;
    }
    v3 = *(_DWORD *)(a1 + 4);
    if ( (v3 & 0x10) != 0 )
    {
      NtClose(*(HANDLE *)(a1 + 968));
      *(_DWORD *)(a1 + 4) &= ~0x10u;
      v3 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 968) = 0;
      *(_DWORD *)(a1 + 972) = 0;
    }
    if ( (v3 & 1) != 0 )
    {
      BaseAddress = (PVOID)a1;
      LODWORD(RegionSize) = 0;
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    }
    return 0;
  }
  return result;
}
