/*
 * XREFs of _RtlpAllocDeallocQueryBuffer@16 @ 0x4B2EB25A
 * Callers:
 *     _RtlpQueryRegistryValues@24 @ 0x4B2EAEA8 (_RtlpQueryRegistryValues@24.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 */

PVOID __fastcall RtlpAllocDeallocQueryBuffer(int a1, void *a2, ULONG_PTR RegionSize)
{
  PVOID result; // eax
  NTSTATUS v4; // esi
  ULONG_PTR v6; // [esp-10h] [ebp-20h]
  ULONG v7; // [esp+0h] [ebp-10h]
  PVOID BaseAddress; // [esp+8h] [ebp-8h] BYREF
  PVOID v9; // [esp+Ch] [ebp-4h] BYREF

  result = 0;
  BaseAddress = a2;
  v4 = 0;
  v9 = 0;
  if ( a2 )
  {
    v4 = NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    result = v9;
  }
  if ( a1 )
  {
    HIDWORD(v6) = a1;
    LODWORD(v6) = 0;
    v4 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &v9, v6, (PSIZE_T)0x1000, 4u, v7);
    if ( v4 < 0 )
      result = 0;
    else
      result = v9;
  }
  if ( HIDWORD(RegionSize) )
    *(_DWORD *)HIDWORD(RegionSize) = v4;
  return result;
}
