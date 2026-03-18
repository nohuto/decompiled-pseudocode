/*
 * XREFs of ?ValidUmpdHooks@@YGHPAVPDEVOBJ@@K@Z @ 0x216658
 * Callers:
 *     _NtGdiEngAssociateSurface@12 @ 0x2175AE (_NtGdiEngAssociateSurface@12.c)
 * Callees:
 *     <none>
 */

int __fastcall ValidUmpdHooks(int a1, int a2)
{
  BOOL (__stdcall *v2)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // eax
  BOOL (__stdcall *v7)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // eax
  BOOL (__stdcall *v8)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // eax
  BOOL (__stdcall *v9)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // eax
  BOOL (__stdcall *v10)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // eax
  BOOL (__stdcall *v11)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // eax
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // eax
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // eax
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // eax

  if ( (a2 & 1) != 0 )
    v2 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_DWORD *)a1 + 1972);
  else
    v2 = EngBitBlt;
  if ( !v2 )
    return 0;
  if ( !((a2 & 2) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_DWORD *)a1 + 1980)
       : EngStretchBlt) )
    return 0;
  if ( !((a2 & 4) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_DWORD *)a1 + 2180)
       : EngPlgBlt) )
    return 0;
  if ( !((a2 & 8) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_DWORD *)a1 + 1992)
       : EngTextOut) )
    return 0;
  if ( !((a2 & 0x20) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_DWORD *)a1 + 1956)
       : EngStrokePath) )
    return 0;
  v7 = (a2 & 0x40) != 0
     ? *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_DWORD *)a1 + 1960)
     : EngFillPath;
  if ( v7
    && ((a2 & 0x80u) == 0
      ? (v8 = EngStrokeAndFillPath)
      : (v8 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_DWORD *)a1 + 1964)),
        v8
     && ((a2 & 0x400) == 0
       ? (v9 = EngCopyBits)
       : (v9 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_DWORD *)a1 + 1976)),
         v9
      && ((a2 & 0x100) == 0
        ? (v10 = EngLineTo)
        : (v10 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_DWORD *)a1 + 2024)),
          v10
       && ((a2 & 0x2000) == 0
         ? (v11 = EngStretchBltROP)
         : (v11 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_DWORD *)a1 + 2176)),
           v11
        && ((a2 & 0x8000) == 0
          ? (v12 = EngTransparentBlt)
          : (v12 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_DWORD *)a1 + 2196)),
            v12
         && ((a2 & 0x10000) == 0
           ? (v13 = EngAlphaBlend)
           : (v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_DWORD *)a1 + 2184)),
             v13
          && (((unsigned int)&loc_20000 & a2) == 0
            ? (v14 = EngGradientFill)
            : (v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_DWORD *)a1 + 2172)),
              v14))))))) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
