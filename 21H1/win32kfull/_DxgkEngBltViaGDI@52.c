/*
 * XREFs of _DxgkEngBltViaGDI@52 @ 0x1D3921
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _UserGetRedirectedWindowOrigin@8 @ 0x38754 (_UserGetRedirectedWindowOrigin@8.c)
 *     ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36 (-bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x7C296 (--1DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z @ 0xF6256 (-DxEngSelectPaletteToSurface@@YGPAUHPALETTE__@@PAU_SURFOBJ@@PAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z @ 0xF62A8 (-DxEngSetPaletteState@@YGHPAUHPALETTE__@@KK@Z.c)
 *     ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ @ 0xF636A (-Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QAEXPAUHSURF__@@@Z @ 0x1D3836 (-vAltCheckLockIgnoreStockBit@SURFREF@@QAEXPAUHSURF__@@@Z.c)
 */

LONG __stdcall DxgkEngBltViaGDI(
        int *a1,
        HDC a2,
        int *a3,
        int *a4,
        PVOID pvBits,
        LONG a6,
        SIZEL sizl,
        char a8,
        char a9,
        int a10,
        void (__stdcall *a11)(int *, int *, struct BLTINFO **, LONG *, unsigned int, int),
        LONG a12)
{
  HPALETTE Palette; // edi
  HBITMAP Bitmap; // esi
  HPALETTE v14; // ecx
  HDC v15; // esi
  DYNAMICMODECHANGESHARELOCK *v16; // ecx
  SURFOBJ *v17; // eax
  SURFOBJ *v18; // esi
  HDC DisplayDC; // eax
  DC *v20; // ecx
  int *v21; // esi
  HDC v22; // esi
  int v23; // ecx
  int v24; // eax
  int *v25; // esi
  int v26; // edx
  int v27; // edi
  int v28; // esi
  int v29; // ebx
  int v30; // eax
  int v31; // ecx
  int v32; // esi
  int *v33; // edx
  int v34; // esi
  int v35; // edi
  int v36; // ecx
  int v37; // edx
  struct XDCOBJ *y; // eax
  struct XDCOBJ *v39; // ebx
  int v40; // edx
  XLATEOBJ *v41; // ecx
  struct BLTINFO *v42; // eax
  int v43; // edi
  LONG v44; // ecx
  LONG v45; // ecx
  unsigned int v46; // esi
  int *v47; // ebx
  int *v48; // ecx
  void (__stdcall *v49)(int *, int *, struct BLTINFO **, LONG *, unsigned int, int); // edi
  struct BLTINFO *v50; // eax
  unsigned int v52; // [esp+36h] [ebp-C0h]
  unsigned int v53; // [esp+3Ah] [ebp-BCh]
  char v54; // [esp+49h] [ebp-ADh] BYREF
  LONG x; // [esp+4Ah] [ebp-ACh]
  HDC v56; // [esp+4Eh] [ebp-A8h] BYREF
  int *v57; // [esp+52h] [ebp-A4h]
  unsigned int v58; // [esp+56h] [ebp-A0h]
  LONG v59; // [esp+5Ah] [ebp-9Ch]
  int v60; // [esp+5Eh] [ebp-98h]
  HDC v61; // [esp+62h] [ebp-94h]
  struct _POINTL v62; // [esp+66h] [ebp-90h] BYREF
  int v63; // [esp+6Eh] [ebp-88h]
  int v64; // [esp+72h] [ebp-84h]
  DC *v65[3]; // [esp+76h] [ebp-80h] BYREF
  int *v66; // [esp+82h] [ebp-74h]
  LONG lWidth; // [esp+86h] [ebp-70h]
  struct _POINTL v68; // [esp+8Ah] [ebp-6Ch] BYREF
  HPALETTE v69; // [esp+92h] [ebp-64h]
  int v70; // [esp+96h] [ebp-60h] BYREF
  int v71; // [esp+9Ah] [ebp-5Ch]
  int v72; // [esp+9Eh] [ebp-58h]
  int v73; // [esp+A2h] [ebp-54h]
  void (__stdcall *v74)(int *, int *, struct BLTINFO **, LONG *, unsigned int, int); // [esp+A6h] [ebp-50h]
  unsigned int v75; // [esp+AAh] [ebp-4Ch]
  unsigned int v76; // [esp+AEh] [ebp-48h]
  int v77; // [esp+B2h] [ebp-44h] BYREF
  int v78; // [esp+B6h] [ebp-40h]
  int v79; // [esp+BAh] [ebp-3Ch]
  int v80; // [esp+BEh] [ebp-38h]
  int v81; // [esp+C2h] [ebp-34h] BYREF
  int v82; // [esp+C6h] [ebp-30h]
  SIZEL v83; // [esp+CAh] [ebp-2Ch]
  struct BLTINFO *v84; // [esp+D2h] [ebp-24h] BYREF
  struct XDCOBJ *v85; // [esp+D6h] [ebp-20h]
  int v86; // [esp+DAh] [ebp-1Ch]
  int v87; // [esp+DEh] [ebp-18h]
  LONG v88; // [esp+E2h] [ebp-14h] BYREF
  struct XDCOBJ *v89; // [esp+E6h] [ebp-10h]
  int v90; // [esp+EAh] [ebp-Ch]
  int v91; // [esp+EEh] [ebp-8h]

  lWidth = a6;
  v74 = a11;
  v57 = a1;
  v59 = a12;
  v61 = a2;
  v60 = (int)a3;
  x = 0;
  if ( !a2 )
    return x;
  memset(v65, 0, sizeof(v65));
  XDCOBJ::vLock((XDCOBJ *)v65, a2);
  if ( !v65[0] )
    return x;
  if ( a8 )
    Palette = EngCreatePalette(2u, 0, 0, 0xF800u, 0x7E0u, 0x1Fu);
  else
    Palette = EngCreatePalette(2u, 0, 0, 0xFF0000u, 0xFF00u, 0xFFu);
  v69 = Palette;
  if ( Palette )
  {
    Bitmap = EngCreateBitmap(sizl, lWidth, 2 * (a8 == 0) + 4, 1u, pvBits);
    lWidth = (LONG)Bitmap;
    DxEngSetPaletteState(Palette, v14, v52, v53);
    if ( !Bitmap )
    {
LABEL_76:
      EngDeletePalette(Palette);
      goto LABEL_77;
    }
    if ( Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled() )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v54);
      v56 = 0;
      SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&v56, (HSURF)Bitmap);
      if ( SURFREF::bValid((SURFREF *)&v56) )
      {
        v15 = v56;
        v54 = 1;
        DxEngSelectPaletteToSurface((int)(v56 + 4), Palette);
        *((_DWORD *)v15 + 18) |= 0x104200u;
      }
      else
      {
        v54 = 0;
      }
      SURFREF::vUnlock((SURFREF *)&v56);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v16);
    }
    else
    {
      v17 = EngLockSurface((HSURF)Bitmap);
      v18 = v17;
      if ( !v17 )
      {
LABEL_75:
        EngDeleteSurface((HSURF)lWidth);
        goto LABEL_76;
      }
      v54 = 1;
      DxEngSelectPaletteToSurface((int)v17, Palette);
      v18[1].hsurf = (HSURF)((int)v18[1].hsurf | 0x104200);
      EngUnlockSurface(v18);
    }
    if ( !v54 )
      goto LABEL_75;
    DisplayDC = (HDC)GreCreateDisplayDC(*((_DWORD *)v65[0] + 9), 1, 0);
    v56 = DisplayDC;
    if ( !DisplayDC )
      goto LABEL_75;
    if ( !hbmSelectBitmap(DisplayDC, lWidth, 0, 1) )
    {
LABEL_74:
      bDeleteDCInternal(v56, 1, 0, 1);
      goto LABEL_75;
    }
    v20 = v65[0];
    v70 = 0;
    v66 = 0;
    v58 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
    v76 = *(_DWORD *)(*((_DWORD *)v65[0] + 255) + 148);
    v75 = v76 & 7;
    if ( (v76 & 7) != 0 )
    {
      DC::dwSetLayout(v65[0], -1, 0);
      v20 = v65[0];
    }
    GreLockVisRgnShared(*((_DWORD *)v20 + 9));
    if ( a3 )
    {
      if ( v57[1] )
      {
        if ( (*((_DWORD *)v65[0] + 6) & 0x4000) != 0 )
          v58 = 1;
        v68.x = 0;
        v77 = *((_DWORD *)v65[0] + 266);
        v68.y = 0;
        v78 = *((_DWORD *)v65[0] + 267);
        v79 = *((_DWORD *)v65[0] + 268);
        v80 = *((_DWORD *)v65[0] + 269);
        v22 = v61;
        if ( (*((_DWORD *)v65[0] + 6) & 0x4000) != 0 )
        {
          v62.x = 0;
          v62.y = 0;
          if ( UserGetRedirectedWindowOrigin((int)v61, &v62) )
            ERECTL::bOffsetAdd((ERECTL *)&v77, &v62, 0);
        }
        if ( v58 && UserGetRedirectedWindowOrigin((int)v22, &v68) )
          ERECTL::bOffsetAdd((ERECTL *)&v77, &v68, 0);
        IntersectRect(&v70, &v77, a3);
        v23 = v77;
        v24 = v78;
        if ( v77 != v70 || v79 != v72 || v78 != v71 || v80 != v73 )
        {
          v70 -= v77;
          v66 = a3;
          v72 -= v77;
          v71 -= v78;
          v73 -= v78;
        }
        goto LABEL_39;
      }
      v21 = a3;
    }
    else
    {
      v21 = (int *)((char *)v65[0] + 1064);
    }
    v77 = *v21;
    v25 = v21 + 1;
    v78 = *v25++;
    v79 = *v25;
    v80 = v25[1];
    v23 = v77;
    v24 = v78;
LABEL_39:
    v80 -= v24;
    v79 -= v23;
    v77 = 0;
    v78 = 0;
    v26 = v57[18];
    v82 = 0;
    v81 = 0;
    v83 = sizl;
    if ( ((int (__stdcall *)(int *, int *, int *, int *))v59)(
           &v81,
           &v77,
           (v26 & 0x80) != 0 ? v57 + 10 : 0,
           (v26 & 0x40) != 0 ? v57 + 6 : 0)
      && (v27 = v79) != 0
      && (v28 = v80) != 0 )
    {
      if ( !a3 || v57[1] )
      {
        v29 = v77;
        v31 = v78;
      }
      else
      {
        v27 = *a3 + v79;
        v29 = *a3 + v77;
        v77 = v29;
        v79 = v27;
        v30 = *(_DWORD *)(v60 + 4);
        v31 = v30 + v78;
        v28 = v30 + v80;
        v78 += v30;
        v80 += v30;
      }
      v32 = v28 - v31;
      v68.x = v83.cy - v82;
      if ( v32 == v83.cy - v82 && v27 - v29 == v83.cx - v81 )
      {
        v58 = 0;
        if ( v57[14] )
        {
          v33 = a4;
          v60 = (int)a4;
          while ( 1 )
          {
            v62.x = 0;
            v62.y = 0;
            v63 = 0;
            v64 = 0;
            IntersectRect(&v62, v33, &v81);
            v34 = v78;
            v35 = v62.x + v29 - v81;
            x = v62.x;
            v68.x = v62.y;
            v59 = v62.y + v78 - v82;
            v62.y = v59;
            v36 = v29 - v81 + v63;
            v62.x = v35;
            v63 = v36;
            v37 = v78 - v82 + v64;
            v64 = v37;
            if ( v66 )
            {
              IntersectRect(&v62, &v62.x, &v70);
              v35 = v62.x;
              v37 = v64;
              v36 = v63;
              x = v81 + v62.x - v29;
              y = (struct XDCOBJ *)v62.y;
              v39 = (struct XDCOBJ *)(v82 + v62.y - v34);
            }
            else
            {
              y = (struct XDCOBJ *)v59;
              v39 = (struct XDCOBJ *)v68.x;
            }
            v40 = v37 - (_DWORD)y;
            v41 = (XLATEOBJ *)(v36 - v35);
            v42 = a9
                ? (struct BLTINFO *)NtGdiTransparentBlt(
                                      v61,
                                      v35,
                                      y,
                                      v41,
                                      v40,
                                      v56,
                                      (struct BLTINFO *)x,
                                      v39,
                                      (int)v41,
                                      v40,
                                      a10)
                : NtGdiBitBltInternal(v61, v35, y, (int)v41, v40, v56, (struct ECLIPOBJ *)x, v39, -2134114272, 0, 0);
            x = (LONG)v42;
            v33 = (int *)(v60 + 16);
            ++v58;
            v60 += 16;
            if ( v58 >= v57[14] )
              break;
            v29 = v77;
          }
        }
      }
      else
      {
        v43 = v27 - v29;
        v44 = v68.x;
        v58 = 0;
        v59 = *((_DWORD *)v65[0] + 255);
        v60 = 0;
        v54 = *(_BYTE *)(v59 + 235);
        v62.x = (v43 << 16) / (v83.cx - v81);
        v68.x = (v32 << 16) / v68.x;
        if ( v66 )
        {
          v58 = ((v83.cx - v81) << 16) / v43;
          v60 = (v44 << 16) / v32;
        }
        v45 = v59;
        v46 = 0;
        v47 = v57;
        v59 = 0;
        *(_BYTE *)(v45 + 235) = 3;
        if ( v47[14] )
        {
          v48 = a4;
          v57 = a4;
          do
          {
            v88 = 0;
            v89 = 0;
            v90 = 0;
            v91 = 0;
            v84 = 0;
            v85 = 0;
            v86 = 0;
            v87 = 0;
            IntersectRect(&v84, v48, &v81);
            v49 = v74;
            v74(&v77, &v81, (struct BLTINFO **)&v88, (LONG *)&v84, v62.x, v68.x);
            if ( v66 && IntersectRect(&v88, &v88, &v70) )
              v49(&v81, &v77, &v84, &v88, v58, v60);
            if ( a9 )
            {
              v50 = (struct BLTINFO *)NtGdiTransparentBlt(
                                        v61,
                                        v88,
                                        v89,
                                        (XLATEOBJ *)(v90 - v88),
                                        v91 - (_DWORD)v89,
                                        v56,
                                        v84,
                                        v85,
                                        v86 - (_DWORD)v84,
                                        v87 - (_DWORD)v85,
                                        a10);
            }
            else
            {
              v50 = (struct BLTINFO *)GreStretchBltInternal(
                                        v61,
                                        v88,
                                        v89,
                                        v90 - v88,
                                        v91 - (_DWORD)v89,
                                        v56,
                                        (LONG)v84,
                                        v85,
                                        v86 - (_DWORD)v84,
                                        v87 - (_DWORD)v85,
                                        -2134114272,
                                        0,
                                        0);
              v46 = v59;
            }
            ++v46;
            v48 = v57 + 4;
            x = (LONG)v50;
            v59 = v46;
            v57 += 4;
          }
          while ( v46 < v47[14] );
        }
        *(_BYTE *)(*((_DWORD *)v65[0] + 255) + 235) = v54;
      }
    }
    else
    {
      x = 1;
    }
    GreUnlockVisRgn(*((_DWORD *)v65[0] + 9));
    if ( v75 )
      DC::dwSetLayout(v65[0], -1, v76);
    Palette = v69;
    goto LABEL_74;
  }
LABEL_77:
  if ( v65[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v65);
  return x;
}
