/*
 * XREFs of hfontCreate @ 0x1C001DB80
 * Callers:
 *     GreCreateFontIndirectW @ 0x1C001D8A0 (GreCreateFontIndirectW.c)
 *     NtGdiHfontCreate @ 0x1C00F2AF0 (NtGdiHfontCreate.c)
 *     hfontInitDefaultGuiFont @ 0x1C039434C (hfontInitDefaultGuiFont.c)
 *     bInitStockFontsInternal @ 0x1C039453C (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C0394918 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C039632C (bInitSystemFont.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C001EB8C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     cCapString @ 0x1C00D9C0C (cCapString.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

struct HOBJ__ *__fastcall hfontCreate(_DWORD *Src, int a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v9; // eax
  unsigned int v10; // esi
  _DWORD *Object; // rax
  struct OBJECT *v12; // rbx
  int v13; // eax
  unsigned int v14; // r9d
  struct HOBJ__ *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !Src )
    return 0LL;
  v9 = Src[88];
  if ( v9 > 0x10 )
    return 0LL;
  v10 = 4 * v9 + 356;
  Object = (_DWORD *)AllocateObject(4 * v9 + 632, 10LL);
  v12 = (struct OBJECT *)Object;
  if ( !Object )
    return 0LL;
  Object[6] = a2;
  Object[7] = a3;
  Object[68] = v10;
  memmove(Object + 69, Src, v10);
  *((_DWORD *)v12 + 8) = 0;
  *((_DWORD *)v12 + 9) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
  cCapString((char *)v12 + 208, Src + 7, 32LL);
  v13 = lNormAngle((unsigned int)Src[3]);
  v14 = a5;
  v19 = 0LL;
  Src[3] = v13;
  v15 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v19, v12, 0xAu, v14);
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
