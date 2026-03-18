/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00D0890
 * Callers:
 *     GreGetDIBitsInternal @ 0x1C0075B1C (GreGetDIBitsInternal.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00D07A0 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     EngCopyBits @ 0x1C00D10E0 (EngCopyBits.c)
 *     ?bIdenticalFormat@@YAHVXEPALOBJ@@H@Z @ 0x1C00D19EC (-bIdenticalFormat@@YAHVXEPALOBJ@@H@Z.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C00EA22C (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C00EA4C8 (-vInit256Default@XEPALOBJ@@QEAAXXZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C010D2DC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z @ 0x1C02BD638 (-vFill_triples@XEPALOBJ@@QEAAXPEAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BD698 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     EncodeRLE8 @ 0x1C02CCFEC (EncodeRLE8.c)
 *     EncodeRLE4 @ 0x1C02CEB54 (EncodeRLE4.c)
 */

__int64 __fastcall GreGetDIBitsInternalWorker(
        unsigned int a1,
        DC **a2,
        struct PDEVOBJ *a3,
        struct SURFREF *a4,
        struct XEPALOBJ *a5,
        HDC a6,
        HBITMAP a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int8 *a10,
        struct tagBITMAPINFO *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14)
{
  __int64 v14; // rdi
  struct tagBITMAPINFO *v15; // r13
  unsigned int v16; // r12d
  __int64 v17; // rsi
  unsigned int biHeight_high; // r9d
  DWORD biCompression; // r15d
  LONG biWidth; // r10d
  LONG biWidth_high; // edx
  unsigned int v22; // edi
  unsigned int v23; // ecx
  unsigned int v24; // r10d
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // edx
  unsigned int v29; // r8d
  int v30; // ecx
  __int64 v31; // rbx
  int v32; // eax
  LONG v33; // edx
  unsigned __int8 *v34; // r8
  struct tagBITMAPINFO *v35; // rbx
  __int64 v36; // rdi
  unsigned int v37; // edi
  bool v39; // zf
  unsigned int v40; // eax
  unsigned int biWidth_low; // r10d
  int IsCMYKColor; // eax
  DWORD v43; // r11d
  XLATEOBJ *v44; // r10
  XLATEOBJ *v45; // rdi
  __int64 i; // rcx
  unsigned int v47; // edx
  __int64 *v48; // r13
  unsigned __int16 v49; // di
  int v50; // r8d
  unsigned int v51; // eax
  XLATEOBJ *v52; // r9
  XLATEOBJ *v53; // rcx
  struct PDEVOBJ *v54; // r8
  unsigned int v55; // eax
  XLATEOBJ *v56; // r9
  XLATEOBJ *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // r13
  unsigned int v60; // eax
  DWORD v61; // eax
  unsigned int v62; // [rsp+64h] [rbp-144h]
  LONG v63; // [rsp+68h] [rbp-140h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v65; // [rsp+78h] [rbp-130h]
  __int64 v66; // [rsp+80h] [rbp-128h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-120h]
  unsigned int v68; // [rsp+8Ch] [rbp-11Ch]
  __int64 v69; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v70; // [rsp+98h] [rbp-110h]
  unsigned int v71; // [rsp+A0h] [rbp-108h]
  unsigned int v72; // [rsp+A8h] [rbp-100h]
  __int64 *v73; // [rsp+B0h] [rbp-F8h] BYREF
  int v74; // [rsp+B8h] [rbp-F0h]
  int v75; // [rsp+BCh] [rbp-ECh]
  __int64 v76; // [rsp+C0h] [rbp-E8h] BYREF
  int v77; // [rsp+C8h] [rbp-E0h]
  struct SURFREF *v78; // [rsp+D0h] [rbp-D8h]
  unsigned __int8 *v79; // [rsp+D8h] [rbp-D0h]
  DC **v80; // [rsp+E0h] [rbp-C8h]
  struct tagBITMAPINFO *v81; // [rsp+E8h] [rbp-C0h]
  int v82; // [rsp+F0h] [rbp-B8h] BYREF
  LONG v83; // [rsp+F4h] [rbp-B4h]
  LONG v84; // [rsp+F8h] [rbp-B0h]
  int v85; // [rsp+FCh] [rbp-ACh]
  __int64 v86; // [rsp+100h] [rbp-A8h]
  __int64 v87; // [rsp+108h] [rbp-A0h]
  __int64 v88; // [rsp+110h] [rbp-98h] BYREF
  char v89; // [rsp+118h] [rbp-90h]
  int v90; // [rsp+11Ch] [rbp-8Ch]
  struct PDEVOBJ *v91; // [rsp+120h] [rbp-88h]
  __int64 v92; // [rsp+128h] [rbp-80h] BYREF
  POINTL pptlSrc; // [rsp+130h] [rbp-78h] BYREF
  struct SURFREF *v94; // [rsp+138h] [rbp-70h]
  struct tagBITMAPINFO *v95; // [rsp+140h] [rbp-68h]
  __int64 v96; // [rsp+148h] [rbp-60h]
  __int64 v97; // [rsp+150h] [rbp-58h]
  RECTL prclDest; // [rsp+158h] [rbp-50h] BYREF

  v78 = a4;
  v91 = a3;
  v80 = a2;
  v14 = a1;
  v72 = a1;
  v94 = a4;
  v73 = (__int64 *)a5;
  v65 = a8;
  v79 = a10;
  v15 = a11;
  v81 = a11;
  v95 = a11;
  v92 = 0LL;
  v16 = 1;
  if ( !(unsigned int)bIsCompatible(&v92, *(_QWORD *)(*(_QWORD *)a4 + 128LL), *(_QWORD *)a4, *((_QWORD *)*a2 + 6), 1) )
    return 0LL;
  v17 = v92;
  v96 = v92;
  v82 = 0;
  v85 = 0;
  v87 = 0LL;
  if ( (_DWORD)v14 == 12 )
  {
    LODWORD(v69) = 1;
    pxlo = (XLATEOBJ *)&a11->bmiHeader.biPlanes;
    biWidth_low = LOWORD(a11->bmiHeader.biWidth);
    v67 = biWidth_low;
    biWidth_high = HIWORD(a11->bmiHeader.biWidth);
    v63 = biWidth_high;
    LOWORD(a11->bmiHeader.biHeight) = 1;
    biHeight_high = HIWORD(a11->bmiHeader.biHeight);
    v68 = biHeight_high;
    v23 = ((biWidth_low * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
    biCompression = 0;
    if ( biWidth_low && biWidth_high )
    {
      v22 = 2;
      goto LABEL_17;
    }
    goto LABEL_94;
  }
  if ( a14 < 0x28 )
    return 0LL;
  pxlo = (XLATEOBJ *)a11->bmiColors;
  if ( (unsigned int)v14 > 0x28 )
    memset(a11->bmiColors, 0, v14 - 40);
  LODWORD(v69) = 0;
  a11->bmiHeader.biSize = 40;
  a11->bmiHeader.biPlanes = 1;
  biHeight_high = a11->bmiHeader.biBitCount;
  v68 = biHeight_high;
  biCompression = a11->bmiHeader.biCompression;
  biWidth = a11->bmiHeader.biWidth;
  v67 = biWidth;
  if ( biWidth <= 0 )
    goto LABEL_94;
  biWidth_high = a11->bmiHeader.biHeight;
  if ( !biWidth_high )
    goto LABEL_94;
  if ( biWidth_high >= 0 )
    goto LABEL_9;
  LODWORD(v87) = 1;
  if ( biCompression )
  {
    if ( biCompression != 3 )
    {
LABEL_94:
      EngSetLastError(0x57u);
      return 0LL;
    }
  }
  biWidth_high = -biWidth_high;
LABEL_9:
  v63 = biWidth_high;
  if ( biCompression == 3 )
  {
    v39 = ((biHeight_high - 16) & 0xFFFFFFEF) == 0;
    goto LABEL_65;
  }
  if ( biCompression == 1 )
  {
    v39 = biHeight_high == 8;
LABEL_65:
    v22 = 2;
    if ( !v39 )
      goto LABEL_13;
    goto LABEL_14;
  }
  v22 = 2;
  if ( biCompression != 2 )
  {
    if ( biCompression == 10 )
    {
      IsCMYKColor = DC::bIsCMYKColor(*v80);
      biWidth_high = v63;
      if ( IsCMYKColor )
      {
        a11->bmiHeader.biCompression = v43;
        biCompression = v43;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if ( biHeight_high != 4 )
  {
LABEL_13:
    biCompression = 0;
    a11->bmiHeader.biCompression = 0;
  }
LABEL_14:
  v23 = ((biWidth * biHeight_high + 31) >> 3) & 0x1FFFFFFC;
  if ( !biCompression || biCompression == 3 )
    a11->bmiHeader.biSizeImage = biWidth_high * v23;
  *(_QWORD *)&a11->bmiHeader.biClrUsed = 0LL;
LABEL_17:
  v24 = v65;
  if ( biWidth_high < v65 )
    v24 = biWidth_high;
  v65 = v24;
  v70 = v24;
  v25 = biWidth_high - v24;
  v26 = a9;
  if ( v25 < a9 )
    v26 = v25;
  v62 = v26;
  v71 = v26;
  if ( biCompression - 1 > 1 && a13 < v23 * v26 )
    return 0LL;
  v86 = 0LL;
  if ( biCompression == 3 && a14 < 0x34 )
    return 0LL;
  switch ( biHeight_high )
  {
    case 1u:
      v28 = 1;
LABEL_86:
      v27 = a12;
      goto LABEL_33;
    case 4u:
      v28 = 2;
      v22 = 16;
      goto LABEL_86;
    case 8u:
      v28 = 3;
      v82 = 3;
      v22 = 256;
      v27 = a12;
LABEL_34:
      v77 = 0;
      v76 = 0LL;
      if ( v27 == 1 )
      {
        if ( a14 >= v72 + 2 * (unsigned __int64)v22 )
        {
          v69 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          if ( !v17 && v82 == 3 && *(_QWORD *)(*v73 + 72) )
          {
            v31 = 0LL;
            v66 = 0LL;
            v44 = pxlo;
            v45 = pxlo;
            for ( i = 256LL; i; --i )
            {
              LOWORD(v45->iUniq) = 0;
              v45 = (XLATEOBJ *)((char *)v45 + 2);
            }
            v47 = 0;
            v48 = v73;
            do
            {
              v49 = 0;
              v50 = *(_DWORD *)(*v48 + 28);
              if ( (_WORD)v50 )
              {
                while ( *(unsigned __int8 *)(v49 + *(_QWORD *)(*v48 + 72) + 4LL) != v47 )
                {
                  if ( ++v49 >= (unsigned __int16)v50 )
                    goto LABEL_119;
                }
                *((_WORD *)&v44->iUniq + v47) = v49;
              }
LABEL_119:
              ++v47;
            }
            while ( v47 < 0x100 );
            v15 = v81;
          }
          else
          {
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v76, 1u, v22, 0LL, 0, 0, 0, 0x200u, 1) )
            {
              SEMOBJ::vUnlock((SEMOBJ *)&v69);
              goto LABEL_106;
            }
            v31 = v76;
            v66 = v76;
            v51 = 0;
            v52 = pxlo;
            if ( v22 )
            {
              v53 = pxlo;
              do
              {
                LOWORD(v53->iUniq) = v51++;
                v53 = (XLATEOBJ *)((char *)v53 + 2);
              }
              while ( v51 < v22 );
            }
            v54 = *(struct PDEVOBJ **)(*(_QWORD *)v91 + 1808LL);
            v91 = v54;
            if ( v17 )
              v54 = (struct PDEVOBJ *)v17;
            XEPALOBJ::vGetEntriesFrom(&v66, *v73, v54, v52, v22);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v69);
          goto LABEL_51;
        }
        EngSetLastError(0x57u);
      }
      else
      {
        v29 = *(_DWORD *)(*(_QWORD *)v78 + 96LL);
        if ( v27 )
        {
          if ( v28 == v29 )
          {
            v31 = v17;
            v66 = v17;
            goto LABEL_51;
          }
        }
        else
        {
          v30 = 0;
          if ( v29 == v28 && v17 )
          {
            v30 = 1;
            if ( biCompression == 3 || ((v28 - 4) & 0xFFFFFFFD) != 0 )
            {
              if ( v28 == 5 && (*(_BYTE *)(v17 + 24) & 4) != 0 )
                v30 = 0;
            }
            else
            {
              v30 = bIdenticalFormat(v17);
            }
          }
          if ( v30 )
          {
            v31 = v17;
            v66 = v17;
            goto LABEL_43;
          }
          if ( v22 )
          {
            v40 = 1;
          }
          else
          {
            v40 = 8;
            if ( v28 == 4 )
              v40 = 2;
          }
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v76, v40, v22, 0LL, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
          {
            v31 = v76;
            v66 = v76;
            if ( *(_DWORD *)(*(_QWORD *)v78 + 96LL) == v82 && v82 == 3 )
            {
              v55 = 0;
              v56 = pxlo;
              if ( v22 )
              {
                v57 = pxlo;
                do
                {
                  LOWORD(v57->iUniq) = v55++;
                  v57 = (XLATEOBJ *)((char *)v57 + 2);
                }
                while ( v55 < v22 );
              }
              v97 = *(_QWORD *)(*(_QWORD *)v91 + 1808LL);
              XEPALOBJ::vGetEntriesFrom(&v66, *v73, v97, v56, v22);
              XEPALOBJ::vInit256Default((XEPALOBJ *)&v66);
            }
            else
            {
              switch ( v82 )
              {
                case 1:
                  **(_DWORD **)(v76 + 112) = 0;
                  *(_DWORD *)(*(_QWORD *)(v31 + 112) + 4LL) = 0xFFFFFF;
                  break;
                case 2:
                  v58 = 0LL;
                  v59 = 16LL;
                  do
                  {
                    *(_DWORD *)(v58 + *(_QWORD *)(v31 + 112)) = *(_DWORD *)((char *)&aPalVGA + v58);
                    v58 += 4LL;
                    --v59;
                  }
                  while ( v59 );
                  v15 = v81;
                  break;
                case 3:
                  XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v66);
                  break;
              }
            }
LABEL_43:
            if ( (_DWORD)v69 )
            {
              if ( a14 >= (unsigned __int64)(3 * v22) + 12 )
              {
                if ( ((v68 - 16) & 0xFFFFFFE7) != 0 || v68 == 40 )
                  XEPALOBJ::vFill_triples((XEPALOBJ *)&v66, (struct tagRGBTRIPLE *)pxlo, v29, v22);
LABEL_51:
                pxlo = 0LL;
                if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                      (__int64 *)&pxlo,
                                      *(_QWORD *)(*((_QWORD *)*v80 + 122) + 248LL),
                                      *((_DWORD *)*v80 + 30),
                                      v17,
                                      v31,
                                      *v73,
                                      *v73,
                                      0,
                                      0xFFFFFF,
                                      0,
                                      0) )
                {
LABEL_154:
                  v16 = 0;
LABEL_72:
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v76);
                  return v16;
                }
                if ( !v79 && biCompression - 1 > 1 )
                  goto LABEL_72;
                v33 = v62;
                if ( biCompression - 1 <= 1 )
                {
                  v34 = 0LL;
                  v65 &= -(v62 != 0);
                  v70 = v65;
                  v60 = v63;
                  if ( v62 )
                    v60 = v62;
                  v33 = v60;
                  v62 = v60;
                  v71 = v60;
                }
                else
                {
                  v34 = v79;
                }
                v83 = v67;
                v84 = v33;
                v88 = 0LL;
                v89 = 0;
                v90 = 0;
                SURFMEM::bCreateDIB((SURFMEM *)&v88, (struct _DEVBITMAPINFO *)&v82, v34, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
                if ( !v88 )
                  goto LABEL_153;
                v35 = *(struct tagBITMAPINFO **)(v88 + 72);
                v81 = v35;
                *(_QWORD *)(v88 + 48) = *((_QWORD *)*v80 + 6);
                v72 = *(_DWORD *)(v88 + 64);
                v80 = *(DC ***)(v88 + 72);
                memset(v80, 0, v72);
                *(_QWORD *)&prclDest.left = 0LL;
                prclDest.right = v83;
                prclDest.bottom = v84;
                pptlSrc.x = 0;
                pptlSrc.y = v63 - v62 - v65;
                LODWORD(v73) = 0;
                HIDWORD(v73) = v65 - (v63 - v62);
                v36 = *(_QWORD *)v78;
                v74 = *(_DWORD *)(*(_QWORD *)v78 + 56LL);
                v75 = *(_DWORD *)(v36 + 60) + HIDWORD(v73);
                ERECTL::operator*=(&prclDest.left, (int *)&v73);
                if ( ERECTL::bEmpty((ERECTL *)&prclDest) )
                {
LABEL_153:
                  SURFMEM::~SURFMEM((SURFMEM *)&v88);
                  goto LABEL_154;
                }
                EngCopyBits(
                  (SURFOBJ *)((v88 + 24) & -(__int64)(v88 != 0)),
                  (SURFOBJ *)((v36 + 24) & -(__int64)(v36 != 0)),
                  0LL,
                  pxlo,
                  &prclDest,
                  &pptlSrc);
                if ( biCompression - 1 > 1 )
                {
LABEL_58:
                  v37 = prclDest.bottom - prclDest.top;
                  SURFMEM::~SURFMEM((SURFMEM *)&v88);
                  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v76);
                  return v37;
                }
                if ( biCompression == 2 )
                {
                  v61 = EncodeRLE4(v35, v79, v67, v62, v15->bmiHeader.biSizeImage);
                }
                else
                {
                  if ( biCompression != 1 )
                    goto LABEL_152;
                  v61 = EncodeRLE8(v35, v79, v67, v62, v15->bmiHeader.biSizeImage);
                }
                v15->bmiHeader.biSizeImage = v61;
LABEL_152:
                if ( v15->bmiHeader.biSizeImage )
                  goto LABEL_58;
                goto LABEL_153;
              }
            }
            else
            {
              if ( biCompression == 3 )
                v22 = 3;
              if ( a14 >= (unsigned __int64)(4 * v22) + 40 )
              {
                if ( (*(_DWORD *)(v31 + 24) & 0x4000) != 0 )
                {
                  memmove(pxlo, *(const void **)(v31 + 112), 2LL * v22);
                }
                else if ( biCompression == 3 || v68 <= 8 && (v32 = 274, _bittest(&v32, v68)) )
                {
                  XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v66, (struct tagRGBQUAD *)pxlo, 0, v22);
                }
                goto LABEL_51;
              }
            }
          }
        }
      }
LABEL_106:
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v76);
      return 0LL;
  }
  v27 = 0;
  if ( a12 != 1 )
    v27 = a12;
  v22 = 0;
  switch ( biHeight_high )
  {
    case 0x18u:
      v28 = 5;
      goto LABEL_33;
    case 0x10u:
      v28 = 4;
      goto LABEL_33;
    case 0x20u:
      v28 = 6;
LABEL_33:
      v82 = v28;
      goto LABEL_34;
  }
  return 0LL;
}
