/*
 * XREFs of _EngLineTo@36 @ 0xBDF44
 * Callers:
 *     _OffLineTo@44 @ 0xBC28A (_OffLineTo@44.c)
 *     _W32kCddLineTo@40 @ 0x1D47F5 (_W32kCddLineTo@40.c)
 *     ?BmpDevLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1F9E31 (-BmpDevLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1FB6CD (-RedirLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x203A11 (-MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?vSolidLine@@YGXPAVSURFACE@@PAU_PATHOBJ@@PAU_POINTFIX@@PAU_CLIPOBJ@@K@Z @ 0xBE23C (-vSolidLine@@YGXPAVSURFACE@@PAU_PATHOBJ@@PAU_POINTFIX@@PAU_CLIPOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1PRECOMPUTE@@QAE@XZ @ 0x1E4579 (--1PRECOMPUTE@@QAE@XZ.c)
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 *     _EngCreatePath@0 @ 0x1E6399 (_EngCreatePath@0.c)
 *     ?bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z @ 0x1EAFDB (-bStrokeCosmetic@@YGHPAVSURFACE@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@K@Z.c)
 */

BOOL __stdcall EngLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  int v9; // esi
  PATHOBJ *v10; // eax
  PATHOBJ *v11; // edi
  CLIPOBJ *v12; // edi
  int v13; // eax
  struct ERECTL *v14; // edi
  int v16; // eax
  PATHOBJ *Path; // eax
  struct _LINEATTRS *v18; // [esp+20h] [ebp-100h]
  unsigned int v19; // [esp+24h] [ebp-FCh]
  struct REGION *v20; // [esp+30h] [ebp-F0h] BYREF
  int v21; // [esp+34h] [ebp-ECh]
  PATHOBJ *v22; // [esp+38h] [ebp-E8h]
  struct _BRUSHOBJ *v23; // [esp+3Ch] [ebp-E4h]
  struct _PATHOBJ *v24; // [esp+40h] [ebp-E0h]
  SURFOBJ *v25; // [esp+44h] [ebp-DCh] BYREF
  struct _RECTL *v26; // [esp+48h] [ebp-D8h]
  int v27; // [esp+4Ch] [ebp-D4h] BYREF
  struct SURFACE *v28; // [esp+50h] [ebp-D0h]
  POINTFIX ptfx; // [esp+54h] [ebp-CCh] BYREF
  POINTFIX pptfx; // [esp+5Ch] [ebp-C4h] BYREF
  _BYTE v31[32]; // [esp+64h] [ebp-BCh] BYREF
  _DWORD v32[5]; // [esp+84h] [ebp-9Ch] BYREF
  _BYTE v33[48]; // [esp+98h] [ebp-88h] BYREF
  int v34; // [esp+C8h] [ebp-58h]
  int v35; // [esp+DCh] [ebp-44h]
  int v36; // [esp+E0h] [ebp-40h]
  int v37; // [esp+108h] [ebp-18h]
  int v38; // [esp+110h] [ebp-10h]

  v24 = (struct _PATHOBJ *)pbo;
  v26 = prclBounds;
  v23 = (struct _BRUSHOBJ *)mix;
  v25 = pso;
  ptfx.x = 16 * x1;
  ptfx.y = 16 * y1;
  pptfx.x = 16 * x2;
  v9 = 0;
  v28 = (struct SURFACE *)pco;
  pptfx.y = 16 * y2;
  if ( !*(pso != 0 ? &pso->iType : (USHORT *)64) )
  {
    v25 = (SURFOBJ *)*(pso != 0 ? &pso->hdev : (HDEV *)28);
    PDEVOBJ::vSync((PDEVOBJ *)&v25, pso, 0, 0);
    if ( pco && pco->iDComplexity == 3 || v23 != (struct _BRUSHOBJ *)3341 )
    {
      memset(v31, 0, sizeof(v31));
      Path = EngCreatePath();
      v11 = Path;
      if ( Path )
      {
        if ( PATHOBJ_bMoveTo(Path, ptfx) && PATHOBJ_bPolyLineTo(v11, &pptfx, 1u) )
          v9 = bStrokeCosmetic(v28, v24, (struct _CLIPOBJ *)v31, v23, v18, v19);
        goto LABEL_32;
      }
    }
    else
    {
      vSolidLine(
        (struct SURFACE *)&ptfx,
        (struct _PATHOBJ *)pco,
        (struct _POINTFIX *)v24->fl,
        (struct _CLIPOBJ *)v18,
        v19);
      return 1;
    }
    return v9;
  }
  memset(v31, 0, sizeof(v31));
  *(_DWORD *)&v31[12] = 1;
  v10 = EngCreatePath();
  v11 = v10;
  v22 = v10;
  if ( !v10 )
    return v9;
  if ( !PATHOBJ_bMoveTo(v10, ptfx) || !PATHOBJ_bPolyLineTo(v11, &pptfx, 1u) )
  {
LABEL_32:
    EPATHOBJ::vUnlock((EPATHOBJ *)v11);
    Win32FreePool(v11);
    return v9;
  }
  v27 = (int)*(pso != 0 ? &pso->hdev : (HDEV *)28);
  v35 = 0;
  v36 = 0;
  v37 = 1;
  v38 = 0;
  v34 = 0;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  v12 = (CLIPOBJ *)v28;
  if ( v28 )
    goto LABEL_15;
  if ( !v20 )
  {
LABEL_21:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    if ( v21 == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
    v11 = v22;
    goto LABEL_32;
  }
  v13 = bUMPDSecurityGateEx();
  v14 = (struct ERECTL *)v26;
  if ( !v13 || v26 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v20, v26);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v33, v20, v14, 0);
    v12 = (CLIPOBJ *)v33;
LABEL_15:
    PRECOMPUTE::vInit(v32, pso != 0 ? &pso[-1].lDelta : 0, &v27, v22, v12, 0, v31, v23, 0, 0);
    if ( v32[4] )
    {
      if ( (*(pso != 0 ? (_BYTE *)&pso[1].hsurf : (_BYTE *)72) & 0x20) != 0 )
        v16 = (*(int (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _DWORD, struct _PATHOBJ *, _DWORD, _BYTE *, struct _BRUSHOBJ *))(v27 + 1956))(
                v25,
                v22,
                v12,
                0,
                v24,
                0,
                v31,
                v23);
      else
        v16 = EngStrokePath(v25, v22, v12, 0, (BRUSHOBJ *)v24, 0, (LINEATTRS *)v31, (MIX)v23);
      v9 = v16;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
    goto LABEL_21;
  }
  if ( gfUMPDDebug )
    _DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\engstrok.cxx:%d:EngLineTo:prclBounds == NULL\n", 732);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  if ( v21 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
  return 0;
}
