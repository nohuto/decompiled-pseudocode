/*
 * XREFs of _RtlStdInitializeStackDatabase@16 @ 0x4B368EA0
 * Callers:
 *     _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163 (_RtlpInitializeStackTraceDatabase@12.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _NtFreeVirtualMemory@16 @ 0x4B2F2B60 (_NtFreeVirtualMemory@16.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlStdInitializeStackDatabase(int a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // edi
  unsigned int v7; // ebx
  int result; // eax
  int VirtualMemory; // ebx
  int v10; // edx
  unsigned int i; // ecx
  int v12; // eax
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v4 = a2;
  if ( a2 && (a2 != a3 || !a1) )
    return -1073741811;
  v5 = a1;
  v16 = a1;
  v6 = a3 < 0x1000000 ? 5569 : 9551;
  v7 = 8 * v6 + 392;
  if ( a3 <= v7 )
    return -1073741811;
  if ( !a1 )
  {
    result = NtAllocateVirtualMemory(-1, (int)&v16, 0, (int)&a3, 0x2000, 4);
    if ( result < 0 )
      return result;
    v4 = a2;
    v5 = v16;
  }
  if ( v4 )
  {
    *(_BYTE *)(v5 + 68) = 1;
LABEL_16:
    v10 = v16;
    *(_DWORD *)(v16 + 72) = v16;
    *(_DWORD *)(v16 + 376) = v6;
    *(_DWORD *)(v16 + 88) = v10 + a3;
    *(_DWORD *)(v16 + 100) = *(_DWORD *)(v16 + 88);
    if ( *(_BYTE *)(v16 + 68) )
    {
      memset((void *)(v16 + 380), 0, 8 * *(_DWORD *)(v16 + 376));
    }
    else
    {
      *(_DWORD *)(v16 + 76) = v10 + a2;
      *(_DWORD *)(v16 + 80) = v10 + a3;
    }
    *(_DWORD *)(v16 + 84) = v7 + v16 + 4;
    *(_DWORD *)(v16 + 64) = *(_DWORD *)(v16 + 84);
    for ( i = 120; i < 0x178; i += 8 )
    {
      v12 = v16;
      *(_DWORD *)(i + v16) = 0;
      *(_DWORD *)(i + v12 + 4) = 0;
    }
    v13 = 0;
    *(_DWORD *)v16 = 0;
    v14 = v16;
    if ( *(_DWORD *)(v16 + 376) )
    {
      v15 = 384;
      do
      {
        *(_DWORD *)(v15 + v14) = 0;
        ++v13;
        v14 = v16;
        v15 += 8;
      }
      while ( v13 < *(_DWORD *)(v16 + 376) );
    }
    *a4 = v14;
    return 0;
  }
  a2 = (8 * v6 + 4487) & 0xFFFFF000;
  VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v16, 0, (int)&a2, 4096, 4);
  if ( VirtualMemory >= 0 )
  {
    v7 = 8 * v6 + 392;
    *(_BYTE *)(v16 + 68) = 0;
    goto LABEL_16;
  }
  if ( !a1 )
    NtFreeVirtualMemory(-1, (int)&v16, (int)&a3, 0x8000);
  return VirtualMemory;
}
