/*
 * XREFs of ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1E4AC7 (-bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUS.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@K@Z @ 0x1E5662 (-bTextOutSimpleStroke1@EPATHOBJ@@QAEHAAVXDCOBJ@@AAVRFONTOBJ@@PAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ.c)
 *     ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED (-bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 * Callees:
 *     ??1PRECOMPUTE@@QAE@XZ @ 0x1E4579 (--1PRECOMPUTE@@QAE@XZ.c)
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bSubOverflow@@YGHJJ@Z @ 0x1E555E (-bSubOverflow@@YGHJJ@Z.c)
 *     ?vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1E584E (-vInit@PRECOMPUTE@@QAEXPAVSURFACE@@PAVPDEVOBJ@@PAVEPATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_LINEA.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 */

BOOL __thiscall EPATHOBJ::bSimpleStroke(
        PATHOBJ *ppo,
        char a2,
        struct PDEVOBJ *a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  int v11; // esi
  LINEATTRS *v14; // edx
  int (__stdcall *v15)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // ecx
  int (__stdcall *v16)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // ecx
  int v17; // [esp+0h] [ebp-4Ch]
  int v18; // [esp+0h] [ebp-4Ch]
  int v19; // [esp+4h] [ebp-48h]
  int v20; // [esp+4h] [ebp-48h]
  _BYTE v21[4]; // [esp+10h] [ebp-3Ch] BYREF
  int v22; // [esp+14h] [ebp-38h]
  int v23; // [esp+18h] [ebp-34h]
  int v24; // [esp+1Ch] [ebp-30h]
  int v25; // [esp+20h] [ebp-2Ch]
  int v26; // [esp+24h] [ebp-28h]
  int v27; // [esp+28h] [ebp-24h]
  int v28; // [esp+2Ch] [ebp-20h]
  int v29; // [esp+30h] [ebp-1Ch]
  _BYTE v30[16]; // [esp+34h] [ebp-18h] BYREF
  int *v31; // [esp+44h] [ebp-8h]
  int v32; // [esp+5Ch] [ebp+10h]
  int v33; // [esp+5Ch] [ebp+10h]

  memset(v30, 0, sizeof(v30));
  v31 = (int *)(ppo[1].fl + 28);
  v26 = *v31;
  v27 = v31[1];
  v28 = v31[2];
  v29 = v31[3];
  v22 = *v31;
  v23 = v31[1];
  v24 = v31[2];
  v25 = v31[3];
  if ( !bSubOverflow(v17, v19) )
  {
    v22 = *v31;
    v23 = v31[1];
    v24 = v31[2];
    v25 = v31[3];
    v26 = *v31;
    v27 = v31[1];
    v28 = v31[2];
    v29 = v31[3];
    if ( !bSubOverflow(v18, v20) )
    {
      v22 = *v31;
      v23 = v31[1];
      v24 = v31[2];
      v25 = v31[3];
      v26 = *v31;
      v27 = v31[1];
      v28 = v31[2];
      v29 = v31[3];
      if ( v24 - v26 >= 0 )
      {
        v22 = *v31;
        v23 = v31[1];
        v24 = v31[2];
        v25 = v31[3];
        v26 = *v31;
        v27 = v31[1];
        v28 = v31[2];
        v29 = v31[3];
        if ( v25 - v27 >= 0 )
        {
          v11 = 0;
          if ( !ppo->cCurves )
            return 1;
          ++*((_DWORD *)a4 + 14);
          if ( (*((_BYTE *)a4 + 72) & 0x20) != 0 )
          {
            PRECOMPUTE::vInit(v21, a4, a3, ppo, pco, pxo, plineattrs, mix, 0, 0);
            if ( !v25 )
            {
              EngSetLastError(8u);
LABEL_33:
              PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v21);
              return v11;
            }
            v14 = plineattrs;
            if ( (plineattrs->fl & 1) == 0 || (a2 & 2) != 0 )
            {
              if ( (ppo->fl & 1) != 0 )
              {
                if ( (a2 & 1) != 0 )
                {
                  if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
                  {
                    PushThreadGuardedObject(v30, ppo, vCleanupPathStackObj);
                    v14 = plineattrs;
                  }
                  v15 = *(int (__stdcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_DWORD *)a3 + 1956);
                  if ( v15 )
                    v32 = v15((char *)a4 + 16, ppo, pco, pxo, pbo, pptlBrushOrg, v14, mix);
                  else
                    v32 = -1;
                  if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
                    PopThreadGuardedObject(v30);
                  if ( v32 == 1 )
                    goto LABEL_31;
                  if ( v32 == -1 )
                    goto LABEL_33;
                }
                if ( !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
                  goto LABEL_33;
              }
              if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
                PushThreadGuardedObject(v30, ppo, vCleanupPathStackObj);
              v16 = *(int (__stdcall **)(char *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_DWORD *)a3 + 1956);
              if ( v16 )
                v33 = v16((char *)a4 + 16, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
              else
                v33 = -1;
              if ( (*(_BYTE *)(ppo[1].fl + 60) & 1) != 0 )
                PopThreadGuardedObject(v30);
              if ( v33 == 1 )
              {
LABEL_31:
                v11 = 1;
                goto LABEL_33;
              }
              if ( v33 == -1 )
                goto LABEL_33;
            }
            PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v21);
          }
          if ( (plineattrs->fl & 1) == 0 )
            return EngStrokePath((SURFOBJ *)((char *)a4 + 16), ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
          if ( EPATHOBJ::bWiden((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, pxo, plineattrs) )
            return EPATHOBJ::bSimpleFill(ppo, a2, a3, a4, pco, pbo, pptlBrushOrg, mix, 2u);
        }
      }
    }
  }
  return 0;
}
