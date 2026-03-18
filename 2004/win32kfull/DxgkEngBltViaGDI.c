/*
 * XREFs of DxgkEngBltViaGDI @ 0x1C0277A40
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0020CE0 (UserGetRedirectedWindowOrigin.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C002EEA4 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C002EF28 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C01494C8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0 (--1EPALOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026E1A8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C0277678 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  DYNAMICMODECHANGESHARELOCK *v28; // rcx
  __int64 DisplayDC; // rax
  HDC v30; // rsi
  DC *v31; // rcx
  int v32; // ebx
  __int128 v33; // xmm0
  __int128 v34; // xmm0
  int v35; // eax
  int v36; // edx
  int v37; // r9d
  int v38; // r8d
  int v39; // ebx
  int v40; // eax
  int v41; // edi
  int v42; // r8d
  int v43; // r15d
  int v44; // r10d
  int v45; // r14d
  unsigned int v46; // esi
  int v47; // r10d
  int v48; // r9d
  int v49; // r11d
  int v50; // ecx
  int v51; // edx
  int v52; // r8d
  int v53; // ecx
  int v54; // r9d
  unsigned int v55; // eax
  int v56; // r9d
  int v57; // r15d
  __int64 v58; // rcx
  LONG x; // ebx
  unsigned int v60; // edi
  int v61; // r9d
  unsigned int v62; // eax
  char v64[4]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v65; // [rsp+74h] [rbp-8Ch]
  struct _POINTL v66; // [rsp+78h] [rbp-88h] BYREF
  __int64 v67; // [rsp+80h] [rbp-80h]
  __int64 v68; // [rsp+88h] [rbp-78h] BYREF
  SIZEL sizl; // [rsp+90h] [rbp-70h]
  DC *v70[2]; // [rsp+98h] [rbp-68h] BYREF
  HPALETTE hpal; // [rsp+A8h] [rbp-58h]
  __int128 v72; // [rsp+B0h] [rbp-50h] BYREF
  struct _POINTL v73; // [rsp+C0h] [rbp-40h] BYREF
  int *v74; // [rsp+C8h] [rbp-38h]
  int v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h]
  void (__fastcall *v77)(__int128 *, __int64 *, int *, int *, int, LONG); // [rsp+E0h] [rbp-20h]
  __int128 v78; // [rsp+E8h] [rbp-18h] BYREF
  int v79[4]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v80; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v81; // [rsp+110h] [rbp+10h]
  unsigned int v82; // [rsp+114h] [rbp+14h]
  int v83[4]; // [rsp+118h] [rbp+18h] BYREF

  v13 = 0;
  v77 = a12;
  *(_QWORD *)v79 = a13;
  v76 = a4;
  v65 = 0;
  if ( !a2 )
    return v13;
  DCOBJ::DCOBJ((DCOBJ *)v70, a2);
  if ( !v70[0] )
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
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v64, v24, v25, v26);
    v68 = 0LL;
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&v68, v21);
    if ( SURFREF::bValid((SURFREF *)&v68) )
    {
      v27 = v68;
      DxEngSelectPaletteToSurface((struct _SURFOBJ *)(v68 + 24), v20);
      *(_DWORD *)(v27 + 112) |= 0x104200u;
      v21 = (HSURF)sizl;
    }
    else
    {
      v18 = 0;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v68);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v28);
    if ( !v18
      || (DisplayDC = GreCreateDisplayDC(*((_QWORD *)v70[0] + 6), 1LL, 0LL),
          v67 = DisplayDC,
          (v30 = (HDC)DisplayDC) == 0LL) )
    {
LABEL_72:
      EngDeleteSurface(v21);
      goto LABEL_73;
    }
    if ( !hbmSelectBitmap(DisplayDC, v21, 0LL, 1LL) )
    {
LABEL_71:
      bDeleteDCInternal(v30, 1LL, 0LL);
      goto LABEL_72;
    }
    v31 = v70[0];
    v72 = 0LL;
    v74 = 0LL;
    v32 = 0;
    LODWORD(v68) = *(_DWORD *)(*((_QWORD *)v70[0] + 122) + 108LL);
    v75 = v68 & 7;
    if ( (v68 & 7) != 0 )
    {
      DC::dwSetLayout(v70[0], -1, 0);
      v31 = v70[0];
    }
    GreLockVisRgnShared(*((_QWORD *)v31 + 6));
    if ( a3 )
    {
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*((_DWORD *)v70[0] + 9) & 0x4000) != 0 )
          v32 = 1;
        v34 = *(_OWORD *)((char *)v70[0] + 1032);
        v66 = 0LL;
        v78 = v34;
        if ( (*((_DWORD *)v70[0] + 9) & 0x4000) != 0 )
        {
          v73 = 0LL;
          if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v73) )
            ERECTL::bOffsetAdd((ERECTL *)&v78, &v73, 0);
        }
        if ( v32 && (unsigned int)UserGetRedirectedWindowOrigin((__int64)a2, (__int64)&v66) )
          ERECTL::bOffsetAdd((ERECTL *)&v78, &v66, 0);
        IntersectRect(&v72, (int *)&v78, a3);
        v35 = v78;
        if ( (_DWORD)v78 != (_DWORD)v72
          || *(_QWORD *)((char *)&v78 + 4) != *(_QWORD *)((char *)&v72 + 4)
          || HIDWORD(v78) != HIDWORD(v72) )
        {
          v74 = a3;
          LODWORD(v72) = v72 - v78;
          DWORD2(v72) -= v78;
          DWORD1(v72) -= DWORD1(v78);
          HIDWORD(v72) -= DWORD1(v78);
        }
        goto LABEL_34;
      }
      v33 = *(_OWORD *)a3;
    }
    else
    {
      v33 = *(_OWORD *)((char *)v70[0] + 1032);
    }
    v78 = v33;
    v35 = v33;
LABEL_34:
    DWORD2(v78) -= v35;
    v36 = *(_DWORD *)(a1 + 88);
    HIDWORD(v78) -= DWORD1(v78);
    v81 = a7;
    v82 = a8;
    *(_QWORD *)&v78 = 0LL;
    v80 = 0LL;
    if ( (*(unsigned int (__fastcall **)(__int64 *, __int128 *, __int64, __int64))v79)(
           &v80,
           &v78,
           (a1 + 48) & -(__int64)((v36 & 0x80u) != 0),
           (a1 + 32) & -(__int64)((v36 & 0x40) != 0))
      && (v37 = DWORD2(v78)) != 0
      && (v38 = HIDWORD(v78)) != 0 )
    {
      if ( !a3 || *(_QWORD *)(a1 + 8) )
      {
        v41 = DWORD1(v78);
        v39 = v78;
      }
      else
      {
        v37 = *a3 + DWORD2(v78);
        v39 = *a3 + v78;
        DWORD2(v78) = v37;
        v40 = a3[1];
        v41 = v40 + DWORD1(v78);
        LODWORD(v78) = v39;
        v38 = v40 + HIDWORD(v78);
        DWORD1(v78) += v40;
        HIDWORD(v78) += v40;
      }
      v42 = v38 - v41;
      v43 = HIDWORD(v80);
      v44 = v82 - HIDWORD(v80);
      v45 = v80;
      if ( v42 == v82 - HIDWORD(v80) && v37 - v39 == v81 - (_DWORD)v80 )
      {
        v46 = 0;
        if ( *(_DWORD *)(a1 + 64) )
        {
          while ( 1 )
          {
            *(_OWORD *)v79 = 0LL;
            IntersectRect(v79, (int *)(v76 + 16LL * v46), (int *)&v80);
            v47 = v79[0];
            v48 = v39 - v45 + v79[2];
            v49 = v79[1];
            v79[2] = v48;
            v50 = v41 - v43 + v79[3];
            v79[3] = v50;
            v51 = v79[0] + v39 - v45;
            v79[0] = v51;
            v52 = v79[1] + v41 - v43;
            v79[1] = v52;
            if ( v74 )
            {
              IntersectRect(v79, v79, (int *)&v72);
              v51 = v79[0];
              v52 = v79[1];
              v50 = v79[3];
              v48 = v79[2];
              v47 = v45 + v79[0] - v39;
              v49 = v43 + v79[1] - v41;
            }
            v53 = v50 - v52;
            v54 = v48 - v51;
            v55 = a10
                ? NtGdiTransparentBlt(a2, v51, v52, v54, v53, (HDC)v67, v47, v49, v54, v53, a11)
                : NtGdiBitBltInternal(a2, v51, v52, v54, v53, (HDC)v67, v47, v49, -2134114272, 0, 0);
            ++v46;
            v65 = v55;
            if ( v46 >= *(_DWORD *)(a1 + 64) )
              break;
            v43 = HIDWORD(v80);
            v45 = v80;
            v41 = DWORD1(v78);
            v39 = v78;
          }
          v13 = v65;
        }
        else
        {
          v13 = 0;
        }
        v30 = (HDC)v67;
      }
      else
      {
        v56 = v37 - v39;
        v57 = 0;
        v66.x = 0;
        v58 = *((_QWORD *)v70[0] + 122);
        v64[0] = *(_BYTE *)(v58 + 215);
        LODWORD(v67) = (v56 << 16) / (int)(v81 - v80);
        v73.x = (v42 << 16) / v44;
        if ( v74 )
        {
          v57 = (int)((v81 - (_DWORD)v80) << 16) / v56;
          x = (v44 << 16) / v42;
          v66.x = x;
        }
        else
        {
          x = v66.x;
        }
        v60 = 0;
        for ( *(_BYTE *)(v58 + 215) = 3; v60 < *(_DWORD *)(a1 + 64); v65 = v62 )
        {
          *(_OWORD *)v79 = 0LL;
          *(_OWORD *)v83 = 0LL;
          IntersectRect(v83, (int *)(v76 + 16LL * v60), (int *)&v80);
          v77(&v78, &v80, v79, v83, v67, v73.x);
          if ( v74 && (unsigned int)IntersectRect(v79, v79, (int *)&v72) )
            v77((__int128 *)&v80, (__int64 *)&v78, v83, v79, v57, x);
          v61 = v79[2] - v79[0];
          if ( a10 )
            v62 = NtGdiTransparentBlt(
                    a2,
                    v79[0],
                    v79[1],
                    v61,
                    v79[3] - v79[1],
                    v30,
                    v83[0],
                    v83[1],
                    v83[2] - v83[0],
                    v83[3] - v83[1],
                    a11);
          else
            v62 = GreStretchBltInternal(
                    a2,
                    v79[0],
                    v79[1],
                    v61,
                    v79[3] - v79[1],
                    v30,
                    v83[0],
                    v83[1],
                    v83[2] - v83[0],
                    v83[3] - v83[1],
                    -2134114272,
                    0,
                    0);
          x = v66.x;
          ++v60;
        }
        v13 = v65;
        *(_BYTE *)(*((_QWORD *)v70[0] + 122) + 215LL) = v64[0];
      }
      v20 = hpal;
    }
    else
    {
      v13 = 1;
    }
    GreUnlockVisRgn(*((_QWORD *)v70[0] + 6));
    if ( v75 )
      DC::dwSetLayout(v70[0], -1, v68);
    v21 = (HSURF)sizl;
    goto LABEL_71;
  }
LABEL_74:
  if ( v70[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v70);
  return v13;
}
