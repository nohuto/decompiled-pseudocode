/*
 * XREFs of _GreGradientFill@24 @ 0xBCEF0
 * Callers:
 *     _NtGdiGradientFill@24 @ 0xBC35E (_NtGdiGradientFill@24.c)
 *     ?FillGradient@@YGXPAUHDC__@@PBUtagRECT@@KK@Z @ 0xBCE50 (-FillGradient@@YGXPAUHDC__@@PBUtagRECT@@KK@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QAE@XZ @ 0x79500 (--0DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?bCalcMeshExtent@@YGHPAU_TRIVERTEX@@KPAXKKPAU_RECTL@@@Z @ 0xBD544 (-bCalcMeshExtent@@YGHPAU_TRIVERTEX@@KPAXKKPAU_RECTL@@@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0xBDEEA (-vAccumulate@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall GreGradientFill(
        HDC a1,
        struct _POINTL *a2,
        unsigned int a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  int v6; // ebx
  struct _POINTL *v7; // esi
  DEVLOCKBLTOBJ *v8; // ecx
  size_t v9; // edi
  struct _POINTL *v10; // edi
  unsigned int v11; // edx
  unsigned int v12; // eax
  LONG x; // ecx
  struct _POINTL *v14; // ecx
  int v15; // edx
  struct _POINTL *v16; // edi
  LONG *v17; // esi
  unsigned int v18; // eax
  char *v19; // ecx
  unsigned int v20; // edx
  bool v21; // cf
  TRIVERTEX *v22; // esi
  unsigned int v23; // edx
  int v24; // edi
  bool v25; // zf
  COLOR16 Alpha; // ax
  _DWORD *v27; // esi
  unsigned int v28; // eax
  _DWORD *v29; // edi
  LONG v30; // esi
  unsigned int v31; // eax
  struct _POINTL *v32; // edi
  unsigned int v33; // esi
  LONG v34; // ecx
  int v35; // edi
  DC *v36; // ecx
  struct REGION *v37; // eax
  struct ECLIPOBJ *v38; // ecx
  DC *v39; // edx
  struct ECLIPOBJ *v40; // ecx
  _DWORD *v41; // edx
  unsigned int v42; // esi
  _DWORD *v43; // edx
  _DWORD *v44; // edi
  int v45; // eax
  int v46; // ebx
  LONG v47; // esi
  int v48; // edi
  int inited; // eax
  unsigned int *v50; // eax
  int v51; // eax
  BOOL (__stdcall *v52)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // ecx
  ULONG *v54; // [esp+0h] [ebp-168h]
  ULONG *v55; // [esp+0h] [ebp-168h]
  unsigned int v56; // [esp+0h] [ebp-168h]
  ULONG *v57; // [esp+0h] [ebp-168h]
  unsigned int v58; // [esp+0h] [ebp-168h]
  struct _RECTL *v59; // [esp+4h] [ebp-164h]
  unsigned int *v60; // [esp+4h] [ebp-164h]
  unsigned int v61; // [esp+Ch] [ebp-15Ch]
  int v62; // [esp+Ch] [ebp-15Ch]
  LONG v63; // [esp+10h] [ebp-158h] BYREF
  struct _POINTL v64; // [esp+14h] [ebp-154h] BYREF
  TRIVERTEX *v65; // [esp+1Ch] [ebp-14Ch]
  unsigned int v66; // [esp+20h] [ebp-148h]
  DC *v67[3]; // [esp+24h] [ebp-144h] BYREF
  _DWORD *v68; // [esp+30h] [ebp-138h]
  void *v69; // [esp+34h] [ebp-134h]
  struct _TRIVERTEX *v70; // [esp+38h] [ebp-130h]
  struct _POINTL *v71; // [esp+3Ch] [ebp-12Ch]
  unsigned int v72; // [esp+40h] [ebp-128h] BYREF
  int v73; // [esp+44h] [ebp-124h]
  unsigned int v74; // [esp+48h] [ebp-120h]
  unsigned int v75; // [esp+4Ch] [ebp-11Ch]
  unsigned int v76; // [esp+50h] [ebp-118h]
  _DWORD v77[3]; // [esp+54h] [ebp-114h] BYREF
  _BYTE v78[112]; // [esp+60h] [ebp-108h] BYREF
  unsigned int v79; // [esp+D0h] [ebp-98h] BYREF
  int v80; // [esp+D4h] [ebp-94h]
  unsigned int v81; // [esp+D8h] [ebp-90h]
  unsigned int v82; // [esp+DCh] [ebp-8Ch]
  char v83; // [esp+E0h] [ebp-88h] BYREF
  char v84[64]; // [esp+E4h] [ebp-84h] BYREF
  int v85; // [esp+124h] [ebp-44h]
  int v86; // [esp+128h] [ebp-40h]
  int v87; // [esp+150h] [ebp-18h]
  int v88; // [esp+158h] [ebp-10h]

  v6 = 0;
  v7 = a2;
  v70 = a4;
  v65 = (TRIVERTEX *)a2;
  v71 = 0;
  v69 = (void *)a6;
  memset(v67, 0, sizeof(v67));
  XDCOBJ::vLock((XDCOBJ *)v67, a1);
  if ( !v67[0] || (*((_DWORD *)v67[0] + 6) & 0x10000) != 0 )
  {
    v35 = 0;
    goto LABEL_64;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v78);
  if ( DEVLOCKBLTOBJ::bLock(v8, (struct XDCOBJ *)v67, (int)v8) )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v77, (struct XDCOBJ *)v67, 516);
    if ( (*(_BYTE *)(v77[0] + 56) & 1) == 0 && a6 <= 1u )
    {
      v72 = 0;
      if ( ULongLongToULong(2LL * a5, v54) < 0
        || ULongLongToULong(0LL, v55) < 0
        || (v76 = 2 * a5, (ULongAdd(a3, 2 * a5, (int *)&v72, v56, (unsigned int *)v59) & 0x80000000) != 0)
        || ULongLongToULong(16LL * v72, v57) < 0
        || (v9 = v72, (ULongAdd(v72, 0, &v64.x, v58, v60) & 0x80000000) != 0) )
      {
        EngSetLastError(0x216u);
      }
      else
      {
        if ( v9 <= 0x2710000 )
        {
          v10 = (struct _POINTL *)PALLOCMEM2(v9, 1886221383, 0);
          v71 = v10;
          if ( v10 )
          {
            v11 = 0;
            v12 = a3;
            x = (LONG)v10 + v72;
            v64.x = (LONG)v10 + v72;
            v61 = 0;
            if ( a3 )
            {
              v61 = a3;
              v14 = v10;
              v15 = (char *)v7 - (char *)v10;
              do
              {
                v16 = v14;
                v17 = (LONG *)((char *)&v14->x + v15);
                v14 += 2;
                v16->x = *v17++;
                v16 = (struct _POINTL *)((char *)v16 + 4);
                v16->x = *v17++;
                v16 = (struct _POINTL *)((char *)v16 + 4);
                v16->x = *v17;
                v16->y = v17[1];
                --v12;
              }
              while ( v12 );
              v11 = a3;
              v10 = v71;
              x = v64.x;
            }
            v66 = 0;
            if ( a5 )
            {
              v72 = x + 8;
              v18 = 0;
              v19 = (char *)&v10[2 * v11 + 2];
              while ( 1 )
              {
                v20 = *(&v70->y + 2 * v18);
                v21 = *(&v70->x + 2 * v18) < a3;
                v68 = (_DWORD *)*(&v70->x + 2 * v18);
                v22 = v65;
                v63 = v20;
                if ( !v21 )
                  break;
                v21 = v20 < a3;
                v23 = v61;
                if ( !v21 )
                  break;
                v24 = v63;
                *((_DWORD *)v19 - 4) = v65[v63].x;
                v25 = v69 == (void *)1;
                v62 = (int)v68;
                *((_DWORD *)v19 - 3) = v22[(_DWORD)v68].y;
                *(_DWORD *)v19 = v22[v62].x;
                *((_DWORD *)v19 + 1) = v22[v24].y;
                if ( v25 )
                {
                  *((_WORD *)v19 - 4) = v22[v62].Red;
                  *((_WORD *)v19 - 3) = v22[v62].Green;
                  *((_WORD *)v19 - 2) = v22[v62].Blue;
                  *((_WORD *)v19 - 1) = v22[v62].Alpha;
                  *((_WORD *)v19 + 4) = v22[v24].Red;
                  *((_WORD *)v19 + 5) = v22[v24].Green;
                  *((_WORD *)v19 + 6) = v22[v24].Blue;
                  Alpha = v22[v24].Alpha;
                }
                else
                {
                  *((_WORD *)v19 - 4) = v22[v24].Red;
                  *((_WORD *)v19 - 3) = v22[v24].Green;
                  *((_WORD *)v19 - 2) = v22[v24].Blue;
                  *((_WORD *)v19 - 1) = v22[v24].Alpha;
                  *((_WORD *)v19 + 4) = v22[v62].Red;
                  *((_WORD *)v19 + 5) = v22[v62].Green;
                  *((_WORD *)v19 + 6) = v22[v62].Blue;
                  Alpha = v22[v62].Alpha;
                }
                v27 = v68;
                *((_WORD *)v19 + 7) = Alpha;
                v19 += 32;
                v28 = v72;
                v29 = (_DWORD *)v72;
                v72 += 24;
                *(_DWORD *)(v28 - 8) = v27;
                v30 = v63;
                *(_DWORD *)(v28 - 4) = v23;
                *v29 = v23 + 1;
                v29[3] = v23 + 1;
                v31 = v66;
                v29[2] = v23;
                v11 = v23 + 2;
                v18 = v31 + 1;
                v29[1] = v30;
                v10 = v71;
                v61 = v11;
                v66 = v18;
                if ( v18 >= a5 )
                  goto LABEL_25;
              }
              EngSetLastError(0x57u);
              Win32FreePool(v10);
              goto LABEL_29;
            }
LABEL_25:
            v7 = v10;
            v70 = (struct _TRIVERTEX *)v64.x;
            v65 = (TRIVERTEX *)v10;
            v69 = (void *)2;
            goto LABEL_31;
          }
        }
        EngSetLastError(8u);
      }
LABEL_29:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v78);
      goto LABEL_67;
    }
    v11 = a3;
    v76 = a5;
    v61 = a3;
LABEL_31:
    v79 = 0x7FFFFFFF;
    v80 = 0x7FFFFFFF;
    v81 = 0x80000000;
    v82 = 0x80000000;
    if ( v11 )
    {
      v32 = v7;
      v33 = v11;
      do
      {
        v64 = *v32;
        EXFORMOBJ::bXform((EXFORMOBJ *)v77, &v64, 1u);
        v34 = v64.x;
        if ( (*(_BYTE *)(*((_DWORD *)v67[0] + 255) + 148) & 1) != 0 )
          v34 = ++v64.x;
        v32->x = v34 + *((_DWORD *)v67[0] + 2 * (*((_DWORD *)v67[0] + 7) & 1) + 262);
        v32->y = v64.y + *((_DWORD *)v67[0] + 2 * (*((_DWORD *)v67[0] + 7) & 1) + 263);
        v32 += 2;
        --v33;
      }
      while ( v33 );
    }
    v35 = bCalcMeshExtent(v70, v76, v69, (unsigned int)&v79, (unsigned int)v54, v59);
    v64.x = v35;
    if ( v35 )
    {
      if ( DC::prgnRao(v67[0]) )
        v37 = DC::prgnRao(v36);
      else
        v37 = DC::prgnVisSnap(v36);
      v85 = 0;
      v86 = 0;
      v87 = 1;
      v88 = 0;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v83, v37, (struct ERECTL *)&v79, 0);
      if ( ERECTL::bEmpty((ERECTL *)v84) )
        goto LABEL_60;
      v39 = v67[0];
      if ( (*((_BYTE *)v67[0] + 24) & 0xE0) != 0 )
      {
        v72 = v79;
        v73 = v80;
        v74 = v81;
        v75 = v82;
        XDCOBJ::vAccumulate((XDCOBJ *)v67, v38, (struct ERECTL *)&v72);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v67, v40, (LONG *)&v72);
        v39 = v67[0];
        v35 = v64.x;
      }
      v41 = (_DWORD *)*((_DWORD *)v39 + 126);
      v68 = v41;
      if ( !v41 )
      {
LABEL_60:
        v35 = 1;
      }
      else
      {
        v42 = v41[7];
        ++v41[14];
        v66 = v42;
        v63 = 0;
        if ( *(char *)(v42 + 24) < 0 || v41[15] <= 3u )
        {
          v43 = (_DWORD *)v41[22];
          v44 = (_DWORD *)*((_DWORD *)v67[0] + 255);
          v45 = *((_DWORD *)v67[0] + 15);
          v46 = v44[49];
          v47 = v44[51];
          v48 = v44[66];
          v64.x = v47;
          inited = EXLATEOBJ::bInitXlateObj(
                     &v63,
                     v48,
                     *((_DWORD *)v67[0] + 20),
                     gppalRGB,
                     v43,
                     v45,
                     v45,
                     v47,
                     v46,
                     0,
                     0);
          v42 = v66;
          v35 = inited;
          v41 = v68;
          v64.x = v63;
        }
        else
        {
          v64.x = 0;
        }
        if ( (*((_BYTE *)v67[0] + 28) & 1) != 0 )
          v50 = (unsigned int *)((char *)v67[0] + 1056);
        else
          v50 = (unsigned int *)((char *)v67[0] + 1048);
        v72 = *v50;
        v51 = -v50[1];
        v72 = -v72;
        v25 = v41[15] == 3;
        v73 = v51;
        if ( v25 || ((unsigned int)&loc_20000 & v41[18]) == 0 )
          v52 = EngGradientFill;
        else
          v52 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v42 + 2172);
        v35 = v35
           && v52(
                (SURFOBJ *)(v41 + 4),
                (CLIPOBJ *)&v83,
                (XLATEOBJ *)v64.x,
                v65,
                v61,
                v70,
                v76,
                (RECTL *)&v79,
                (POINTL *)&v72,
                (ULONG)v69);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v63);
      }
    }
    goto LABEL_62;
  }
  v35 = XDCOBJ::bFullScreen(v67);
LABEL_62:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v78);
LABEL_64:
  if ( v71 )
    Win32FreePool(v71);
  v6 = v35;
LABEL_67:
  DCOBJ::~DCOBJ((DCOBJ *)v67);
  return v6;
}
