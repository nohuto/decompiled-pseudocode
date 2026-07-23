/*
 * XREFs of _PsspDuplicateSnapshotLocalToRemote@16 @ 0x4B388F93
 * Callers:
 *     _PssNtDuplicateSnapshot@20 @ 0x4B3868E0 (_PssNtDuplicateSnapshot@20.c)
 * Callees:
 *     _RtlULongPtrAdd@12 @ 0x4B2A9463 (_RtlULongPtrAdd@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 *     _ZwDuplicateObject@28 @ 0x4B2F2D40 (_ZwDuplicateObject@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _PssNtFreeSnapshot@4 @ 0x4B386AF0 (_PssNtFreeSnapshot@4.c)
 */

int __fastcall PsspDuplicateSnapshotLocalToRemote(int a1, void *a2, _DWORD *a3, char a4)
{
  int v4; // edi
  int VirtualMemory; // esi
  void *v7; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  void *v14; // eax
  ULONG_PTR v16; // [esp-10h] [ebp-408h]
  size_t v17; // [esp-4h] [ebp-3FCh]
  ULONG v18; // [esp+0h] [ebp-3F8h]
  ULONG_PTR *v19; // [esp+0h] [ebp-3F8h]
  ULONG_PTR *v20; // [esp+0h] [ebp-3F8h]
  int BufferSize; // [esp+10h] [ebp-3E8h] BYREF
  unsigned int BufferSize_4; // [esp+14h] [ebp-3E4h] BYREF
  ULONG_PTR RegionSize; // [esp+18h] [ebp-3E0h] BYREF
  _DWORD Buffer[245]; // [esp+20h] [ebp-3D8h] BYREF

  v4 = a1;
  RegionSize = (unsigned int)a1;
  LODWORD(v17) = 976;
  BufferSize_4 = 0;
  memset(Buffer, 0, v17);
  VirtualMemory = RtlULongLongToUInt(
                    &BufferSize,
                    40 * *(_DWORD *)(v4 + 768),
                    (40 * (unsigned __int64)*(unsigned int *)(v4 + 768)) >> 32);
  if ( VirtualMemory >= 0 )
  {
    VirtualMemory = RtlULongPtrAdd(0x3D0u, BufferSize, (int *)&BufferSize_4);
    if ( VirtualMemory >= 0 )
    {
      qmemcpy(Buffer, (const void *)v4, 0x3D0u);
      v4 = RegionSize;
      Buffer[188] = 0;
      Buffer[193] = 0;
      Buffer[197] = 0;
      v7 = *(void **)(RegionSize + 752);
      Buffer[201] = 0;
      Buffer[206] = 0;
      Buffer[212] = 0;
      Buffer[242] = 0;
      if ( !v7
        || (VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v7, a2, (PHANDLE)&Buffer[188], 0, 0, 2u),
            VirtualMemory >= 0) )
      {
        v8 = *(void **)(v4 + 772);
        if ( !v8
          || (VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v8, a2, (PHANDLE)&Buffer[193], 0, 0, 2u),
              VirtualMemory >= 0) )
        {
          v9 = *(void **)(v4 + 788);
          if ( !v9
            || (VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v9, a2, (PHANDLE)&Buffer[197], 0, 0, 2u),
                VirtualMemory >= 0) )
          {
            v10 = *(void **)(v4 + 804);
            if ( !v10
              || (VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v10, a2, (PHANDLE)&Buffer[201], 0, 0, 2u),
                  VirtualMemory >= 0) )
            {
              v11 = *(void **)(v4 + 824);
              if ( !v11
                || (VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v11, a2, (PHANDLE)&Buffer[206], 0, 0, 2u),
                    VirtualMemory >= 0) )
              {
                v12 = *(void **)(v4 + 848);
                if ( !v12
                  || (VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v12, a2, (PHANDLE)&Buffer[212], 0, 0, 2u),
                      VirtualMemory >= 0) )
                {
                  v13 = *(void **)(v4 + 968);
                  if ( !v13
                    || (VirtualMemory = ZwDuplicateObject((HANDLE)0xFFFFFFFF, v13, a2, (PHANDLE)&Buffer[242], 0, 0, 2u),
                        VirtualMemory >= 0) )
                  {
                    LODWORD(RegionSize) = BufferSize_4;
                    HIDWORD(v16) = &RegionSize;
                    LODWORD(v16) = 0;
                    VirtualMemory = NtAllocateVirtualMemory(a2, (PVOID *)&RegionSize + 1, v16, (PSIZE_T)0x1000, 4u, v18);
                    if ( VirtualMemory >= 0 )
                    {
                      Buffer[1] = Buffer[1] & 0xFFFFFFF8 | 1;
                      if ( *(_DWORD *)(v4 + 776) )
                        Buffer[194] = HIDWORD(RegionSize) + 976;
                      if ( *(_WORD *)(v4 + 200) )
                        Buffer[51] = HIDWORD(RegionSize) + 208;
                      VirtualMemory = NtWriteVirtualMemory(a2, (PVOID)HIDWORD(RegionSize), Buffer, BufferSize_4, v19);
                      if ( VirtualMemory >= 0 )
                      {
                        v14 = *(void **)(v4 + 776);
                        if ( !v14
                          || (VirtualMemory = NtWriteVirtualMemory(
                                                a2,
                                                (PVOID)Buffer[194],
                                                v14,
                                                (unsigned int)BufferSize,
                                                v20),
                              VirtualMemory >= 0) )
                        {
                          *a3 = HIDWORD(RegionSize);
                          VirtualMemory = 0;
                          goto LABEL_42;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ( HIDWORD(RegionSize) )
      {
        LODWORD(RegionSize) = BufferSize_4;
        NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
      }
    }
  }
  if ( Buffer[212] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[212], 0, 0, 0, 0, 1u);
  if ( Buffer[206] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[206], 0, 0, 0, 0, 1u);
  if ( Buffer[197] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[197], 0, 0, 0, 0, 1u);
  if ( Buffer[201] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[201], 0, 0, 0, 0, 1u);
  if ( Buffer[193] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[193], 0, 0, 0, 0, 1u);
  if ( Buffer[188] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[188], 0, 0, 0, 0, 1u);
  if ( Buffer[242] )
    ZwDuplicateObject(a2, (HANDLE)Buffer[242], 0, 0, 0, 0, 1u);
LABEL_42:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(v4);
  return VirtualMemory;
}
