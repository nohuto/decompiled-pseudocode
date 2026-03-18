/*
 * XREFs of _EngStrokePath@32 @ 0x1EB539
 * Callers:
 *     _W32kCddStrokePath@36 @ 0x1D4841 (_W32kCddStrokePath@36.c)
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     ?PanStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1F652F (-PanStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 *     ?BmpDevStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1FA467 (-BmpDevStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POI.c)
 *     ?RedirStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1FBFF6 (-RedirStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POIN.c)
 *     ?MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x20495E (-MulStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _OffStrokePath@40 @ 0x22F5F4 (_OffStrokePath@40.c)
 * Callees:
 *     ?vSolidLine@@YGXPAVSURFACE@@PAU_PATHOBJ@@PAU_POINTFIX@@PAU_CLIPOBJ@@K@Z @ 0xBE23C (-vSolidLine@@YGXPAVSURFACE@@PAU_PATHOBJ@@PAU_POINTFIX@@PAU_CLIPOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1CC939 (--0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??1BOUNDCLIPRGNTOSURFACE@@QAE@XZ @ 0x1CCADC (--1BOUNDCLIPRGNTOSURFACE@@QAE@XZ.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     ?bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z @ 0x1EAFDB (-bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 */

BOOL __stdcall EngStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  SURFOBJ *v8; // ecx
  LONG *v9; // esi
  int v10; // eax
  BOOL v11; // edi
  int (__stdcall *v12)(LONG *, PATHOBJ *, CLIPOBJ *, struct _XFORMOBJ *, BRUSHOBJ *, POINTL *, struct _CLIPOBJ *, MIX); // edx
  struct _CLIPOBJ *v13; // ecx
  struct _CLIPOBJ *v15; // [esp+0h] [ebp-B8h]
  unsigned int v16; // [esp+4h] [ebp-B4h]
  struct _XFORMOBJ *v17; // [esp+18h] [ebp-A0h] BYREF
  BRUSHOBJ *v18; // [esp+1Ch] [ebp-9Ch]
  struct _CLIPOBJ *v19; // [esp+20h] [ebp-98h]
  CLIPOBJ *v20; // [esp+24h] [ebp-94h] BYREF
  _BYTE v21[128]; // [esp+28h] [ebp-90h] BYREF
  int v22; // [esp+A8h] [ebp-10h]

  v20 = pco;
  v17 = pxo;
  v18 = pbo;
  v19 = (struct _CLIPOBJ *)plineattrs;
  BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v21, pso, &v20);
  if ( !v22 )
    goto LABEL_23;
  v8 = pso;
  v9 = pso != 0 ? &pso[-1].lDelta : 0;
  if ( (plineattrs->fl & 1) != 0 )
  {
    if ( (ppo->fl & 0x10) != 0 || EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, v17, plineattrs) )
    {
      v10 = EngFillPath(v9 != 0 ? (SURFOBJ *)(v9 + 4) : 0, ppo, v20, v18, pptlBrushOrg, mix, 2u);
LABEL_12:
      v11 = v10;
      goto LABEL_24;
    }
LABEL_23:
    v11 = 0;
    goto LABEL_24;
  }
  if ( (ppo->fl & 1) != 0 )
  {
    if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_23;
    v8 = pso;
  }
  v11 = 0;
  if ( !*(pso != 0 ? &pso->iType : (USHORT *)64) )
  {
    v17 = (struct _XFORMOBJ *)*(pso != 0 ? &pso->hdev : (HDEV *)28);
    PDEVOBJ::vSync((PDEVOBJ *)&v17, v8, 0, 0);
    if ( (_BYTE)mix != 13 || v20 && v20->iDComplexity == 3 )
    {
      v13 = v19;
    }
    else
    {
      v13 = v19;
      if ( !v19[1].iUniq
        && (v19->iUniq & 2) == 0
        && (((int)*(pso != 0 ? &pso[1].hsurf : (HSURF *)72) & 0x200) == 0
         || ((_DWORD)(*(pso != 0 ? &pso->hdev : (HDEV *)28))[6] & 0x8000) != 0) )
      {
        vSolidLine((EPATHOBJ *)ppo, v9, 0, (struct _PATHOBJ *)v20, v18->iSolidColor, v15, v16);
        v11 = 1;
        goto LABEL_24;
      }
    }
    v10 = bStrokeCosmetic(
            ppo,
            (int)v9,
            (struct SURFACE *)v20,
            (struct _PATHOBJ *)v18,
            (struct _LINEATTRS *)v13,
            (struct _BRUSHOBJ *)mix,
            (struct _LINEATTRS *)v15,
            v16);
    goto LABEL_12;
  }
  v12 = (int (__stdcall *)(LONG *, PATHOBJ *, CLIPOBJ *, struct _XFORMOBJ *, BRUSHOBJ *, POINTL *, struct _CLIPOBJ *, MIX))*((_DWORD *)*(pso != 0 ? &pso->hdev : (HDEV *)28) + 489);
  if ( v12 )
  {
    v10 = v12(v9 != 0 ? v9 + 4 : 0, ppo, v20, v17, v18, pptlBrushOrg, v19, mix);
    goto LABEL_12;
  }
LABEL_24:
  BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v21);
  return v11;
}
