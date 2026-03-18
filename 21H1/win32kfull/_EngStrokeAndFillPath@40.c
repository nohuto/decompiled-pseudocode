/*
 * XREFs of _EngStrokeAndFillPath@40 @ 0x1E8174
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1E4AC7 (-bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUS.c)
 *     ?PanStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1F63F9 (-PanStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 *     ?BmpDevStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1FA35F (-BmpDevStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@.c)
 *     ?RedirStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1FBEAA (-RedirStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x2046EE (-MulStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _OffStrokeAndFillPath@48 @ 0x22F539 (_OffStrokeAndFillPath@48.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1RGNMEMOBJTMP@@QAE@XZ @ 0xF5B78 (--1RGNMEMOBJTMP@@QAE@XZ.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z @ 0x1CC939 (--0BOUNDCLIPRGNTOSURFACE@@QAE@PAU_SURFOBJ@@PAPAU_CLIPOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QAE@AAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPAU_RECTL@@@Z @ 0x1E4403 (--0RGNMEMOBJTMPIFNEEDED@@QAE@AAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QAE@XZ @ 0x1E7DCF (--1RGNMEMOBJTMPIFNEEDED@@QAE@XZ.c)
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     _EngPaint@20 @ 0x1EBF08 (_EngPaint@20.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  BOOL v10; // ebx
  int v11; // ecx
  BOOL v12; // edi
  PATHOBJ *v13; // eax
  BRUSHOBJ *v15; // [esp+20h] [ebp-1D4h]
  BRUSHOBJ *v16; // [esp+20h] [ebp-1D4h]
  POINTL *v17; // [esp+24h] [ebp-1D0h]
  POINTL *v18; // [esp+24h] [ebp-1D0h]
  MIX v19; // [esp+28h] [ebp-1CCh]
  FLONG v20; // [esp+3Ch] [ebp-1B8h] BYREF
  LINEATTRS *v21; // [esp+40h] [ebp-1B4h]
  POINTL *v22; // [esp+44h] [ebp-1B0h]
  XFORMOBJ *v23; // [esp+48h] [ebp-1ACh]
  SURFOBJ *v24; // [esp+4Ch] [ebp-1A8h]
  CLIPOBJ *v25[2]; // [esp+50h] [ebp-1A4h] BYREF
  MIX mix; // [esp+58h] [ebp-19Ch]
  BRUSHOBJ *v27; // [esp+5Ch] [ebp-198h]
  BRUSHOBJ *pbo; // [esp+60h] [ebp-194h]
  _DWORD v29[2]; // [esp+64h] [ebp-190h] BYREF
  struct _CLIPOBJ *v30; // [esp+6Ch] [ebp-188h] BYREF
  LONG *v31; // [esp+70h] [ebp-184h]
  _DWORD v32[3]; // [esp+74h] [ebp-180h] BYREF
  _DWORD v33[3]; // [esp+80h] [ebp-174h] BYREF
  _BYTE v34[8]; // [esp+8Ch] [ebp-168h] BYREF
  int v35; // [esp+94h] [ebp-160h]
  LONG bottom; // [esp+D4h] [ebp-120h] BYREF
  int v37; // [esp+D8h] [ebp-11Ch]
  ULONG iUniq; // [esp+DCh] [ebp-118h]
  LONG left; // [esp+E0h] [ebp-114h]
  CLIPOBJ v40; // [esp+E4h] [ebp-110h] BYREF
  int v41; // [esp+128h] [ebp-CCh]
  int v42; // [esp+12Ch] [ebp-C8h]
  int v43; // [esp+154h] [ebp-A0h]
  int v44; // [esp+15Ch] [ebp-98h]
  _BYTE v45[124]; // [esp+164h] [ebp-90h] BYREF
  FLONG v46; // [esp+1E0h] [ebp-14h]
  int v47; // [esp+1E4h] [ebp-10h]

  v25[0] = pco;
  v30 = pco;
  v23 = pxo;
  pbo = pboStroke;
  v21 = plineattrs;
  v27 = pboFill;
  v22 = pptlBrushOrg;
  v10 = 0;
  v20 = flOptions;
  v24 = pso;
  v31 = pso != 0 ? &pso[-1].lDelta : 0;
  mix = mixFill;
  v11 = (unsigned __int8)mixFill;
  v12 = 0;
  if ( ((int)pboFill[6].pvRbrush & 0x8000) == 0 )
    mix = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((int)pbo[6].pvRbrush & 0x8000) == 0 )
    mixFill = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (v21->fl & 1) != 0 && v11 != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v34);
    if ( !ppo[3].fl )
    {
      if ( bUMPDSecurityGateEx() && !v23 )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n",
            279);
        goto LABEL_41;
      }
      if ( !v35
        || !EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v34, (struct EPATHOBJ *)ppo, v23, v21)
        || !EPATHOBJ::bWiden((EPATHOBJ *)v34, (struct EPATHOBJ *)ppo, v23, v21) )
      {
        EngSetLastError(8u);
LABEL_41:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v34);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_41;
    v13 = ppo;
    if ( !ppo[3].fl )
      v13 = (PATHOBJ *)v34;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v32, (struct EPATHOBJ *)v13, 0, 2u, 0);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v33, (struct EPATHOBJ *)ppo, 1, v20, 0);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v29);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v29);
    if ( !v33[0] || !v32[0] || !v29[0] || !RGNOBJ::bMerge((RGNOBJ *)v29, (struct RGNOBJ *)v33, (struct RGNOBJ *)v32, 4u) )
      goto LABEL_39;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v45, v24, &v30);
    if ( !v47 )
    {
      v20 = v46;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
LABEL_40:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v29);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v33);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v32);
      goto LABEL_41;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v25);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v25);
    if ( v25[0] )
    {
      if ( RGNOBJ::iComplexity((RGNOBJ *)v32) != 1 )
      {
        v20 = (FLONG)&v30[2];
        if ( RGNOBJ::bMerge((RGNOBJ *)v25, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v30[2], 8u) )
        {
          bottom = v25[0][2].rclBounds.bottom;
          v37 = *(_DWORD *)&v25[0][2].iDComplexity;
          iUniq = v25[0][3].iUniq;
          left = v25[0][3].rclBounds.left;
          v41 = 0;
          v42 = 0;
          v43 = 1;
          v44 = 0;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&v40, (struct REGION *)v25[0], (struct ERECTL *)&bottom, 0);
          if ( ERECTL::bEmpty((ERECTL *)&v40.rclBounds) )
          {
            v12 = 1;
            goto LABEL_32;
          }
          v17 = v22;
          v15 = pbo;
          ++v31[14];
          v12 = EngPaint(v24, &v40, v15, v17, mixFill);
          if ( v12 )
          {
LABEL_32:
            if ( RGNOBJ::iComplexity((RGNOBJ *)v29) != 1 )
            {
              if ( RGNOBJ::bMerge((RGNOBJ *)v25, (struct RGNOBJ *)v29, (struct RGNOBJ *)v20, 8u) )
              {
                bottom = v25[0][2].rclBounds.bottom;
                v37 = *(_DWORD *)&v25[0][2].iDComplexity;
                iUniq = v25[0][3].iUniq;
                left = v25[0][3].rclBounds.left;
                v41 = 0;
                v42 = 0;
                v43 = 1;
                v44 = 0;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&v40, (struct REGION *)v25[0], (struct ERECTL *)&bottom, 0);
                if ( ERECTL::bEmpty((ERECTL *)&v40.rclBounds) )
                {
                  v12 = 1;
                }
                else
                {
                  v19 = mix;
                  v18 = v22;
                  v16 = v27;
                  ++v31[14];
                  v12 = EngPaint(v24, &v40, v16, v18, v19);
                }
              }
              else
              {
                v12 = 0;
              }
            }
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v25);
    v20 = v46;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v20);
LABEL_39:
    v10 = v12;
    goto LABEL_40;
  }
  if ( EngFillPath(pso, ppo, v25[0], v27, v22, mix, v20) && EngStrokePath(v24, ppo, v25[0], v23, pbo, v22, v21, mixFill) )
    return 1;
  return v10;
}
