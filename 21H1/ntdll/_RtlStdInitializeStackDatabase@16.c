/*
 * XREFs of _RtlStdInitializeStackDatabase@16 @ 0x4B368EA0
 * Callers:
 *     _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163 (_RtlpInitializeStackTraceDatabase@12.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __stdcall RtlStdInitializeStackDatabase(_BYTE *ZeroBits, unsigned int ZeroBits_4, ULONG_PTR RegionSize)
{
  unsigned int v3; // eax
  _BYTE *v4; // ecx
  int v5; // edi
  unsigned int v6; // ebx
  NTSTATUS result; // eax
  NTSTATUS v8; // ebx
  char *v9; // edx
  unsigned int i; // ecx
  char *v11; // eax
  unsigned int v12; // edx
  char *v13; // ecx
  int v14; // eax
  ULONG_PTR v15; // [esp-10h] [ebp-20h]
  ULONG_PTR v16; // [esp-10h] [ebp-20h]
  size_t v17; // [esp-4h] [ebp-14h]
  PVOID BaseAddress; // [esp+Ch] [ebp-4h] BYREF

  v3 = ZeroBits_4;
  if ( ZeroBits_4 && (ZeroBits_4 != (_DWORD)RegionSize || !ZeroBits) )
    return -1073741811;
  v4 = ZeroBits;
  BaseAddress = ZeroBits;
  v5 = (unsigned int)RegionSize < 0x1000000 ? 5569 : 9551;
  v6 = 8 * v5 + 392;
  if ( (unsigned int)RegionSize <= v6 )
    return -1073741811;
  if ( !ZeroBits )
  {
    HIDWORD(v15) = &RegionSize;
    LODWORD(v15) = 0;
    result = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v15, (PSIZE_T)0x2000, 4u, HIDWORD(v17));
    if ( result < 0 )
      return result;
    v3 = ZeroBits_4;
    v4 = BaseAddress;
  }
  if ( v3 )
  {
    v4[68] = 1;
LABEL_16:
    v9 = (char *)BaseAddress;
    *((_DWORD *)BaseAddress + 18) = BaseAddress;
    *((_DWORD *)BaseAddress + 94) = v5;
    *((_DWORD *)BaseAddress + 22) = &v9[RegionSize];
    *((_DWORD *)BaseAddress + 25) = *((_DWORD *)BaseAddress + 22);
    if ( *((_BYTE *)BaseAddress + 68) )
    {
      LODWORD(v17) = 8 * *((_DWORD *)BaseAddress + 94);
      memset((char *)BaseAddress + 380, 0, v17);
    }
    else
    {
      *((_DWORD *)BaseAddress + 19) = &v9[ZeroBits_4];
      *((_DWORD *)BaseAddress + 20) = &v9[RegionSize];
    }
    *((_DWORD *)BaseAddress + 21) = (char *)BaseAddress + v6 + 4;
    *((_DWORD *)BaseAddress + 16) = *((_DWORD *)BaseAddress + 21);
    for ( i = 120; i < 0x178; i += 8 )
    {
      v11 = (char *)BaseAddress;
      *(_DWORD *)((char *)BaseAddress + i) = 0;
      *(_DWORD *)&v11[i + 4] = 0;
    }
    v12 = 0;
    *(_DWORD *)BaseAddress = 0;
    v13 = (char *)BaseAddress;
    if ( *((_DWORD *)BaseAddress + 94) )
    {
      v14 = 384;
      do
      {
        *(_DWORD *)&v13[v14] = 0;
        ++v12;
        v13 = (char *)BaseAddress;
        v14 += 8;
      }
      while ( v12 < *((_DWORD *)BaseAddress + 94) );
    }
    *(_DWORD *)HIDWORD(RegionSize) = v13;
    return 0;
  }
  ZeroBits_4 = (8 * v5 + 4487) & 0xFFFFF000;
  HIDWORD(v16) = &ZeroBits_4;
  LODWORD(v16) = 0;
  v8 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, v16, (PSIZE_T)0x1000, 4u, HIDWORD(v17));
  if ( v8 >= 0 )
  {
    v6 = 8 * v5 + 392;
    *((_BYTE *)BaseAddress + 68) = 0;
    goto LABEL_16;
  }
  if ( !ZeroBits )
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  return v8;
}
