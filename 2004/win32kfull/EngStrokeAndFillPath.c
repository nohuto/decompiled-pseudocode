/*
 * XREFs of EngStrokeAndFillPath @ 0x1C013EB50
 * Callers:
 *     OffStrokeAndFillPath @ 0x1C0135A18 (OffStrokeAndFillPath.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C014FEA8 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0296610 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029AEC0 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C029DA70 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02A5240 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3F00 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0075870 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CC838 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0132024 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0133B38 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x1C013A220 (EngFillPath.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C013A6C8 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C013A70C (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     EngPaint @ 0x1C013A7E0 (EngPaint.c)
 *     EngStrokePath @ 0x1C013BD70 (EngStrokePath.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C013BF90 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
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
  MIX v11; // r12d
  BOOL v14; // esi
  MIX mix; // r13d
  ULONG iSolidColor; // eax
  BOOL v17; // edi
  PATHOBJ *v19; // rdx
  struct _CLIPOBJ *v20; // r14
  __int128 v21; // xmm0
  POINTL *v22; // r12
  BRUSHOBJ *v23; // r8
  __int64 p_iUniq; // rax
  POINTL *v25; // r9
  __int128 v26; // xmm0
  BRUSHOBJ *v27; // r8
  __int64 v28; // rax
  MIX v29; // [rsp+20h] [rbp-E0h]
  BRUSHOBJ *v30; // [rsp+40h] [rbp-C0h] BYREF
  XFORMOBJ *pxoa; // [rsp+48h] [rbp-B8h]
  CLIPOBJ *pcoa[2]; // [rsp+50h] [rbp-B0h] BYREF
  FLONG v33; // [rsp+60h] [rbp-A0h]
  LINEATTRS *v34; // [rsp+68h] [rbp-98h]
  POINTL *v35; // [rsp+70h] [rbp-90h]
  _QWORD v36[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v37; // [rsp+88h] [rbp-78h] BYREF
  BRUSHOBJ *pbo; // [rsp+90h] [rbp-70h]
  _QWORD v39[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v40[4]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int128 v43; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ v44; // [rsp+160h] [rbp+60h] BYREF
  __int64 v45; // [rsp+1B0h] [rbp+B0h]
  int v46; // [rsp+1B8h] [rbp+B8h]
  int v47; // [rsp+1E0h] [rbp+E0h]
  __int64 v48; // [rsp+1F0h] [rbp+F0h]
  _BYTE v49[152]; // [rsp+200h] [rbp+100h] BYREF
  BRUSHOBJ *v50; // [rsp+298h] [rbp+198h]
  int v51; // [rsp+2A0h] [rbp+1A0h]

  v10 = 0;
  v11 = mixFill;
  v14 = 0;
  pxoa = pxo;
  mix = mixFill;
  pbo = pboFill;
  iSolidColor = pboFill[5].iSolidColor;
  pcoa[0] = pco;
  v37 = pco;
  v30 = pboStroke;
  v34 = plineattrs;
  v35 = pptlBrushOrg;
  v33 = flOptions;
  if ( (iSolidColor & 0x8000) == 0 )
    mix = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( (pboStroke[5].iSolidColor & 0x8000) == 0 )
    v11 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v17 = 1;
  if ( (plineattrs->fl & 1) != 0 && (unsigned __int8)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx() && !pxoa )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n",
            279);
        goto LABEL_50;
      }
      if ( !v42
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxoa, v34)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxoa, v34) )
      {
        EngSetLastError(8u);
LABEL_50:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_50;
    v19 = (PATHOBJ *)v41;
    if ( ppo[5] )
      v19 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v39, (struct EPATHOBJ *)v19, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v40, (struct EPATHOBJ *)ppo, 1, v33, 0LL);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v36);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v36);
    if ( !v40[0] || !v39[0] || !v36[0] || !RGNOBJ::bMerge((RGNOBJ *)v36, (struct RGNOBJ *)v40, (struct RGNOBJ *)v39, 4u) )
      goto LABEL_48;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v49, pso, &v37);
    if ( !v51 )
    {
      v30 = v50;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
LABEL_49:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v36);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v40);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v39);
      goto LABEL_50;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)pcoa);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)pcoa);
    if ( pcoa[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v39) != 1 )
      {
        v20 = v37;
        if ( RGNOBJ::bMerge((RGNOBJ *)pcoa, (struct RGNOBJ *)v39, (struct RGNOBJ *)&v37[2].rclBounds.top, 8u) )
        {
          v21 = *(_OWORD *)&pcoa[0][4].iUniq;
          v45 = 0LL;
          v46 = 0;
          v43 = v21;
          v47 = 1;
          v48 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&v44, (struct REGION *)pcoa[0], (struct ERECTL *)&v43, 0);
          if ( ERECTL::bEmpty((ERECTL *)&v44.rclBounds) )
          {
            v22 = v35;
            v14 = 1;
          }
          else
          {
            v23 = v30;
            p_iUniq = (__int64)&pso->iUniq;
            v29 = v11;
            v22 = v35;
            if ( !pso )
              p_iUniq = 92LL;
            v25 = v35;
            ++*(_DWORD *)p_iUniq;
            v14 = EngPaint(pso, &v44, v23, v25, v29);
            if ( !v14 )
              goto LABEL_47;
          }
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v36) != 1 )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)pcoa, (struct RGNOBJ *)v36, (struct RGNOBJ *)&v20[2].rclBounds.top, 8u) )
            {
              v26 = *(_OWORD *)&pcoa[0][4].iUniq;
              v45 = 0LL;
              v46 = 0;
              v43 = v26;
              v47 = 1;
              v48 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v44, (struct REGION *)pcoa[0], (struct ERECTL *)&v43, 0);
              if ( ERECTL::bEmpty((ERECTL *)&v44.rclBounds) )
              {
                v14 = 1;
              }
              else
              {
                v27 = pbo;
                v28 = (__int64)&pso->iUniq;
                if ( !pso )
                  v28 = 92LL;
                ++*(_DWORD *)v28;
                v14 = EngPaint(pso, &v44, v27, v22, mix);
              }
            }
            else
            {
              v14 = 0;
            }
          }
        }
      }
    }
LABEL_47:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)pcoa);
    v30 = v50;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
LABEL_48:
    v10 = v14;
    goto LABEL_49;
  }
  if ( !EngFillPath(pso, ppo, pco, pbo, pptlBrushOrg, mix, flOptions)
    || !EngStrokePath(pso, ppo, pcoa[0], pxoa, v30, v35, v34, v11) )
  {
    return 0;
  }
  return v17;
}
