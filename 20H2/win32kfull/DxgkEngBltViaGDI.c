/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C02764D0
 * Callers:
 *     <none>
 * Callees:
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0091A10 (UserGetRedirectedWindowOrigin.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00A5340 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C00FA9B4 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C00FAA38 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0276108 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        HDC a2,
        int *a3,
        __int64 a4,
        PVOID pvBits,
        LONG lWidth,
        unsigned int a7,
        unsigned int a8,
        char a9,
        char a10,
        unsigned int a11,
        void (__fastcall *a12)(__int128 *, __int64 *, int *, int *, int, LONG),
        __int64 a13)
{
  unsigned int v13; // r15d
  HPALETTE Palette; // rax
  char v18; // si
  HBITMAP Bitmap; // rax
  HPALETTE v20; // r14
  HSURF v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rbx
  DYNAMICMODECHANGESHARELOCK *v25; // rcx
  __int64 DisplayDC; // rax
  HDC v27; // rsi
  DC *v28; // rcx
  int v29; // ebx
  __int128 v30; // xmm0
  __int128 v31; // xmm0
  int v32; // eax
  int v33; // edx
  int v34; // r9d
  int v35; // r8d
  int v36; // ebx
  int v37; // eax
  int v38; // edi
  int v39; // r8d
  int v40; // r15d
  int v41; // r10d
  int v42; // r14d
  unsigned int v43; // esi
  int v44; // r10d
  int v45; // r9d
  int v46; // r11d
  int v47; // ecx
  int v48; // edx
  int v49; // r8d
  int v50; // ecx
  int v51; // r9d
  unsigned int v52; // eax
  int v53; // r9d
  int v54; // r15d
  __int64 v55; // rcx
  LONG x; // ebx
  unsigned int v57; // edi
  int v58; // r9d
  unsigned int v59; // eax
  char v61[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v62; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h] BYREF
  SIZEL sizl; // [rsp+90h] [rbp-70h]
  DC *v67[2]; // [rsp+98h] [rbp-68h] BYREF
  HPALETTE hpal; // [rsp+A8h] [rbp-58h]
  __int128 v69; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL v70; // [rsp+C0h] [rbp-40h] BYREF
  int *v71; // [rsp+C8h] [rbp-38h]
  int v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v74)(__int128 *, __int64 *, int *, int *, int, LONG); // [rsp+E0h] [rbp-20h]
  __int128 v75; // [rsp+E8h] [rbp-18h] BYREF
  int v76[4]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v77; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v78; // [rsp+110h] [rbp+10h]
  unsigned int v79; // [rsp+114h] [rbp+14h]
  int v80[4]; // [rsp+118h] [rbp+18h] BYREF

  v13 = 0;
  v74 = a12;
  *(_QWORD *)v76 = a13;
  v73 = a4;
  v62 = 0;
  if ( !a2 )
    return v13;
  DCOBJ::DCOBJ((DCOBJ *)v67, a2);
  if ( !v67[0] )
    return v13;
  if ( a9 )
    Palette = EngCreatePalette(2u, 0, 0LL, 0xF800u, 0x7E0u, 0x1Fu);
  else
    Palette = EngCreatePalette(2u, 0, 0LL, 0xFF0000u, 0xFF00u, 0xFFu);
  hpal = Palette;
  if ( Palette )
  {
    v18 = 1;
    Bitmap = EngCreateBitmap((SIZEL)__PAIR64__(a8, a7), lWidth, a9 != 0 ? 4 : 6, 1u, pvBits);
    v20 = hpal;
    v21 = (HSURF)Bitmap;
    sizl = (SIZEL)Bitmap;
    DxEngSetPaletteState(hpal, v22, v23);
    if ( !v21 )
    {
LABEL_73:
      EngDeletePalette(v20);
      goto LABEL_74;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v61);
    v65 = 0LL;
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&v65, v21);
    if ( SURFREF::bValid((SURFREF *)&v65) )
    {
      v24 = v65;
      DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v65 + 24), v20);
      *(_DWORD *)(v24 + 112) |= 0x104200u;
      v21 = (HSURF)sizl;
    }
    else
    {
      v18 = 0;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v65);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v25);
    if ( !v18
      || (DisplayDC = GreCreateDisplayDC(*((_QWORD *)v67[0] + 6), 1LL, 0LL),
          v64 = DisplayDC,
          (v27 = (HDC)DisplayDC) == 0LL) )
    {
LABEL_72:
      EngDeleteSurface(v21);
      goto LABEL_73;
    }
    if ( !hbmSelectBitmap(DisplayDC, v21, 0LL, 1LL) )
    {
LABEL_71:
      bDeleteDCInternal(v27, 1LL, 0LL);
      goto LABEL_72;
    }
    v28 = v67[0];
    v69 = 0LL;
    v71 = 0LL;
    v29 = 0;
    LODWORD(v65) = *(_DWORD *)(*((_QWORD *)v67[0] + 122) + 108LL);
    v72 = v65 & 7;
    if ( (v65 & 7) != 0 )
    {
      DC::dwSetLayout(v67[0], -1, 0);
      v28 = v67[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v28 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v67[0] + 9) & 0x4000) != 0 )
          v29 = 1;
        v31 = *(_OWORD *)((char *)v67[0] + 1032);
        v63 = 0LL;
        v75 = v31;
        if ( (*((_DWORD *)v67[0] + 9) & 0x4000) != 0 )
        {
          v70 = 0LL;
          if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v70) )
            ERECTL::bOffsetAdd((ERECTL *)&v75, &v70, 0);
        }
        if ( v29 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v63) )
          ERECTL::bOffsetAdd((ERECTL *)&v75, &v63, 0);
        IntersectRect(&v69, (int *)&v75, a3);
        v32 = v75;
        if ( (_DWORD)v75 != (_DWORD)v69
          || *(_QWORD *)((char *)&v75 + 4) != *(_QWORD *)((char *)&v69 + 4)
          || HIDWORD(v75) != HIDWORD(v69) )
        {
          v71 = a3;
          LODWORD(v69) = v69 - v75;
          DWORD2(v69) -= v75;
          DWORD1(v69) -= DWORD1(v75);
          HIDWORD(v69) -= DWORD1(v75);
        }
        goto LABEL_34;
      }
      v30 = *(_OWORD *)a3;
    }
    else
    {
      v30 = *(_OWORD *)((char *)v67[0] + 1032);
    }
    v75 = v30;
    v32 = v30;
LABEL_34:
    DWORD2(v75) -= v32;
    v33 = *(_DWORD *)(a1 + 88);
    HIDWORD(v75) -= DWORD1(v75);
    v78 = a7;
    v79 = a8;
    *(_QWORD *)&v75 = 0LL;
    v77 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int128 *, __int64, __int64))v76)(
           &v77,
           &v75,
           (a1 + 48) & -(__int64)((v33 & 0x80u) != 0),
           (a1 + 32) & -(__int64)((v33 & 0x40) != 0))
      && (v34 = DWORD2(v75)) != 0
      && (v35 = HIDWORD(v75)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v38 = DWORD1(v75);
        v36 = v75;
      }
      else
      {
        v34 = *a3 + DWORD2(v75);
        v36 = *a3 + v75;
        DWORD2(v75) = v34;
        v37 = a3[1];
        v38 = v37 + DWORD1(v75);
        LODWORD(v75) = v36;
        v35 = v37 + HIDWORD(v75);
        DWORD1(v75) += v37;
        HIDWORD(v75) += v37;
      }
      v39 = v35 - v38;
      v40 = HIDWORD(v77);
      v41 = v79 - HIDWORD(v77);
      v42 = v77;
      if ( v39 == v79 - HIDWORD(v77) && v34 - v36 == v78 - (_DWORD)v77 )
      {
        v43 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          while ( 1 )
          {
            *(_OWORD *)v76 = 0LL;
            IntersectRect(v76, (int *)(v73 + 16LL * v43), (int *)&v77);
            v44 = v76[0];
            v45 = v36 - v42 + v76[2];
            v46 = v76[1];
            v76[2] = v45;
            v47 = v38 - v40 + v76[3];
            v76[3] = v47;
            v48 = v76[0] + v36 - v42;
            v76[0] = v48;
            v49 = v76[1] + v38 - v40;
            v76[1] = v49;
            if ( v71 )
            {
              IntersectRect(v76, v76, (int *)&v69);
              v48 = v76[0];
              v49 = v76[1];
              v47 = v76[3];
              v45 = v76[2];
              v44 = v42 + v76[0] - v36;
              v46 = v40 + v76[1] - v38;
            }
            v50 = v47 - v49;
            v51 = v45 - v48;
            v52 = a10
                ? NtGdiTransparentBlt(a2, v48, v49, v51, v50, (HDC)v64, v44, v46, v51, v50, a11)
                : NtGdiBitBltInternal(a2, v48, v49, v51, v50, (HDC)v64, v44, v46, -2134114272, 0, 0);
            ++v43;
            v62 = v52;
            if ( v43 >= *(_DWORD *)(a1 + 64) )
              break;
            v40 = HIDWORD(v77);
            v42 = v77;
            v38 = DWORD1(v75);
            v36 = v75;
          }
          v13 = v62;
        }
        else
        {
          v13 = 0;
        }
        v27 = (HDC)v64;
      }
      else
      {
        v53 = v34 - v36;
        v54 = 0;
        v63.x = 0;
        v55 = *((_QWORD *)v67[0] + 122);
        v61[0] = *(_BYTE *)(v55 + 215);
        LODWORD(v64) = (v53 << 16) / (int)(v78 - v77);
        v70.x = (v39 << 16) / v41;
        if ( v71 )
        {
          v54 = (int)((v78 - (_DWORD)v77) << 16) / v53;
          x = (v41 << 16) / v39;
          v63.x = x;
        }
        else
        {
          x = v63.x;
        }
        v57 = 0;
        for ( *(_BYTE *)(v55 + 215) = 3; v57 < *(_DWORD *)(a1 + 64); v62 = v59 )
        {
          *(_OWORD *)v76 = 0LL;
          *(_OWORD *)v80 = 0LL;
          IntersectRect(v80, (int *)(v73 + 16LL * v57), (int *)&v77);
          v74(&v75, &v77, v76, v80, v64, v70.x);
          if ( v71 && (unsigned int)IntersectRect(v76, v76, (int *)&v69) )
            v74((__int128 *)&v77, (__int64 *)&v75, v80, v76, v54, x);
          v58 = v76[2] - v76[0];
          if ( a10 )
            v59 = NtGdiTransparentBlt(
                    a2,
                    v76[0],
                    v76[1],
                    v58,
                    v76[3] - v76[1],
                    v27,
                    v80[0],
                    v80[1],
                    v80[2] - v80[0],
                    v80[3] - v80[1],
                    a11);
          else
            v59 = GreStretchBltInternal(
                    a2,
                    v76[0],
                    v76[1],
                    v58,
                    v76[3] - v76[1],
                    v27,
                    v80[0],
                    v80[1],
                    v80[2] - v80[0],
                    v80[3] - v80[1],
                    -2134114272,
                    0,
                    0);
          x = v63.x;
          ++v57;
        }
        v13 = v62;
        *(_BYTE *)(*((_QWORD *)v67[0] + 122) + 215LL) = v61[0];
      }
      v20 = hpal;
    }
    else
    {
      v13 = 1;
    }
    GreUnlockVisRgn(*((_QWORD *)v67[0] + 6));
    if ( v72 )
      DC::dwSetLayout(v67[0], -1, v65);
    v21 = (HSURF)sizl;
    goto LABEL_71;
  }
LABEL_74:
  if ( v67[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v67);
  return v13;
}
