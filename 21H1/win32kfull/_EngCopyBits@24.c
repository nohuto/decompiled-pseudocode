/*
 * XREFs of _EngCopyBits@24 @ 0x519F0
 * Callers:
 *     _GreSetBitmapBits@16 @ 0x20D9E (_GreSetBitmapBits@16.c)
 *     ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706 (-GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBI.c)
 *     _EngStretchBlt@44 @ 0x4BF90 (_EngStretchBlt@44.c)
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z @ 0x935DE (-vProcessCursorShape@@YGXPAUHDEV__@@HHPAU_SURFOBJ@@1PAVPALETTE@@PAU_RECTL@@PAPAUHBITMAP__@@@Z.c)
 *     ?BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x94E94 (-BltLnk@@YGHPAVSURFACE@@00PAVECLIPOBJ@@PAVXLATE@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z.c)
 *     ?EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x961A2 (-EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 *     ?bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z @ 0xCD162 (-bShadowAlphaCursor@@YGHPAU_SURFOBJ@@00PAU_XLATEOBJ@@1PAU_RECTL@@H@Z.c)
 *     _GreGetBitmapBits@16 @ 0xE2B7A (_GreGetBitmapBits@16.c)
 *     ?bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_RECTL@@PAKPAPAV3@@Z @ 0x1CD742 (-bSpDwmUpdateMaskCursor@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@3PAU_REC.c)
 *     ?bCopySurface@@YGHPAVSURFMEM@@PAU_SURFOBJ@@@Z @ 0x1D1105 (-bCopySurface@@YGHPAVSURFMEM@@PAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z @ 0x1DE69D (-bSpUpdateCursor@@YGHPAVSPRITE@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@@Z.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     _LongLongToLong@12 @ 0xC28DA (_LongLongToLong@12.c)
 *     ?pfnGetRLESrcCopy@@YGP6GHPAUBLTINFO@@@ZKK@Z @ 0xC3FA4 (-pfnGetRLESrcCopy@@YGP6GHPAUBLTINFO@@@ZKK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??1EXLATEOBJ@@QAE@XZ @ 0x1CC63A (--1EXLATEOBJ@@QAE@XZ.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  SURFOBJ *v6; // edi
  _DWORD *v7; // esi
  int (__stdcall *v8)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // edx
  int v9; // edi
  LONG v10; // esi
  int v11; // esi
  int v13; // esi
  ULONG iBitmapFormat; // eax
  LONG v15; // ecx
  LONG top; // edi
  unsigned int v17; // edi
  int v18; // eax
  int lDelta; // eax
  LONG bottom; // eax
  XLATEOBJ *v21; // ecx
  ULONG v22; // edi
  ULONG v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // esi
  LONG v26; // eax
  LONG v27; // edi
  LONG v28; // eax
  LONG v29; // edx
  LONG v30; // eax
  void (__stdcall **v31)(struct BLTINFO *); // eax
  int v32; // ecx
  int v33; // edi
  int v34; // edx
  unsigned int v35; // edi
  LONG v36; // edx
  LONG left; // ecx
  LONG right; // esi
  LONG v39; // esi
  LONG v40; // ecx
  XLATEOBJ *v41; // ecx
  XLATEOBJ *v42; // ecx
  XLATEOBJ *v43; // eax
  int v44; // ecx
  LONG v45; // ecx
  LONG v46; // edx
  XLATEOBJ *v47; // eax
  int v48; // [esp-1Ch] [ebp-29Ch]
  unsigned int v49; // [esp+0h] [ebp-280h]
  LONG *v50; // [esp+0h] [ebp-280h]
  LONG *v51; // [esp+0h] [ebp-280h]
  LONG *v52; // [esp+0h] [ebp-280h]
  LONG *v53; // [esp+0h] [ebp-280h]
  unsigned int v54; // [esp+4h] [ebp-27Ch]
  int v55; // [esp+28h] [ebp-258h]
  RECTL *v56; // [esp+2Ch] [ebp-254h] BYREF
  void (__stdcall **v57)(struct BLTINFO *); // [esp+30h] [ebp-250h]
  char *v58; // [esp+34h] [ebp-24Ch]
  RECTL *x; // [esp+38h] [ebp-248h]
  XCLIPOBJ *v60; // [esp+3Ch] [ebp-244h]
  LONG RLESrcCopy; // [esp+40h] [ebp-240h]
  SURFOBJ *v62; // [esp+44h] [ebp-23Ch]
  int v63; // [esp+48h] [ebp-238h]
  XLATEOBJ *v64; // [esp+4Ch] [ebp-234h]
  int v65; // [esp+50h] [ebp-230h]
  POINTL *v66; // [esp+54h] [ebp-22Ch]
  SURFOBJ *v67; // [esp+58h] [ebp-228h]
  int v68; // [esp+5Ch] [ebp-224h]
  void (__stdcall **y)(struct BLTINFO *); // [esp+60h] [ebp-220h]
  LONG *pvScan0; // [esp+64h] [ebp-21Ch]
  LONG v71; // [esp+68h] [ebp-218h]
  int v72; // [esp+6Ch] [ebp-214h]
  XLATEOBJ *v73; // [esp+70h] [ebp-210h] BYREF
  int hdev; // [esp+74h] [ebp-20Ch] BYREF
  XLATEOBJ *v75; // [esp+78h] [ebp-208h] BYREF
  char *v76; // [esp+7Ch] [ebp-204h]
  unsigned int v77; // [esp+80h] [ebp-200h]
  int v78; // [esp+84h] [ebp-1FCh]
  char *v79; // [esp+88h] [ebp-1F8h]
  char *v80; // [esp+8Ch] [ebp-1F4h]
  int v81; // [esp+90h] [ebp-1F0h]
  int v82; // [esp+94h] [ebp-1ECh]
  int v83; // [esp+98h] [ebp-1E8h]
  int v84; // [esp+9Ch] [ebp-1E4h]
  int v85; // [esp+A0h] [ebp-1E0h]
  int v86; // [esp+A4h] [ebp-1DCh]
  int v87; // [esp+A8h] [ebp-1D8h]
  int v88; // [esp+ACh] [ebp-1D4h]
  LONG *v89; // [esp+B0h] [ebp-1D0h]
  void (__stdcall **v90)(struct BLTINFO *); // [esp+B4h] [ebp-1CCh]
  int v91; // [esp+B8h] [ebp-1C8h]
  int v92; // [esp+BCh] [ebp-1C4h]
  int v93; // [esp+C0h] [ebp-1C0h]
  int v94; // [esp+C4h] [ebp-1BCh]
  int v95; // [esp+C8h] [ebp-1B8h]
  char *v96; // [esp+CCh] [ebp-1B4h]
  unsigned int v97; // [esp+D0h] [ebp-1B0h]
  int v98; // [esp+D4h] [ebp-1ACh]
  int v99; // [esp+D8h] [ebp-1A8h]
  int v100; // [esp+DCh] [ebp-1A4h]
  unsigned int v101; // [esp+E0h] [ebp-1A0h]
  int v102; // [esp+E4h] [ebp-19Ch]
  _DWORD v103[83]; // [esp+F8h] [ebp-188h] BYREF
  _KFLOATING_SAVE FloatSave; // [esp+244h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+268h] [ebp-18h]

  v62 = psoDest;
  v6 = psoSrc;
  v67 = psoSrc;
  v60 = (XCLIPOBJ *)pco;
  v64 = pxlo;
  x = prclDest;
  v66 = pptlSrc;
  pvScan0 = psoSrc != 0 ? &psoSrc[-1].lDelta : 0;
  if ( psoSrc->iType )
  {
    v7 = *(psoSrc != 0 ? &psoSrc->hdev : (HDEV *)28);
    v8 = (int (__stdcall *)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v7[494];
    v73 = 0;
    x = (RECTL *)v66->x;
    v56 = x;
    y = (void (__stdcall **)(struct BLTINFO *))v66->y;
    v57 = y;
    hdev = (int)*(psoSrc != 0 ? &psoSrc[1].hsurf : (HSURF *)72);
    if ( ((unsigned int)&loc_80000 & hdev) != 0 )
    {
      v71 = v7[4];
      if ( v7 != (_DWORD *)v71 )
      {
        if ( hdev < 0 )
        {
          v56 = (RECTL *)((char *)x + v7[459]);
          v57 = (void (__stdcall **)(struct BLTINFO *))((char *)y + v7[460]);
          v66 = (POINTL *)&v56;
          v71 = v7[4];
        }
        LOBYTE(v8) = 5;
        v9 = HmgShareLockCheck(*(psoSrc != 0 ? &psoSrc[1].pvBits : (PVOID *)96), v8);
        if ( v9 )
        {
          v48 = v7[278];
          v10 = v71;
          if ( EXLATEOBJ::bInitXlateObj(
                 &v73,
                 0,
                 0,
                 *(_DWORD *)(v71 + 1112),
                 v48,
                 ppalDefault,
                 ppalDefault,
                 0,
                 0,
                 0,
                 0x2000) )
          {
            v64 = v73;
            v67 = (SURFOBJ *)(v9 + 16);
            hdev = *(_DWORD *)(v10 + 1976);
            DEC_SHARE_REF_CNT(v9);
            v6 = v67;
            v8 = (int (__stdcall *)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))hdev;
            goto LABEL_9;
          }
          DEC_SHARE_REF_CNT(v9);
        }
LABEL_12:
        EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v73);
        return 0;
      }
    }
LABEL_9:
    if ( v8 )
    {
      v11 = v8(v62, v6, v60, v64, prclDest, v66);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v73);
      return v11;
    }
    goto LABEL_12;
  }
  if ( *(psoSrc != 0 ? &psoSrc->iBitmapFormat : (ULONG *)60) <= 8
    && *(psoDest != 0 ? &psoDest->iBitmapFormat : (ULONG *)60) <= 8
    || !bUMPDSecurityGateEx() )
  {
    hdev = (int)psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0, 0);
    hdev = (int)psoSrc->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoSrc, 0, 0);
    v13 = 0;
    v68 = 0;
    v65 = 0;
    v88 = 0;
    v63 = 1;
    v72 = 1;
    v71 = 1;
    iBitmapFormat = psoSrc->iBitmapFormat;
    if ( iBitmapFormat == 8 || iBitmapFormat == 7 )
    {
      v17 = 2;
      v63 = 1;
      v72 = -1;
      v71 = -1;
      lDelta = v62->lDelta;
      v82 = 0;
      v65 = 1;
    }
    else
    {
      if ( psoSrc->pvScan0 == v62->pvScan0 )
      {
        v15 = v66->y;
        top = prclDest->top;
        if ( v66->x >= prclDest->left )
        {
          if ( v15 >= top )
          {
            v17 = 0;
          }
          else
          {
            v72 = -1;
            v71 = -1;
            v17 = 2;
          }
        }
        else
        {
          v63 = -1;
          v72 = 2 * (v15 >= top) - 1;
          v71 = v72;
          hdev = 2 * (v15 < top) + 1;
          v17 = hdev;
        }
      }
      else
      {
        v17 = 4;
      }
      v18 = v67->lDelta;
      if ( v72 <= 0 )
        v18 = -v18;
      v82 = v18;
      lDelta = v62->lDelta;
      if ( v72 > 0 )
      {
LABEL_34:
        v83 = lDelta;
        hdev = v63;
        memset(v103, 0, 0x144u);
        if ( v60 && *((_BYTE *)v60 + 20) )
        {
          if ( *((_BYTE *)v60 + 20) != 1 )
          {
            if ( *((_BYTE *)v60 + 20) == 3 )
            {
              v13 = 1;
              v68 = 1;
              XCLIPOBJ::cEnumStart(v60, 0, 0, v17, 0x14u);
            }
            goto LABEL_42;
          }
          v103[1] = *((_DWORD *)v60 + 1);
          v103[2] = *((_DWORD *)v60 + 2);
          v103[3] = *((_DWORD *)v60 + 3);
          bottom = *((_DWORD *)v60 + 4);
        }
        else
        {
          v103[1] = prclDest->left;
          v103[2] = prclDest->top;
          v103[3] = prclDest->right;
          bottom = prclDest->bottom;
        }
        v13 = 0;
        v68 = 0;
        v103[0] = 1;
        v103[4] = bottom;
LABEL_42:
        v21 = v64;
        if ( !v64 )
          v21 = xloIdent;
        v75 = v21;
        v78 = v63;
        v81 = v72;
        v22 = v62->iBitmapFormat;
        v23 = v67->iBitmapFormat;
        y = (void (__stdcall **)(struct BLTINFO *))v23;
        if ( !v65 )
        {
          v33 = 4 * (v23 | (8 * v22));
          if ( v63 < 0 )
            v33 += 2;
          v34 = 0;
          memset(&FloatSave, 0, sizeof(FloatSave));
          if ( (v21->flXlate & 1) != 0 )
          {
            ++v33;
            if ( (v67->fjBitmap & 0x20) != 0 )
            {
              v88 = 1;
              if ( gbMMXProcessor )
              {
                if ( KeSaveFloatingPointState(&FloatSave) >= 0 )
                {
                  v34 = 1;
                }
                else
                {
                  v88 = 0;
                  v34 = 0;
                }
              }
            }
          }
          v57 = (void (__stdcall **)(struct BLTINFO *))v34;
          y = (&SrcCopyFunctionTable)[v33];
          if ( !v13 )
            goto LABEL_83;
          do
          {
            v68 = XCLIPOBJ::bEnum(v60, 0x144u, v103, 0);
LABEL_83:
            v35 = 0;
            while ( 1 )
            {
              v65 = v35;
              if ( v35 >= v103[0] )
                break;
              v36 = v103[4 * v35 + 1];
              left = prclDest->left;
              v58 = (char *)left;
              if ( v36 < left )
              {
                v103[4 * v35 + 1] = left;
                v36 = left;
              }
              v73 = (XLATEOBJ *)v103[4 * v35 + 3];
              right = prclDest->right;
              if ( (int)v73 > right )
              {
                v103[4 * v35 + 3] = right;
                v73 = (XLATEOBJ *)right;
              }
              v39 = v103[4 * v35 + 2];
              v40 = prclDest->top;
              pvScan0 = (LONG *)v40;
              if ( v39 < v40 )
              {
                v39 = v40;
                v103[4 * v35 + 2] = v40;
              }
              v64 = (XLATEOBJ *)v103[4 * v35 + 4];
              RLESrcCopy = prclDest->bottom;
              v41 = v73;
              if ( (int)v64 <= RLESrcCopy )
              {
                v43 = v64;
              }
              else
              {
                v42 = (XLATEOBJ *)RLESrcCopy;
                v103[4 * v35 + 4] = RLESrcCopy;
                v43 = v42;
                v64 = v42;
                v41 = v73;
              }
              if ( v39 >= (int)v43 || v36 >= (int)v41 )
              {
                ++v35;
              }
              else
              {
                v44 = v66->x + v36 - (_DWORD)v58;
                RLESrcCopy = v39 + v66->y - (_DWORD)pvScan0;
                pvScan0 = (LONG *)((char *)v73 - v36);
                v79 = (char *)v73 - v36;
                v58 = (char *)v64 - v39;
                v80 = (char *)v64 - v39;
                if ( v63 <= 0 )
                  v44 = (int)v73 + v44 - v36 - 1;
                v84 = v44;
                v85 = v44 + (_DWORD)pvScan0 * hdev;
                if ( v63 <= 0 )
                  v86 = (int)&v73[-1].pulXlate + 3;
                else
                  v86 = v36;
                v87 = v39;
                v45 = v67->lDelta;
                pvScan0 = (LONG *)v67->pvScan0;
                v46 = v62->lDelta;
                v47 = (XLATEOBJ *)v62->pvScan0;
                v73 = v47;
                if ( v72 <= 0 )
                {
                  v76 = (char *)pvScan0 + v45 * (_DWORD)&v58[RLESrcCopy - 1];
                  v77 = (unsigned int)v73 + v46 * ((_DWORD)v64 - 1);
                }
                else
                {
                  v76 = (char *)pvScan0 + RLESrcCopy * v45;
                  v77 = (unsigned int)v47 + v39 * v46;
                }
                ms_exc.registration.TryLevel = 1;
                ((void (__stdcall *)(XLATEOBJ **))y)(&v75);
                ms_exc.registration.TryLevel = -2;
                ++v35;
              }
            }
          }
          while ( v68 );
          if ( gbMMXProcessor && v57 != (void (__stdcall **)(struct BLTINFO *))v68 )
            KeRestoreFloatingPointState(&FloatSave);
          return 1;
        }
        RLESrcCopy = (LONG)pfnGetRLESrcCopy(v49, v54);
        if ( !RLESrcCopy )
          return 0;
        v55 = 1;
        y = (void (__stdcall **)(struct BLTINFO *))v66->x;
        hdev = v66->y;
        v90 = y;
        v91 = hdev;
        v89 = pvScan0;
        v72 = 0;
        if ( LongLongToLong(prclDest->top + (__int64)v67->sizlBitmap.cy, v50) < 0 )
          return 0;
        if ( LongLongToLong(v72 - (__int64)hdev, v51) < 0 )
          return 0;
        if ( LongLongToLong(v72 - 1LL, v52) < 0 )
          return 0;
        v87 = v72;
        v86 = prclDest->left - (_DWORD)y;
        v100 = v86;
        v76 = (char *)v67->pvScan0;
        v71 = 0;
        if ( LongLongToLong(v62->lDelta * (__int64)v72, v53) < 0 )
          return 0;
        v24 = (unsigned int)v62->pvScan0;
        if ( v24 + v71 < v24 )
          return 0;
        v77 = v24 + v71;
        v98 = 0;
        v93 = 0;
        if ( v68 )
          goto LABEL_52;
LABEL_53:
        v25 = 0;
        while ( 1 )
        {
          v65 = v25;
          if ( v25 >= v103[0] )
          {
            if ( !v68 )
              return 1;
LABEL_52:
            v68 = XCLIPOBJ::bEnum(v60, 0x144u, v103, 0);
            goto LABEL_53;
          }
          hdev = 16 * v25;
          v71 = v103[4 * v25 + 1];
          v26 = prclDest->left;
          if ( v71 < prclDest->left )
          {
            v103[4 * v25 + 1] = v26;
            v71 = v26;
          }
          v27 = v103[4 * v25 + 3];
          v28 = prclDest->right;
          if ( v27 > v28 )
          {
            v103[4 * v25 + 3] = v28;
            v27 = v28;
          }
          v29 = v103[4 * v25 + 2];
          v30 = prclDest->top;
          if ( v29 < v30 )
          {
            v103[4 * v25 + 2] = v30;
            v29 = v30;
          }
          v31 = (void (__stdcall **)(struct BLTINFO *))v103[4 * v25 + 4];
          y = (void (__stdcall **)(struct BLTINFO *))prclDest->bottom;
          v32 = hdev;
          if ( (int)v31 > (int)y )
          {
            v31 = y;
            *(_DWORD *)((char *)&v103[4] + hdev) = y;
          }
          if ( v29 >= (int)v31 || v71 >= v27 )
            goto LABEL_70;
          if ( (int)v31 > v93 )
            goto LABEL_69;
          if ( v29 > v101 )
          {
LABEL_70:
            ++v25;
          }
          else
          {
            if ( !v55 )
              return 1;
            v76 = v96;
            v77 = v97;
            v87 = v101;
            v100 = v102;
            v98 = v99;
LABEL_69:
            v92 = *(_DWORD *)((char *)&v103[1] + v32);
            v93 = *(_DWORD *)((char *)&v103[2] + v32);
            v94 = *(_DWORD *)((char *)&v103[3] + v32);
            v95 = *(_DWORD *)((char *)&v103[4] + v32);
            ms_exc.registration.TryLevel = 0;
            v55 = ((int (__stdcall *)(XLATEOBJ **))RLESrcCopy)(&v75);
            ms_exc.registration.TryLevel = -2;
            ++v25;
          }
        }
      }
    }
    lDelta = -lDelta;
    goto LABEL_34;
  }
  if ( !gfUMPDDebug )
    return 0;
  _DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 470);
  return 0;
}
