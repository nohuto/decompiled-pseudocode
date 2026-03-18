/*
 * XREFs of ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616
 * Callers:
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1E4AC7 (-bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUS.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E5583 (-bTextOutSimpleFill@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@P.c)
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 * Callees:
 *     ??1PRECOMPUTE@@QAE@XZ @ 0x1E4579 (--1PRECOMPUTE@@QAE@XZ.c)
 *     ?bSubOverflow@@YGHJJ@Z @ 0x1E555E (-bSubOverflow@@YGHJJ@Z.c)
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 */

BOOL __thiscall EPATHOBJ::bSimpleFill(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  int v10; // esi
  int (__stdcall *v12)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // ecx
  int (__stdcall *v13)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // ecx
  int v14; // [esp+0h] [ebp-48h]
  int v15; // [esp+0h] [ebp-48h]
  int v16; // [esp+4h] [ebp-44h]
  int v17; // [esp+4h] [ebp-44h]
  _BYTE v18[4]; // [esp+10h] [ebp-38h] BYREF
  int v19; // [esp+14h] [ebp-34h]
  int v20; // [esp+18h] [ebp-30h]
  int v21; // [esp+1Ch] [ebp-2Ch]
  int v22; // [esp+20h] [ebp-28h]
  int v23; // [esp+24h] [ebp-24h]
  int v24; // [esp+28h] [ebp-20h]
  int v25; // [esp+2Ch] [ebp-1Ch]
  int v26; // [esp+30h] [ebp-18h]
  _BYTE v27[16]; // [esp+34h] [ebp-14h] BYREF
  int *v28; // [esp+44h] [ebp-4h]
  unsigned int v29; // [esp+50h] [ebp+8h]
  unsigned int v30; // [esp+50h] [ebp+8h]

  memset(v27, 0, sizeof(v27));
  v28 = (int *)(ppo[1].fl + 28);
  v23 = *v28;
  v24 = v28[1];
  v25 = v28[2];
  v26 = v28[3];
  v19 = *v28;
  v20 = v28[1];
  v21 = v28[2];
  v22 = v28[3];
  if ( bSubOverflow(v14, v16) )
    return 0;
  v19 = *v28;
  v20 = v28[1];
  v21 = v28[2];
  v22 = v28[3];
  v23 = *v28;
  v24 = v28[1];
  v25 = v28[2];
  v26 = v28[3];
  if ( bSubOverflow(v15, v17) )
    return 0;
  v19 = *v28;
  v20 = v28[1];
  v21 = v28[2];
  v22 = v28[3];
  v23 = *v28;
  v24 = v28[1];
  v25 = v28[2];
  v26 = v28[3];
  if ( v21 - v23 < 0 )
    return 0;
  v19 = *v28;
  v20 = v28[1];
  v21 = v28[2];
  v22 = v28[3];
  v23 = *v28;
  v24 = v28[1];
  v25 = v28[2];
  v26 = v28[3];
  if ( v22 - v24 < 0 )
    return 0;
  v10 = 0;
  if ( !ppo->cCurves )
    return 1;
  if ( (*((_BYTE *)a4 + 72) & 0x40) != 0
    && ((a2 & 8) != 0 && (flOptions & 2) != 0 || (flOptions & 2) == 0 && (a2 & 4) != 0) )
  {
    PRECOMPUTE::vInit(v18, a4, a3, ppo, pco, 0, 0, mix, flOptions, 1);
    if ( !v22 )
    {
      EngSetLastError(8u);
LABEL_35:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v18);
      return v10;
    }
    if ( (ppo->fl & 1) != 0 )
    {
      if ( (a2 & 1) != 0 )
      {
        ++*((_DWORD *)a4 + 14);
        if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
          PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
        v12 = *(int (__stdcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_DWORD *)a3 + 1960);
        if ( v12 )
          v29 = v12((char *)a4 + 16, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
        else
          v29 = -1;
        if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
          PopThreadGuardedObject(v27);
        if ( v29 == 1 )
          goto LABEL_33;
        if ( v29 == -1 )
          goto LABEL_35;
      }
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
        goto LABEL_35;
    }
    ++*((_DWORD *)a4 + 14);
    if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
      PushThreadGuardedObject(v27, ppo, vCleanupPathStackObj);
    v13 = *(int (__stdcall **)(char *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_DWORD *)a3 + 1960);
    if ( v13 )
      v30 = v13((char *)a4 + 16, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
    else
      v30 = -1;
    if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
      PopThreadGuardedObject(v27);
    if ( v30 == 1 )
    {
LABEL_33:
      v10 = 1;
      goto LABEL_35;
    }
    if ( v30 == -1 )
      goto LABEL_35;
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v18);
  }
  ++*((_DWORD *)a4 + 14);
  return EngFillPath((SURFOBJ *)((char *)a4 + 16), ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
}
