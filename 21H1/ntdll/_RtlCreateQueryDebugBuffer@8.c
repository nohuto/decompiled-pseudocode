/*
 * XREFs of _RtlCreateQueryDebugBuffer@8 @ 0x4B336810
 * Callers:
 *     <none>
 * Callees:
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 */

PRTL_DEBUG_INFORMATION __cdecl RtlCreateQueryDebugBuffer(ULONG MaximumCommit, BOOLEAN UseEventPair)
{
  ULONG v2; // eax
  unsigned int v3; // esi
  SIZE_T v5; // [esp-14h] [ebp-44h]
  ULONG_PTR v6; // [esp-10h] [ebp-40h]
  ULONG_PTR v7; // [esp-10h] [ebp-40h]
  ULONG v8; // [esp+0h] [ebp-30h]
  ULONG v9; // [esp+0h] [ebp-30h]
  ULONG v10; // [esp+0h] [ebp-30h]
  ULONG v11; // [esp+4h] [ebp-2Ch]
  LARGE_INTEGER MaximumSize; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v13; // [esp+14h] [ebp-1Ch] BYREF
  ULONG_PTR RegionSize; // [esp+18h] [ebp-18h] BYREF
  PVOID v15; // [esp+20h] [ebp-10h] BYREF
  HANDLE SectionHandle; // [esp+24h] [ebp-Ch] BYREF
  PVOID BaseAddress; // [esp+28h] [ebp-8h] BYREF
  PVOID v18; // [esp+2Ch] [ebp-4h] BYREF

  v2 = MaximumCommit;
  SectionHandle = 0;
  BaseAddress = 0;
  v18 = 0;
  v15 = 0;
  if ( !MaximumCommit )
    v2 = 0x400000;
  v3 = (v2 + 4095) & 0xFFFFF000;
  if ( RtlULongLongToUInt((int *)&v13, 2 * v3, (unsigned __int64)v3 >> 31) >= 0 )
  {
    MaximumSize.QuadPart = v13;
    if ( NtCreateSection(&SectionHandle, 0xF001Fu, 0, &MaximumSize, 4u, 0x4000000u, 0) >= 0 )
    {
      HIDWORD(v5) = &v13;
      LODWORD(v5) = 0;
      if ( ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFF,
             &v15,
             0LL,
             v5,
             (PLARGE_INTEGER)2,
             0,
             (SECTION_INHERIT)4,
             v8,
             v11) >= 0 )
      {
        v18 = v15;
        HIDWORD(v6) = (char *)&RegionSize + 4;
        LODWORD(v6) = 0;
        HIDWORD(RegionSize) = 104;
        if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &v18, v6, (PSIZE_T)0x1000, 4u, v9) >= 0 )
        {
          LODWORD(RegionSize) = 104;
          BaseAddress = (char *)v18 + v3;
          HIDWORD(v7) = &RegionSize;
          LODWORD(v7) = 0;
          if ( NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v7, (PSIZE_T)0x1000, 4u, v10) >= 0 )
          {
            *(_DWORD *)v18 = SectionHandle;
            *((_DWORD *)v18 + 1) = v18;
            *((_DWORD *)v18 + 9) = 104;
            *((_DWORD *)v18 + 10) = HIDWORD(RegionSize);
            *((_DWORD *)v18 + 11) = v3;
            qmemcpy(BaseAddress, v18, 0x68u);
            *((_DWORD *)BaseAddress + 1) = BaseAddress;
            *((_DWORD *)BaseAddress + 10) = RegionSize;
            *(_DWORD *)BaseAddress = 0;
            return (PRTL_DEBUG_INFORMATION)v18;
          }
        }
      }
    }
    if ( v18 )
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &v18, (ULONG_PTR *)((char *)&RegionSize + 4), 0x8000u);
    if ( BaseAddress )
      NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
    if ( v15 )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, v15);
    if ( SectionHandle )
      NtClose(SectionHandle);
  }
  return 0;
}
