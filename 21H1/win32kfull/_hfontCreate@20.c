/*
 * XREFs of _hfontCreate@20 @ 0x89DF2
 * Callers:
 *     _GreCreateFontIndirectW@8 @ 0x89CD6 (_GreCreateFontIndirectW@8.c)
 *     _NtGdiHfontCreate@20 @ 0x89D3A (_NtGdiHfontCreate@20.c)
 *     _bInitStockFontsInternal@4 @ 0x2922C4 (_bInitStockFontsInternal@4.c)
 *     _bInitOneStockFontInternal@16 @ 0x2925F6 (_bInitOneStockFontInternal@16.c)
 *     _hfontInitDefaultGuiFont@4 @ 0x2927A4 (_hfontInitDefaultGuiFont@4.c)
 *     _bInitSystemFont@8 @ 0x293D42 (_bInitSystemFont@8.c)
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

struct HOBJ__ *__stdcall hfontCreate(_DWORD *Src, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // eax
  size_t v6; // ebx
  int Object; // esi
  struct HOBJ__ *inserted; // edi

  if ( Src )
  {
    v5 = Src[88];
    if ( v5 <= 0x10 )
    {
      v6 = 4 * v5 + 356;
      Object = AllocateObject(4 * v5 + 636, 10, 0);
      if ( Object )
      {
        *(_DWORD *)(Object + 16) = a2;
        *(_DWORD *)(Object + 20) = a3;
        *(_DWORD *)(Object + 276) = v6;
        memcpy((void *)(Object + 280), Src, v6);
        *(_DWORD *)(Object + 24) = 0;
        *(_DWORD *)(Object + 28) = *(_DWORD *)(_gpGdiSharedMemory + 1048728);
        cCapString(32);
        Src[3] = lNormAngle(Src[3]);
        inserted = HmgInsertObjectInternal((void *)Object, a5 | 1, 0xAu);
        if ( inserted )
        {
          *(_DWORD *)(HmgPentryFromPobj(Object) + 12) = a4;
          _InterlockedDecrement((volatile signed __int32 *)(Object + 8));
          return inserted;
        }
        FreeObject(Object, 10);
      }
    }
  }
  return 0;
}
