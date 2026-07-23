/*
 * XREFs of _LdrpSpecialCacheTypeHandle@8 @ 0x4B33FA35
 * Callers:
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall LdrpSpecialCacheTypeHandle(int a1, char a2)
{
  int v4; // esi
  char v5; // al
  unsigned int Heap; // ebx
  SIZE_T v8; // [esp-4h] [ebp-10h]
  size_t v9; // [esp-4h] [ebp-10h]

  if ( !a1 )
    return -1073741811;
  v5 = gMUICacheType;
  v4 = -1073741823;
  if ( gMUICacheType )
  {
    if ( (gMUICacheType & 1) != 0 && *(_DWORD *)(a1 + 20) )
    {
      NtClose(*(HANDLE *)(a1 + 20));
      *(_DWORD *)(a1 + 20) = 0;
      v4 = 0;
      v5 = gMUICacheType;
    }
    if ( (v5 & 6) != 0 )
    {
      if ( *(_DWORD *)(a1 + 16) && *(_DWORD *)(a1 + 16) != -1 && (v5 & 4) == 0 && (v5 & 2) != 0 && a2 )
      {
        v4 = -1073741799;
        if ( *(_DWORD *)(a1 + 28) == -1073741799 )
          return v4;
        LODWORD(v8) = *(_DWORD *)(a1 + 24);
        Heap = (unsigned int)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v8);
        if ( !Heap )
          return -1073741801;
        LODWORD(v9) = *(_DWORD *)(a1 + 24);
        memcpy((void *)Heap, (const void *)(*(_DWORD *)(a1 + 16) & 0xFFFFFFFC), v9);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, (PVOID)(*(_DWORD *)(a1 + 16) & 0xFFFFFFFC));
        *(_DWORD *)(a1 + 28) = -1073741799;
        *(_DWORD *)(a1 + 16) = Heap | 1;
      }
      return 0;
    }
  }
  return v4;
}
