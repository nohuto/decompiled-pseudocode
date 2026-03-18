/*
 * XREFs of _GreStretchDIBitsInternal@64 @ 0x75662
 * Callers:
 *     _NtGdiStretchDIBitsInternal@64 @ 0x75558 (_NtGdiStretchDIBitsInternal@64.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380 (-CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     ?pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ @ 0x79420 (-pSurfaceEff@XDCOBJ@@QAEPAVSURFACE@@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?vRefPalette@XEPALOBJ@@QAEXXZ @ 0xADBF4 (-vRefPalette@XEPALOBJ@@QAEXXZ.c)
 *     ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536 (-bIsCMYKColor@DC@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0xF98E0 (-vCopy_rgbquad@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QAEXPBKKK@Z @ 0x223482 (-vCopy_cmykquad@XEPALOBJ@@QAEXPBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z @ 0x223520 (-vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z @ 0x225B92 (-bMakeXlate@EXLATEOBJ@@QAEHPBGVXEPALOBJ@@PAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QAEHK@Z @ 0x2269E2 (-bSupportsPassthroughImage@XDCOBJ@@QAEHK@Z.c)
 *     _GreCreateDIBitmapComp@44 @ 0x226A90 (_GreCreateDIBitmapComp@44.c)
 */

LONG __fastcall GreStretchDIBitsInternal(
        HDC a1,
        _DWORD *a2,
        struct XDCOBJ *a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        void *a9,
        int a10,
        unsigned int a11,
        struct EXFORMOBJ *a12,
        int a13,
        int a14,
        int a15)
{
  HDC v15; // edi
  LONG v16; // ebx
  bool v17; // zf
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // edx
  unsigned int v21; // ecx
  LONG v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // esi
  unsigned int v32; // edi
  HDC v33; // eax
  unsigned int v34; // edi
  char *v35; // ecx
  char v36; // dl
  char *v37; // eax
  struct XDCOBJ *v38; // ecx
  int v39; // eax
  int v40; // esi
  SURFOBJ *v41; // eax
  struct SURFACE *v42; // edx
  struct PALETTE *v43; // esi
  struct PALETTE *v44; // edi
  bool v45; // cf
  int v46; // ecx
  DC *v47; // esi
  SURFACE *v48; // edi
  int v49; // eax
  int v50; // ecx
  ULONG v51; // edi
  int v52; // eax
  int v53; // edx
  int v54; // ecx
  DC *v55; // esi
  DC *v56; // ecx
  struct REGION *v57; // eax
  RECTL *v58; // ecx
  int v59; // edi
  int v60; // eax
  BOOL (__stdcall *v61)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // esi
  char *v62; // ecx
  struct XDCOBJ *v63; // ecx
  struct _SURFOBJ *v64; // eax
  POINTL *v65; // edx
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  int DIBitmapComp; // eax
  ULONG v70; // esi
  int v71; // edi
  int v72; // esi
  SURFOBJ *v74; // [esp+5Ch] [ebp-1DCh]
  ULONG *v75; // [esp+70h] [ebp-1C8h]
  unsigned int v76; // [esp+70h] [ebp-1C8h]
  ULONG *v77; // [esp+70h] [ebp-1C8h]
  unsigned int v78; // [esp+70h] [ebp-1C8h]
  ULONG *v79; // [esp+70h] [ebp-1C8h]
  unsigned int v80; // [esp+70h] [ebp-1C8h]
  ULONG *v81; // [esp+70h] [ebp-1C8h]
  unsigned int *v82; // [esp+74h] [ebp-1C4h]
  int v83; // [esp+80h] [ebp-1B8h]
  unsigned int v84; // [esp+84h] [ebp-1B4h]
  unsigned int v85; // [esp+88h] [ebp-1B0h]
  unsigned int v86; // [esp+8Ch] [ebp-1ACh]
  int v87; // [esp+90h] [ebp-1A8h]
  char v88; // [esp+94h] [ebp-1A4h]
  unsigned int XlateObject; // [esp+98h] [ebp-1A0h] BYREF
  void *v90; // [esp+9Ch] [ebp-19Ch] BYREF
  int v91; // [esp+A0h] [ebp-198h]
  int v92; // [esp+A4h] [ebp-194h]
  unsigned int v93; // [esp+A8h] [ebp-190h]
  HDC v94; // [esp+ACh] [ebp-18Ch]
  SURFACE *v95; // [esp+B0h] [ebp-188h] BYREF
  int v96; // [esp+B4h] [ebp-184h]
  int v97; // [esp+B8h] [ebp-180h]
  int v98; // [esp+BCh] [ebp-17Ch]
  int v99; // [esp+C0h] [ebp-178h]
  unsigned int v100; // [esp+C4h] [ebp-174h]
  unsigned int v101; // [esp+C8h] [ebp-170h]
  DC *v102[3]; // [esp+CCh] [ebp-16Ch] BYREF
  _DWORD *v103[2]; // [esp+D8h] [ebp-160h] BYREF
  unsigned int v104; // [esp+E0h] [ebp-158h]
  ULONG CompatibleDC; // [esp+E4h] [ebp-154h]
  ULONG v106; // [esp+E8h] [ebp-150h]
  _DWORD v107[6]; // [esp+ECh] [ebp-14Ch] BYREF
  int v108; // [esp+104h] [ebp-134h]
  struct tagRGBQUAD *v109; // [esp+108h] [ebp-130h]
  struct XDCOBJ *v110; // [esp+10Ch] [ebp-12Ch]
  unsigned int v111; // [esp+110h] [ebp-128h]
  unsigned int v112; // [esp+114h] [ebp-124h]
  int v113; // [esp+118h] [ebp-120h]
  int v114; // [esp+11Ch] [ebp-11Ch]
  _DWORD v115[3]; // [esp+120h] [ebp-118h] BYREF
  int v116; // [esp+12Ch] [ebp-10Ch]
  int v117; // [esp+134h] [ebp-104h] BYREF
  int v118; // [esp+138h] [ebp-100h]
  int v119; // [esp+13Ch] [ebp-FCh]
  int v120; // [esp+140h] [ebp-F8h]
  int v121[3]; // [esp+150h] [ebp-E8h] BYREF
  _DWORD v122[3]; // [esp+15Ch] [ebp-DCh] BYREF
  _DWORD v123[6]; // [esp+168h] [ebp-D0h] BYREF
  char *v124; // [esp+180h] [ebp-B8h] BYREF
  struct XDCOBJ *v125; // [esp+184h] [ebp-B4h]
  char *v126; // [esp+188h] [ebp-B0h]
  struct XDCOBJ *v127; // [esp+18Ch] [ebp-ACh]
  SURFACE *v128; // [esp+190h] [ebp-A8h] BYREF
  int v129; // [esp+194h] [ebp-A4h]
  int v130; // [esp+198h] [ebp-A0h]
  int v131; // [esp+19Ch] [ebp-9Ch]
  RECTL prclDest; // [esp+1A0h] [ebp-98h] BYREF
  char v133; // [esp+1B0h] [ebp-88h] BYREF
  char v134[64]; // [esp+1B4h] [ebp-84h] BYREF
  int v135; // [esp+1F4h] [ebp-44h]
  int v136; // [esp+1F8h] [ebp-40h]
  int v137; // [esp+220h] [ebp-18h]
  int v138; // [esp+228h] [ebp-10h]

  v103[0] = a2;
  v15 = a1;
  v94 = a1;
  v87 = a11;
  v110 = a3;
  v90 = a9;
  v93 = a13;
  v106 = a14;
  v98 = a15;
  v16 = 0;
  v17 = (gajRop3[BYTE2(a12)] & 0xD4) == 0;
  v114 = a4;
  v113 = a5;
  v100 = BYTE2(a12);
  if ( !v17 )
  {
    memset(v102, 0, sizeof(v102));
    XDCOBJ::vLock((XDCOBJ *)v102, a1);
    if ( !v102[0] )
      goto LABEL_248;
    if ( !a10 )
      goto LABEL_248;
    if ( !v90 )
      goto LABEL_248;
    if ( a11 > 2 )
      goto LABEL_248;
    if ( v93 < 0xC )
      goto LABEL_248;
    v18 = *(_DWORD *)a10;
    v91 = v18;
    if ( v93 < v18 || v18 < 0x28 || *(int *)(a10 + 4) <= 0 || !*(_DWORD *)(a10 + 8) )
      goto LABEL_248;
    CompatibleDC = *(unsigned __int8 *)(*((_DWORD *)v102[0] + 255) + 235);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v121, (struct XDCOBJ *)v102, 0x204u);
    v19 = *(_DWORD *)(a10 + 16);
    v20 = v121[0];
    if ( v19 == 4 || v19 == 5 )
    {
      if ( !XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)v102, v19) )
        goto LABEL_248;
      v21 = v100;
      if ( v100 != 204 || (*(_BYTE *)(v20 + 56) & 1) == 0 || a11 || v98 )
        goto LABEL_248;
    }
    else
    {
      v21 = v100;
    }
    if ( v114 == a7
      && v113 == a8
      && a8 > 0
      && a7 > 0
      && !a6
      && v21 == 204
      && CompatibleDC != 4
      && (*(_BYTE *)(v20 + 56) & 2) != 0 )
    {
      v22 = *(_DWORD *)(a10 + 8);
      if ( v22 < 0 )
        v22 = -v22;
      if ( a8 < v22 )
        v22 = a8;
      v16 = GreSetDIBitsToDeviceInternal(
              v15,
              (ULONG)v103[0],
              (LONG)v110,
              v114,
              v113,
              0,
              0,
              0,
              v22,
              v90,
              a10,
              a11,
              v106,
              v93,
              1,
              v98);
      goto LABEL_248;
    }
    v23 = 0;
    v101 = 0;
    if ( a11 == 1 )
    {
      v117 = 0;
      v118 = 0;
      v119 = 0;
      LOWORD(v120) = 256;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v115, (struct XDCOBJ *)v102, 0);
      v24 = *((_DWORD *)v102[0] + 126);
      if ( v24 )
        v101 = *(_DWORD *)(v24 + 60) == 1;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v115);
      if ( v117 )
        DLODCOBJ::vUnlock((DLODCOBJ *)&v117);
      v23 = v101;
      v20 = v121[0];
    }
    if ( v100 != 204 || (*(_BYTE *)(v20 + 56) & 1) == 0 || v23 )
    {
      v66 = *(_DWORD *)(a10 + 8);
      v99 = v66;
      if ( v66 <= 0 )
      {
        v91 = HIDWORD(a6);
      }
      else
      {
        v91 = v66 - HIDWORD(a6) - a8;
        v15 = v94;
      }
      CompatibleDC = GreCreateCompatibleDC(v15);
      v68 = *(_DWORD *)(a10 + 16);
      if ( v68 == 1 || v68 == 2 )
        DIBitmapComp = GreCreateDIBitmapComp(*(_DWORD *)(a10 + 8), 4, v90, a10, a11, v93, v106, v67, v98);
      else
        DIBitmapComp = GreCreateDIBitmapReal(v90, a10, a11, v93, v106, 0, 0, 0, 0, 0, 0);
      v70 = CompatibleDC;
      v71 = DIBitmapComp;
      if ( CompatibleDC && DIBitmapComp )
      {
        GreSelectBitmap(CompatibleDC, DIBitmapComp);
        v72 = GreStretchBltInternal(v94, v103[0], v110, v114, v113, v70, a6, v91, a7, a8, a12, 0xFFFFFF, 1);
        bDeleteDCInternal(CompatibleDC, 1, 0, 0);
        GreDeleteObject(v71);
        if ( v72 )
          v16 = v99;
      }
      else
      {
        bDeleteDCInternal(CompatibleDC, 1, 0, 0);
        GreDeleteObject(v71);
      }
      goto LABEL_248;
    }
    v25 = *(_DWORD *)(a10 + 4);
    memset(v107, 0, sizeof(v107));
    v26 = *(_DWORD *)(a10 + 16);
    v27 = *(unsigned __int16 *)(a10 + 14);
    v92 = *(_DWORD *)(a10 + 8);
    v112 = v25;
    v28 = *(_DWORD *)(a10 + 32);
    v109 = (struct tagRGBQUAD *)(a10 + v91);
    XlateObject = 0;
    v83 = 1;
    v108 = v26;
    v104 = v28;
    if ( v92 < 0 )
    {
      v107[5] = 1;
      v92 = -v92;
    }
    v84 = 0;
    v86 = 0;
    v85 = 0;
    v101 = 0;
    v100 = 0;
    v111 = 0;
    v99 = 0;
    switch ( v26 )
    {
      case 3:
        if ( v93 < 0x34 )
        {
          EngSetLastError(0x57u);
          v83 = 0;
LABEL_56:
          v84 = 0;
LABEL_111:
          v31 = v83;
          goto LABEL_136;
        }
        v87 = a11 != 1 ? a11 : 0;
        if ( v27 == 16 )
        {
          v107[0] = 4;
        }
        else if ( v27 == 32 )
        {
          v107[0] = 6;
        }
        else
        {
          EngSetLastError(0x57u);
          v83 = 0;
        }
        v86 = 2;
        v29 = *(_DWORD *)(a10 + 40);
        v109 = (struct tagRGBQUAD *)(a10 + 40);
        v101 = v29;
        v30 = *(_DWORD *)(a10 + 44);
        v111 = *(_DWORD *)(a10 + 48);
        v100 = v30;
        v85 = 512;
        if ( ULongLongToULong(v27 * (unsigned __int64)v112, v75) >= 0
          && (ULongAdd(31, 0, (int *)&XlateObject, v76, v82) & 0x80000000) == 0
          && ULongLongToULong((unsigned int)v92 * (unsigned __int64)((XlateObject >> 3) & 0x1FFFFFFC), v77) >= 0 )
        {
          goto LABEL_56;
        }
LABEL_57:
        EngSetLastError(0x216u);
LABEL_248:
        DCOBJ::~DCOBJ((DCOBJ *)v102);
        return v16;
      case 0:
        if ( v27 == 1 )
        {
          v84 = 2;
          v107[0] = 1;
          v86 = 1;
        }
        else
        {
          if ( v27 == 4 )
          {
            v107[0] = 2;
            v84 = 16;
          }
          else
          {
            if ( v27 != 8 )
            {
              v87 = a11 != 1 ? a11 : 0;
              switch ( v27 )
              {
                case 0x10u:
                  v107[0] = 4;
                  v101 = 31744;
                  v100 = 992;
                  v111 = 31;
                  v86 = 2;
                  break;
                case 0x18u:
                  v107[0] = 5;
                  v86 = 8;
                  break;
                case 0x20u:
                  v107[0] = 6;
                  v84 = 0;
                  v86 = 8;
                  v85 = 512;
LABEL_74:
                  if ( ULongLongToULong(v27 * (unsigned __int64)v112, v75) >= 0
                    && (ULongAdd(31, 0, (int *)&XlateObject, v78, v82) & 0x80000000) == 0
                    && ULongLongToULong((unsigned int)v92 * (unsigned __int64)((XlateObject >> 3) & 0x1FFFFFFC), v79) >= 0 )
                  {
                    v31 = 1;
LABEL_78:
                    v28 = v104;
                    v32 = v84;
                    goto LABEL_79;
                  }
                  goto LABEL_57;
                default:
LABEL_91:
                  EngSetLastError(0x57u);
                  goto LABEL_248;
              }
              v84 = 0;
              v85 = 512;
              v87 = a11 != 1 ? a11 : 0;
              goto LABEL_74;
            }
            v107[0] = 3;
            v84 = 256;
          }
          v86 = 1;
        }
        v85 = 1024;
        goto LABEL_74;
      case 10:
        v95 = 0;
        v96 = 0;
        v97 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v95, v94);
        if ( !v95 || !DC::bIsCMYKColor(v95) )
          goto LABEL_109;
        if ( v27 == 1 )
        {
          v84 = 2;
          v107[0] = 1;
          v86 = 1;
        }
        else
        {
          switch ( v27 )
          {
            case 4u:
              v107[0] = 2;
              v84 = 16;
              break;
            case 8u:
              v107[0] = 3;
              v84 = 256;
              break;
            case 0x20u:
              v107[0] = 6;
              v84 = 0;
              v86 = 16;
              v85 = 512;
LABEL_105:
              if ( ULongLongToULong(v27 * (unsigned __int64)v112, v75) < 0
                || (ULongAdd(31, 0, (int *)&XlateObject, v80, v82) & 0x80000000) != 0
                || ULongLongToULong((unsigned int)v92 * (unsigned __int64)((XlateObject >> 3) & 0x1FFFFFFC), v81) < 0 )
              {
                EngSetLastError(0x216u);
                DCOBJ::~DCOBJ((DCOBJ *)&v95);
                goto LABEL_248;
              }
              goto LABEL_110;
            default:
LABEL_109:
              EngSetLastError(0x57u);
              v83 = 0;
LABEL_110:
              DCOBJ::~DCOBJ((DCOBJ *)&v95);
              goto LABEL_111;
          }
          v86 = 1;
        }
        v85 = 1024;
        goto LABEL_105;
    }
    if ( v26 != 2 )
    {
      if ( v26 != 12 )
      {
        if ( v26 != 1 )
        {
          if ( v26 != 11 )
          {
            if ( v26 == 4 )
            {
              v107[0] = 9;
            }
            else
            {
              if ( v26 != 5 )
                goto LABEL_91;
              v107[0] = 10;
            }
            v32 = 0;
            v31 = 1;
            v84 = 0;
            v86 = 8;
            v85 = 512;
            v107[3] = *(_DWORD *)(a10 + 20);
LABEL_79:
            v93 -= v91;
            if ( !v98 )
              v98 = *(_DWORD *)(*((_DWORD *)v102[0] + 255) + 264);
            v33 = (HDC)*((_DWORD *)v102[0] + 20);
            v94 = v33;
            if ( ((unsigned int)v33 & 0x10000000) != 0 && (!v98 || v108 != 10 && v108 != 12 && v108 != 11) )
              v94 = (HDC)((unsigned int)v33 & 0xFFFFFFF | 0x20000000);
            v107[1] = v112;
            v107[2] = v92;
            if ( !v28 || v28 > v32 )
              v104 = v32;
            if ( v106 < v107[3] )
              goto LABEL_91;
            v106 = *((_DWORD *)v102[0] + 9);
            v125 = v110;
            v126 = (char *)v103[0] + v114;
            v124 = (char *)v103[0];
            v127 = (struct XDCOBJ *)((char *)v110 + v113);
            EXFORMOBJ::vQuickInit((EXFORMOBJ *)v122, (struct XDCOBJ *)v102, 0x204u);
            if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v122, (struct ERECTL *)&v124) )
              goto LABEL_248;
            if ( ERECTL::bEmpty((ERECTL *)&v124) )
            {
              v16 = a8;
              goto LABEL_248;
            }
            v35 = v124;
            v36 = 0;
            v37 = v126;
            v88 = 0;
            if ( (int)v124 > (int)v126 )
            {
              v124 = v126;
              v126 = v35;
              if ( !v122[2] )
              {
                v124 = v37 + 1;
                v126 = v35 + 1;
              }
              v36 = 1;
              v88 = 1;
            }
            v38 = v125;
            if ( (int)v125 > (int)v127 )
            {
              v125 = (struct XDCOBJ *)((char *)v127 + 1);
              v127 = (struct XDCOBJ *)((char *)v38 + 1);
              v88 = v36 ^ 2;
            }
            v103[1] = 0;
            v103[0] = 0;
            if ( !v87 )
            {
              v31 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v103, v86, v32, 0, v101, v100, v111, v85, 1) != 0 ? v31 : 0;
              v83 = v31;
            }
            if ( !v31 )
            {
LABEL_235:
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v103);
              goto LABEL_248;
            }
            v117 = 0;
            v118 = 0;
            v119 = 0;
            LOWORD(v120) = 256;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v115, (struct XDCOBJ *)v102, 0);
            v39 = *(_DWORD *)(*((_DWORD *)v102[0] + 9) + 24) & 0x8000;
            v107[4] = 0;
            v107[5] |= 8 * v39;
            v95 = 0;
            LOBYTE(v96) = 0;
            v97 = 0;
            if ( v99 )
            {
              v128 = 0;
              LOBYTE(v129) = 0;
              qmemcpy(v123, v107, sizeof(v123));
              v130 = 0;
              if ( SURFMEM::bCreateDIB((SURFMEM *)&v128, (struct _DEVBITMAPINFO *)v123, v90, 0, 0, 0, 0, 0, 1, 0, 0)
                && (v107[0] = (v107[0] != 7) + 2,
                    SURFMEM::bCreateDIB((SURFMEM *)&v95, (struct _DEVBITMAPINFO *)v107, 0, 0, 0, 0, 0, 0, 1, 0, 0)) )
              {
                prclDest.right = v107[1];
                prclDest.bottom = v107[2];
                prclDest.left = 0;
                prclDest.top = 0;
                v74 = SURFACE::pSurfobj(v128);
                v41 = SURFACE::pSurfobj(v95);
                EngCopyBits(v41, v74, 0, 0, &prclDest, &gptl00);
                v40 = v83;
              }
              else
              {
                v40 = 0;
                v83 = 0;
              }
              SURFMEM::~SURFMEM((SURFMEM *)&v128);
            }
            else
            {
              v40 = SURFMEM::bCreateDIB((SURFMEM *)&v95, (struct _DEVBITMAPINFO *)v107, v90, 0, 0, 0, 0, 0, 1, 0, 0) != 0
                  ? v31
                  : 0;
              v83 = v40;
            }
            if ( !v40 )
            {
LABEL_233:
              SURFMEM::~SURFMEM((SURFMEM *)&v95);
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v115);
              if ( v117 )
                DLODCOBJ::vUnlock((DLODCOBJ *)&v117);
              goto LABEL_235;
            }
            v42 = XDCOBJ::pSurfaceEff((XDCOBJ *)v102);
            v99 = (int)v42;
            XlateObject = 0;
            v43 = (struct PALETTE *)*((_DWORD *)v102[0] + 15);
            v44 = (struct PALETTE *)*((_DWORD *)v42 + 22);
            v90 = 0;
            v91 = 0;
            if ( v43 != ppalDefault )
              *((_DWORD *)v42 + 29) = *(_DWORD *)v43;
            if ( v87 )
            {
              if ( v87 != 1 )
              {
                if ( v87 == 2 )
                {
                  v45 = v107[0] != *((_DWORD *)v42 + 15);
                  XlateObject = (unsigned int)xloIdent;
                  v83 = v45 ? 0 : v83;
                }
                goto LABEL_164;
              }
              if ( v93 >= 2 * v104 && EXLATEOBJ::bMakeXlate(&v90, v109, v43, v42, v104, v84) )
              {
                XlateObject = (unsigned int)v90;
                if ( gbMultiMonMismatchColor )
                {
                  v51 = v106;
                  if ( (*(_BYTE *)(v106 + 24) & 1) != 0 )
                  {
                    if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v103, v86, v84, 0, v101, v100, v111, v85, 1) )
                    {
                      v52 = *(_DWORD *)(v99 + 88);
                      if ( !v52 )
                        v52 = *(_DWORD *)(v51 + 1112);
                      XEPALOBJ::vGetEntriesFrom(v103, v43, v52, v109, v104);
                      v91 = 1;
                      goto LABEL_164;
                    }
                    v46 = 0;
LABEL_165:
                    if ( v46 )
                    {
                      v47 = v102[0];
                      if ( (*((_BYTE *)v102[0] + 24) & 0xE0) != 0 )
                      {
                        XDCOBJ::vAccumulate((XDCOBJ *)v102, (struct ERECTL *)&v124);
                        v47 = v102[0];
                      }
                      if ( XDCOBJ::bFullScreen((XDCOBJ *)v102) )
                        goto LABEL_231;
                      if ( (v116 & 1) != 0 )
                      {
                        ERECTL::bOffsetAdd(
                          (ERECTL *)&v124,
                          (const struct _POINTL *)v47 + (*((_DWORD *)v47 + 7) & 1) + 131,
                          0);
                        v48 = (SURFACE *)a6;
                        v128 = (SURFACE *)a6;
                        if ( v108 == 4 && (v107[5] & 1) != 0 )
                        {
                          v49 = HIDWORD(a6);
                          v50 = a8;
                        }
                        else
                        {
                          v50 = a8;
                          v49 = v92 - HIDWORD(a6) - a8;
                          HIDWORD(a6) = v49;
                        }
                        v53 = a7 + a6;
                        v54 = v49 + v50;
                        v55 = v102[0];
                        v129 = v49;
                        v131 = v54;
                        v130 = a7 + a6;
                        if ( (int)a6 > a7 + (int)a6 )
                        {
                          v48 = (SURFACE *)(v53 + 1);
                          v53 = a6 + 1;
                          v128 = v48;
                          v88 ^= 1u;
                          v130 = a6 + 1;
                        }
                        if ( v49 > v54 )
                        {
                          v88 ^= 2u;
                          HIDWORD(a6) = v54 + 1;
                          v129 = v54 + 1;
                          v54 = v49 + 1;
                          v131 = v49 + 1;
                        }
                        if ( v53 > 0
                          && v54 > 0
                          && (int)v48 < *((_DWORD *)v95 + 8)
                          && SHIDWORD(a6) < *((_DWORD *)v95 + 9)
                          && !ERECTL::bEmpty((ERECTL *)&v128) )
                        {
                          v57 = DC::prgnRao(v55) ? DC::prgnRao(v56) : DC::prgnVisSnap(v56);
                          v135 = 0;
                          v136 = 0;
                          v137 = 1;
                          v138 = 0;
                          XCLIPOBJ::vSetup((XCLIPOBJ *)&v133, v57, (struct ERECTL *)&v124, 0);
                          if ( ERECTL::bEmpty((ERECTL *)v134) )
                            goto LABEL_231;
                          if ( (*((_BYTE *)v102[0] + 24) & 0xE0) != 0 )
                          {
                            prclDest = *v58;
                            XDCOBJ::vAccumulateTight((XDCOBJ *)v102, (struct ECLIPOBJ *)v58, &prclDest.left);
                          }
                          if ( v91 )
                          {
                            XEPALOBJ::vRefPalette((XEPALOBJ *)v103);
                            *((_DWORD **)v95 + 22) = v103[0];
                          }
                          v59 = v99;
                          v60 = *(_DWORD *)(v99 + 28);
                          if ( (*(_DWORD *)(v99 + 72) & 2) != 0 )
                            v61 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v60 + 1980);
                          else
                            v61 = EngStretchBlt;
                          if ( (*(_DWORD *)(v99 + 72) & 2) != 0
                            && ((unsigned int)&loc_20000 & *(_DWORD *)(v60 + 24)) == 0 )
                          {
                            if ( CompatibleDC == 4 && (*((_BYTE *)v102[0] + 48) & 0x10) == 0 )
                              v61 = EngStretchBlt;
                            if ( (int)v128 < 0 || v129 < 0 || v130 > *((_DWORD *)v95 + 8) || v131 > *((_DWORD *)v95 + 9) )
                              v61 = EngStretchBlt;
                          }
                          if ( (v88 & 1) != 0 )
                          {
                            v62 = v124;
                            v124 = v126;
                            v126 = v62;
                          }
                          if ( (v88 & 2) != 0 )
                          {
                            v63 = v125;
                            v125 = v127;
                            v127 = v63;
                          }
                          ++*(_DWORD *)(v99 + 56);
                          v91 = *((__int16 *)v102[0] + 57) >= 0 ? (int)v102[0] + 112 : 0;
                          v64 = SURFACE::pSurfobj(v95);
                          if ( v61(
                                 (SURFOBJ *)(v59 + 16),
                                 v64,
                                 0,
                                 (CLIPOBJ *)&v133,
                                 (XLATEOBJ *)XlateObject,
                                 (COLORADJUSTMENT *)v91,
                                 v65,
                                 (RECTL *)&v124,
                                 (RECTL *)&v128,
                                 0,
                                 CompatibleDC) )
                          {
LABEL_231:
                            v16 = v92;
                          }
                        }
                      }
                    }
                    goto LABEL_232;
                  }
                }
LABEL_164:
                v46 = v83;
                goto LABEL_165;
              }
            }
            else
            {
              if ( !v104 )
              {
                XlateObject = (unsigned int)CreateXlateObject(
                                              v98,
                                              (int)v94,
                                              v103[0],
                                              v44,
                                              (int)v43,
                                              v43,
                                              0,
                                              0,
                                              0xFFFFFF,
                                              0);
                v90 = (void *)XlateObject;
                if ( !XlateObject )
                {
                  v46 = 0;
                  XlateObject = 0;
                  goto LABEL_165;
                }
                goto LABEL_164;
              }
              if ( v93 >= 4 * v104 )
              {
                if ( v108 == 10 || v108 == 12 || v108 == 11 )
                  XEPALOBJ::vCopy_cmykquad((XEPALOBJ *)v103, v109, v104, v104);
                else
                  XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)v103, v109, 0, v104);
                XlateObject = (unsigned int)CreateXlateObject(
                                              v98,
                                              (int)v94,
                                              v103[0],
                                              v44,
                                              (int)v43,
                                              v43,
                                              0,
                                              0,
                                              0xFFFFFF,
                                              0);
                v90 = (void *)XlateObject;
                v46 = XlateObject != 0 ? v83 : 0;
                goto LABEL_165;
              }
            }
LABEL_232:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
            goto LABEL_233;
          }
          v95 = 0;
          v96 = 0;
          v97 = 0;
          XDCOBJ::vLock((XDCOBJ *)&v95, v94);
          if ( !v95 || !DC::bIsCMYKColor(v95) )
          {
            EngSetLastError(0x57u);
            v83 = 0;
          }
          DCOBJ::~DCOBJ((DCOBJ *)&v95);
          if ( !v83 )
            goto LABEL_248;
        }
        if ( v27 != 8 )
          EngSetLastError(0x57u);
        v107[0] = 8;
        v34 = v27 - 8;
        v84 = 256;
LABEL_135:
        v107[3] = *(_DWORD *)(a10 + 20);
        v99 = 1;
        v85 = 1024;
        v86 = 1;
        v31 = v34 == 0 ? v83 : 0;
        v83 = v31;
LABEL_136:
        if ( !v31 )
          goto LABEL_248;
        goto LABEL_78;
      }
      v95 = 0;
      v96 = 0;
      v97 = 0;
      XDCOBJ::vLock((XDCOBJ *)&v95, v94);
      if ( !v95 || !DC::bIsCMYKColor(v95) )
      {
        EngSetLastError(0x57u);
        v83 = 0;
      }
      DCOBJ::~DCOBJ((DCOBJ *)&v95);
      if ( !v83 )
        goto LABEL_248;
    }
    if ( v27 != 4 )
      EngSetLastError(0x57u);
    v107[0] = 7;
    v34 = v27 - 4;
    v84 = 16;
    goto LABEL_135;
  }
  return NtGdiPatBlt(a1, (int)v103[0], v110, a4, a5, a12);
}
