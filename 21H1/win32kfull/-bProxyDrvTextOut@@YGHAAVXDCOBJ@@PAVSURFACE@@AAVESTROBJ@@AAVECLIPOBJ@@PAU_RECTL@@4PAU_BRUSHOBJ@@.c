/*
 * XREFs of ?bProxyDrvTextOut@@YGHAAVXDCOBJ@@PAVSURFACE@@AAVESTROBJ@@AAVECLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@AAVRFONTOBJ@@PAVPDEVOBJ@@K4@Z @ 0x1F86ED
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1E4616 (-bSimpleFill@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1E4859 (-bSimpleStroke@EPATHOBJ@@QAEHKPAVPDEVOBJ@@PAVSURFACE@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?bAdjusBaseLine@@YGHAAVRFONTOBJ@@0PAU_POINTL@@@Z @ 0x1F8207 (-bAdjusBaseLine@@YGHAAVRFONTOBJ@@0PAU_POINTL@@@Z.c)
 *     bOutOfBounds @ 0x1F8638 (bOutOfBounds.c)
 *     ?pdcoAA@SURFACE@@QAEXPAVXDCOBJ@@@Z @ 0x1F8E7A (-pdcoAA@SURFACE@@QAEXPAVXDCOBJ@@@Z.c)
 *     ?pfnTextOut@SURFACE@@QAEP6GHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@ZXZ @ 0x1F8EA2 (-pfnTextOut@SURFACE@@QAEP6GHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_B.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QAEXAAU_POINTL@@@Z @ 0x207CEA (-ptlBaseLineAdjustSet@ESTROBJ@@QAEXAAU_POINTL@@@Z.c)
 *     ?PostTextOut@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208DF9 (-PostTextOut@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208E62 (-PreTextOut@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x2109B2 (-TextOutBitBlt@@YGXPAVSURFACE@@AAVRFONTOBJ@@PAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x22438F (-bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 */

int __userpurge bProxyDrvTextOut@<eax>(
        SURFACE *a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        STROBJ *pstro,
        CLIPOBJ *a4,
        struct ESTROBJ *a5,
        struct _CLIPOBJ *a6,
        struct _RECTL *a7,
        struct _RECTL *a8,
        POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11,
        struct RFONTOBJ *a12,
        struct PDEVOBJ *a13,
        unsigned int a14,
        struct _RECTL *a15)
{
  STROBJ *v16; // ebx
  struct _BRUSHOBJ *v17; // esi
  ULONG ulCharInc; // eax
  ULONG iSolidColor; // ecx
  bool v20; // zf
  struct _CLIPOBJ *v21; // edx
  struct RFONTOBJ *v22; // eax
  int v23; // edi
  _DWORD *v24; // ecx
  ULONG v25; // eax
  int v27; // eax
  unsigned int v28; // edi
  LONG v29; // ecx
  int v30; // eax
  ULONG v31; // esi
  int v32; // edx
  LONG iUniq; // esi
  struct _SURFOBJ *v34; // edi
  LONG top; // eax
  LONG left; // edx
  DHPDEV v37; // ecx
  struct _CLIPOBJ *v38; // edx
  struct SURFACE *right; // edx
  _DWORD *v40; // esi
  char *v41; // edx
  unsigned int v42; // edi
  LONG v43; // ecx
  struct RFONTOBJ *v44; // ebx
  struct RFONTOBJ *i; // eax
  WCHAR *v46; // eax
  int v47; // edx
  int *v48; // eax
  RFONTOBJ *v49; // esi
  struct SURFACE *v50; // edi
  int v51; // esi
  BOOL v52; // eax
  PATHOBJ *v53; // esi
  BOOL (__stdcall *v54)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // eax
  SURFACE *v55; // ecx
  int (__stdcall *v56)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, MIX); // edi
  int v57; // edx
  RFONTOBJ *v58; // ecx
  PATHOBJ *v59; // esi
  struct UMPDOBJ *v60; // eax
  int v61; // eax
  struct _POINTL *v63; // [esp-Ch] [ebp-148h]
  POINTL *v64; // [esp-8h] [ebp-144h]
  struct _POINTL *v65; // [esp+0h] [ebp-13Ch]
  struct _POINTL *v66; // [esp+4h] [ebp-138h]
  LINEATTRS plineattrs; // [esp+10h] [ebp-12Ch] BYREF
  PATHOBJ ppo; // [esp+30h] [ebp-10Ch] BYREF
  int v69; // [esp+38h] [ebp-104h]
  struct _POINTL v70; // [esp+78h] [ebp-C4h] BYREF
  ULONG v71; // [esp+80h] [ebp-BCh]
  struct ESTROBJ *v72; // [esp+84h] [ebp-B8h]
  STROBJ *v73; // [esp+88h] [ebp-B4h]
  struct RFONTOBJ *v74; // [esp+8Ch] [ebp-B0h]
  struct _POINTL *v75; // [esp+90h] [ebp-ACh]
  struct PDEVOBJ *v76; // [esp+94h] [ebp-A8h]
  LPWSTR pwszOrg; // [esp+98h] [ebp-A4h]
  ULONG cGlyphs; // [esp+9Ch] [ebp-A0h]
  int v79; // [esp+A0h] [ebp-9Ch]
  BRUSHOBJ *pbo; // [esp+A4h] [ebp-98h]
  POINTL *pptlBrushOrg; // [esp+A8h] [ebp-94h]
  struct UMPDOBJ *v82; // [esp+ACh] [ebp-90h] BYREF
  struct UMPDOBJ *v83; // [esp+B0h] [ebp-8Ch] BYREF
  int v84; // [esp+B4h] [ebp-88h]
  struct XDCOBJ *v85; // [esp+B8h] [ebp-84h]
  CLIPOBJ *pco; // [esp+BCh] [ebp-80h]
  BOOL v87; // [esp+C0h] [ebp-7Ch]
  struct RFONTOBJ *v88; // [esp+C4h] [ebp-78h] BYREF
  int v89; // [esp+C8h] [ebp-74h]
  struct _CLIPOBJ *v90; // [esp+CCh] [ebp-70h]
  SURFACE *v91; // [esp+D0h] [ebp-6Ch]
  struct RFONTOBJ *v92; // [esp+D4h] [ebp-68h] BYREF
  RFONTOBJ *v93; // [esp+D8h] [ebp-64h]
  int v94; // [esp+DCh] [ebp-60h] BYREF
  struct _BRUSHOBJ *v95; // [esp+E0h] [ebp-5Ch]
  unsigned int v96[10]; // [esp+E4h] [ebp-58h] BYREF
  _BYTE v97[40]; // [esp+10Ch] [ebp-30h] BYREF

  v91 = a1;
  v85 = a2;
  pco = a4;
  v72 = a5;
  pbo = (BRUSHOBJ *)a7;
  v16 = pstro;
  v75 = (struct _POINTL *)a8;
  v17 = a10;
  pptlBrushOrg = a9;
  v76 = (struct PDEVOBJ *)a11;
  cGlyphs = pstro->cGlyphs;
  ulCharInc = pstro[1].ulCharInc;
  pstro->pgp = 0;
  v79 = 0;
  v70.x = 0;
  v70.y = 0;
  v87 = 0;
  iSolidColor = a10->iSolidColor;
  v71 = ulCharInc;
  v20 = (*(_BYTE *)(iSolidColor + 712) & 4) == 0;
  v21 = a6;
  pwszOrg = pstro[4].pwszOrg;
  v22 = (struct RFONTOBJ *)pstro->pwszOrg;
  v73 = pstro;
  v90 = a6;
  v95 = a10;
  v89 = 1;
  v74 = v22;
  if ( !v20 && *(_DWORD *)(iSolidColor + 184) == 1 )
    v87 = *(_DWORD *)(*(_DWORD *)a2 + 1560) != *(_DWORD *)(iSolidColor + 396);
  pstro->flAccel = 0;
  v23 = 0;
  pstro->ulCharInc = 0;
  v24 = (_DWORD *)a10->iSolidColor;
  v84 = 0;
  if ( v24[195] + 4 > 0 )
  {
    do
    {
      v94 = 0;
      if ( v23 )
      {
        switch ( v23 )
        {
          case 1:
            if ( v87 || !v16[5].pgp )
              goto LABEL_98;
            v27 = v24[179];
            break;
          case 2:
            if ( v87 || !v16[5].pwszOrg )
              goto LABEL_98;
            v27 = v24[180];
            break;
          case 3:
            if ( v87 || !v16[6].cGlyphs )
              goto LABEL_98;
            v27 = v24[181];
            break;
          default:
            if ( v87 )
              goto LABEL_98;
            v25 = v16[6].ulCharInc;
            if ( !(v25 ? *(_DWORD *)(v25 + 4 * v23 - 16) : 0) )
              goto LABEL_98;
            v27 = *(_DWORD *)(v24[182] + 4 * v23 - 16);
            break;
        }
        v94 = v27;
        v93 = (RFONTOBJ *)&v94;
      }
      else
      {
        v28 = v24[195];
        v29 = 0;
        v30 = (int)v16[5].pgp + (unsigned int)v16[5].pwszOrg + v16[6].cGlyphs;
        if ( v28 )
        {
          v31 = v16[6].ulCharInc;
          do
          {
            if ( v31 )
              v32 = *(_DWORD *)(v31 + 4 * v29);
            else
              v32 = 0;
            v30 += v32;
            ++v29;
          }
          while ( v29 < v28 );
          v21 = v90;
          v17 = v95;
        }
        if ( v30 == cGlyphs )
        {
          if ( v21 )
          {
            iUniq = *(_DWORD *)a13;
            if ( *(_DWORD *)a13 <= (signed int)v21->iUniq )
              iUniq = v21->iUniq;
            v34 = (struct _SURFOBJ *)pco;
            pco->rclBounds.left = iUniq;
            top = *((_DWORD *)a13 + 2);
            if ( top >= v21->rclBounds.top )
              top = v21->rclBounds.top;
            v34->hdev = (HDEV)top;
            left = v21->rclBounds.left;
            v37 = (DHPDEV)*((_DWORD *)a13 + 1);
            if ( (int)v37 <= left )
              v37 = (DHPDEV)left;
            v38 = v90;
            v34->dhpdev = v37;
            right = (struct SURFACE *)v38->rclBounds.right;
            v29 = *((_DWORD *)a13 + 3);
            if ( v29 >= (int)right )
              v29 = (LONG)right;
            v21 = v90;
            v34->sizlBitmap.cx = v29;
          }
          else
          {
            v34 = (struct _SURFOBJ *)pco;
            top = pco->rclBounds.right;
            iUniq = pco->rclBounds.left;
          }
          if ( iUniq >= top || (int)v34->dhpdev >= v34->sizlBitmap.cx )
          {
            v17 = v95;
          }
          else
          {
            v17 = v95;
            if ( v21 )
            {
              v64 = pptlBrushOrg;
              v63 = v75;
              ++*((_DWORD *)v91 + 14);
              TextOutBitBlt(
                (struct SURFACE *)v29,
                (struct RFONTOBJ *)v29,
                v34,
                (struct _SURFOBJ *)v29,
                v21,
                (struct _XLATEOBJ *)v29,
                (struct _RECTL *)v29,
                v63,
                v64,
                (struct _BRUSHOBJ *)v29,
                v65,
                (unsigned int)v66);
            }
          }
          v94 = 0;
          v90 = 0;
          v34->hsurf = *(HSURF *)a13;
          v34->dhpdev = (DHPDEV)*((_DWORD *)a13 + 1);
          v34->hdev = (HDEV)*((_DWORD *)a13 + 2);
          v34->sizlBitmap.cx = *((_DWORD *)a13 + 3);
          goto LABEL_97;
        }
        v93 = (RFONTOBJ *)v17;
      }
      v40 = (_DWORD *)v16[5].cGlyphs;
      v92 = 0;
      v41 = (char *)pwszOrg;
      v88 = v74;
      v42 = &v40[cGlyphs] >= v40 ? (4 * cGlyphs) >> 2 : 0;
      v43 = v84;
      if ( v42 )
      {
        v44 = v88;
        for ( i = v92; (unsigned int)i < v42; v92 = i )
        {
          if ( *v40 == v43 )
          {
            *(_WORD *)v41 = *(_WORD *)v44;
            v41 += 2;
            i = v92;
          }
          v44 = (struct RFONTOBJ *)((char *)v44 + 2);
          ++v40;
          i = (struct RFONTOBJ *)((char *)i + 1);
        }
        v16 = v73;
      }
      v46 = pwszOrg;
      v47 = v41 - (char *)pwszOrg;
      v16[1].cGlyphs = 0;
      v47 >>= 1;
      v79 += v47;
      v16->cGlyphs = v47;
      v16->pwszOrg = v46;
      v16[5].rclBkGround.top = v43;
      if ( v43 && bAdjusBaseLine(&v94, (int *)v95, (struct RFONTOBJ *)&v70, (struct RFONTOBJ *)v65, v66) )
        ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)v16, &v70);
      v48 = (int *)v93;
      v16[1].ulCharInc = (ULONG)v93;
      v16[4].rclBkGround.top = v16->rclBkGround.left;
      v16[4].rclBkGround.right = v16->rclBkGround.top;
      v16[4].rclBkGround.bottom = v16->rclBkGround.right;
      v16[4].pgp = (GLYPHPOS *)v16->rclBkGround.bottom;
      v49 = (RFONTOBJ *)v48;
      if ( (*(_BYTE *)(*v48 + 60) & 2) == 0 )
      {
        if ( !bOutOfBounds(v16, v48) )
        {
          v54 = SURFACE::pfnTextOut(v91);
          v56 = v54;
          if ( v54 == SpTextOut || v54 == MulTextOut || v54 == BmpDevTextOut )
          {
            if ( (*(_DWORD *)(*(_DWORD *)v49 + 12) & 0x10010000) != 0 )
              SURFACE::pdcoAA(v55, v85);
          }
          else
          {
            v57 = *(_DWORD *)(*(_DWORD *)v49 + 12);
            if ( (v57 & 0x10000) != 0
              && ((*(_DWORD *)(*(_DWORD *)v85 + 48) & 0x1000000) == 0 || (v57 & 0x10000000) != 0) )
            {
              if ( v54 != EngTextOut )
                SURFACE::pdcoAA(v91, v85);
              v56 = SpTextOut;
            }
          }
          RFONTOBJ::PreTextOut(v49, v85);
          v58 = v93;
          v59 = (PATHOBJ *)v96;
          v88 = (struct RFONTOBJ *)v96;
          v92 = 0;
          v83 = 0;
          v82 = 0;
          if ( v93 != (RFONTOBJ *)v95 && (*(_DWORD *)(*((_DWORD *)v91 + 7) + 24) & 0x8080) == 0x8080 )
          {
            v60 = (struct UMPDOBJ *)UMPDReleaseRFONTSem(
                                      (struct RFONTOBJ *)&v92,
                                      (struct UMPDOBJ *)&v83,
                                      (unsigned int *)&v88,
                                      (unsigned int *)v65,
                                      (int **)v66);
            v59 = (PATHOBJ *)v88;
            v58 = v93;
            v82 = v60;
          }
          v61 = v56(
                  v91 != 0 ? (struct _SURFOBJ *)((char *)v91 + 16) : 0,
                  v16,
                  *(struct _FONTOBJ **)v58,
                  pco,
                  cGlyphs == v79 ? (struct _RECTL *)v72 : 0,
                  (struct _RECTL *)v90,
                  pbo,
                  (struct _BRUSHOBJ *)v75,
                  pptlBrushOrg,
                  3341);
          v89 = v61 != 0 ? v89 : 0;
          if ( v82 )
          {
            UMPDAcquireRFONTSem(v92, v83, (unsigned int)v59, (unsigned int)v65, &v66->x);
            if ( v59 )
            {
              if ( v59 != (PATHOBJ *)v96 )
                Win32FreePool(v59);
            }
          }
          RFONTOBJ::PostTextOut(v93, v85);
          SURFACE::pdcoAA(v91, 0);
        }
        v90 = 0;
        goto LABEL_96;
      }
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
      if ( v69 )
      {
        v50 = v91;
        v83 = (struct UMPDOBJ *)v97;
        v88 = 0;
        v82 = 0;
        v51 = *((_DWORD *)v91 + 7);
        v92 = 0;
        v89 = ESTROBJ::bTextToPathWorkhorse(v16, (struct EPATHOBJ *)&ppo);
        if ( v89 )
        {
          if ( (*(_DWORD *)(v51 + 24) & 0x8000) != 0 )
            v92 = (struct RFONTOBJ *)UMPDReleaseRFONTSem(
                                       (struct RFONTOBJ *)&v88,
                                       (struct UMPDOBJ *)&v82,
                                       (unsigned int *)&v83,
                                       (unsigned int *)v65,
                                       (int **)v66);
          if ( (*(_DWORD *)(*(_DWORD *)v93 + 712) & 0x8000) == 0 )
          {
            qmemcpy(&plineattrs, &glaSimpleStroke, sizeof(plineattrs));
            v52 = EPATHOBJ::bSimpleStroke(&ppo, (char)a12, v76, v91, pco, 0, pbo, pptlBrushOrg, &plineattrs, 0xD0Du);
            goto LABEL_70;
          }
          if ( ppo.cCurves > 1 )
          {
            v52 = EPATHOBJ::bSimpleFill(&ppo, (char)a12, v76, v50, pco, pbo, pptlBrushOrg, 0xD0Du, 2u);
LABEL_70:
            v89 = v52;
          }
          if ( v92 )
          {
            v53 = (PATHOBJ *)v83;
            UMPDAcquireRFONTSem(v88, v82, (unsigned int)v83, (unsigned int)v65, &v66->x);
            if ( v53 )
            {
              if ( v53 != (PATHOBJ *)v97 )
                Win32FreePool(v53);
            }
          }
        }
      }
      else
      {
        EngSetLastError(8u);
        v89 = 0;
      }
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
LABEL_96:
      v94 = 0;
      v16->rclBkGround.left = v16[4].rclBkGround.top;
      v16->rclBkGround.top = v16[4].rclBkGround.right;
      v16->rclBkGround.right = v16[4].rclBkGround.bottom;
      v16->rclBkGround.bottom = (LONG)v16[4].pgp;
      v17 = v95;
LABEL_97:
      v23 = v84;
LABEL_98:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v94);
      v24 = (_DWORD *)v17->iSolidColor;
      ++v23;
      v21 = v90;
      v84 = v23;
    }
    while ( v23 < v24[195] + 4 );
  }
  v16->pwszOrg = (LPWSTR)v74;
  v16[1].ulCharInc = v71;
  return v89;
}
