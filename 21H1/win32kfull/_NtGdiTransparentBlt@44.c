/*
 * XREFs of _NtGdiTransparentBlt@44 @ 0xC151A
 * Callers:
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vSrcCopyS1D32@@YGXPAUBLTINFO@@@Z @ 0x4DFCC (-vSrcCopyS1D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YGXPAUBLTINFO@@@Z @ 0x4FE30 (-vSrcCopyS1D1LtoR@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z @ 0x52550 (-vSrcCopyS32D32Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x794DE (-SrcSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QAE@XZ @ 0x79500 (--0DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z @ 0x7988A (-bXform@EXFORMOBJ@@QAEHAAVERECTL@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z @ 0x798DC (-DestSurfaceAccessCheck@@YGHPAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0x97606 (-vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QBEHXZ @ 0x97C08 (-bRotationOrMirroring@EXFORMOBJ@@QBEHXZ.c)
 *     ?vOrAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0xA3BA8 (-vOrAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z.c)
 *     ?vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0xA7E1A (-vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z @ 0xAAD26 (-vSrcCopyS24D24Identity@@YGXPAUBLTINFO@@@Z.c)
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     ?vSrcCopyS4D1@@YGXPAUBLTINFO@@@Z @ 0xB9616 (-vSrcCopyS4D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D32@@YGXPAUBLTINFO@@@Z @ 0xB9BDC (-vSrcCopyS8D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4@@YGXPAUBLTINFO@@@Z @ 0xBA4D8 (-vSrcCopyS4D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8@@YGXPAUBLTINFO@@@Z @ 0xBA604 (-vSrcCopyS8D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D4@@YGXPAUBLTINFO@@@Z @ 0xBB026 (-vSrcCopyS1D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vStrMirror01@@YGXPAVSURFACE@@@Z @ 0xBB4B2 (-vStrMirror01@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror32@@YGXPAVSURFACE@@@Z @ 0xBFB4E (-vStrMirror32@@YGXPAVSURFACE@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z @ 0xBFDC2 (-vSrcCopyS4D4Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D8@@YGXPAUBLTINFO@@@Z @ 0xC2E4E (-vSrcCopyS1D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D32@@YGXPAUBLTINFO@@@Z @ 0xC594C (-vSrcCopyS4D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D1@@YGXPAUBLTINFO@@@Z @ 0xC5A46 (-vSrcCopyS32D1@@YGXPAUBLTINFO@@@Z.c)
 *     _EngTransparentBlt@32 @ 0xCAC46 (_EngTransparentBlt@32.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0xFB94C (-vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z @ 0xFBC32 (-vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QAEHXZ @ 0x1D48A1 (-bRedirHooked@XDCOBJ@@QAEHXZ.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     ?vStrMirror04@@YGXPAVSURFACE@@@Z @ 0x22A61D (-vStrMirror04@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror08@@YGXPAVSURFACE@@@Z @ 0x22A7CB (-vStrMirror08@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror16@@YGXPAVSURFACE@@@Z @ 0x22A831 (-vStrMirror16@@YGXPAVSURFACE@@@Z.c)
 *     ?vStrMirror24@@YGXPAVSURFACE@@@Z @ 0x22A8A0 (-vStrMirror24@@YGXPAVSURFACE@@@Z.c)
 *     ?vSrcCopyS16D1@@YGXPAUBLTINFO@@@Z @ 0x22F795 (-vSrcCopyS16D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z @ 0x22F886 (-vSrcCopyS1D1RtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YGXPAUBLTINFO@@@Z @ 0x22FBD9 (-vSrcCopyS24D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D1@@YGXPAUBLTINFO@@@Z @ 0x22FCCF (-vSrcCopyS8D1@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YGXPAUBLTINFO@@@Z @ 0x22FDAD (-vSrcCopyS16D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YGXPAUBLTINFO@@@Z @ 0x22FEBE (-vSrcCopyS24D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D4@@YGXPAUBLTINFO@@@Z @ 0x230060 (-vSrcCopyS32D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D4@@YGXPAUBLTINFO@@@Z @ 0x230198 (-vSrcCopyS8D4@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z @ 0x230289 (-vSrcCopyS16D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z @ 0x23043F (-vSrcCopyS24D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z @ 0x23064A (-vSrcCopyS32D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D8@@YGXPAUBLTINFO@@@Z @ 0x2307EB (-vSrcCopyS4D8@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z @ 0x2308A5 (-vSrcCopyS8D8IdentityLtoR@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z @ 0x2308FB (-vSrcCopyS8D8IdentityRtoL@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x230957 (-vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z @ 0x230B4E (-vSrcCopyS16D16Identity@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D16@@YGXPAUBLTINFO@@@Z @ 0x230BCA (-vSrcCopyS1D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D16@@YGXPAUBLTINFO@@@Z @ 0x2310EA (-vSrcCopyS4D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D16@@YGXPAUBLTINFO@@@Z @ 0x2311A5 (-vSrcCopyS8D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x231257 (-vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D24@@YGXPAUBLTINFO@@@Z @ 0x2313BE (-vSrcCopyS1D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x2319E5 (-vSrcCopyS24D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D24@@YGXPAUBLTINFO@@@Z @ 0x231BD8 (-vSrcCopyS4D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D24@@YGXPAUBLTINFO@@@Z @ 0x231DA2 (-vSrcCopyS8D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YGXPAUBLTINFO@@@Z @ 0x231ED5 (-vSrcCopyS16D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x232050 (-vSrcCopyS32D32@@YGXPAUBLTINFO@@@Z.c)
 */

int __stdcall NtGdiTransparentBlt(
        HDC a1,
        LONG a2,
        struct XDCOBJ *a3,
        XLATEOBJ *a4,
        int a5,
        HDC a6,
        struct BLTINFO *a7,
        struct XDCOBJ *a8,
        int a9,
        int a10,
        int a11)
{
  DEVLOCKBLTOBJ *v11; // ecx
  _DWORD *v12; // ebx
  struct BLTINFO *v13; // eax
  int v14; // ebx
  int v15; // eax
  BOOL v16; // edx
  struct BLTINFO *v17; // edi
  HDC v18; // eax
  bool v19; // cc
  int v20; // eax
  int v21; // edx
  HDC v22; // esi
  DC *v23; // ecx
  struct REGION *v24; // eax
  struct ECLIPOBJ *v25; // ecx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v28; // eax
  int inited; // eax
  int v30; // edx
  int v31; // esi
  int v32; // ebx
  BOOL v33; // eax
  FIX x; // edi
  FIX v36; // esi
  FIX v37; // ebx
  int v38; // ebx
  int v39; // ecx
  LONG v40; // ecx
  LONG v41; // esi
  ERECTL *v42; // ecx
  int v43; // eax
  LONG *v44; // eax
  bool v45; // zf
  LONG v46; // eax
  int v48; // edx
  int v49; // eax
  int v50; // ebx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  XLATEOBJ *v53; // edx
  XLATEOBJ *v54; // edi
  XLATEOBJ *v55; // ecx
  HDC v56; // ebx
  unsigned int v57; // ecx
  char *v58; // edi
  char v59; // cf
  unsigned int v60; // ecx
  char *v61; // edi
  int i; // ecx
  SURFOBJ *v63; // ebx
  int v64; // ebx
  int v65; // [esp+30h] [ebp-234h]
  size_t v66; // [esp+38h] [ebp-22Ch]
  int v67; // [esp+3Ch] [ebp-228h]
  int v68; // [esp+3Ch] [ebp-228h]
  int v69; // [esp+40h] [ebp-224h]
  int v70; // [esp+40h] [ebp-224h]
  ULONG iTransColor; // [esp+4Ch] [ebp-218h]
  struct BLTINFO *v72; // [esp+50h] [ebp-214h] BYREF
  XLATEOBJ *pxlo; // [esp+54h] [ebp-210h]
  DC *v74[3]; // [esp+58h] [ebp-20Ch] BYREF
  int v75; // [esp+64h] [ebp-200h]
  int v76; // [esp+68h] [ebp-1FCh]
  HDC v77; // [esp+6Ch] [ebp-1F8h]
  DC *v78[3]; // [esp+70h] [ebp-1F4h] BYREF
  int v79; // [esp+7Ch] [ebp-1E8h] BYREF
  int v80; // [esp+80h] [ebp-1E4h]
  int v81; // [esp+84h] [ebp-1E0h]
  HDC v82; // [esp+88h] [ebp-1DCh]
  struct BLTINFO *v83; // [esp+8Ch] [ebp-1D8h] BYREF
  int v84; // [esp+90h] [ebp-1D4h]
  int v85; // [esp+94h] [ebp-1D0h]
  int v86; // [esp+98h] [ebp-1CCh]
  int v87; // [esp+9Ch] [ebp-1C8h]
  _DWORD *v88; // [esp+A0h] [ebp-1C4h]
  int *v89[3]; // [esp+A4h] [ebp-1C0h] BYREF
  _DWORD v90[2]; // [esp+B0h] [ebp-1B4h] BYREF
  _DWORD v91[6]; // [esp+B8h] [ebp-1ACh] BYREF
  int *v92[3]; // [esp+D0h] [ebp-194h] BYREF
  LONG left; // [esp+DCh] [ebp-188h]
  LONG top; // [esp+E0h] [ebp-184h]
  LONG right; // [esp+E4h] [ebp-180h]
  LONG bottom; // [esp+E8h] [ebp-17Ch]
  _BYTE v97[112]; // [esp+ECh] [ebp-178h] BYREF
  RECTL prclDst; // [esp+15Ch] [ebp-108h] BYREF
  RECTL prclSrc; // [esp+16Ch] [ebp-F8h] BYREF
  RECTL rclBounds; // [esp+17Ch] [ebp-E8h] BYREF
  CLIPOBJ pco; // [esp+18Ch] [ebp-D8h] BYREF
  int v102; // [esp+1D0h] [ebp-94h]
  int v103; // [esp+1D4h] [ebp-90h]
  int v104; // [esp+1FCh] [ebp-68h]
  int v105; // [esp+204h] [ebp-60h]
  struct _POINTFIX v106; // [esp+210h] [ebp-54h] BYREF
  FIX v107; // [esp+218h] [ebp-4Ch]
  int v108; // [esp+21Ch] [ebp-48h]
  int v109; // [esp+220h] [ebp-44h]
  FIX v110; // [esp+224h] [ebp-40h]
  FIX v111; // [esp+228h] [ebp-3Ch]
  int v112; // [esp+22Ch] [ebp-38h]
  struct _POINTL v113; // [esp+230h] [ebp-34h] BYREF
  char *v114; // [esp+238h] [ebp-2Ch]
  struct XDCOBJ *v115; // [esp+23Ch] [ebp-28h]
  LONG v116; // [esp+240h] [ebp-24h]
  char *v117; // [esp+244h] [ebp-20h]
  POINTFIX pptfx; // [esp+248h] [ebp-1Ch] BYREF
  int v119; // [esp+250h] [ebp-14h]
  int v120; // [esp+254h] [ebp-10h]
  int v121; // [esp+258h] [ebp-Ch]
  int v122; // [esp+25Ch] [ebp-8h]

  v82 = a1;
  v77 = a6;
  v72 = a7;
  pxlo = a4;
  v75 = a9;
  v76 = a10;
  if ( (int)a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
    EngSetLastError(0x57u);
    return 0;
  }
  memset(v74, 0, sizeof(v74));
  XDCOBJ::vLock((XDCOBJ *)v74, v82);
  memset(v78, 0, sizeof(v78));
  XDCOBJ::vLock((XDCOBJ *)v78, v77);
  if ( !v74[0]
    || (*((_DWORD *)v74[0] + 6) & 0x10000) != 0
    || !v78[0]
    || (bSpDwmValidateSurface((LONG)v72, (struct XDCOBJ *)v78, a8, v75, v76, v67, v69),
        bSpDwmValidateSurface(a2, (struct XDCOBJ *)v74, a3, (int)pxlo, a5, v68, v70),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v89, (struct XDCOBJ *)v74, 516),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v92, (struct XDCOBJ *)v78, 516),
        EXFORMOBJ::bRotationOrMirroring(v92)) )
  {
    EngSetLastError(0x57u);
    v14 = 0;
    goto LABEL_48;
  }
  prclSrc.right = (LONG)v72 + v75;
  prclSrc.left = (LONG)v72;
  prclSrc.bottom = (LONG)a8 + v76;
  prclSrc.top = (LONG)a8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v92, (struct _POINTL *)&prclSrc);
  ERECTL::vOrder((ERECTL *)&prclSrc);
  v76 = EXFORMOBJ::bRotationOrMirroring(v89);
  if ( v76 )
  {
    v114 = (char *)pxlo + a2;
    v113.x = a2;
    v113.y = (LONG)a3;
    v115 = a3;
    v116 = a2;
    v117 = (char *)a3 + a5;
    EXFORMOBJ::bXform((EXFORMOBJ *)v89, &v113, &v106, 3u);
    x = v106.x;
    v36 = v107;
    if ( (v89[0][14] & 1) != 0 )
    {
      if ( v106.x > v107 )
      {
        x = v106.x + 16;
        v36 = v107 + 16;
        v109 += 16;
        v106.x += 16;
        v107 += 16;
      }
      v37 = v110;
      if ( v106.y > v110 )
      {
        v108 += 16;
        v37 = v110 + 16;
        v106.y += 16;
        v110 += 16;
      }
    }
    else
    {
      v37 = v110;
    }
    v112 = v37 + v108 - v106.y;
    v111 = v36 + v109 - x;
    v38 = (v36 <= v111) ^ (v36 > x);
    v39 = (v108 <= v112) ^ (v108 > v106.y);
    if ( *(&v106.x + 2 * v38) > *(&v106.x + 2 * (v38 ^ 3)) )
      v38 ^= 3u;
    if ( *(&v106.y + 2 * v39) > *(&v106.y + 2 * (v39 ^ 3)) )
      v39 ^= 3u;
    prclDst.left = (*(&v106.x + 2 * v38) + 15) >> 4;
    prclDst.top = (*(&v106.y + 2 * v39) + 15) >> 4;
    prclDst.right = (*(&v106.x + 2 * (v38 ^ 3)) + 15) >> 4;
    prclDst.bottom = (*(&v106.y + 2 * (v39 ^ 3)) + 15) >> 4;
  }
  else
  {
    prclDst.right = (LONG)pxlo + a2;
    prclDst.left = a2;
    prclDst.top = (LONG)a3;
    prclDst.bottom = (LONG)a3 + a5;
    EXFORMOBJ::bXform((EXFORMOBJ *)v89, (struct _POINTL *)&prclDst);
    ERECTL::vOrder((ERECTL *)&prclDst);
  }
  if ( ERECTL::bEmpty((ERECTL *)&prclDst) )
  {
    v14 = 1;
    goto LABEL_48;
  }
  if ( (*((_BYTE *)v74[0] + 24) & 0xE0) != 0 )
    XDCOBJ::vAccumulate((XDCOBJ *)v74, (struct ERECTL *)&prclDst);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v97);
  if ( !DEVLOCKBLTOBJ::bLock(v11, v74, v78, 0) )
  {
    v64 = XDCOBJ::bFullScreen(v78);
    v14 = XDCOBJ::bFullScreen(v74) | v64;
    goto LABEL_47;
  }
  v12 = (_DWORD *)*((_DWORD *)v74[0] + 126);
  v75 = (int)v12;
  if ( !v12
    || (v88 = (_DWORD *)v12[22],
        v86 = *((_DWORD *)v74[0] + 15),
        v13 = (struct BLTINFO *)*((_DWORD *)v78[0] + 126),
        (v72 = v13) == 0) )
  {
    v14 = 1;
    goto LABEL_47;
  }
  if ( !SrcSurfaceAccessCheck(v13) || !DestSurfaceAccessCheck(v12) )
  {
    EngSetLastError(6u);
    goto LABEL_124;
  }
  left = prclDst.left;
  v14 = 1;
  v15 = *((_DWORD *)v74[0] + 7) & 1;
  top = prclDst.top;
  right = prclDst.right;
  bottom = prclDst.bottom;
  v16 = !ERECTL::bOffsetAdd((ERECTL *)&prclDst, (const struct _POINTL *)v74[0] + v15 + 131, 1)
     || !ERECTL::bOffsetAdd((ERECTL *)&prclSrc, (const struct _POINTL *)v78[0] + (*((_DWORD *)v78[0] + 7) & 1) + 131, 1);
  v17 = v72;
  v18 = (HDC)*((_DWORD *)v72 + 7);
  v82 = v18;
  if ( *((_WORD *)v72 + 32) == 1 && v18 && ((unsigned int)&loc_20000 & (_DWORD)v18[6]) != 0 )
  {
    v40 = *((_DWORD *)v18 + 459);
    if ( prclSrc.left < v40 )
      goto LABEL_73;
    v41 = *((_DWORD *)v18 + 460);
    if ( prclSrc.top < v41 || prclSrc.right > v40 + *((_DWORD *)v72 + 8) )
      goto LABEL_73;
    v19 = prclSrc.bottom <= v41 + *((_DWORD *)v72 + 9);
  }
  else
  {
    if ( prclSrc.left < 0 || prclSrc.top < 0 || prclSrc.right > *((_DWORD *)v72 + 8) )
      goto LABEL_73;
    v19 = prclSrc.bottom <= *((_DWORD *)v72 + 9);
  }
  if ( !v19 )
  {
LABEL_73:
    v20 = 1;
    goto LABEL_29;
  }
  v20 = 0;
LABEL_29:
  v21 = v20 | v16;
  if ( v72 == (struct BLTINFO *)v75 )
  {
    rclBounds = prclSrc;
    ERECTL::operator*=(&rclBounds.left, &prclDst.left);
    v17 = v72;
    if ( !ERECTL::bEmpty(v42) )
      v21 = 1;
  }
  if ( v21 )
  {
    EngSetLastError(0x57u);
    goto LABEL_124;
  }
  v65 = *((_DWORD *)v78[0] + 15);
  v77 = (HDC)*((_DWORD *)v17 + 22);
  v22 = v77;
  v87 = v65;
  iTransColor = ulGetNearestIndexFromColorref(v77, v65, a11, 1);
  if ( DC::prgnRao(v74[0]) )
    v24 = DC::prgnRao(v23);
  else
    v24 = DC::prgnVisSnap(v23);
  v104 = 1;
  v102 = 0;
  v103 = 0;
  v105 = 0;
  XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v24, (struct ERECTL *)&prclDst, 0);
  if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
    goto LABEL_47;
  if ( (*((_BYTE *)v74[0] + 24) & 0xE0) != 0 )
  {
    rclBounds = pco.rclBounds;
    XDCOBJ::vAccumulateTight((XDCOBJ *)v74, v25, &rclBounds.left);
    v22 = v77;
    v17 = v72;
  }
  v83 = 0;
  LOBYTE(v84) = 0;
  v85 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x400u )
    v28 = *(_DWORD *)(ThreadWin32Thread + 352);
  else
    v28 = 0;
  if ( (v28 & 0x8000000) != 0 )
  {
    v43 = *(_DWORD *)(*((_DWORD *)v74[0] + 255) + 148);
    if ( (v43 & 1) != 0 && (v43 & 9) != 9 )
    {
      v113.y = *((_DWORD *)v17 + 8);
      v114 = (char *)*((_DWORD *)v17 + 9);
      v113.x = *((_DWORD *)v17 + 15);
      v44 = (LONG *)*((_DWORD *)v17 + 22);
      v115 = 0;
      v117 = 0;
      if ( v44 )
        v116 = *v44;
      else
        v116 = 0;
      SURFMEM::bCreateDIB((SURFMEM *)&v83, (struct _DEVBITMAPINFO *)&v113, 0, 0, 0, 0, 0, 0, 1, 0, 0);
      if ( !v83 )
        goto LABEL_122;
      v45 = (*((_DWORD *)v17 + 18) & 0x400) == 0;
      rclBounds.right = *((_DWORD *)v17 + 8);
      v46 = *((_DWORD *)v17 + 9);
      rclBounds.left = 0;
      rclBounds.top = 0;
      rclBounds.bottom = v46;
      v90[0] = 0;
      v90[1] = 0;
      if ( !(v45
           ? EngCopyBits((SURFOBJ *)((char *)v83 + 16), (SURFOBJ *)((char *)v17 + 16), 0, 0, &rclBounds, (POINTL *)v90)
           : (*((int (__stdcall **)(char *, int, _DWORD, _DWORD, RECTL *, _DWORD *))v82 + 494))(
               (char *)v83 + 16,
               (int)v17 + 16,
               0,
               0,
               &rclBounds,
               v90)) )
        goto LABEL_122;
      v48 = *((_DWORD *)v83 + 15);
      if ( (unsigned int)(v48 - 1) > 5 )
        goto LABEL_122;
      funcs_4CED4[v48 - 1](v83);
      v17 = v83;
      v72 = v83;
    }
  }
  v79 = 0;
  LOBYTE(v80) = 0;
  v81 = 0;
  if ( !v76 )
    goto LABEL_40;
  v91[1] = prclDst.right - prclDst.left;
  v91[2] = prclDst.bottom - prclDst.top;
  v91[0] = *((_DWORD *)v17 + 15);
  v49 = *((_DWORD *)v17 + 18) & 0x40000;
  v91[3] = 0;
  v91[5] = v49;
  v91[4] = 0;
  if ( !SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)v91, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
  {
    EngSetLastError(8u);
    SURFMEM::~SURFMEM((SURFMEM *)&v79);
LABEL_122:
    SURFMEM::~SURFMEM((SURFMEM *)&v83);
LABEL_124:
    v14 = 0;
    goto LABEL_47;
  }
  v50 = v79;
  v51 = *(_DWORD *)(v79 + 40);
  switch ( *((_DWORD *)v17 + 15) )
  {
    case 1:
      v66 = *(_DWORD *)(v79 + 40);
      if ( iTransColor )
        memset(*(void **)(v79 + 44), 255, v66);
      else
        memset(*(void **)(v79 + 44), 0, v66);
      goto LABEL_116;
    case 2:
      memset(*(void **)(v79 + 44), iTransColor | (16 * iTransColor), *(_DWORD *)(v79 + 40));
      goto LABEL_116;
    case 3:
      memset(*(void **)(v79 + 44), iTransColor, *(_DWORD *)(v79 + 40));
      goto LABEL_116;
    case 4:
      v57 = v51 >> 1;
      v58 = *(char **)(v79 + 44);
      if ( v57 )
      {
        v59 = v57 & 1;
        v60 = v57 >> 1;
        memset32(v58, ((unsigned __int16)iTransColor << 16) | (unsigned __int16)iTransColor, v60);
        v61 = &v58[4 * v60];
        for ( i = v59; i; --i )
        {
          *(_WORD *)v61 = iTransColor;
          v61 += 2;
        }
        goto LABEL_116;
      }
      break;
    case 5:
      v53 = *(XLATEOBJ **)(v79 + 48);
      v54 = (XLATEOBJ *)((char *)v53 + *(_DWORD *)(v79 + 36) * *(_DWORD *)(v79 + 52));
      while ( 1 )
      {
        pxlo = v53;
        if ( v53 == v54 )
          break;
        v55 = v53;
        v77 = (HDC)((char *)v53 + 3 * *(_DWORD *)(v50 + 32) - 2);
        if ( v53 < (XLATEOBJ *)v77 )
        {
          v56 = v77;
          do
          {
            LOWORD(v55->iUniq) = iTransColor;
            BYTE2(v55->iUniq) = BYTE2(iTransColor);
            v55 = (XLATEOBJ *)((char *)v55 + 3);
          }
          while ( v55 < (XLATEOBJ *)v56 );
          v50 = v79;
          v53 = pxlo;
        }
        v53 = (XLATEOBJ *)((char *)v53 + *(_DWORD *)(v50 + 52));
      }
      break;
    case 6:
      v52 = v51 >> 2;
      if ( v52 )
      {
        memset32(*(void **)(v79 + 44), iTransColor, v52);
LABEL_116:
        v50 = v79;
      }
      break;
  }
  pptfx.y = v106.y - 16 * top;
  pptfx.x = v106.x - 16 * left;
  v120 = v108 - 16 * top;
  v119 = v107 - 16 * left;
  v122 = v110 - 16 * top;
  v121 = v109 - 16 * left;
  if ( v50 )
    v63 = (SURFOBJ *)(v50 + 16);
  else
    v63 = 0;
  EngPlgBlt(v63, (SURFOBJ *)((char *)v72 + 16), 0, 0, xloIdent, 0, 0, &pptfx, &prclSrc, 0, 3u);
  v17 = (struct BLTINFO *)v79;
  prclSrc.right = prclDst.right - prclDst.left;
  prclSrc.left = 0;
  prclSrc.top = 0;
  prclSrc.bottom = prclDst.bottom - prclDst.top;
LABEL_40:
  v72 = 0;
  pxlo = 0;
  if ( *((_DWORD *)v78[0] + 126) == *((_DWORD *)v74[0] + 126)
    || (inited = EXLATEOBJ::bInitXlateObj(
                   (int *)&v72,
                   0,
                   0,
                   v22,
                   v88,
                   v87,
                   v86,
                   *(_DWORD *)(*((_DWORD *)v74[0] + 255) + 204),
                   *(_DWORD *)(*((_DWORD *)v74[0] + 255) + 196),
                   -1,
                   0),
        pxlo = (XLATEOBJ *)v72,
        inited) )
  {
    v30 = v75;
    ++*(_DWORD *)(v75 + 56);
    v31 = *((_DWORD *)v74[0] + 9);
    v32 = *((_DWORD *)v78[0] + 9);
    if ( v31 == v32 || XDCOBJ::bRedirHooked((XDCOBJ *)v74) && *(_DWORD *)(v31 + 2316) == v32 )
    {
      if ( (*(_DWORD *)(v30 + 72) & 0x8000) != 0 )
        v33 = (*(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_DWORD *)(v30 + 28) + 2196))(
                (SURFOBJ *)(v30 + 16),
                v17 != 0 ? (SURFOBJ *)((char *)v17 + 16) : 0,
                &pco,
                pxlo,
                &prclDst,
                &prclSrc,
                iTransColor,
                0);
      else
        v33 = EngTransparentBlt(
                (SURFOBJ *)(v30 + 16),
                v17 != 0 ? (SURFOBJ *)((char *)v17 + 16) : 0,
                &pco,
                pxlo,
                &prclDst,
                &prclSrc,
                iTransColor,
                0);
      v14 = v33;
      goto LABEL_46;
    }
    EngSetLastError(0x57u);
  }
  else
  {
    EngSetLastError(6u);
  }
  v14 = 0;
LABEL_46:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v72);
  SURFMEM::~SURFMEM((SURFMEM *)&v79);
  SURFMEM::~SURFMEM((SURFMEM *)&v83);
LABEL_47:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v97);
LABEL_48:
  if ( v78[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v78);
  if ( v74[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v74);
  return v14;
}
