/*
 * XREFs of hfontCreate @ 0x1C008FEE0
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C008F8E0 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00ED4E0 (NtGdiHfontCreate.c)
 *     hfontInitDefaultGuiFont @ 0x1C039334C (hfontInitDefaultGuiFont.c)
 *     bInitStockFontsInternal @ 0x1C039353C (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C0393918 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C039532C (bInitSystemFont.c)
 * Callees:
 *     cCapString @ 0x1C0066558 (cCapString.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00904BC (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

struct HOBJ__ *__fastcall hfontCreate(WCHAR *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // esi
  WCHAR *Object; // rax
  WCHAR *v12; // rbx
  unsigned int v13; // eax
  unsigned int v14; // r9d
  struct HOBJ__ *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !Src )
    return 0LL;
  v9 = *((_DWORD *)Src + 88);
  if ( v9 > 0x10 )
    return 0LL;
  v10 = 4 * v9 + 356;
  Object = (WCHAR *)AllocateObject(4 * v9 + 632, 10LL);
  v12 = Object;
  if ( !Object )
    return 0LL;
  *((_DWORD *)Object + 6) = a2;
  *((_DWORD *)Object + 7) = a3;
  *((_DWORD *)Object + 68) = v10;
  memmove(Object + 138, Src, v10);
  *((_DWORD *)v12 + 8) = 0;
  *((_DWORD *)v12 + 9) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  cCapString(v12 + 104, Src + 14, 32);
  v13 = lNormAngle(*((unsigned int *)Src + 3));
  v14 = a5;
  v19 = 0LL;
  *((_DWORD *)Src + 3) = v13;
  v15 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v19, (struct OBJECT *)v12, 0xAu, v14);
  if ( !v15 )
  {
    FreeObject(v12, 10LL);
    if ( v19 )
      _InterlockedDecrement((volatile signed __int32 *)(v19 + 12));
    return 0LL;
  }
  v16 = HmgPentryFromPobj(v12);
  v17 = v19;
  *(_QWORD *)(v16 + 16) = a4;
  if ( v17 )
    _InterlockedDecrement((volatile signed __int32 *)(v17 + 12));
  return v15;
}
