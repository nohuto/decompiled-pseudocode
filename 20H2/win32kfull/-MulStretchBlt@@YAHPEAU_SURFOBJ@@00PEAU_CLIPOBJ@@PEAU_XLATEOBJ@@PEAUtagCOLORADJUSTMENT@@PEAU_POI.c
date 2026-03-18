/*
 * XREFs of ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C02A35C0
 * Callers:
 *     <none>
 * Callees:
 *     EngStretchBlt @ 0x1C006ADB0 (EngStretchBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffStretchBlt @ 0x1C014C8A8 (OffStretchBlt.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0159168 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015923C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C027309C (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027D500 (--1MULTISURF@@QEAA@XZ.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A0710 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A0730 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A1868 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A5A10 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z @ 0x1C02A5D1C (-bLoadSource@MULTISURF@@QEAAHPEAU_DISPSURF@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A5E64 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A63A4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  unsigned int v11; // edi
  RECTL *prclSrc; // r14
  struct _SURFOBJ *v13; // r13
  struct _SURFOBJ *v14; // r15
  struct _RECTL *v15; // r12
  struct _RECTL v16; // xmm0
  HDEV hdev; // rax
  LONG right; // eax
  __int64 *v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // r10d
  int v22; // eax
  __m128i v23; // xmm0
  int v24; // edx
  __int32 v25; // ebx
  __int32 v26; // ecx
  int v27; // r15d
  __int64 v28; // rax
  LONG v29; // eax
  LONG v30; // ecx
  LONG v31; // edx
  LONG left; // r9d
  LONG v33; // r8d
  LONG v34; // r10d
  LONG top; // eax
  LONG bottom; // ecx
  BOOL v37; // ebx
  int Surface; // eax
  int v39; // r15d
  int v40; // ebx
  int Source; // eax
  SURFOBJ *v42; // rdx
  XLATEOBJ *v43; // r14
  int v44; // r15d
  PVOID *v45; // r8
  HDEV pulXlate; // rbx
  __int64 v47; // rcx
  struct PALETTE *v48; // r10
  struct PALETTE *v49; // rax
  int v50; // r9d
  ULONG iUniq; // r14d
  int v52; // r11d
  FLONG flXlate; // r10d
  ULONG v54; // r8d
  ULONG *v55; // rdx
  int inited; // eax
  __int64 v57; // r9
  struct _CLIPOBJ *v58; // r8
  BOOL (__stdcall *v59)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rbx
  int v60; // r11d
  RECTL *v61; // rcx
  LONG *v62; // rax
  int v63; // eax
  int v65; // [rsp+70h] [rbp-90h]
  PVOID *p_pvScan0; // [rsp+78h] [rbp-88h]
  struct PALETTE *v68; // [rsp+88h] [rbp-78h]
  __int64 v69; // [rsp+90h] [rbp-70h]
  XLATEOBJ *v71; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-58h] BYREF
  char v73; // [rsp+B0h] [rbp-50h]
  int v74; // [rsp+B4h] [rbp-4Ch]
  POINTL *pptlMask; // [rsp+B8h] [rbp-48h]
  POINTL *pptlHTOrg; // [rsp+C0h] [rbp-40h]
  COLORADJUSTMENT *pca; // [rsp+C8h] [rbp-38h]
  SURFOBJ *psoMask; // [rsp+D0h] [rbp-30h]
  char *v79; // [rsp+D8h] [rbp-28h] BYREF
  char v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E4h] [rbp-1Ch]
  _DWORD v82[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+100h] [rbp+0h]
  int v85; // [rsp+104h] [rbp+4h]
  _BYTE v86[40]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v87; // [rsp+138h] [rbp+38h]
  char v88; // [rsp+140h] [rbp+40h]
  int v89; // [rsp+144h] [rbp+44h]
  SURFOBJ *psoSrc; // [rsp+168h] [rbp+68h]
  RECTL *v91; // [rsp+170h] [rbp+70h]
  _BYTE v92[56]; // [rsp+180h] [rbp+80h] BYREF
  struct _DISPSURF *v93; // [rsp+1B8h] [rbp+B8h]
  int v94[2]; // [rsp+1C0h] [rbp+C0h]
  struct _CLIPOBJ *v95; // [rsp+1C8h] [rbp+C8h]
  int v96[2]; // [rsp+1D0h] [rbp+D0h]
  RECTL prclDest; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v98; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v99; // [rsp+200h] [rbp+100h] BYREF
  REGION *v100[6]; // [rsp+210h] [rbp+110h] BYREF
  char v101; // [rsp+240h] [rbp+140h]
  int v102; // [rsp+244h] [rbp+144h]
  __int64 v103; // [rsp+248h] [rbp+148h]
  __int64 v104; // [rsp+260h] [rbp+160h]
  SURFOBJ *psoDest; // [rsp+268h] [rbp+168h]
  RECTL *v106; // [rsp+270h] [rbp+170h]
  int v107; // [rsp+290h] [rbp+190h]
  __int64 v108; // [rsp+2A0h] [rbp+1A0h]
  int v109; // [rsp+2A8h] [rbp+1A8h]

  v11 = 0;
  prclSrc = a9;
  v13 = a2;
  v14 = a1;
  v15 = a8;
  pca = a6;
  v16 = *a9;
  pptlHTOrg = a7;
  pptlMask = a10;
  hdev = a2->hdev;
  v98 = v16;
  psoMask = a3;
  v79 = 0LL;
  v80 = 0;
  v81 = 0;
  p_pvScan0 = &a2[-1].pvScan0;
  if ( a2->iType != 1 || !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
    goto LABEL_8;
  if ( (unsigned int)MulCopyDeviceToDIB(a2, (struct SURFMEM *)&v79, &v98) )
  {
    if ( !v79 )
    {
      v11 = 1;
      goto LABEL_108;
    }
    v13 = (struct _SURFOBJ *)(v79 + 24);
    p_pvScan0 = (PVOID *)v79;
    prclSrc = &v98;
LABEL_8:
    right = a8->right;
    v99 = 0LL;
    v72 = 0LL;
    v73 = 0;
    v74 = 0;
    if ( (a8->left >= right || a8->top >= a8->bottom) && !IsMetaRedirectionBitmap(v14) )
    {
      v22 = v20[14];
      v23 = *(__m128i *)prclSrc;
      v82[3] = 0;
      v85 = 0;
      prclDest = (RECTL)v23;
      v24 = v23.m128i_i32[2];
      v25 = v23.m128i_i32[1];
      v26 = v23.m128i_i32[3];
      v27 = _mm_cvtsi128_si32(v23);
      if ( v27 < 0 )
        v27 = 0;
      if ( v23.m128i_i32[2] > v22 )
        v24 = v22;
      if ( v23.m128i_i32[1] < 0 )
        v25 = 0;
      if ( v23.m128i_i32[3] > v20[15] )
        v26 = v20[15];
      if ( v24 <= v27 || v26 <= v25 )
      {
        v11 = v21;
        goto LABEL_107;
      }
      v82[1] = v24 - v27;
      v82[2] = v26 - v25;
      if ( v19 )
        v28 = *v19;
      else
        v28 = 0LL;
      v83 = v28;
      v82[0] = v20[24];
      v84 = v20[28] & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)v82, 0LL, 0LL, 0, 0LL, 0LL, 0, v21, 0, 0);
      if ( !v72 )
        goto LABEL_107;
      v29 = v98.left - v27;
      v30 = v98.right - v27;
      v31 = v98.top - v25;
      left = a8->left;
      v33 = v98.bottom - v25;
      v34 = a8->right;
      v98.left -= v27;
      v98.right -= v27;
      v98.top -= v25;
      v98.bottom -= v25;
      if ( left < v34 )
      {
        LODWORD(v99) = left;
        DWORD2(v99) = v34;
        prclDest.left = v29;
        prclDest.right = v30;
      }
      else
      {
        LODWORD(v99) = v34;
        DWORD2(v99) = left;
        prclDest.left = v30;
        prclDest.right = v29;
      }
      top = a8->top;
      bottom = a8->bottom;
      if ( top < bottom )
      {
        DWORD1(v99) = a8->top;
        HIDWORD(v99) = bottom;
        prclDest.top = v31;
        prclDest.bottom = v33;
      }
      else
      {
        DWORD1(v99) = a8->bottom;
        HIDWORD(v99) = top;
        prclDest.top = v33;
        prclDest.bottom = v31;
      }
      if ( !EngStretchBlt((SURFOBJ *)(v72 + 24), v13, 0LL, 0LL, xloIdent, 0LL, 0LL, &prclDest, prclSrc, 0LL, 3u) )
        goto LABEL_107;
      prclSrc = &v98;
      v14 = a1;
      v15 = (struct _RECTL *)&v99;
      v13 = (struct _SURFOBJ *)((v72 + 24) & -(__int64)(v72 != 0));
      p_pvScan0 = &v13[-1].pvScan0;
    }
    v65 = 1;
    v37 = IsMetaDevBitmapForMirroring(v14);
    Surface = MSURF::bFindSurface((MSURF *)v92, v14, a4, v15);
    v87 = 0LL;
    v88 = 0;
    v89 = 0;
    v39 = Surface;
    MULTISURF::vInit((MULTISURF *)v86, v13, prclSrc);
    if ( v37 )
    {
      v100[5] = 0LL;
      v101 = 0;
      v102 = 0;
      MULTISURF::vInit((MULTISURF *)v100, a1, v15);
      v65 = EngStretchBlt(psoDest, psoSrc, psoMask, a4, pxlo, pca, pptlHTOrg, v106, v91, pptlMask, iMode);
      v40 = v65;
      MULTISURF::~MULTISURF((MULTISURF *)v100);
    }
    else
    {
      v40 = 1;
    }
    if ( v39 )
    {
      while ( 1 )
      {
        v69 = *(_QWORD *)v94;
        v71 = 0LL;
        Source = MULTISURF::bLoadSource((MULTISURF *)v86, v93);
        v42 = psoSrc;
        v43 = pxlo;
        if ( !Source )
        {
          v44 = 1;
          goto LABEL_77;
        }
        v45 = &psoSrc[-1].pvScan0;
        pulXlate = psoSrc[1].hdev;
        v44 = 0;
        p_pvScan0 = &psoSrc[-1].pvScan0;
        if ( *((_DWORD *)v93 + 6) )
          break;
LABEL_77:
        if ( !v44 )
        {
          v57 = *(_QWORD *)v94;
          v58 = v95;
          v104 = 0LL;
          LODWORD(psoDest) = 0;
          v107 = 1;
          v108 = 0LL;
          v103 = 0LL;
          v109 = 0;
          if ( (*(_DWORD *)(*(_QWORD *)v94 + 88LL) & 2) != 0 )
            v59 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)v93 + 7) + 2848LL);
          else
            v59 = EngStretchBlt;
          if ( v42->iType == 1 && p_pvScan0[6] != *(PVOID *)(v69 + 24) )
            v59 = EngStretchBlt;
          v60 = iMode;
          if ( iMode == 4 && (*(_BYTE *)(*(_QWORD *)(v69 + 24) + 1824LL) & 0x10) == 0 )
            v59 = EngStretchBlt;
          v61 = v91;
          if ( v91->left < 0 || v91->top < 0 || v91->right > v42->sizlBitmap.cx || v91->bottom > v42->sizlBitmap.cy )
            v59 = EngStretchBlt;
          if ( v59 == EngStretchBlt && iMode == 4 && a4 && a4->iDComplexity )
          {
            v62 = *(LONG **)v96;
            if ( **(_DWORD **)v96 || *(_DWORD *)(*(_QWORD *)v96 + 4LL) )
            {
              v44 = 1;
              ECLIPOBJTMPIFNEEDED::vSetup(
                (ECLIPOBJTMPIFNEEDED *)v100,
                1,
                *(struct REGION **)&v95[2].rclBounds.top,
                (struct ERECTL *)&v95->rclBounds,
                1);
              if ( v103 )
              {
                v57 = *(_QWORD *)v94;
                v58 = (struct _CLIPOBJ *)v100;
                v61 = v91;
                v44 = 0;
                v42 = psoSrc;
                v60 = iMode;
                goto LABEL_100;
              }
LABEL_102:
              ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v100);
              goto LABEL_103;
            }
          }
          else
          {
LABEL_100:
            v62 = *(LONG **)v96;
          }
          v65 &= OffStretchBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, _DWORD *, __int64, int))v59,
                   v62,
                   v57,
                   v57,
                   (__int64)v42,
                   (__int64)psoMask,
                   v58,
                   (__int64)v43,
                   (__int64)pca,
                   (__int64 *)pptlHTOrg,
                   &v15->left,
                   v61,
                   (__int64)pptlMask,
                   v60);
          goto LABEL_102;
        }
LABEL_103:
        v63 = 0;
        if ( !v44 )
          v63 = v65;
        v40 = v63;
        v65 = v63;
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v71);
        if ( !(unsigned int)MSURF::bNextSurface((MSURF *)v92) )
          goto LABEL_106;
      }
      v47 = *((_QWORD *)v93 + 6);
      v48 = ppalDefault;
      v68 = ppalDefault;
      if ( (*(_DWORD *)(v47 + 2172) & 0x100) != 0 )
      {
        v49 = DrvRealizeHalftonePalette((_QWORD *)v47, 0);
        v42 = psoSrc;
        v48 = v49;
        v45 = p_pvScan0;
        v68 = v49;
      }
      if ( !pulXlate )
      {
        if ( !pxlo )
          goto LABEL_52;
        if ( pxlo[1].pulXlate )
        {
          pulXlate = (HDEV)pxlo[1].pulXlate;
LABEL_55:
          v50 = 0;
          if ( pulXlate )
          {
            if ( ((_DWORD)pulXlate[6] & 0x800) != 0 )
            {
              v50 = 0x4000;
              if ( v48 == ppalDefault )
                v50 = 0x2000;
            }
          }
          if ( pxlo )
            iUniq = pxlo[1].iUniq;
          else
            iUniq = 0;
          if ( pxlo )
            v52 = *(_DWORD *)&pxlo[1].iSrcType;
          else
            v52 = 0;
          if ( pxlo )
            flXlate = pxlo[1].flXlate;
          else
            flXlate = 0;
          if ( pxlo )
            v54 = pxlo[3].iUniq;
          else
            v54 = 0;
          if ( pxlo )
            v55 = pxlo[2].pulXlate;
          else
            v55 = 0LL;
          inited = EXLATEOBJ::bInitXlateObj(
                     (__int64 *)&v71,
                     (__int64)v55,
                     v54,
                     (__int64)pulXlate,
                     *(_QWORD *)(v69 + 104),
                     (__int64)ppalDefault,
                     (__int64)v68,
                     flXlate,
                     v52,
                     iUniq,
                     v50);
          v42 = psoSrc;
          if ( inited )
          {
            v43 = v71;
          }
          else
          {
            v44 = 1;
            v43 = pxlo;
          }
          goto LABEL_77;
        }
        if ( (pxlo->flXlate & 1) != 0 )
        {
LABEL_52:
          if ( v42 == v13 )
            pulXlate = a1[1].hdev;
        }
        else
        {
          if ( *(_QWORD *)&pxlo[2].iSrcType )
          {
            v48 = *(struct PALETTE **)&pxlo[2].iSrcType;
            v68 = v48;
            if ( *((_DWORD *)v45 + 24) == a1->iBitmapFormat )
              pulXlate = a1[1].hdev;
            goto LABEL_55;
          }
          v44 = 1;
        }
      }
      if ( v44 )
        goto LABEL_77;
      goto LABEL_55;
    }
LABEL_106:
    v11 = v40;
    MULTISURF::~MULTISURF((MULTISURF *)v86);
LABEL_107:
    SURFMEM::~SURFMEM((SURFMEM *)&v72);
  }
LABEL_108:
  SURFMEM::~SURFMEM((SURFMEM *)&v79);
  return v11;
}
