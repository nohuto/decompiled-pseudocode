/*
 * XREFs of _EngHTBlt@48 @ 0x2271FF
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 *     ?EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x961A2 (-EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?pDevHTInfo@PDEVOBJ@@QAEPAXXZ @ 0x96990 (-pDevHTInfo@PDEVOBJ@@QAEPAXXZ.c)
 *     ?vRelease@HTSEMOBJ@@QAEXXZ @ 0x969F4 (-vRelease@HTSEMOBJ@@QAEXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QAEHJPAU_GDIINFO@@@Z @ 0x974F8 (-bCreateHTPalette@PALMEMOBJ@@QAEHJPAU_GDIINFO@@@Z.c)
 *     ?bIsSourceBGRA@@YGHPAVSURFACE@@@Z @ 0x99BF2 (-bIsSourceBGRA@@YGHPAVSURFACE@@@Z.c)
 *     ??1EPALOBJ@@QAE@XZ @ 0xAAD84 (--1EPALOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _HT_HalftoneBitmap@24 @ 0x1BAB42 (_HT_HalftoneBitmap@24.c)
 *     ??1EXLATEOBJ@@QAE@XZ @ 0x1CC63A (--1EXLATEOBJ@@QAE@XZ.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YGXPAX@Z@@QAE@XZ @ 0x1EE480 (--1-$AutoResource@$1-FreeTmpBuffer@@YGXPAX@Z@@QAE@XZ.c)
 *     ?bEqualEntries@XEPALOBJ@@QAEHV1@@Z @ 0x222E1E (-bEqualEntries@XEPALOBJ@@QAEHV1@@Z.c)
 *     ??1HTSEMOBJ@@QAE@XZ @ 0x226EDE (--1HTSEMOBJ@@QAE@XZ.c)
 *     ?bSetHTSrcSurfInfo@@YGHPAU_SURFOBJ@@VXEPALOBJ@@PAU_HTSURFACEINFO@@PAU_XLATEOBJ@@@Z @ 0x226EE3 (-bSetHTSrcSurfInfo@@YGHPAU_SURFOBJ@@VXEPALOBJ@@PAU_HTSURFACEINFO@@PAU_XLATEOBJ@@@Z.c)
 *     ?bSetHTSurfInfo@@YGHPAU_SURFOBJ@@PAU_HTSURFACEINFO@@J@Z @ 0x2270E6 (-bSetHTSurfInfo@@YGHPAU_SURFOBJ@@PAU_HTSURFACEINFO@@J@Z.c)
 *     ?ppalGetFromXlate@@YGPAVPALETTE@@PAVSURFACE@@0PAVXLATE@@IH@Z @ 0x22714B (-ppalGetFromXlate@@YGPAVPALETTE@@PAVSURFACE@@0PAVXLATE@@IH@Z.c)
 */

int __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        int a3,
        CLIPOBJ *a4,
        struct SURFACE *a5,
        struct tagCOLORADJUSTMENT *a6,
        int a7,
        int a8,
        int *a9,
        _QWORD *a10,
        int a11,
        int a12)
{
  int v12; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  int v17; // eax
  XLATEOBJ *v18; // edi
  int v19; // edi
  LONG cx; // eax
  int v21; // edi
  int v22; // eax
  LONG cy; // eax
  ERECTL *v24; // ecx
  _DWORD *p_dhsurf; // ecx
  ULONG v26; // eax
  int v27; // eax
  ULONG iBitmapFormat; // ecx
  SURFOBJ *v29; // eax
  SURFOBJ *v30; // esi
  struct PALETTE *v31; // esi
  int v32; // eax
  int v33; // edx
  char v34; // cl
  int v35; // eax
  _DWORD *v36; // eax
  int v37; // eax
  int v38; // eax
  CLIPOBJ *v39; // edi
  BYTE iDComplexity; // dl
  int v41; // ecx
  RECTL *p_rclBounds; // esi
  int v43; // eax
  char v44; // dl
  PVOID pvScan0; // edi
  int right; // eax
  int left; // esi
  int v48; // edx
  int v49; // edi
  int *v50; // eax
  int v51; // edx
  char *v52; // esi
  int v53; // eax
  XLATEOBJ *v54; // esi
  _DWORD *v55; // eax
  int v56; // edx
  int *v57; // eax
  struct PALETTE *v58; // esi
  struct PALETTE *v59; // edi
  SURFOBJ *v60; // edi
  PVOID v61; // eax
  int v62; // eax
  ULONG v63; // esi
  int v64; // edi
  ULONG v65; // edx
  __int16 v66; // cx
  ULONG cEntries; // eax
  XLATEOBJ *v68; // ebx
  int v69; // esi
  LONG v70; // eax
  char *y; // edi
  struct PALETTE *v72; // eax
  int v73; // ebx
  _QWORD *v74; // eax
  int v75; // eax
  SURFOBJ *v76; // eax
  SURFOBJ *v77; // edx
  int v78; // eax
  int v79; // [esp-4h] [ebp-2BCh]
  int v80; // [esp-4h] [ebp-2BCh]
  unsigned int v81; // [esp+0h] [ebp-2B8h]
  unsigned int v82; // [esp+0h] [ebp-2B8h]
  struct _HTSURFACEINFO *v83; // [esp+0h] [ebp-2B8h]
  struct _HTSURFACEINFO *v84; // [esp+0h] [ebp-2B8h]
  int v85; // [esp+4h] [ebp-2B4h]
  int v86; // [esp+4h] [ebp-2B4h]
  int v87; // [esp+4h] [ebp-2B4h]
  int v88; // [esp+4h] [ebp-2B4h]
  _BYTE v89[28]; // [esp+Ch] [ebp-2ACh] BYREF
  _DWORD v90[7]; // [esp+28h] [ebp-290h] BYREF
  _DWORD v91[7]; // [esp+44h] [ebp-274h] BYREF
  _DWORD v92[6]; // [esp+60h] [ebp-258h] BYREF
  int v93; // [esp+78h] [ebp-240h] BYREF
  SIZEL sizlBitmap; // [esp+7Ch] [ebp-23Ch]
  int v95; // [esp+84h] [ebp-234h]
  int v96; // [esp+88h] [ebp-230h]
  int v97; // [esp+8Ch] [ebp-22Ch]
  int v98; // [esp+90h] [ebp-228h] BYREF
  int v99; // [esp+94h] [ebp-224h]
  int v100; // [esp+98h] [ebp-220h]
  _BYTE *v101; // [esp+9Ch] [ebp-21Ch]
  SURFOBJ *v102; // [esp+A0h] [ebp-218h] BYREF
  char v103; // [esp+A4h] [ebp-214h]
  int v104; // [esp+A8h] [ebp-210h]
  SURFACE *v105; // [esp+ACh] [ebp-20Ch] BYREF
  char v106; // [esp+B0h] [ebp-208h]
  int v107; // [esp+B4h] [ebp-204h]
  int v108[2]; // [esp+B8h] [ebp-200h] BYREF
  int v109; // [esp+C0h] [ebp-1F8h]
  POINTL pptlSrc; // [esp+C4h] [ebp-1F4h] BYREF
  struct PALETTE *v111; // [esp+CCh] [ebp-1ECh]
  int v112; // [esp+D0h] [ebp-1E8h] BYREF
  int v113; // [esp+D4h] [ebp-1E4h]
  int v114; // [esp+D8h] [ebp-1E0h] BYREF
  int *v115; // [esp+DCh] [ebp-1DCh]
  _QWORD *v116; // [esp+E0h] [ebp-1D8h]
  SURFOBJ *psoDest; // [esp+E4h] [ebp-1D4h]
  struct tagCOLORADJUSTMENT *v118; // [esp+E8h] [ebp-1D0h]
  struct SURFACE *v119; // [esp+ECh] [ebp-1CCh]
  int v120; // [esp+F0h] [ebp-1C8h]
  _BYTE *v121; // [esp+F4h] [ebp-1C4h]
  int v122; // [esp+F8h] [ebp-1C0h]
  CLIPOBJ *pco; // [esp+FCh] [ebp-1BCh]
  SURFOBJ *v124; // [esp+100h] [ebp-1B8h]
  XLATEOBJ *lDelta; // [esp+104h] [ebp-1B4h] BYREF
  SURFOBJ *psoSrc; // [esp+108h] [ebp-1B0h] BYREF
  int v127; // [esp+10Ch] [ebp-1ACh] BYREF
  XLATEOBJ *pvBits; // [esp+110h] [ebp-1A8h] BYREF
  SURFOBJ *v129; // [esp+114h] [ebp-1A4h]
  struct _SURFOBJ *v130; // [esp+118h] [ebp-1A0h]
  XLATEOBJ *pxlo; // [esp+11Ch] [ebp-19Ch]
  int v132; // [esp+120h] [ebp-198h] BYREF
  int v133; // [esp+124h] [ebp-194h]
  BYTE v134; // [esp+12Bh] [ebp-18Dh]
  int v135; // [esp+12Ch] [ebp-18Ch]
  _QWORD v136[12]; // [esp+130h] [ebp-188h] BYREF
  RECTL prclTrg; // [esp+190h] [ebp-128h] BYREF
  RECTL prclDest; // [esp+1A0h] [ebp-118h] BYREF
  _BYTE v139[260]; // [esp+1B0h] [ebp-108h] BYREF

  psoSrc = a2;
  psoDest = a1;
  pco = a4;
  v119 = a5;
  v118 = a6;
  v120 = a7;
  v135 = a8;
  lDelta = (XLATEOBJ *)a9;
  v116 = a10;
  v127 = a12;
  v124 = a1 != 0 ? (SURFOBJ *)&a1[-1].lDelta : 0;
  v129 = a2 != 0 ? (SURFOBJ *)&a2[-1].lDelta : 0;
  v12 = 0;
  pxlo = 0;
  v121 = a3 != 0 ? (_BYTE *)(a3 - 16) : 0;
  memset(v90, 0, sizeof(v90));
  memset(v91, 0, sizeof(v91));
  memset(v89, 0, sizeof(v89));
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  if ( !v124 )
    return -1;
  v14 = (int)*(a1 != 0 ? &a1->hdev : (HDEV *)28);
  v132 = v14;
  if ( v14 )
  {
    v15 = 1;
    v16 = *(_DWORD *)(v14 + 24) & 1;
    v109 = v16;
    v114 = v16;
    if ( v16 )
    {
      GreAcquireSemaphore(_ghsemHT);
      v14 = v132;
      a2 = psoSrc;
      v15 = 1;
    }
    if ( !psoDest->iType )
    {
      if ( v124[1].dhpdev == (DHPDEV)1 )
      {
        pxlo = (XLATEOBJ *)(((psoDest->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC);
        v21 = 0;
        v133 = 1;
        v130 = (struct _SURFOBJ *)1;
      }
      else
      {
        if ( v124[1].dhpdev != (DHPDEV)2 )
        {
          switch ( (unsigned int)v124[1].dhpdev )
          {
            case 3u:
              v17 = 3;
              v19 = psoDest->sizlBitmap.cx + 3;
              v130 = (struct _SURFOBJ *)254;
              v79 = 4;
              break;
            case 4u:
              cx = psoDest->sizlBitmap.cx;
              v130 = (struct _SURFOBJ *)253;
              v133 = 4;
              v79 = 5;
              v18 = (XLATEOBJ *)((2 * cx + 2) & 0xFFFFFFFC);
LABEL_19:
              pxlo = v18;
              v21 = v79;
              goto LABEL_37;
            case 5u:
              v19 = 3 * (psoDest->sizlBitmap.cx + 1);
              v17 = 5;
              v130 = (struct _SURFOBJ *)5;
              v79 = 6;
              break;
            case 6u:
              v17 = 6;
              v18 = (XLATEOBJ *)(4 * psoDest->sizlBitmap.cx);
              v130 = (struct _SURFOBJ *)6;
              v79 = 7;
LABEL_18:
              v133 = v17;
              goto LABEL_19;
            default:
LABEL_59:
              HTSEMOBJ::~HTSEMOBJ((HTSEMOBJ *)&v114);
              return v12;
          }
          v18 = (XLATEOBJ *)(v19 & 0xFFFFFFFC);
          goto LABEL_18;
        }
        v22 = *(_DWORD *)(v14 + 1660);
        pxlo = (XLATEOBJ *)(((psoDest->sizlBitmap.cx + 7) >> 1) & 0xFFFFFFFC);
        v133 = 2;
        v130 = (struct _SURFOBJ *)(v22 == 2 ? 2 : 255);
        v122 = (v22 != 2) + 2;
        v21 = v122;
      }
LABEL_37:
      prclDest.right = a2->sizlBitmap.cx;
      cy = a2->sizlBitmap.cy;
      prclDest.left = 0;
      prclDest.top = 0;
      prclDest.bottom = cy;
      ERECTL::operator*=(&prclDest.left, (int *)lDelta);
      if ( ERECTL::bEmpty(v24) )
      {
        v12 = 1;
        goto LABEL_59;
      }
      if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v132) && !PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v132, v118) )
      {
        v12 = -1;
        goto LABEL_59;
      }
      v105 = 0;
      v106 = 0;
      v107 = 0;
      HTSEMOBJ::vRelease((HTSEMOBJ *)&v114);
      p_dhsurf = &v129->dhsurf;
      if ( !v129 )
        goto LABEL_57;
      if ( (v129[1].sizlBitmap.cy & 0x1000) != 0 )
      {
        pvBits = (XLATEOBJ *)v129->pvBits;
        PDEVOBJ::vSync((PDEVOBJ *)&pvBits, psoSrc, 0, 0);
        p_dhsurf = &v129->dhsurf;
      }
      if ( psoSrc->iType || (v26 = psoSrc->iBitmapFormat, v26 == 7) || v26 == 8 )
      {
        sizlBitmap = psoSrc->sizlBitmap;
        v27 = p_dhsurf[18];
        iBitmapFormat = psoSrc->iBitmapFormat;
        v97 = v27 & 0x40000;
        v95 = 0;
        v96 = 0;
        if ( iBitmapFormat == 7 )
        {
          v93 = 2;
        }
        else if ( iBitmapFormat == 8 )
        {
          v93 = 3;
        }
        else
        {
          v93 = iBitmapFormat;
        }
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v105, (struct _DEVBITMAPINFO *)&v93, 0, 0, 0, 0, 0, 0, 1, 0, 0)
          || (v29 = SURFACE::pSurfobj(v105), !EngCopyBits(v29, psoSrc, 0, xloIdent, &prclDest, (POINTL *)&prclDest)) )
        {
          if ( v16 )
            GreAcquireSemaphore(_ghsemHT);
LABEL_57:
          v12 = -1;
LABEL_58:
          SURFMEM::~SURFMEM((SURFMEM *)&v105);
          goto LABEL_59;
        }
        p_dhsurf = v105;
      }
      v122 = (int)p_dhsurf;
      if ( v16 )
        GreAcquireSemaphore(_ghsemHT);
      if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v132) && !PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v132, v118) )
        goto LABEL_57;
      v30 = v129;
      pptlSrc.y = (LONG)ppalGetFromXlate(v124, v129, v119, (struct SURFACE *)1, (struct XLATE *)1, v81, v85);
      if ( !pptlSrc.y )
        goto LABEL_58;
      v31 = ppalGetFromXlate(v124, v30, v119, (struct SURFACE *)2, (struct XLATE *)1, v82, v86);
      v108[1] = 0;
      v108[0] = 0;
      v111 = v31;
      v115 = 0;
      if ( v21 == *(_DWORD *)(v132 + 1660) )
      {
        pvBits = (XLATEOBJ *)(*(_DWORD *)(v132 + 24) & 0x200);
      }
      else
      {
        if ( !PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)v108, v21, (struct _GDIINFO *)(v132 + 1420)) )
        {
LABEL_76:
          v12 = -1;
LABEL_211:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v108);
          goto LABEL_58;
        }
        v115 = v108;
        pvBits = (XLATEOBJ *)XEPALOBJ::bEqualEntries(v108, (int)v31);
      }
      memset(v136, 0, 0x5Cu);
      v112 = 0;
      v113 = 0;
      if ( a11 == 512 )
      {
        if ( (unsigned __int8)*(_DWORD *)v127 )
        {
          a11 = 0;
        }
        else
        {
          v32 = HIBYTE(*(_DWORD *)v127);
          v33 = HIWORD(*(_DWORD *)v127);
          BYTE1(v112) = BYTE2(*(_DWORD *)v127);
          if ( (_BYTE)v32 == 1 && (_BYTE)v33 == 0xFF )
          {
            if ( !bIsSourceBGRA(v129) )
              goto LABEL_76;
            v34 = 4;
          }
          else
          {
            v34 = 1;
          }
          LOBYTE(v112) = v34;
          if ( v31 )
          {
            v113 = *((_DWORD *)v31 + 19);
            HIWORD(v112) = *((_WORD *)v31 + 10);
            v35 = *((_DWORD *)v31 + 4);
            if ( (v35 & 8) != 0
              || (v35 & 2) != 0
              && (v36 = (_DWORD *)*((_DWORD *)v31 + 19), *v36 == 16711680)
              && v36[1] == 65280
              && v36[2] == 255 )
            {
              LOBYTE(v112) = v34 | 2;
            }
          }
          HIDWORD(v136[0]) = &v112;
        }
      }
      LODWORD(v136[1]) = lDelta->iUniq;
      v37 = *(_DWORD *)v120;
      HIDWORD(v136[1]) = lDelta->flXlate;
      v136[2] = *(_QWORD *)&lDelta->iSrcType;
      v136[3] = *(_QWORD *)v135;
      v136[4] = *(_QWORD *)(v135 + 8);
      LODWORD(v136[9]) = v37;
      HIDWORD(v136[9]) = *(_DWORD *)(v120 + 4);
      LOWORD(v136[0]) = a11;
      v127 = (unsigned __int16)a11;
      BYTE3(v136[0]) = *(_BYTE *)(v132 + 1652);
      if ( v119 )
        v38 = *((_DWORD *)v119 + 13);
      else
        LOBYTE(v38) = 0;
      if ( (v38 & 4) != 0 || (v38 & 0x20) == 0 && (v38 & 3) != 0 )
      {
        v127 = (unsigned __int16)a11 | 0x80;
        LOWORD(v136[0]) = a11 | 0x80;
      }
      v39 = pco;
      v129 = v124;
      v102 = 0;
      v103 = 0;
      v104 = 0;
      v120 = 0;
      if ( pco )
      {
        iDComplexity = pco->iDComplexity;
        v134 = iDComplexity;
      }
      else
      {
        iDComplexity = 0;
        v134 = 0;
      }
      v41 = v133;
      if ( !psoDest->iType && (XLATEOBJ *)psoDest->lDelta == pxlo && (v133 == 3 || pvBits) && iDComplexity != 3 )
      {
        if ( psoDest != psoSrc )
          goto LABEL_128;
        p_rclBounds = (RECTL *)v135;
        v43 = bIntersect(lDelta, v135);
        if ( !v43 )
          goto LABEL_128;
        LOWORD(v43) = v136[0];
        v41 = v133;
        v127 = v43;
      }
      else
      {
        p_rclBounds = (RECTL *)v135;
      }
      v120 = 1;
      if ( v134 )
      {
        v44 = v134 - 1;
        v134 = 0;
        p_rclBounds = &v39->rclBounds;
        v135 = (int)&v39->rclBounds;
        pco = v44 != 0 ? v39 : 0;
      }
      pvScan0 = v124->pvScan0;
      lDelta = (XLATEOBJ *)v124->lDelta;
      right = p_rclBounds->right;
      left = p_rclBounds->left;
      if ( right <= left )
      {
        v48 = right;
        right = left;
      }
      else
      {
        v48 = left;
      }
      if ( v48 < 0 )
        v48 = 0;
      if ( right > (int)pvScan0 )
        right = (int)pvScan0;
      v49 = right - v48;
      if ( right - v48 <= 0 )
        goto LABEL_209;
      LODWORD(v136[8]) = right;
      LODWORD(v136[7]) = v48;
      v50 = *(int **)(v135 + 12);
      if ( (int)v50 <= *(_DWORD *)(v135 + 4) )
      {
        v51 = *(_DWORD *)(v135 + 12);
        v50 = *(int **)(v135 + 4);
      }
      else
      {
        v51 = *(_DWORD *)(v135 + 4);
      }
      if ( v51 < 0 )
        v51 = 0;
      if ( (int)v50 > (int)lDelta )
        v50 = (int *)lDelta;
      v52 = (char *)v50 - v51;
      if ( (int)v50 - v51 <= 0 )
      {
LABEL_209:
        v12 = 1;
        goto LABEL_210;
      }
      HIDWORD(v136[8]) = v50;
      HIDWORD(v136[7]) = v51;
      v92[0] = v41;
      LOWORD(v136[0]) = v127 | 0x10;
      v53 = v124[1].sizlBitmap.cy & 0x40000;
      v92[3] = 0;
      v92[5] = v53;
      v92[1] = v49;
      v92[2] = v52;
      v92[4] = 0;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v102, (struct _DEVBITMAPINFO *)v92, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
      {
        v12 = -1;
LABEL_210:
        SURFMEM::~SURFMEM((SURFMEM *)&v102);
        goto LABEL_211;
      }
      v129 = v102;
LABEL_128:
      v54 = xloIdent;
      psoSrc = 0;
      lDelta = 0;
      pxlo = xloIdent;
      v135 = (int)xloIdent;
      v55 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v132);
      if ( pvBits )
      {
LABEL_143:
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v114);
        PDEVOBJ::vSync((PDEVOBJ *)&v132, psoDest, 0, 0);
        if ( v121 || a11 == 512 )
        {
          v60 = v129;
          if ( v120 )
          {
            v61 = v129->pvScan0;
            ++v129[1].hsurf;
            prclTrg.right = (LONG)v61;
            prclTrg.bottom = v60->lDelta;
            prclTrg.left = 0;
            prclTrg.top = 0;
            v62 = (v124[1].sizlBitmap.cy & 0x400) != 0
                ? (*(int (__stdcall **)(SIZEL *, SURFOBJ *, _DWORD, XLATEOBJ *, RECTL *, _QWORD *))(v132 + 1976))(
                    &v60->sizlBitmap,
                    psoDest,
                    0,
                    v54,
                    &prclTrg,
                    &v136[7])
                : EngCopyBits((SURFOBJ *)&v60->sizlBitmap, psoDest, 0, v54, &prclTrg, (POINTL *)&v136[7]);
            if ( !v62 && !EngBitBlt((SURFOBJ *)&v60->sizlBitmap, 0, 0, 0, 0, &prclTrg, 0, 0, 0, 0, 0xFFFFu) )
            {
              if ( v109 )
                GreAcquireSemaphore(_ghsemHT);
              goto LABEL_170;
            }
          }
        }
        else
        {
          v60 = v129;
        }
        if ( v109 )
          GreAcquireSemaphore(_ghsemHT);
        if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v132) && !PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v132, v118) )
          goto LABEL_170;
        pvBits = (XLATEOBJ *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v132);
        v63 = 0;
        if ( !bSetHTSrcSurfInfo(v122 != 0 ? v122 + 16 : 0, v91, pptlSrc.y, v119)
          || (v129 = v60 != 0 ? (SURFOBJ *)&v60->sizlBitmap : 0, !bSetHTSurfInfo((int)v90, (int)v129, v130, v83, v87))
          || (v64 = (int)v121) != 0
          && !bSetHTSurfInfo((int)v89, (int)(v121 + 16), *(struct _SURFOBJ **)(a3 + 44), v84, v88) )
        {
LABEL_205:
          if ( v91[6] )
            FreeThreadBufferWithTag(v91[6]);
          v12 = 2 * (v63 != 0) - 1;
          goto LABEL_208;
        }
        v121 = 0;
        if ( v64 )
        {
          if ( bUMPDSecurityGateEx() && !v116 )
          {
            if ( gfUMPDDebug )
              _DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\htblt.cxx:%d:EngHTBlt:pptlMask == NULL\n",
                1063);
            if ( v91[6] )
              FreeThreadBufferWithTag(v91[6]);
            goto LABEL_170;
          }
          v136[10] = *v116;
          v121 = v89;
        }
        v65 = 256;
        v66 = v136[0];
        if ( (*(_DWORD *)(v132 + 1664) & 0x100) == 0 )
        {
          v66 = LOWORD(v136[0]) | 2;
          LOWORD(v136[0]) |= 2u;
        }
        if ( v133 == 3 )
        {
          v90[6] = &v98;
          v99 = 255;
          BYTE1(v98) = 1;
          HIWORD(v98) = 1;
          v101 = v139;
          v100 = 256;
          cEntries = pxlo->cEntries;
          if ( cEntries > 0x100 || (v65 = pxlo->cEntries, cEntries) )
          {
            v68 = pxlo;
            do
            {
              v139[v63] = v68->pulXlate[v63];
              ++v63;
            }
            while ( v63 < v65 );
          }
          pxlo = xloIdent;
        }
        if ( v134 )
        {
          if ( v134 != 1 )
          {
            LOWORD(v136[0]) = v66 | 1;
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
            v69 = 1;
            v135 = 1;
            v70 = AllocFreeTmpBuffer(324);
            y = (char *)v70;
            pptlSrc.y = v70;
            if ( v70 )
            {
              v127 = v70;
              do
              {
                v72 = (struct PALETTE *)XCLIPOBJ::bEnum((XCLIPOBJ *)pco, 0x144u, y, 0);
                v111 = v72;
                v116 = 0;
                if ( *(_DWORD *)y )
                {
                  LOBYTE(v73) = v135;
                  v74 = y + 4;
                  v122 = (int)(y + 4);
                  do
                  {
                    v136[5] = *v74;
                    v136[6] = v74[1];
                    v75 = HT_HalftoneBitmap((int)v91, (int)v121, (int)v90, (unsigned __int16 *)v136);
                    y = (char *)pptlSrc.y;
                    v73 = (v75 >= 0) & (unsigned __int8)v73;
                    v74 = (_QWORD *)(v122 + 16);
                    v116 = (_QWORD *)((char *)v116 + 1);
                    v122 += 16;
                  }
                  while ( (unsigned int)v116 < *(_DWORD *)pptlSrc.y );
                  v72 = v111;
                  v135 = v73;
                  v69 = v73;
                }
              }
              while ( v72 && v69 );
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v127);
            }
            else
            {
              v69 = 0;
              v135 = 0;
            }
            goto LABEL_194;
          }
          LOWORD(v136[0]) = v66 | 1;
          *(RECTL *)&v136[5] = pco->rclBounds;
        }
        v135 = HT_HalftoneBitmap((int)v91, (int)v121, (int)v90, (unsigned __int16 *)v136) >= 0;
        v69 = v135;
LABEL_194:
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v114);
        if ( v120 && v69 )
        {
          v76 = v124;
          v77 = psoDest;
          pptlSrc.x = 0;
          pptlSrc.y = 0;
          ++v124[1].hsurf;
          if ( v77->iType )
          {
            if ( (v76[1].sizlBitmap.cy & 0x400) != 0 )
              v78 = (*(int (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, _QWORD *, POINTL *))(v132 + 1976))(
                      v77,
                      v129,
                      pco,
                      pxlo,
                      &v136[7],
                      &pptlSrc);
            else
              v78 = EngCopyBits(v77, v129, pco, pxlo, (RECTL *)&v136[7], &pptlSrc);
          }
          else
          {
            v78 = EngCopyBits(v77, v129, pco, pxlo, (RECTL *)&v136[7], &pptlSrc);
          }
          v63 = v78;
        }
        else
        {
          v63 = v135;
        }
        if ( v109 )
          GreAcquireSemaphore(_ghsemHT);
        goto LABEL_205;
      }
      LOBYTE(v56) = 8;
      v127 = HmgShareLockCheck(*v55, v56);
      v57 = v115;
      if ( !v115 )
      {
        v57 = &v127;
        v115 = &v127;
      }
      if ( !v119 || (v58 = (struct PALETTE *)*((_DWORD *)v119 + 11)) == 0 )
        v58 = ppalDefault;
      v59 = v111;
      if ( EXLATEOBJ::bInitXlateObj(
             (int *)&psoSrc,
             0,
             0,
             (_DWORD *)*v57,
             v111,
             (int)v58,
             (int)v58,
             0,
             0xFFFFFF,
             0xFFFFFF,
             0) )
      {
        pxlo = (XLATEOBJ *)psoSrc;
        if ( !v121 && a11 != 512 )
        {
          v54 = (XLATEOBJ *)v135;
          goto LABEL_142;
        }
        pvBits = (XLATEOBJ *)v135;
        if ( !v120 )
        {
          v54 = pvBits;
          goto LABEL_142;
        }
        if ( EXLATEOBJ::bInitXlateObj(
               (int *)&lDelta,
               0,
               0,
               v59,
               (_DWORD *)*v115,
               (int)v58,
               (int)v58,
               0,
               0xFFFFFF,
               0xFFFFFF,
               0) )
        {
          v54 = lDelta;
LABEL_142:
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v127);
          goto LABEL_143;
        }
      }
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v127);
LABEL_170:
      v12 = -1;
LABEL_208:
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&lDelta);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&psoSrc);
      goto LABEL_210;
    }
    v21 = *(_DWORD *)(v14 + 1660);
    if ( !v21 || (v15 = 2, v21 == 2) )
    {
      v130 = (struct _SURFOBJ *)v15;
    }
    else
    {
      if ( v21 != 3 )
      {
        if ( v21 == 4 )
        {
          v130 = (struct _SURFOBJ *)254;
          v133 = 3;
        }
        else if ( v21 == 5 )
        {
          v130 = (struct _SURFOBJ *)253;
          v133 = 4;
        }
        else
        {
          if ( v21 == 6 )
          {
            v80 = 5;
          }
          else
          {
            if ( v21 != 7 )
              goto LABEL_59;
            v80 = 6;
          }
          v130 = (struct _SURFOBJ *)v80;
          v133 = v80;
        }
        goto LABEL_37;
      }
      v130 = (struct _SURFOBJ *)255;
    }
    v133 = v15;
    goto LABEL_37;
  }
  return v12;
}
