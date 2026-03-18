/*
 * XREFs of ?bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z @ 0x22360C
 * Callers:
 *     ?bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z @ 0x1EAFDB (-bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z.c)
 *     _NtGdiPATHOBJ_bEnumClipLines@12 @ 0x21A890 (_NtGdiPATHOBJ_bEnumClipLines@12.c)
 *     _PATHOBJ_bEnumClipLines@12 @ 0x223A14 (_PATHOBJ_bEnumClipLines@12.c)
 * Callees:
 *     ?bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z @ 0x2236A0 (-bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z.c)
 *     ?lGetStyleState@XCLIPOBJ@@QBEJJ@Z @ 0x223879 (-lGetStyleState@XCLIPOBJ@@QBEJJ@Z.c)
 *     ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C (-bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z.c)
 */

BOOL __thiscall XCLIPOBJ::bEnumPath(XCLIPOBJ *this, struct _PATHOBJ *a2, unsigned int a3, struct _CLIPLINE *a4, int a5)
{
  const unsigned int *v7; // ecx
  int v8; // esi
  int v9; // ecx
  int v10; // eax

  a4->c = 0;
  if ( (*(_DWORD *)(*((_DWORD *)this + 30) + 16) & 0x2000000) != 0 )
    return 0;
  do
  {
    if ( !XCLIPOBJ::bEnumLine(this, a3, a4) )
      XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, v7);
    v8 = *((_DWORD *)this + 30);
    v9 = *(_DWORD *)(v8 + 16);
  }
  while ( !a4->c && (v9 & 0x2000000) == 0 );
  v10 = *((_DWORD *)this + 30);
  if ( (v9 & 0x2000000) != 0 && *(int *)(v8 + 164) > 0 )
  {
    if ( a5 )
    {
      **(_DWORD **)(v8 + 168) = XCLIPOBJ::lGetStyleState(this, *(_DWORD *)(v8 + 160));
      v10 = *((_DWORD *)this + 30);
    }
  }
  return (*(_DWORD *)(v10 + 16) & 0x2000000) == 0;
}
