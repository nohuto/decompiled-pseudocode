/*
 * XREFs of ?vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x22389D
 * Callers:
 *     ?bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z @ 0x1EAFDB (-bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z.c)
 *     _NtGdiPATHOBJ_vEnumStartClipLines@16 @ 0x21AAAC (_NtGdiPATHOBJ_vEnumStartClipLines@16.c)
 *     _PATHOBJ_vEnumStartClipLines@16 @ 0x223A36 (_PATHOBJ_vEnumStartClipLines@16.c)
 * Callees:
 *     ?bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z @ 0x2236A0 (-bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z.c)
 */

void __thiscall XCLIPOBJ::vEnumPathStart(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        struct SURFACE *a3,
        struct _LINEATTRS *a4)
{
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // eax
  PFLOAT_LONG pstyle; // ecx
  union _FLOAT_LONG *v9; // edx
  int v10; // eax

  *((_DWORD *)this + 30) = a2[1].fl + 72;
  a2->fl &= ~8u;
  *(_DWORD *)(a2[1].fl + 52) = *(_DWORD *)(a2[1].fl + 20);
  a2[5].cCurves = (ULONG)this;
  *(_DWORD *)(*((_DWORD *)this + 30) + 16) = 0x10000;
  **((_DWORD **)this + 30) = 0;
  *(_DWORD *)(*((_DWORD *)this + 30) + 164) = 0;
  *(_DWORD *)(*((_DWORD *)this + 30) + 168) = &a4->elStyleState;
  v5 = 1;
  *(_DWORD *)(*((_DWORD *)this + 30) + 172) = 1;
  *(_DWORD *)(*((_DWORD *)this + 30) + 176) = 1;
  *(_DWORD *)(*((_DWORD *)this + 30) + 180) = 1;
  if ( (a4->fl & 2) != 0 )
  {
    *(_DWORD *)(*((_DWORD *)this + 30) + 164) = 2;
    v5 = HIWORD(a4->elStyleState.l) & 1;
    *(_DWORD *)(*((_DWORD *)this + 30) + 160) = v5;
  }
  else if ( a4->pstyle )
  {
    v6 = *((_DWORD *)this + 30);
    v7 = (_DWORD *)*((_DWORD *)a3 + 7);
    if ( v7 )
    {
      *(_DWORD *)(v6 + 172) = v7[374];
      *(_DWORD *)(*((_DWORD *)this + 30) + 176) = v7[375];
      *(_DWORD *)(*((_DWORD *)this + 30) + 180) = v7[376];
    }
    else
    {
      *(_DWORD *)(v6 + 180) = 3;
    }
    pstyle = a4->pstyle;
    v9 = &pstyle[a4->cstyle];
    if ( v9 > pstyle )
    {
      do
      {
        --v9;
        *(_DWORD *)(*((_DWORD *)this + 30) + 164) += v9->e;
      }
      while ( v9 > a4->pstyle );
    }
    *(_DWORD *)(*((_DWORD *)this + 30) + 164) *= 2;
    *(_DWORD *)(*((_DWORD *)this + 30) + 164) *= *(_DWORD *)(*((_DWORD *)this + 30) + 180);
    *(_DWORD *)(*((_DWORD *)this + 30) + 160) = LOWORD(a4->elStyleState.e)
                                              + *(_DWORD *)(*((_DWORD *)this + 30) + 180) * HIWORD(a4->elStyleState.l);
    v5 = *((_DWORD *)this + 30);
    *(_DWORD *)(v5 + 160) %= *(_DWORD *)(v5 + 164);
    v10 = *((_DWORD *)this + 30);
    if ( *(int *)(v10 + 160) < 0 )
      *(_DWORD *)(v10 + 160) = 0;
  }
  XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, (const unsigned int *)v5);
}
