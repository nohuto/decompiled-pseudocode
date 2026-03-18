/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0
 * Callers:
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z @ 0x1FF302 (-GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _GrePolyBezierTo@12 @ 0x1FFDFC (_GrePolyBezierTo@12.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 *     _GrePolyPolygonInternal@20 @ 0x20050A (_GrePolyPolygonInternal@20.c)
 *     _GrePolyPolylineInternal@20 @ 0x2007A2 (_GrePolyPolylineInternal@20.c)
 *     _GrePolylineTo@12 @ 0x2009B9 (_GrePolylineTo@12.c)
 *     _NtGdiEllipse@20 @ 0x200B61 (_NtGdiEllipse@20.c)
 *     _NtGdiRoundRect@28 @ 0x200D84 (_NtGdiRoundRect@28.c)
 *     _NtGdiFillPath@4 @ 0x2116F1 (_NtGdiFillPath@4.c)
 *     _NtGdiStrokeAndFillPath@4 @ 0x211C98 (_NtGdiStrokeAndFillPath@4.c)
 *     _NtGdiStrokePath@4 @ 0x211DC5 (_NtGdiStrokePath@4.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x798DC (-DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1E4AC7 (-bSimpleStrokeAndFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUS.c)
 *     ?mixBest@EBRUSHOBJ@@QBEKEE@Z @ 0x1E5756 (-mixBest@EBRUSHOBJ@@QBEKEE@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234F52 (-bComputeWidenedBounds@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QAEXPAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x23848A (-vUpdateCosmeticStyleState@EPATHOBJ@@QAEXPAVSURFACE@@PAU_LINEATTRS@@@Z.c)
 */

int __thiscall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *this,
        struct XDCOBJ *a2,
        struct _LINEATTRS *a3,
        struct EXFORMOBJ *a4,
        unsigned int a5)
{
  int v6; // ebx
  unsigned int v7; // edx
  int v8; // ebx
  int *fl; // ecx
  int v10; // esi
  DC *v11; // ecx
  struct REGION *v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // esi
  int v16; // edi
  int v17; // eax
  struct _LINEATTRS *v18; // ecx
  int v19; // eax
  int v20; // edx
  FLONG v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // edi
  POINTL **v29; // edi
  PATHOBJ *v30; // edx
  unsigned int v31; // ecx
  LINEATTRS *v32; // esi
  MIX v33; // ebx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  BOOL v36; // eax
  int v37; // ecx
  unsigned int mix; // [esp+4Ch] [ebp-120h]
  MIX mixa; // [esp+4Ch] [ebp-120h]
  LONG v40; // [esp+50h] [ebp-11Ch]
  int v41; // [esp+50h] [ebp-11Ch]
  int v42; // [esp+50h] [ebp-11Ch]
  int v43; // [esp+50h] [ebp-11Ch]
  LONG v45; // [esp+58h] [ebp-114h]
  int v46; // [esp+58h] [ebp-114h]
  int v47; // [esp+58h] [ebp-114h]
  int v48; // [esp+5Ch] [ebp-110h]
  int v49; // [esp+5Ch] [ebp-110h]
  int v50; // [esp+5Ch] [ebp-110h]
  int v51; // [esp+5Ch] [ebp-110h]
  struct SURFACE *v52; // [esp+64h] [ebp-108h]
  BRUSHOBJ *v53; // [esp+68h] [ebp-104h]
  BRUSHOBJ *v54; // [esp+6Ch] [ebp-100h]
  int v55; // [esp+70h] [ebp-FCh]
  BRUSHOBJ *pbo; // [esp+74h] [ebp-F8h]
  int v57; // [esp+78h] [ebp-F4h] BYREF
  int v58; // [esp+7Ch] [ebp-F0h]
  XFORMOBJ *pxo; // [esp+80h] [ebp-ECh]
  int v60; // [esp+84h] [ebp-E8h]
  int v61; // [esp+88h] [ebp-E4h]
  FLOAT_LONG v62; // [esp+8Ch] [ebp-E0h]
  RECTL rclBounds; // [esp+90h] [ebp-DCh] BYREF
  unsigned int v64; // [esp+A0h] [ebp-CCh]
  _BYTE v65[20]; // [esp+A4h] [ebp-C8h] BYREF
  _DWORD v66[3]; // [esp+B8h] [ebp-B4h] BYREF
  char v67; // [esp+C4h] [ebp-A8h]
  char v68; // [esp+C5h] [ebp-A7h]
  _DWORD v69[4]; // [esp+D4h] [ebp-98h] BYREF
  CLIPOBJ pco; // [esp+E4h] [ebp-88h] BYREF
  int v71; // [esp+128h] [ebp-44h]
  int v72; // [esp+12Ch] [ebp-40h]
  int v73; // [esp+154h] [ebp-18h]
  int v74; // [esp+15Ch] [ebp-10h]

  pxo = (XFORMOBJ *)a4;
  v55 = 0;
  v61 = 0;
  v62.e = 0;
  mix = 0;
  if ( !this->cCurves )
    return 1;
  v6 = *(_DWORD *)a2;
  v7 = a5;
  v64 = a5;
  if ( *(struct PEN **)(v6 + 96) == gpPenNull )
  {
    v7 = a5 & 0xFFFFFFFE;
    a5 &= ~1u;
  }
  if ( *(struct BRUSH **)(v6 + 92) == gpbrNull )
  {
    v7 &= ~2u;
    a5 = v7;
  }
  v8 = 1;
  v60 = v7 & 1;
  if ( (v7 & 1) != 0 && (a3->fl & 1) != 0 )
  {
    if ( !EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)this, (struct EPATHOBJ *)this, pxo, a3) )
    {
      EngSetLastError(0x216u);
      return 0;
    }
    if ( a3->pstyle )
      a3->elStyleState.e = 0;
  }
  fl = (int *)this[1].fl;
  v45 = fl[7] >> 4;
  rclBounds.left = v45;
  v40 = fl[8] >> 4;
  rclBounds.top = v40;
  rclBounds.bottom = ((fl[10] + 15) >> 4) + 1;
  rclBounds.right = ((fl[9] + 15) >> 4) + 1;
  if ( (*(_BYTE *)(*(_DWORD *)a2 + 24) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a2, (struct ERECTL *)&rclBounds);
  if ( !XDCOBJ::bFullScreen((DC **)a2) )
  {
    memset(v66, 0, sizeof(v66));
    v67 = 0;
    v68 = 1;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v65, a2, 0);
    if ( (v65[12] & 1) == 0 )
    {
      v8 = XDCOBJ::bFullScreen((DC **)a2);
      goto LABEL_86;
    }
    if ( !DestSurfaceAccessCheck(*(_DWORD **)(*(_DWORD *)a2 + 504)) )
    {
      EngSetLastError(5u);
      v8 = 0;
LABEL_86:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
      if ( v66[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v66);
      return v8;
    }
    v10 = *(_DWORD *)a2;
    v69[0] = v45;
    v69[1] = v40;
    v69[2] = rclBounds.right;
    v69[3] = rclBounds.bottom;
    ERECTL::bOffsetAdd((ERECTL *)v69, (const struct _POINTL *)(v10 + 8 * ((*(_DWORD *)(v10 + 28) & 1) + 131)), 0);
    EPATHOBJ::vOffset((EPATHOBJ *)this, (struct EPOINTL *)(v10 + 1048 + 8 * (*(_DWORD *)(v10 + 28) & 1)));
    if ( DC::prgnRao(*(DC **)a2) )
      v12 = DC::prgnRao(v11);
    else
      v12 = DC::prgnVisSnap(v11);
    v73 = 1;
    v71 = 0;
    v72 = 0;
    v74 = 0;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v12, (struct ERECTL *)v69, 0);
    v13 = *(_DWORD *)a2;
    if ( *(_DWORD *)(*(_DWORD *)a2 + 20) == 2 || ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
    {
      if ( v60 && (a3->pstyle && (a3->fl & 1) == 0 || (a3->fl & 2) != 0) )
        EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)this, *(struct SURFACE **)(v13 + 504), a3);
      goto LABEL_86;
    }
    v14 = *(_DWORD *)(v13 + 36);
    v52 = *(struct SURFACE **)(v13 + 504);
    v57 = v14;
    v15 = *((_DWORD *)v52 + 22);
    v16 = *(_DWORD *)(v13 + 60);
    v54 = (BRUSHOBJ *)(v13 + 1276);
    pbo = (BRUSHOBJ *)(v13 + 1184);
    v53 = (BRUSHOBJ *)(v13 + 1276);
    if ( !v60 )
    {
LABEL_48:
      if ( (a5 & 2) != 0 )
      {
        v51 = *(_DWORD *)(v13 + 1020);
        v58 = v13;
        v26 = *(_DWORD *)(v51 + 184);
        if ( (((unsigned __int8)v26 | *(_BYTE *)(v13 + 236)) & 1) != 0 )
        {
          *(_DWORD *)(v51 + 184) = v26 & 0xFFFFFFFE;
          *(_DWORD *)(*(_DWORD *)a2 + 236) &= ~1u;
          EBRUSHOBJ::vInitBrush(pbo, *(_DWORD *)a2, *(_DWORD *)(*(_DWORD *)a2 + 92), v16, v15, v52, 1);
          v27 = *(_DWORD *)a2;
        }
        else
        {
          v27 = v58;
        }
        v28 = v60;
        if ( !v60 || (v13 = v27, mix >> 8 == (unsigned __int8)mix) )
        {
          mix = EBRUSHOBJ::mixBest(
                  (EBRUSHOBJ *)pbo,
                  *(_BYTE *)(*(_DWORD *)(v27 + 1020) + 232),
                  *(_BYTE *)(*(_DWORD *)(v27 + 1020) + 233));
          v13 = v27;
        }
      }
      else
      {
        v28 = v60;
      }
      if ( (*(_BYTE *)(v13 + 24) & 0xE0) == 0
        || ERECTL::bEmpty((ERECTL *)&pco.rclBounds)
        || (!v28 || ((int)v53[6].pvRbrush & 0x100) != 0) && ((a5 & 2) == 0 || ((int)pbo[6].pvRbrush & 0x100) != 0) )
      {
        v29 = (POINTL **)a2;
      }
      else
      {
        rclBounds = pco.rclBounds;
        v29 = (POINTL **)a2;
        XDCOBJ::vAccumulateTight(a2, (struct ECLIPOBJ *)0x100, &rclBounds.left);
      }
      v30 = this;
      v31 = a5;
      *(_DWORD *)(this[1].fl + 52) = 0;
      if ( a5 || *(_DWORD *)(v57 + 1424) == 1 )
      {
        v32 = a3;
      }
      else
      {
        v31 = v64;
        v32 = &glaSimpleStroke;
        mix = 2827;
      }
      if ( v31 )
      {
        v33 = mix;
        v34 = v31 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 != 1 )
            {
              v37 = 0;
              goto LABEL_78;
            }
            v36 = EPATHOBJ::bSimpleStrokeAndFill(
                    this,
                    (*v29)[6].x,
                    (struct PDEVOBJ *)&v57,
                    v52,
                    &pco,
                    pxo,
                    v53,
                    v32,
                    pbo,
                    *v29 + 147,
                    mix,
                    *(unsigned __int8 *)((*v29)[127].y + 234));
          }
          else
          {
            v36 = EPATHOBJ::bSimpleFill(
                    this,
                    (*v29)[6].x,
                    (struct PDEVOBJ *)&v57,
                    v52,
                    &pco,
                    pbo,
                    *v29 + 147,
                    mix,
                    *(unsigned __int8 *)((*v29)[127].y + 234));
          }
        }
        else
        {
          v36 = EPATHOBJ::bSimpleStroke(
                  this,
                  (*v29)[6].x,
                  (struct PDEVOBJ *)&v57,
                  v52,
                  &pco,
                  pxo,
                  v53,
                  *v29 + 147,
                  v32,
                  mix);
        }
        v30 = this;
        v37 = v36;
        v55 = v36;
      }
      else
      {
        v37 = 1;
        v55 = 1;
        v33 = mix;
      }
LABEL_78:
      if ( v61 )
      {
        v32->fl ^= 4u;
        v32->elStyleState = v62;
        *(_DWORD *)(v30[1].fl + 52) = 0;
        v37 = EPATHOBJ::bSimpleStroke(
                this,
                (*v29)[6].x,
                (struct PDEVOBJ *)&v57,
                v52,
                &pco,
                pxo,
                v54,
                *v29 + 147,
                v32,
                v33) & v55;
      }
      v8 = v37;
      goto LABEL_86;
    }
    v41 = *(_DWORD *)(v13 + 1276);
    if ( (a3->fl & 1) != 0 )
    {
      v46 = 1;
      if ( v41 != -1 && ((*(_DWORD *)(v13 + 1352) & 0x10000) != 0 || (*(_DWORD *)(v14 + 1120) & 0x800000) != 0) )
        goto LABEL_32;
    }
    else
    {
      v46 = 0;
      if ( v41 == -1 )
LABEL_32:
        *(_DWORD *)(*(_DWORD *)(v13 + 1020) + 184) |= 2u;
    }
    mixa = *(_DWORD *)a2;
    v42 = *(_DWORD *)a2;
    v48 = *(_DWORD *)(*(_DWORD *)a2 + 1020);
    v17 = *(_DWORD *)(v48 + 184) | *(_DWORD *)(*(_DWORD *)a2 + 236);
    v58 = *(_DWORD *)(v48 + 184);
    v18 = a3;
    if ( (v17 & 2) != 0 )
    {
      *(_DWORD *)(v48 + 184) = v58 & 0xFFFFFFFD;
      *(_DWORD *)(*(_DWORD *)a2 + 236) &= ~2u;
      EBRUSHOBJ::vInitBrush(v54, *(_DWORD *)a2, *(_DWORD *)(*(_DWORD *)a2 + 96), v16, v15, v52, v46);
      v18 = a3;
      v19 = *(_DWORD *)a2;
      mixa = *(_DWORD *)a2;
      v42 = *(_DWORD *)a2;
    }
    else
    {
      v19 = v42;
    }
    v20 = v19;
    if ( v18->pstyle )
    {
      if ( ((int)v54[6].pvRbrush & 0x800) != 0 && *(_BYTE *)(*(_DWORD *)(mixa + 1020) + 233) == 2 )
      {
        v21 = a3->fl;
        v20 = v42;
        if ( (a3->fl & 1) == 0 )
        {
          v61 = 1;
          a3->fl = v21 ^ 4;
          v62.e = (FLOATL)a3->elStyleState;
          v20 = *(_DWORD *)a2;
          v53 = (BRUSHOBJ *)(*(_DWORD *)a2 + 1460);
          v49 = *(_DWORD *)(*(_DWORD *)a2 + 1020);
          v47 = *(_DWORD *)(v49 + 184);
          v22 = *(_DWORD *)a2;
          v43 = *(_DWORD *)a2;
          if ( (v47 & 8) == 0 )
          {
            v43 = *(_DWORD *)a2;
            if ( v53->iSolidColor == -1 )
            {
              *(_DWORD *)(v49 + 184) = v47 | 8;
              v20 = *(_DWORD *)a2;
              v22 = *(_DWORD *)a2;
              v43 = *(_DWORD *)a2;
            }
          }
          v23 = *(_DWORD *)(v22 + 1020);
          v24 = *(_DWORD *)(v22 + 236);
          v58 = v23;
          v50 = *(_DWORD *)(v23 + 184);
          if ( (((unsigned __int8)v50 | (unsigned __int8)v24) & 8) != 0 )
          {
            v25 = v43;
            if ( (*(_DWORD *)(v43 + 48) & 0x8000) == 0 )
            {
              *(_DWORD *)(v58 + 184) = v50 & 0xFFFFFFF7;
              *(_DWORD *)(*(_DWORD *)a2 + 236) &= ~8u;
              v25 = *(_DWORD *)a2;
            }
            EBRUSHOBJ::vInitBrush(v53, v25, gpbrBackground, v16, v15, v52, 0);
            v20 = *(_DWORD *)a2;
          }
        }
      }
    }
    mix = EBRUSHOBJ::mixBest(
            (EBRUSHOBJ *)v54,
            *(_BYTE *)(*(_DWORD *)(v20 + 1020) + 232),
            *(_BYTE *)(*(_DWORD *)(v20 + 1020) + 233));
    goto LABEL_48;
  }
  return v8;
}
