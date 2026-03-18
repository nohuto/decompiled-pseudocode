/*
 * XREFs of _NtGdiExtFloodFill@20 @ 0x2200C8
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QAE@XZ @ 0xAB032 (--0DCVISRGNSHARELOCK@@QAE@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0xBDEEA (-vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536 (-bIsCMYKColor@DC@@QBEHXZ.c)
 *     ??0EBRUSHOBJ@@QAE@XZ @ 0xC054A (--0EBRUSHOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?mixBest@EBRUSHOBJ@@QBEKEE@Z @ 0x1E5756 (-mixBest@EBRUSHOBJ@@QBEKEE@Z.c)
 *     _EngPaint@20 @ 0x1EBF08 (_EngPaint@20.c)
 *     ??0DYNAMICMODECHANGELOCK@@QAE@XZ @ 0x21F4B8 (--0DYNAMICMODECHANGELOCK@@QAE@XZ.c)
 *     ??0FLOODBM@@QAE@KAAU_RECTL@@KKPAEPAVPALETTE@@@Z @ 0x21F4E3 (--0FLOODBM@@QAE@KAAU_RECTL@@KKPAEPAVPALETTE@@@Z.c)
 *     ??0STACKMEMOBJ@@QAE@KKJJJ@Z @ 0x21F542 (--0STACKMEMOBJ@@QAE@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QAE@XZ @ 0x21F5EF (--1STACKMEMOBJ@@QAE@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QAEHAAVSTACKOBJ@@0JPAE1@Z @ 0x21F71A (-bExtendScanline@FLOODBM@@QAEHAAVSTACKOBJ@@0JPAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QAEHAAVSTACKOBJ@@@Z @ 0x21F8DB (-bMergeScanline@RGNMEMOBJ@@QAEHAAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QAEKJ@Z @ 0x21FEA5 (-iColorGet@FLOODBM@@QAEKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QAEXJAAJ0@Z @ 0x21FF52 (-vFindExtent@FLOODBM@@QAEXJAAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YG_NPAVXDCOBJ@@@Z @ 0x220CE2 (-bConvertDfbDcToDib@@YG_NPAVXDCOBJ@@@Z.c)
 */

int __stdcall NtGdiExtFloodFill(HDC a1, FLONG a2, LONG a3, int a4, unsigned int a5)
{
  int v5; // ebx
  DC *v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // edi
  BRUSHOBJ *v10; // eax
  DC *v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // edi
  unsigned int NearestIndexFromColorref; // eax
  DC *v21; // ecx
  int v22; // edx
  int v23; // eax
  BRUSHOBJ *v24; // esi
  int v25; // edx
  DC *v26; // ecx
  struct REGION *v27; // eax
  _DWORD *v28; // esi
  FLONG v29; // eax
  int v30; // ecx
  unsigned int v31; // edx
  LONG y; // edi
  struct _SURFOBJ *v33; // eax
  int (__stdcall *v34)(struct _SURFOBJ *, _DWORD *, _DWORD, XLATEOBJ *const, _DWORD *, struct _RECTL *); // edx
  int v35; // edi
  LONG x; // esi
  struct ERECTL *v37; // ecx
  int v38; // eax
  SURFOBJ *v39; // eax
  LONG v40; // eax
  unsigned int v41; // esi
  unsigned __int8 *v42; // edi
  int v43; // eax
  int v44; // esi
  int v45; // edi
  BRUSHOBJ *v46; // edi
  MIX v47; // esi
  struct ECLIPOBJ *v48; // ecx
  POINTL *v49; // eax
  struct ECLIPOBJ *v50; // ecx
  int v52; // [esp+54h] [ebp-244h]
  int v53; // [esp+58h] [ebp-240h]
  int v54; // [esp+5Ch] [ebp-23Ch]
  struct PALETTE *v55; // [esp+5Ch] [ebp-23Ch]
  struct XDCOBJ *v56; // [esp+60h] [ebp-238h]
  DC *v57[3]; // [esp+70h] [ebp-228h] BYREF
  int v58; // [esp+7Ch] [ebp-21Ch] BYREF
  int v59; // [esp+80h] [ebp-218h]
  FLONG v60; // [esp+84h] [ebp-214h]
  BRUSHOBJ *v61; // [esp+88h] [ebp-210h] BYREF
  struct _POINTL v62; // [esp+8Ch] [ebp-20Ch] BYREF
  int v63; // [esp+94h] [ebp-204h] BYREF
  int v64; // [esp+98h] [ebp-200h] BYREF
  int v65; // [esp+9Ch] [ebp-1FCh]
  int v66; // [esp+A0h] [ebp-1F8h]
  BRUSHOBJ *v67; // [esp+A4h] [ebp-1F4h]
  struct _POINTL v68; // [esp+A8h] [ebp-1F0h] BYREF
  struct _RECTL *v69; // [esp+B0h] [ebp-1E8h] BYREF
  int v70; // [esp+B4h] [ebp-1E4h]
  struct REGION *v71[2]; // [esp+B8h] [ebp-1E0h] BYREF
  unsigned int v72; // [esp+C0h] [ebp-1D8h]
  int v73; // [esp+C4h] [ebp-1D4h] BYREF
  int v74; // [esp+C8h] [ebp-1D0h] BYREF
  int v75; // [esp+CCh] [ebp-1CCh]
  LONG top; // [esp+D0h] [ebp-1C8h]
  SURFACE *v77; // [esp+D4h] [ebp-1C4h] BYREF
  int v78; // [esp+D8h] [ebp-1C0h]
  int v79; // [esp+DCh] [ebp-1BCh]
  PATHOBJ *v80; // [esp+E0h] [ebp-1B8h] BYREF
  int v81; // [esp+E4h] [ebp-1B4h]
  int *v82; // [esp+E8h] [ebp-1B0h]
  int v83; // [esp+F4h] [ebp-1A4h]
  int v84; // [esp+F8h] [ebp-1A0h]
  SURFOBJ *pso; // [esp+FCh] [ebp-19Ch]
  PATHOBJ *v86; // [esp+100h] [ebp-198h] BYREF
  int v87; // [esp+104h] [ebp-194h]
  LONG *v88; // [esp+108h] [ebp-190h]
  int v89; // [esp+114h] [ebp-184h]
  _DWORD v90[6]; // [esp+118h] [ebp-180h] BYREF
  _BYTE v91[20]; // [esp+130h] [ebp-168h] BYREF
  _DWORD v92[3]; // [esp+144h] [ebp-154h] BYREF
  __int16 v93; // [esp+150h] [ebp-148h]
  _BYTE v94[12]; // [esp+160h] [ebp-138h] BYREF
  _BYTE v95[36]; // [esp+16Ch] [ebp-12Ch] BYREF
  BRUSHOBJ pbo; // [esp+190h] [ebp-108h] BYREF
  int v97; // [esp+19Ch] [ebp-FCh]
  int v98; // [esp+1A0h] [ebp-F8h]
  struct _RECTL v99; // [esp+1F0h] [ebp-A8h] BYREF
  _DWORD v100[4]; // [esp+200h] [ebp-98h] BYREF
  CLIPOBJ pco; // [esp+210h] [ebp-88h] BYREF
  int v102; // [esp+254h] [ebp-44h]
  int v103; // [esp+258h] [ebp-40h]
  int v104; // [esp+280h] [ebp-18h]
  int v105; // [esp+288h] [ebp-10h]

  v5 = 0;
  v60 = a2;
  memset(v57, 0, sizeof(v57));
  XDCOBJ::vLock((XDCOBJ *)v57, a1);
  v6 = v57[0];
  if ( !v57[0] || (v64 = *((_DWORD *)v57[0] + 6), (v64 & 0x10000) != 0) )
  {
    EngSetLastError(6u);
    goto LABEL_115;
  }
  if ( !XDCOBJ::bValidSurf(v57) )
  {
    if ( (v64 & 0xE0) != 0 )
    {
      v7 = *((_DWORD *)v6 + 9);
      GreAcquireSemaphore(*(_DWORD *)(v7 + 32));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_DWORD *)(v7 + 32), 11);
      v8 = *(_DWORD *)(v7 + 1820);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 32);
        v10 = *(BRUSHOBJ **)(v8 + 36);
      }
      else
      {
        v9 = *((_DWORD *)v57[0] + 128);
        v10 = (BRUSHOBJ *)*((_DWORD *)v57[0] + 129);
      }
      v54 = *(_DWORD *)(v7 + 32);
      v61 = v10;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v54);
      GreReleaseSemaphoreInternal(*(_DWORD *)(v7 + 32));
      v67 = v61;
      v64 = 0;
      v65 = 0;
      v66 = v9;
      XDCOBJ::vAccumulate((XDCOBJ *)v57, (struct ERECTL *)&v64);
    }
    v5 = 1;
    goto LABEL_115;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)((char *)&v63 + 3));
  v11 = v57[0];
  v12 = *((_DWORD *)v57[0] + 255);
  v13 = *(_DWORD *)(v12 + 184);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v57[0], *(_DWORD *)(v12 + 188));
    v11 = v57[0];
  }
  if ( (v13 & 0x2000) != 0 )
  {
    GreDCSelectPen(v11, *(_DWORD *)(*((_DWORD *)v11 + 255) + 192));
    v11 = v57[0];
  }
  v14 = *((_DWORD *)v11 + 126);
  if ( v14 && *(_WORD *)(v14 + 64) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v61, (struct XDCOBJ *)v57);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)((char *)&v63 + 3));
    v64 = _ghsemSprite;
    GreAcquireSemaphore(_ghsemSprite);
    bConvertDfbDcToDib(v56);
    SEMOBJ::vUnlock((SEMOBJ *)&v64);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", _ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(_ghsemDCVisRgn);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v61);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  memset(v92, 0, sizeof(v92));
  v93 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v91, (struct XDCOBJ *)v57, 0);
  v15 = *((_DWORD *)v57[0] + 126);
  v62.x = v60;
  v62.y = a3;
  v70 = v15;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v94, (struct XDCOBJ *)v57, 516);
  if ( EXFORMOBJ::bXform((EXFORMOBJ *)v94, &v62, 1u) )
  {
    v16 = *(_DWORD *)(v15 + 28);
    v17 = *(_DWORD *)(v15 + 88);
    v58 = v16;
    v18 = *((_DWORD *)v57[0] + 9);
    v19 = *((_DWORD *)v57[0] + 15);
    v75 = v17;
    v84 = v19;
    if ( *(char *)(v18 + 24) < 0 || DC::bIsCMYKColor(v57[0]) || (*((_BYTE *)v57[0] + 80) & 2) != 0 )
    {
      EngSetLastError(0x57u);
    }
    else
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v17, v19, a4, 1);
      v21 = v57[0];
      v72 = NearestIndexFromColorref;
      v60 = 0;
      if ( (*((_DWORD *)v57[0] + 20) & 5) != 0 )
        v60 = 2;
      v22 = *((_DWORD *)v57[0] + 255);
      v61 = (BRUSHOBJ *)((char *)v57[0] + 1184);
      v23 = *(_DWORD *)(v22 + 184);
      if ( (v23 & 1) != 0 || (*((_BYTE *)v57[0] + 236) & 1) != 0 )
      {
        *(_DWORD *)(v22 + 184) = v23 & 0xFFFFFFFE;
        v53 = v70;
        *((_DWORD *)v57[0] + 59) &= ~1u;
        v52 = v17;
        v24 = v61;
        EBRUSHOBJ::vInitBrush(v61, v57[0], *((_DWORD *)v57[0] + 23), v19, v52, v53, 1);
        v21 = v57[0];
      }
      else
      {
        v24 = v61;
      }
      if ( ((int)v24[6].pvRbrush & 0x100) != 0 )
      {
        v5 = 1;
        goto LABEL_112;
      }
      if ( (v91[12] & 1) == 0 )
      {
        v5 = XDCOBJ::bFullScreen(v57);
        goto LABEL_112;
      }
      v25 = *((_DWORD *)v21 + 7) & 1;
      v62.x += *((_DWORD *)v21 + 2 * v25 + 262);
      v62.y += *((_DWORD *)v21 + 2 * v25 + 263);
      if ( DC::prgnRao(v21) )
        v27 = DC::prgnRao(v26);
      else
        v27 = DC::prgnVisSnap(v26);
      v69 = (struct _RECTL *)v27;
      if ( RGNOBJ::bInside((RGNOBJ *)&v69, &v62) == 2 )
      {
        v77 = 0;
        LOBYTE(v78) = 0;
        memset(v90, 0, sizeof(v90));
        v79 = 0;
        v64 = *(_DWORD *)(v70 + 28);
        v74 = 0;
        v73 = 0;
        pso = (SURFOBJ *)(v70 + 16);
        PDEVOBJ::vSync((PDEVOBJ *)&v64, (struct _SURFOBJ *)(v70 + 16), 0, 0);
        v64 = 0;
        v99 = v69[4];
        v28 = (_DWORD *)v70;
        v68.x = 0;
        v68.y = 0;
        if ( !*(_WORD *)(v70 + 64) && RGNOBJ::iComplexity((RGNOBJ *)&v69) != 3 )
        {
          v29 = v28[12];
          v30 = v28[13];
          v31 = v28[15];
          y = v62.y;
          goto LABEL_68;
        }
        v90[0] = v28[15];
        top = v90[0];
        v90[1] = v99.right - v99.left;
        v90[2] = v99.bottom - v99.top;
        v90[4] = 0;
        v90[5] = 1;
        if ( (v28[18] & 0x40000) != 0 )
          v90[5] = &loc_40001;
        SURFMEM::bCreateDIB((SURFMEM *)&v77, (struct _DEVBITMAPINFO *)v90, 0, 0, 0, 0, 0, 0, 1, 0, 0);
        if ( !v77 )
        {
          EngSetLastError(8u);
          goto LABEL_109;
        }
        v100[2] = v90[1];
        v100[0] = 0;
        v100[1] = 0;
        v100[3] = v90[2];
        v33 = SURFACE::pSurfobj(v77);
        v35 = v34(v33, v28 + 4, 0, xloIdent, v100, &v99);
        x = -v99.left;
        v68.x = -v99.left;
        v64 = -v99.top;
        v68.y = -v99.top;
        if ( !v35 || RGNOBJ::iComplexity((RGNOBJ *)&v69) != 3 )
        {
          ERECTL::bOffsetAdd((ERECTL *)&v99, &v68, 0);
          v40 = v64;
          goto LABEL_66;
        }
        v35 = 0;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v58);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v58);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v64);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v64);
        if ( !v58
          || !v64
          || (RGNOBJ::vSet((RGNOBJ *)&v58, &v99),
              !RGNOBJ::bMerge((RGNOBJ *)&v64, (struct RGNOBJ *)&v58, (struct RGNOBJ *)&v69, 4u)) )
        {
LABEL_56:
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v64);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v64);
          if ( v65 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v64);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v58);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
          if ( v59 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
          v40 = v68.y;
          x = v68.x;
LABEL_66:
          if ( v35 )
          {
            v62.x += x;
            v31 = top;
            y = v40 + v62.y;
            v68.x = -x;
            v28 = (_DWORD *)v70;
            v68.y = -v40;
            v62.y += v40;
            v64 = 1;
            v30 = *((_DWORD *)v77 + 13);
            v29 = *((_DWORD *)v77 + 12);
LABEL_68:
            v55 = (struct PALETTE *)v28[22];
            v41 = v72;
            v60 = v29;
            v58 = v30;
            v42 = (unsigned __int8 *)(v29 + v30 * y);
            FLOODBM::FLOODBM((FLOODBM *)v95, v31, &v99, v72, a5, v42, v55);
            v43 = FLOODBM::iColorGet((FLOODBM *)v95, v62.x);
            if ( !a5 && v43 == v41 || a5 == 1 && v43 != v41 )
              goto LABEL_109;
            FLOODBM::vFindExtent((FLOODBM *)v95, v62.x, &v74, &v73);
            STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)&v86, 0x158u, 1u, v62.y, v74, v73);
            if ( !v89 )
            {
              EngSetLastError(8u);
LABEL_108:
              STACKMEMOBJ::~STACKMEMOBJ(&v86);
              goto LABEL_109;
            }
            STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)&v80, 0xD8u, 0, v62.y, v74, v73);
            if ( !v83 )
            {
              EngSetLastError(8u);
LABEL_107:
              STACKMEMOBJ::~STACKMEMOBJ(&v80);
              goto LABEL_108;
            }
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v71, 0x12E0u);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v71);
            if ( !v71[0] )
            {
              EngSetLastError(8u);
              goto LABEL_105;
            }
            v44 = 1;
            top = v99.top;
            v75 = v99.bottom - 1;
            if ( v62.y >= v99.bottom - 1 )
            {
              v81 -= v82[2];
              v82 = (int *)v82[3];
            }
            else
            {
              v44 = FLOODBM::bExtendScanline(
                      (FLOODBM *)v95,
                      (struct STACKOBJ *)&v80,
                      (struct STACKOBJ *)&v86,
                      (struct STACKOBJ *)(v62.y + 1),
                      v42,
                      &v42[v58]) & 1;
            }
            if ( v44 )
            {
              v45 = v58;
              do
              {
                while ( 1 )
                {
                  while ( v81 )
                  {
                    if ( !RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v71, (struct STACKOBJ *)&v80) )
                      goto LABEL_102;
                    if ( *v82 >= v75 )
                    {
                      v81 -= v82[2];
                      v82 = (int *)v82[3];
                    }
                    else if ( !FLOODBM::bExtendScanline(
                                 (FLOODBM *)v95,
                                 (struct STACKOBJ *)&v80,
                                 (struct STACKOBJ *)&v86,
                                 (struct STACKOBJ *)(*v82 + 1),
                                 (unsigned __int8 *)(v60 + v45 * *v82),
                                 (unsigned __int8 *)(v60 + v45 * *v82 + v45)) )
                    {
LABEL_102:
                      v44 = 0;
                      goto LABEL_103;
                    }
                  }
                  if ( !v87 )
                    goto LABEL_88;
                  v44 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v71, (struct STACKOBJ *)&v86);
                  if ( *v88 > top )
                    break;
                  v87 -= v88[2];
                  v88 = (LONG *)v88[3];
                }
              }
              while ( FLOODBM::bExtendScanline(
                        (FLOODBM *)v95,
                        (struct STACKOBJ *)&v86,
                        (struct STACKOBJ *)&v80,
                        (struct STACKOBJ *)(*v88 - 1),
                        (unsigned __int8 *)(v60 + v45 * *v88),
                        (unsigned __int8 *)(v60 + v45 * *v88 - v45)) );
              v44 = 0;
LABEL_88:
              if ( !v44 )
                goto LABEL_103;
              if ( RGNOBJ::iComplexity((RGNOBJ *)v71) != 1 )
              {
                if ( v64 && (!RGNOBJ::bOffset((RGNOBJ *)v71, &v68) || !ERECTL::bOffsetAdd((ERECTL *)&v99, &v68, 1)) )
                {
LABEL_105:
                  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v71);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v71);
                  if ( v71[1] == (struct REGION *)1 )
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v71);
                  goto LABEL_107;
                }
                v46 = v61;
                v47 = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)v61,
                        *(_BYTE *)(*((_DWORD *)v57[0] + 255) + 232),
                        *(_BYTE *)(*((_DWORD *)v57[0] + 255) + 233));
                v102 = 0;
                v103 = 0;
                v104 = 1;
                ++*(_DWORD *)(v70 + 56);
                v105 = 0;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v71[0], (struct ERECTL *)&v99, 0);
                v49 = (POINTL *)v57[0];
                if ( (*((_BYTE *)v57[0] + 24) & 0xE0) != 0 )
                {
                  XDCOBJ::vAccumulate((XDCOBJ *)v57, v48, (struct ERECTL *)&v99);
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v57, v50, &v99.left);
                  v49 = (POINTL *)v57[0];
                }
                v44 = EngPaint(pso, &pco, v46, v49 + 147, v47);
              }
              if ( v44 )
                goto LABEL_104;
            }
LABEL_103:
            EngSetLastError(8u);
LABEL_104:
            v5 = v44;
            goto LABEL_105;
          }
LABEL_109:
          SURFMEM::~SURFMEM((SURFMEM *)&v77);
          goto LABEL_112;
        }
        if ( !RGNOBJ::bOffset((RGNOBJ *)&v64, &v68) || !ERECTL::bOffsetAdd((ERECTL *)&v99, &v68, 1) )
        {
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v64);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v64);
          if ( v65 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v64);
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v58);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
          if ( v59 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v58);
          goto LABEL_109;
        }
        v102 = 0;
        v103 = 0;
        v104 = 1;
        v105 = 0;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, (struct REGION *)v64, v37, 0);
        EBRUSHOBJ::EBRUSHOBJ((EBRUSHOBJ *)&pbo);
        pbo.flColorType = v60;
        if ( a5 )
        {
          pbo.iSolidColor = (v72 & 1) == 0;
          if ( gbMultiMonMismatchColor )
          {
            v38 = ulIndexToRGB(v75, v84, (v72 & 1) == 0);
            goto LABEL_54;
          }
        }
        else
        {
          pbo.iSolidColor = v72;
          if ( gbMultiMonMismatchColor )
          {
            v38 = a4;
LABEL_54:
            v98 = v38;
            v97 = v38;
          }
        }
        v39 = SURFACE::pSurfobj(v77);
        v35 = EngPaint(v39, &pco, &pbo, 0, 0xD0Du);
        EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        goto LABEL_56;
      }
    }
  }
LABEL_112:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v91);
  if ( v92[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v92);
LABEL_115:
  if ( v57[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v57);
  return v5;
}
