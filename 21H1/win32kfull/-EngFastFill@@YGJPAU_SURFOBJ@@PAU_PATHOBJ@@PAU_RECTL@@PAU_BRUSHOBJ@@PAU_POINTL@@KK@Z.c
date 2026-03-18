/*
 * XREFs of ?EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238843
 * Callers:
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 * Callees:
 *     ?pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z @ 0x95952 (-pvGetEngRbrush@@YGPAXPAU_BRUSHOBJ@@@Z.c)
 *     ?bBrushPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238BB9 (-bBrushPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bBrushPathN_8x8@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238CB1 (-bBrushPathN_8x8@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bPaintPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@KHK@Z @ 0x23A012 (-bPaintPath@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_RECTL@@KHK@Z.c)
 */

int __userpurge EngFastFill@<eax>(
        int a1@<ecx>,
        struct _SURFOBJ *a2,
        struct _PATHOBJ *a3,
        struct _RECTL *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        unsigned int a7,
        unsigned int a8)
{
  int v8; // edi
  int v9; // esi
  int v10; // edx
  FLONG fl; // ecx
  unsigned int v13; // ecx
  ULONG cCurves; // eax
  int v16; // [esp-8h] [ebp-14h]
  int v17; // [esp-8h] [ebp-14h]
  struct _POINTL *v18; // [esp-4h] [ebp-10h]
  struct _POINTL *v19; // [esp-4h] [ebp-10h]
  unsigned int v20; // [esp+0h] [ebp-Ch]
  unsigned int v21; // [esp+4h] [ebp-8h]

  v8 = -1;
  v9 = a1 != 0 ? a1 - 16 : 0;
  if ( *(_WORD *)(a1 + 48) )
    return v8;
  v10 = (unsigned __int8)gaMix[(unsigned __int8)a5 & 0xF] | ((unsigned __int8)gaMix[((unsigned int)a5 >> 8) & 0xF] << 8);
  switch ( v10 )
  {
    case 0:
      return bPaintPath((struct SURFACE *)a2, 0, 0, (unsigned int)a6, v20, v21);
    case 0xF0F:
      if ( a3->fl == -1 )
      {
        if ( *(_DWORD *)(a1 != 0 ? a1 - 16 + 0x3C : 60) >= 3u
          && pvGetEngRbrush((int)a3)
          && *(_DWORD *)(a3[2].cCurves + 20) >= 4u )
        {
          return bBrushPath((struct SURFACE *)a2, a3, a4, (struct _BRUSHOBJ *)1, a6, v20, v21);
        }
        return v8;
      }
      fl = ~a3->fl;
LABEL_12:
      v19 = a6;
      v17 = 0;
      return bPaintPath((struct SURFACE *)a2, (struct _PATHOBJ *)fl, (struct _RECTL *)v17, (unsigned int)v19, v20, v21);
    case 0x5555:
      v18 = a6;
      v16 = 1;
      return bPaintPath(
               (struct SURFACE *)a2,
               (struct _PATHOBJ *)0xFFFFFFFF,
               (struct _RECTL *)v16,
               (unsigned int)v18,
               v20,
               v21);
    case 0x5A5A:
      fl = a3->fl;
      if ( a3->fl == -1 )
      {
        if ( *(_DWORD *)(v9 + 60) >= 3u && pvGetEngRbrush((int)a3) && *(_DWORD *)(a3[2].cCurves + 20) >= 4u )
          return bBrushPath((struct SURFACE *)a2, a3, a4, (struct _BRUSHOBJ *)2, a6, v20, v21);
        return v8;
      }
      v19 = a6;
      v17 = 1;
      return bPaintPath((struct SURFACE *)a2, (struct _PATHOBJ *)fl, (struct _RECTL *)v17, (unsigned int)v19, v20, v21);
    case 0xAAAA:
      return 1;
    case 0xF0F0:
      fl = a3->fl;
      if ( a3->fl == -1 )
      {
        v13 = *(_DWORD *)(v9 + 60);
        if ( v13 == 2 || v13 == 3 )
        {
          if ( pvGetEngRbrush((int)a3) )
          {
            cCurves = a3[2].cCurves;
            if ( *(_DWORD *)(cCurves + 20) == 8 && *(_DWORD *)(cCurves + 24) == 8 )
              return bBrushPathN_8x8((struct SURFACE *)a2, a3, a4, *(struct _BRUSHOBJ **)(v9 + 60), a6, v20, v21);
          }
        }
        else if ( v13 >= 3 && pvGetEngRbrush((int)a3) && *(_DWORD *)(a3[2].cCurves + 20) >= 4u )
        {
          return bBrushPath((struct SURFACE *)a2, a3, a4, 0, a6, v20, v21);
        }
        return v8;
      }
      goto LABEL_12;
    case 0xFFFF:
      v18 = a6;
      v16 = 0;
      return bPaintPath(
               (struct SURFACE *)a2,
               (struct _PATHOBJ *)0xFFFFFFFF,
               (struct _RECTL *)v16,
               (unsigned int)v18,
               v20,
               v21);
  }
  return v8;
}
