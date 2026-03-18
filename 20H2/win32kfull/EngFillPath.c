/*
 * XREFs of EngFillPath @ 0x1C013C220
 * Callers:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013C088 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngStrokePath @ 0x1C013DD80 (EngStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C0140B60 (EngStrokeAndFillPath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0298DA0 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C029B4C0 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C02A2A00 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     NtGdiEngFillPath @ 0x1C02B1B20 (NtGdiEngFillPath.c)
 *     OffFillPath @ 0x1C02C7A64 (OffFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00690E4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C013C5E0 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013C604 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C013C6D4 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C013C718 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     EngPaint @ 0x1C013C7F0 (EngPaint.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
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
  BOOL v8; // edi
  __int64 p_hdev; // rax
  BOOL v12; // esi
  RECTL *p_rclBounds; // r15
  RECTL *v14; // r8
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int128 *v18; // rax
  BYTE v19; // al
  __int64 v20; // rax
  struct REGION *v22; // rbx
  BYTE iDComplexity; // al
  __int64 p_iUniq; // rax
  ULONG cCurves; // ebx
  bool v26; // cf
  _QWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  struct REGION *v30[3]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v31; // [rsp+80h] [rbp-80h]
  _DWORD v32[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-50h] BYREF
  CLIPOBJ pcoa; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v36; // [rsp+110h] [rbp+10h]
  int v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+150h] [rbp+50h]
  CLIPOBJ v40; // [rsp+160h] [rbp+60h] BYREF
  __int64 v41; // [rsp+1B0h] [rbp+B0h]
  int v42; // [rsp+1B8h] [rbp+B8h]
  int v43; // [rsp+1E0h] [rbp+E0h]
  __int64 v44; // [rsp+1F0h] [rbp+F0h]

  v8 = 0;
  p_hdev = (__int64)&pso->hdev;
  if ( !pso )
    p_hdev = 48LL;
  v12 = 1;
  v29 = *(_QWORD *)p_hdev;
  if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
  {
    p_rclBounds = &pco->rclBounds;
    PDEVOBJ::vSync((PDEVOBJ *)&v29, pso, &pco->rclBounds, 0);
    if ( ((ppo->fl & 0x4000) == 0 || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo))
      && pco->iDComplexity != 3 )
    {
      v14 = 0LL;
      v15 = *(_QWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      v16 = (int)*(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL) >> 4;
      v31 = *(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      if ( p_rclBounds->left > v16
        || pco->rclBounds.right < (int)((SDWORD2(v31) + 15LL) >> 4)
        || pco->rclBounds.top > SHIDWORD(v15) >> 4
        || pco->rclBounds.bottom < (int)((SHIDWORD(v31) + 15LL) >> 4) )
      {
        v14 = &pco->rclBounds;
      }
      v17 = EngFastFill(pso, ppo, v14, pbo, pptlBrushOrg, mix, flOptions);
      if ( v17 >= 0 )
        return v17;
    }
    v33 = 0LL;
    if ( pco->iDComplexity )
    {
      DWORD1(v33) = 16 * pco->rclBounds.top;
      HIDWORD(v33) = 16 * pco->rclBounds.bottom;
      v18 = &v33;
    }
    else
    {
      v18 = 0LL;
    }
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v30, ppo, 1LL, flOptions, v18);
    if ( !v30[0] )
    {
      cCurves = ppo->cCurves;
      v26 = cCurves < 2;
      if ( cCurves >= 2 )
      {
        EngSetLastError(8u);
        v26 = cCurves < 2;
      }
      LOBYTE(v8) = v26;
      goto LABEL_25;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v30) != 1 )
    {
      v32[0] = p_rclBounds->left;
      v32[1] = pco->rclBounds.top;
      v32[2] = pco->rclBounds.right;
      v32[3] = pco->rclBounds.bottom;
      if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v28);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v28);
        if ( v28[0] )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)v28, (struct RGNOBJ *)v30, (struct RGNOBJ *)&pco[2].rclBounds.top, 8u) )
          {
            v22 = (struct REGION *)v28[0];
            v34 = *(_OWORD *)(v28[0] + 96LL);
            ERECTL::operator*=((int *)&v34, &p_rclBounds->left);
            v41 = 0LL;
            v42 = 0;
            v43 = 1;
            v44 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&v40, v22, (struct ERECTL *)&v34, 0);
            if ( ERECTL::bEmpty((ERECTL *)&v40.rclBounds) )
            {
              v8 = 1;
            }
            else
            {
              iDComplexity = v40.iDComplexity;
              if ( !v40.iDComplexity )
                iDComplexity = 1;
              v40.iDComplexity = iDComplexity;
              p_iUniq = (__int64)&pso->iUniq;
              if ( !pso )
                p_iUniq = 92LL;
              ++*(_DWORD *)p_iUniq;
              v8 = EngPaint(pso, &v40, pbo, pptlBrushOrg, mix);
            }
          }
        }
        else
        {
          EngSetLastError(8u);
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v28);
        goto LABEL_25;
      }
      v36 = 0LL;
      v37 = 0;
      v38 = 1;
      v39 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v30[0], (struct ERECTL *)v32, 0);
      if ( !ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
      {
        v19 = pcoa.iDComplexity;
        if ( !pcoa.iDComplexity )
          v19 = 1;
        pcoa.iDComplexity = v19;
        v20 = (__int64)&pso->iUniq;
        if ( !pso )
          v20 = 92LL;
        ++*(_DWORD *)v20;
        v12 = EngPaint(pso, &pcoa, pbo, pptlBrushOrg, mix);
      }
    }
    v8 = v12;
LABEL_25:
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v30);
  }
  return v8;
}
