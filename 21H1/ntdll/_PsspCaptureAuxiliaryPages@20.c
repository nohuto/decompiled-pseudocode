/*
 * XREFs of _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C
 * Callers:
 *     _PssNtCaptureSnapshot@16 @ 0x4B386310 (_PssNtCaptureSnapshot@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtReadVirtualMemory@20 @ 0x4B2F2D70 (_NtReadVirtualMemory@20.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 */

int __fastcall PsspCaptureAuxiliaryPages(_DWORD *a1, void *a2, int a3, PVOID *a4, int a5)
{
  int result; // eax
  int v6; // esi
  int v7; // ebx
  NTSTATUS v8; // edi
  PVOID v9; // edx
  PVOID *v10; // edi
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  _DWORD *v15; // ecx
  SIZE_T v16; // [esp-14h] [ebp-48h]
  ULONG_PTR v17; // [esp-10h] [ebp-44h]
  SIZE_T v18; // [esp-4h] [ebp-38h]
  ULONG v19; // [esp+0h] [ebp-34h]
  ULONG_PTR *v20; // [esp+0h] [ebp-34h]
  ULONG v21; // [esp+4h] [ebp-30h]
  LARGE_INTEGER MaximumSize; // [esp+Ch] [ebp-28h] BYREF
  unsigned int v23; // [esp+14h] [ebp-20h] BYREF
  _DWORD *v24; // [esp+18h] [ebp-1Ch]
  HANDLE ProcessHandle; // [esp+1Ch] [ebp-18h]
  unsigned int Size; // [esp+20h] [ebp-14h] BYREF
  HANDLE Size_4; // [esp+24h] [ebp-10h] BYREF
  PVOID BaseAddress; // [esp+28h] [ebp-Ch] BYREF
  ULONG_PTR RegionSize; // [esp+2Ch] [ebp-8h] BYREF
  int v30; // [esp+3Ch] [ebp+8h]

  v24 = a1;
  ProcessHandle = a2;
  result = RtlULongLongToUInt((int *)&Size, 40, 0);
  if ( result >= 0 )
  {
    result = RtlULongLongToUInt((int *)&v23, 4096, 0);
    if ( result >= 0 )
    {
      v6 = a3 & 0x20000000;
      v30 = a3 & 0x20000000;
      if ( v30 )
      {
        v7 = 0;
        RegionSize = Size;
        HIDWORD(v17) = &RegionSize;
        LODWORD(v17) = 0;
        result = NtAllocateVirtualMemory(
                   (HANDLE)0xFFFFFFFF,
                   (PVOID *)&RegionSize + 1,
                   v17,
                   (PSIZE_T)0x1000,
                   4u,
                   HIDWORD(v18));
        if ( result < 0 )
          return result;
      }
      else
      {
        LODWORD(v18) = Size;
        v7 = 0;
        HIDWORD(RegionSize) = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
        if ( !HIDWORD(RegionSize) )
          return -1073741670;
      }
      MaximumSize.QuadPart = v23;
      v8 = NtCreateSection(&Size_4, 0xF0007u, (POBJECT_ATTRIBUTES)&stru_4B2A58D0, &MaximumSize, 4u, 0x8000000u, 0);
      if ( v8 < 0 )
      {
        if ( !v6 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)HIDWORD(RegionSize));
          return v8;
        }
        goto LABEL_11;
      }
      BaseAddress = 0;
      HIDWORD(v16) = &RegionSize;
      LODWORD(v16) = 0;
      LODWORD(RegionSize) = 0;
      v8 = ZwMapViewOfSection(
             Size_4,
             (HANDLE)0xFFFFFFFF,
             &BaseAddress,
             0LL,
             v16,
             (PLARGE_INTEGER)1,
             0,
             (SECTION_INHERIT)4,
             v19,
             v21);
      if ( v8 < 0 )
      {
        NtClose(Size_4);
        if ( !v6 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)HIDWORD(RegionSize));
          return v8;
        }
LABEL_11:
        LODWORD(RegionSize) = 0;
        NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&RegionSize + 1, &RegionSize, 0x8000u);
        return v8;
      }
      v9 = BaseAddress;
      memset((void *)HIDWORD(RegionSize), 0, 0x28u);
      v10 = a4;
      if ( *a4 == (PVOID)2147352576 )
      {
        qmemcpy(v9, (const void *)0x7FFE0000, 0x720u);
        v6 = v30;
        v10 = a4;
      }
      else if ( NtReadVirtualMemory(ProcessHandle, *a4, v9, 0x1000uLL, v20) < 0 )
      {
LABEL_24:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, BaseAddress);
        v13 = v24;
        v24[192] = v7;
        v13[1] |= 2 * (v6 != 0) + 2;
        v13[193] = Size_4;
        v13[194] = HIDWORD(RegionSize);
        while ( 1 )
        {
          v14 = MEMORY[0x7FFE0018];
          if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
            break;
          _mm_pause();
        }
        v15 = v24;
        result = 0;
        v24[214] = MEMORY[0x7FFE0014];
        v15[215] = v14;
        return result;
      }
      if ( NtQueryVirtualMemory(
             ProcessHandle,
             *v10,
             MemoryBasicInformation,
             (PVOID)(HIDWORD(RegionSize) + 4),
             0x1CuLL,
             v20) >= 0 )
      {
        *(_DWORD *)HIDWORD(RegionSize) = *v10;
        while ( 1 )
        {
          v11 = MEMORY[0x7FFE0018];
          if ( MEMORY[0x7FFE0018] == MEMORY[0x7FFE001C] )
            break;
          _mm_pause();
        }
        v12 = HIDWORD(RegionSize);
        v6 = v30;
        v7 = 1;
        *(_DWORD *)(HIDWORD(RegionSize) + 32) = MEMORY[0x7FFE0014];
        *(_DWORD *)(v12 + 36) = v11;
      }
      goto LABEL_24;
    }
  }
  return result;
}
