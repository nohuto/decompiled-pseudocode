/*
 * XREFs of ?bBrushPathN_8x8@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238CB1
 * Callers:
 *     ?EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238843 (-EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 * Callees:
 *     ?bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z @ 0x238D30 (-bEngFastFillEnum@@YGHAAVEPATHOBJ@@PAU_RECTL@@KP6GX1KPAX@ZP6GXJPAU_ROW@@K2@Z2@Z.c)
 */

int __userpurge bBrushPathN_8x8@<eax>(
        int a1@<ecx>,
        struct SURFACE *a2,
        struct _PATHOBJ *a3,
        struct _RECTL *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  void (__stdcall *v8)(int, struct _ROW *, unsigned int, void *); // esi
  struct _RECTL *v9; // edx
  void (__stdcall *v11)(int, struct _ROW *, unsigned int, void *); // [esp+0h] [ebp-34h]
  void *v12; // [esp+4h] [ebp-30h]
  _DWORD v13[11]; // [esp+8h] [ebp-2Ch] BYREF

  v13[0] = 0;
  v13[4] = 0;
  v13[5] = 0;
  memset(&v13[8], 0, 12);
  v13[1] = *(_DWORD *)(a1 + 48);
  v13[3] = *(_DWORD *)(a1 + 52);
  v8 = vBrushPath4_8x8EnumRow;
  v9 = (struct _RECTL *)vBrushPath4_8x8Enum;
  v13[2] = *(_DWORD *)(a3[2].cCurves + 32);
  v13[6] = a4->left & 7;
  v13[7] = a4->top & 7;
  if ( a5 == (struct _BRUSHOBJ *)3 )
  {
    v9 = (struct _RECTL *)vBrushPath8_8x8Enum;
    v8 = vBrushPath8_8x8EnumRow;
  }
  return bEngFastFillEnum(
           (struct EPATHOBJ *)a6,
           v9,
           (unsigned int)v8,
           (void (__stdcall *)(struct _RECTL *, unsigned int, void *))v13,
           v11,
           v12);
}
