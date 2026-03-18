/*
 * XREFs of ??0STACKMEMOBJ@@QAE@KKJJJ@Z @ 0x21F542
 * Callers:
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

STACKMEMOBJ *__thiscall STACKMEMOBJ::STACKMEMOBJ(
        STACKMEMOBJ *this,
        size_t Size,
        unsigned int a3,
        int a4,
        int a5,
        int a6)
{
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  v7 = PALLOCMEM2(0xB0u, 1684817479, 0);
  *((_DWORD *)this + 3) = v7;
  if ( v7 )
  {
    v7[2] = 176;
    *(_DWORD *)(*((_DWORD *)this + 3) + 4) = 0;
    if ( a3 == 1 )
    {
      v8 = PALLOCMEM2(0xB0u, 1684817479, 0);
      *((_DWORD *)this + 4) = v8;
      if ( !v8 )
        return this;
      v8[2] = 176;
      *(_DWORD *)(*((_DWORD *)this + 4) + 4) = 0;
    }
    *(_DWORD *)this = Size;
    *((_DWORD *)this + 1) = 24;
    v9 = PALLOCMEM2(Size, 1684817479, 0);
    *((_DWORD *)this + 5) = v9;
    if ( v9 )
    {
      *((_DWORD *)this + 2) = v9;
      *v9 = a4;
      *(_DWORD *)(*((_DWORD *)this + 2) + 4) = 1;
      *(_DWORD *)(*((_DWORD *)this + 2) + 8) = 24;
      *(_DWORD *)(*((_DWORD *)this + 2) + 12) = *((_DWORD *)this + 2);
      *(_DWORD *)(*((_DWORD *)this + 2) + 16) = a5;
      *(_DWORD *)(*((_DWORD *)this + 2) + 20) = a6;
    }
  }
  return this;
}
