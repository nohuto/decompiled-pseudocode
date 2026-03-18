/*
 * XREFs of _EngFillPath@28 @ 0x1E7DFE
 * Callers:
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 *     _EngStrokePath@32 @ 0x1EB539 (_EngStrokePath@32.c)
 *     ?BmpDevFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1F9C2D (-BmpDevFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1FB445 (-RedirFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x203534 (-MulFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _OffFillPath@36 @ 0x22F0D3 (_OffFillPath@36.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??1RGNMEMOBJTMP@@QAE@XZ @ 0xF5B78 (--1RGNMEMOBJTMP@@QAE@XZ.c)
 *     ?bPreComputedFill@EPATHOBJ@@QBEHXZ @ 0x1DCEDD (-bPreComputedFill@EPATHOBJ@@QBEHXZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QAE@AAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPAU_RECTL@@@Z @ 0x1E4403 (--0RGNMEMOBJTMPIFNEEDED@@QAE@AAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QAE@XZ @ 0x1E7DCF (--1RGNMEMOBJTMPIFNEEDED@@QAE@XZ.c)
 *     _EngPaint@20 @ 0x1EBF08 (_EngPaint@20.c)
 *     ?EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x238843 (-EngFastFill@@YGJPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_RECTL@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 */

BOOL __stdcall EngFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  LONG *v7; // esi
  bool v8; // zf
  RECTL *v9; // edx
  int *v10; // esi
  struct _RECTL *v11; // eax
  int v12; // ebx
  ULONG cCurves; // esi
  bool v14; // cf
  struct REGION *v15; // ebx
  unsigned int v17; // [esp+18h] [ebp-190h]
  unsigned int v18; // [esp+1Ch] [ebp-18Ch]
  int v19; // [esp+24h] [ebp-184h]
  RECTL *p_rclBounds; // [esp+40h] [ebp-168h]
  LONG *v21; // [esp+44h] [ebp-164h]
  _DWORD v22[2]; // [esp+48h] [ebp-160h] BYREF
  LONG v23; // [esp+50h] [ebp-158h] BYREF
  struct REGION *v24[3]; // [esp+54h] [ebp-154h] BYREF
  int v25; // [esp+60h] [ebp-148h]
  int v26; // [esp+64h] [ebp-144h]
  int v27; // [esp+68h] [ebp-140h]
  int v28; // [esp+6Ch] [ebp-13Ch]
  _DWORD v29[4]; // [esp+70h] [ebp-138h] BYREF
  int v30; // [esp+80h] [ebp-128h] BYREF
  int v31; // [esp+84h] [ebp-124h]
  int v32; // [esp+88h] [ebp-120h]
  int v33; // [esp+8Ch] [ebp-11Ch]
  int v34[4]; // [esp+90h] [ebp-118h] BYREF
  CLIPOBJ v35; // [esp+A0h] [ebp-108h] BYREF
  int v36; // [esp+E4h] [ebp-C4h]
  int v37; // [esp+E8h] [ebp-C0h]
  int v38; // [esp+110h] [ebp-98h]
  int v39; // [esp+118h] [ebp-90h]
  CLIPOBJ v40; // [esp+120h] [ebp-88h] BYREF
  int v41; // [esp+164h] [ebp-44h]
  int v42; // [esp+168h] [ebp-40h]
  int v43; // [esp+190h] [ebp-18h]
  int v44; // [esp+198h] [ebp-10h]

  v7 = pso != 0 ? &pso[-1].lDelta : 0;
  v8 = (ppo->fl & 1) == 0;
  v23 = v7[7];
  if ( !v8 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    return 0;
  p_rclBounds = &pco->rclBounds;
  PDEVOBJ::vSync((PDEVOBJ *)&v23, pso, &pco->rclBounds, 0);
  if ( (ppo->fl & 0x4000) != 0 && EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity == 3 )
  {
LABEL_14:
    v8 = pco->iDComplexity == 0;
    v30 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    if ( v8 )
    {
      v11 = 0;
    }
    else
    {
      v31 = 16 * pco->rclBounds.top;
      v33 = 16 * pco->rclBounds.bottom;
      v11 = (struct _RECTL *)&v30;
    }
    v12 = 1;
    v19 = 1;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v24, (struct EPATHOBJ *)ppo, 1, flOptions, v11);
    if ( !v24[0] )
    {
      cCurves = ppo->cCurves;
      v14 = cCurves < 2;
      if ( cCurves >= 2 )
      {
        EngSetLastError(8u);
        v14 = cCurves < 2;
      }
      v12 = v14;
LABEL_21:
      v19 = v12;
LABEL_38:
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v24);
      return v19;
    }
    if ( RGNOBJ::iComplexity((RGNOBJ *)v24) == 1 )
      goto LABEL_38;
    v29[0] = p_rclBounds->left;
    v29[1] = pco->rclBounds.top;
    v29[2] = pco->rclBounds.right;
    v29[3] = pco->rclBounds.bottom;
    if ( !EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) && !pco->iDComplexity )
    {
      v36 = 0;
      v37 = 0;
      v39 = 0;
      v38 = 1;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v35, v24[0], (struct ERECTL *)v29, 0);
      if ( !ERECTL::bEmpty((ERECTL *)&v35.rclBounds) )
      {
        if ( !v35.iDComplexity )
          v35.iDComplexity = 1;
        ++v7[14];
        v19 = EngPaint(pso, &v35, pbo, pptlBrushOrg, mix);
        goto LABEL_38;
      }
      goto LABEL_21;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v22);
    if ( v22[0] )
    {
      if ( RGNOBJ::bMerge((RGNOBJ *)v22, (struct RGNOBJ *)v24, (struct RGNOBJ *)&pco[2], 8u) )
      {
        v15 = (struct REGION *)v22[0];
        v34[0] = *(_DWORD *)(v22[0] + 64);
        v34[1] = *(_DWORD *)(v22[0] + 68);
        v34[2] = *(_DWORD *)(v22[0] + 72);
        v34[3] = *(_DWORD *)(v22[0] + 76);
        ERECTL::operator*=(v34, &p_rclBounds->left);
        v43 = 1;
        v41 = 0;
        v42 = 0;
        v44 = 0;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&v40, v15, (struct ERECTL *)v34, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v40.rclBounds) )
        {
          if ( !v40.iDComplexity )
            v40.iDComplexity = 1;
          v21 = pso != 0 ? &pso[-1].lDelta : 0;
          ++v21[14];
          v19 = EngPaint(pso, &v40, pbo, pptlBrushOrg, mix);
        }
        goto LABEL_37;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v19 = 0;
LABEL_37:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v22);
    goto LABEL_38;
  }
  v9 = 0;
  v10 = (int *)(ppo[1].fl + 28);
  v25 = *v10++;
  v26 = *v10++;
  v27 = *v10;
  v28 = v10[1];
  if ( pco->rclBounds.left > v25 >> 4
    || pco->rclBounds.right < (v27 + 15) >> 4
    || pco->rclBounds.top > v26 >> 4
    || pco->rclBounds.bottom < (v28 + 15) >> 4 )
  {
    v9 = &pco->rclBounds;
  }
  v19 = EngFastFill(
          (struct _SURFOBJ *)v9,
          (struct _PATHOBJ *)pbo,
          (struct _RECTL *)pptlBrushOrg,
          (struct _BRUSHOBJ *)mix,
          (struct _POINTL *)flOptions,
          v17,
          v18);
  if ( v19 < 0 )
  {
    v7 = pso != 0 ? &pso[-1].lDelta : 0;
    goto LABEL_14;
  }
  return v19;
}
