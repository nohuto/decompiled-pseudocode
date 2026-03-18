/*
 * XREFs of ?vExclude@DEVEXCLUDERECT@@QAEXAAVXDCOBJ@@PAU_RECTL@@@Z @ 0x1D887E
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 * Callees:
 *     ?GreTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z @ 0x1DB505 (-GreTearDownSprites@@YGHPAUHDEV__@@PAU_RECTL@@H@Z.c)
 */

void __thiscall DEVEXCLUDERECT::vExclude(DEVEXCLUDERECT *this, struct XDCOBJ *a2, struct _RECTL *a3)
{
  LONG *v4; // edi
  HDEV v5; // ecx
  struct _RECTL *v6; // [esp+0h] [ebp-Ch]
  int v7; // [esp+4h] [ebp-8h]

  *((_DWORD *)this + 6) = a2;
  v4 = (LONG *)((char *)this + 8);
  v5 = *(HDEV *)(*(_DWORD *)a2 + 36);
  *((_DWORD *)this + 1) = v5;
  *v4++ = a3->left;
  *v4++ = a3->top;
  *v4 = a3->right;
  v4[1] = a3->bottom;
  *(_DWORD *)this = GreTearDownSprites(v5, v6, v7);
}
