/*
 * XREFs of ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974
 * Callers:
 *     NtGdiRoundRect @ 0x1C0135E00 (NtGdiRoundRect.c)
 *     GrePolyPolylineInternal @ 0x1C01360C4 (GrePolyPolylineInternal.c)
 *     NtGdiFillPath @ 0x1C0136FC0 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C01370C0 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C0137434 (GreRectangle.c)
 *     GrePolyBezierTo @ 0x1C0137870 (GrePolyBezierTo.c)
 *     GrePolyPolygonInternal @ 0x1C0137D44 (GrePolyPolygonInternal.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0138270 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02A0200 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C02A0460 (GreAngleArc.c)
 *     GrePolyDraw @ 0x1C02A0C38 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C02A1100 (NtGdiEllipse.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AE310 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02AE4A0 (NtGdiStrokePath.c)
 *     NtGdiArcInternal @ 0x1C02B1790 (NtGdiArcInternal.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C001A61C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0133B38 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0138F78 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013A058 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013A088 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C013E7A8 (-vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C014FEA8 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall EPATHOBJ::bStrokeAndOrFill(
        PATHOBJ *ppo,
        POINTL **this,
        LINEATTRS *a3,
        struct _XFORMOBJ *a4,
        unsigned int a5)
{
  LINEATTRS *v6; // r14
  unsigned int v9; // esi
  unsigned int v10; // r9d
  unsigned int v11; // r12d
  int *v12; // rcx
  int v13; // edi
  int v14; // eax
  __int64 v15; // r11
  POINTL *v16; // r8
  __int64 v17; // rdx
  struct REGION *v18; // rax
  POINTL *v19; // r9
  BRUSHOBJ *v21; // r10
  struct SURFACE *v22; // r8
  POINTL v23; // rax
  POINTL v24; // rdi
  __int64 v25; // rbx
  POINTL v26; // rdx
  POINTL *v27; // r10
  int v28; // ecx
  EBRUSHOBJ *v29; // rdi
  MIX v30; // ebx
  POINTL *v31; // r10
  BRUSHOBJ *v32; // rdi
  BRUSHOBJ *pbo; // r9
  unsigned int v34; // r12d
  unsigned int v35; // r12d
  struct SURFACE *v36; // rdi
  XFORMOBJ *v37; // r12
  BOOL v38; // eax
  struct ECLIPOBJ *v39; // rdx
  int v40; // r10d
  POINTL v41; // r9
  ULONG iSolidColor; // edx
  POINTL *v43; // rdx
  POINTL *v44; // rcx
  POINTL v45; // r11
  int v46; // r9d
  POINTL *v47; // r9
  unsigned int v48; // eax
  int v49; // eax
  bool v50; // zf
  unsigned int v51; // eax
  POINTL *v52; // rdx
  POINTL v53; // rcx
  BRUSHOBJ *v54; // r11
  int v55; // eax
  POINTL v56; // r10
  int v57; // ecx
  BRUSHOBJ *v58; // [rsp+30h] [rbp-D0h]
  BRUSHOBJ *v59; // [rsp+30h] [rbp-D0h]
  MIX v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+60h] [rbp-A0h]
  int v62; // [rsp+68h] [rbp-98h]
  BRUSHOBJ *v63; // [rsp+70h] [rbp-90h]
  struct SURFACE *v64; // [rsp+78h] [rbp-88h]
  int v65; // [rsp+80h] [rbp-80h]
  FLOAT_LONG v66; // [rsp+84h] [rbp-7Ch]
  POINTL v68; // [rsp+90h] [rbp-70h] BYREF
  BRUSHOBJ *v69; // [rsp+98h] [rbp-68h] BYREF
  int v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A4h] [rbp-5Ch]
  unsigned int v72; // [rsp+A8h] [rbp-58h]
  BRUSHOBJ *v73[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v74[32]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v75[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v76; // [rsp+F0h] [rbp-10h]
  int v77; // [rsp+110h] [rbp+10h] BYREF
  int v78; // [rsp+114h] [rbp+14h]
  int v79; // [rsp+118h] [rbp+18h]
  int v80; // [rsp+11Ch] [rbp+1Ch]
  CLIPOBJ pco; // [rsp+120h] [rbp+20h] BYREF
  __int64 v82; // [rsp+170h] [rbp+70h]
  int v83; // [rsp+178h] [rbp+78h]
  int v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1B0h] [rbp+B0h]

  v6 = a3;
  v72 = 0;
  v65 = 0;
  v66.l = 0;
  v60 = 0;
  if ( !ppo->cCurves )
    return 1LL;
  v9 = 1;
  v10 = a5 & 0xFFFFFFFE;
  if ( (struct PEN *)(*this)[18] != gpPenNull )
    v10 = a5;
  v11 = v10 & 0xFFFFFFFD;
  if ( (struct BRUSH *)(*this)[17] != gpbrNull )
    v11 = v10;
  if ( (v11 & 1) == 0 || (a3->fl & 1) == 0 )
  {
LABEL_7:
    v12 = (int *)ppo[1];
    v62 = v12[13] >> 4;
    v13 = v12[12] >> 4;
    v14 = ((v12[15] + 15) >> 4) + 1;
    v69 = (BRUSHOBJ *)__PAIR64__(v62, v13);
    v71 = v14;
    v70 = ((v12[14] + 15) >> 4) + 1;
    if ( ((*this)[4].y & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)this, (struct ERECTL *)&v69);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)this) )
      return v9;
    v75[1] = 0LL;
    v75[0] = v15;
    v76 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v74, (struct XDCOBJ *)this, 0);
    if ( (v74[24] & 1) != 0 )
    {
      if ( (unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)&(*this)[62]) )
      {
        v16 = *this;
        v77 = v13;
        v78 = v62;
        v79 = v70;
        v80 = v71;
        v17 = v16[5].x & 1;
        v77 = v13 + v16[v17 + 127].x;
        v79 = v70 + v16[v17 + 127].x;
        v78 = v62 + v16[v17 + 127].y;
        v80 = v71 + v16[v17 + 127].y;
        EPATHOBJ::vOffset((EPATHOBJ *)ppo, (struct EPOINTL *)&v16[(v16[5].x & 1) + 127]);
        v18 = XDCOBJ::prgnEffRao((DC **)this);
        v82 = 0LL;
        v83 = 0;
        v85 = 0LL;
        v84 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v18, (struct ERECTL *)&v77, 0);
        v19 = *this;
        if ( (*this)[4].x == 2 || ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          if ( (v11 & 1) != 0 && (v6->pstyle && (v6->fl & 1) == 0 || (v6->fl & 2) != 0) )
            EPATHOBJ::vUpdateCosmeticStyleState((EPATHOBJ *)ppo, *(struct SURFACE **)&v19[62], v6);
          goto LABEL_15;
        }
        v21 = (BRUSHOBJ *)&v19[165];
        v22 = (struct SURFACE *)v19[62];
        v23 = v19[6];
        v68 = v23;
        v24 = v19[11];
        v25 = *((_QWORD *)v22 + 16);
        v64 = v22;
        v69 = (BRUSHOBJ *)&v19[165];
        v63 = (BRUSHOBJ *)&v19[148];
        v73[0] = (BRUSHOBJ *)&v19[165];
        if ( (v11 & 1) == 0 )
        {
LABEL_19:
          if ( (v11 & 2) != 0 )
          {
            v26 = v19[122];
            v27 = v19;
            v28 = *(_DWORD *)(*(_QWORD *)&v26 + 152LL);
            if ( (((unsigned __int8)v28 | LOBYTE(v19[39].y)) & 1) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v26 + 152LL) = v28 & 0xFFFFFFFE;
              (*this)[39].y &= ~1u;
              v41 = v24;
              v29 = (EBRUSHOBJ *)v63;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v63,
                *this,
                *(_QWORD *)&(*this)[17],
                v41,
                v25,
                v22,
                1);
              v27 = *this;
            }
            else
            {
              v29 = (EBRUSHOBJ *)v63;
            }
            if ( (v11 & 1) == 0 || (v30 = v60, v19 = v27, v60 >> 8 == (unsigned __int8)v60) )
            {
              v30 = EBRUSHOBJ::mixBest(
                      v29,
                      *(_BYTE *)(*(_QWORD *)&v27[122] + 212LL),
                      *(_BYTE *)(*(_QWORD *)&v27[122] + 213LL));
              v19 = v31;
            }
          }
          else
          {
            v30 = v60;
          }
          if ( (v19[4].y & 0xE0) != 0 )
          {
            v38 = ERECTL::bEmpty((ERECTL *)&pco.rclBounds);
            v32 = v73[0];
            if ( !v38 )
            {
              if ( !(_DWORD)v39 || (v73[0][5].iSolidColor & 0x100) != 0 )
              {
                pbo = v63;
                if ( !v40 || (v63[5].iSolidColor & 0x100) != 0 )
                  goto LABEL_27;
              }
              *(RECTL *)v73 = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)this, v39, (__m128i *)v73);
            }
          }
          else
          {
            v32 = v73[0];
          }
          pbo = v63;
LABEL_27:
          *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
          if ( !v11 )
          {
            v11 = 0;
            if ( *(_DWORD *)(*(_QWORD *)&v68 + 2140LL) != 1 )
            {
              v11 = a5;
              v6 = (LINEATTRS *)&glaSimpleStroke;
              v30 = 2827;
            }
            if ( !v11 )
            {
              v37 = a4;
LABEL_89:
              v36 = v64;
LABEL_31:
              if ( v65 )
              {
                v6->fl ^= 4u;
                v6->elStyleState = v66;
                *(_QWORD *)(*(_QWORD *)&ppo[1] + 72LL) = 0LL;
                v9 &= EPATHOBJ::bSimpleStroke(
                        ppo,
                        (*this)[9].x,
                        (struct PDEVOBJ *)&v68,
                        v36,
                        &pco,
                        v37,
                        v69,
                        *this + 147,
                        v6,
                        v30);
              }
              goto LABEL_15;
            }
          }
          v34 = v11 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( !v35 )
            {
              v36 = v64;
              v37 = a4;
              v9 = EPATHOBJ::bSimpleFill(
                     ppo,
                     (*this)[9].x,
                     (struct PDEVOBJ *)&v68,
                     v64,
                     &pco,
                     pbo,
                     *this + 147,
                     v30,
                     *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
              goto LABEL_31;
            }
            v50 = v35 == 1;
            v37 = a4;
            if ( !v50 )
            {
              v9 = v72;
              goto LABEL_89;
            }
            v59 = v32;
            v36 = v64;
            v49 = EPATHOBJ::bSimpleStrokeAndFill(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v68,
                    v64,
                    &pco,
                    a4,
                    v59,
                    v6,
                    pbo,
                    *this + 147,
                    v30,
                    *(unsigned __int8 *)(*(_QWORD *)&(*this)[122] + 214LL));
          }
          else
          {
            v37 = a4;
            v58 = v32;
            v36 = v64;
            v49 = EPATHOBJ::bSimpleStroke(
                    ppo,
                    (*this)[9].x,
                    (struct PDEVOBJ *)&v68,
                    v64,
                    &pco,
                    a4,
                    v58,
                    *this + 147,
                    v6,
                    v30);
          }
          v9 = v49;
          goto LABEL_31;
        }
        iSolidColor = v21->iSolidColor;
        if ( (v6->fl & 1) != 0 )
        {
          v61 = 1;
          if ( iSolidColor == -1
            || (v19[180].x & 0x10000) == 0 && (*(_DWORD *)(*(_QWORD *)&v23 + 1824LL) & 0x800000) == 0 )
          {
            goto LABEL_45;
          }
        }
        else
        {
          v61 = 0;
          if ( iSolidColor != -1 )
          {
LABEL_45:
            v43 = *this;
            v44 = *this;
            v45 = (*this)[122];
            v46 = *(_DWORD *)(*(_QWORD *)&v45 + 152LL);
            if ( (((unsigned __int8)v46 | LOBYTE((*this)[39].y)) & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v45 + 152LL) = v46 & 0xFFFFFFFD;
              (*this)[39].y &= ~2u;
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                v21,
                *this,
                *(_QWORD *)&(*this)[18],
                v24,
                v25,
                v22,
                v61);
              v43 = *this;
              v22 = v64;
              v44 = *this;
              v21 = v69;
            }
            v47 = v44;
            if ( v6->pstyle
              && (v21[5].iSolidColor & 0x800) != 0
              && *(_BYTE *)(*(_QWORD *)&v43[122] + 213LL) == 2
              && (v6->fl & 1) == 0 )
            {
              v65 = 1;
              v6->fl ^= 4u;
              v47 = *this;
              v52 = *this;
              LODWORD(v66.e) = v6->elStyleState;
              v53 = (*this)[122];
              v54 = (BRUSHOBJ *)&(*this)[199];
              v73[0] = v54;
              v55 = *(_DWORD *)(*(_QWORD *)&v53 + 152LL);
              if ( (v55 & 8) == 0 && v54->iSolidColor == -1 )
              {
                *(_DWORD *)(*(_QWORD *)&v53 + 152LL) = v55 | 8;
                v47 = *this;
                v52 = *this;
              }
              v56 = v52[122];
              v57 = *(_DWORD *)(*(_QWORD *)&v56 + 152LL);
              if ( (((unsigned __int8)v57 | LOBYTE(v52[39].y)) & 8) != 0 )
              {
                if ( (v52[9].x & 0x8000) == 0 )
                {
                  *(_DWORD *)(*(_QWORD *)&v56 + 152LL) = v57 & 0xFFFFFFF7;
                  (*this)[39].y &= ~8u;
                  v52 = *this;
                }
                ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))EBRUSHOBJ::vInitBrush)(
                  v54,
                  v52,
                  gpbrBackground,
                  v24,
                  v25,
                  v22,
                  0);
                v47 = *this;
              }
            }
            v48 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v69,
                    *(_BYTE *)(*(_QWORD *)&v47[122] + 212LL),
                    *(_BYTE *)(*(_QWORD *)&v47[122] + 213LL));
            v22 = v64;
            v60 = v48;
            goto LABEL_19;
          }
        }
        *(_DWORD *)(*(_QWORD *)&v19[122] + 152LL) |= 2u;
        goto LABEL_45;
      }
      EngSetLastError(5u);
      v51 = 0;
    }
    else
    {
      v51 = XDCOBJ::bFullScreen((XDCOBJ *)this);
    }
    v9 = v51;
LABEL_15:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v74);
    if ( v75[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v75);
    return v9;
  }
  if ( (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)ppo, (struct EPATHOBJ *)ppo, a4, a3) )
  {
    if ( v6->pstyle )
      v6->elStyleState.l = 0;
    goto LABEL_7;
  }
  EngSetLastError(0x216u);
  return 0LL;
}
