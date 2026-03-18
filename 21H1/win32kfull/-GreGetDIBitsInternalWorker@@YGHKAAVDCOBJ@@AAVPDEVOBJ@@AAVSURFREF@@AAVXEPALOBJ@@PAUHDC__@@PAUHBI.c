/*
 * XREFs of ?GreGetDIBitsInternalWorker@@YGHKAAVDCOBJ@@AAVPDEVOBJ@@AAVSURFREF@@AAVXEPALOBJ@@PAUHDC__@@PAUHBITMAP__@@IIPAEPAUtagBITMAPINFO@@III@Z @ 0x4B706
 * Callers:
 *     _GreGetDIBitsInternal@36 @ 0x4B3C0 (_GreGetDIBitsInternal@36.c)
 * Callees:
 *     ?bIdenticalFormat@@YGHVXEPALOBJ@@H@Z @ 0x49644 (-bIdenticalFormat@@YGHVXEPALOBJ@@H@Z.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     _EngCopyBits@24 @ 0x519F0 (_EngCopyBits@24.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z @ 0x7B830 (-vFill_rgbquads@XEPALOBJ@@QAEXPAUtagRGBQUAD@@KK@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QAEXXZ @ 0xB7624 (-vInit256Rainbow@XEPALOBJ@@QAEXXZ.c)
 *     ?vInit256Default@XEPALOBJ@@QAEXXZ @ 0xB7702 (-vInit256Default@XEPALOBJ@@QAEXXZ.c)
 *     ?bIsCMYKColor@DC@@QBEHXZ @ 0xC0536 (-bIsCMYKColor@DC@@QBEHXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vFill_triples@XEPALOBJ@@QAEXPAUtagRGBTRIPLE@@KK@Z @ 0x2234CE (-vFill_triples@XEPALOBJ@@QAEXPAUtagRGBTRIPLE@@KK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z @ 0x223520 (-vGetEntriesFrom@XEPALOBJ@@QAEXV1@0PAGK@Z.c)
 *     _EncodeRLE8@20 @ 0x2332AE (_EncodeRLE8@20.c)
 *     _EncodeRLE4@20 @ 0x23486D (_EncodeRLE4@20.c)
 */

int __userpurge GreGetDIBitsInternalWorker@<eax>(
        DC **a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        struct DCOBJ *a4,
        struct PDEVOBJ *a5,
        struct SURFREF *a6,
        struct XEPALOBJ *a7,
        HDC a8,
        HBITMAP a9,
        unsigned int a10,
        unsigned int a11,
        unsigned __int8 *a12,
        struct tagBITMAPINFO *a13,
        unsigned int a14,
        unsigned int a15,
        unsigned int a16)
{
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // edx
  int v20; // esi
  unsigned int v21; // ecx
  int v22; // edx
  int v24; // ecx
  int v25; // edi
  bool v26; // zf
  int IsCMYKColor; // eax
  int v28; // edi
  HBITMAP v29; // eax
  unsigned __int8 *v30; // ecx
  unsigned int v31; // esi
  int v32; // esi
  unsigned int i; // ecx
  unsigned __int16 v34; // dx
  int v35; // eax
  int v36; // edi
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // di
  unsigned int v39; // eax
  XLATEOBJ *v40; // ecx
  struct tagRGBQUAD *v41; // edx
  int v42; // eax
  void *v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  XLATEOBJ *v49; // ecx
  struct tagRGBQUAD *v50; // edx
  unsigned int j; // edx
  unsigned int v52; // edx
  void *v53; // eax
  HDC v54; // edi
  unsigned int v55; // esi
  SURFACE *v56; // edi
  ERECTL *v57; // ecx
  RECTL *v58; // ecx
  SURFOBJ *v59; // eax
  int v60; // eax
  int v61; // esi
  SURFOBJ *v62; // [esp-14h] [ebp-F4h]
  XLATEOBJ *v63; // [esp-Ch] [ebp-ECh]
  RECTL *v64; // [esp-8h] [ebp-E8h]
  int v65; // [esp-4h] [ebp-E4h]
  _DWORD v66[4]; // [esp+10h] [ebp-D0h] BYREF
  POINTL pptlSrc; // [esp+20h] [ebp-C0h] BYREF
  unsigned int v68; // [esp+28h] [ebp-B8h]
  unsigned int v69; // [esp+2Ch] [ebp-B4h]
  HBITMAP v70; // [esp+30h] [ebp-B0h]
  struct DCOBJ *v71; // [esp+34h] [ebp-ACh]
  SURFACE *v72; // [esp+38h] [ebp-A8h] BYREF
  char v73; // [esp+3Ch] [ebp-A4h]
  int v74; // [esp+40h] [ebp-A0h]
  struct DCOBJ *v75; // [esp+44h] [ebp-9Ch]
  int v76; // [esp+48h] [ebp-98h] BYREF
  int v77; // [esp+4Ch] [ebp-94h] BYREF
  int v78; // [esp+50h] [ebp-90h]
  HBITMAP v79; // [esp+54h] [ebp-8Ch]
  int v80; // [esp+58h] [ebp-88h]
  int v81; // [esp+5Ch] [ebp-84h]
  int v82; // [esp+60h] [ebp-80h]
  int v83; // [esp+64h] [ebp-7Ch]
  HDC v84; // [esp+68h] [ebp-78h]
  int v85; // [esp+6Ch] [ebp-74h]
  DC **v86; // [esp+70h] [ebp-70h]
  unsigned int v87; // [esp+74h] [ebp-6Ch]
  _DWORD v88[2]; // [esp+78h] [ebp-68h] BYREF
  unsigned int v89; // [esp+80h] [ebp-60h] BYREF
  struct PDEVOBJ *v90; // [esp+84h] [ebp-5Ch]
  int v91; // [esp+88h] [ebp-58h]
  HDC v92; // [esp+8Ch] [ebp-54h]
  int v93; // [esp+90h] [ebp-50h]
  int v94; // [esp+94h] [ebp-4Ch]
  int v95; // [esp+98h] [ebp-48h]
  HBITMAP v96; // [esp+9Ch] [ebp-44h]
  struct tagRGBQUAD *v97; // [esp+A0h] [ebp-40h]
  unsigned int v98; // [esp+A4h] [ebp-3Ch]
  XLATEOBJ *pxlo; // [esp+A8h] [ebp-38h] BYREF
  int v100; // [esp+ACh] [ebp-34h] BYREF
  char v101; // [esp+B3h] [ebp-2Dh]
  int v102; // [esp+B4h] [ebp-2Ch]
  int v103; // [esp+B8h] [ebp-28h]
  int v104; // [esp+BCh] [ebp-24h]
  HBITMAP v105; // [esp+C0h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+C8h] [ebp-18h]

  v86 = a1;
  v89 = a2;
  v71 = a4;
  v75 = a4;
  v90 = a5;
  v92 = a8;
  v84 = a8;
  v96 = a9;
  v87 = a10;
  v69 = a11;
  v68 = a11;
  v76 = 0;
  v16 = *((_DWORD *)*a1 + 9);
  v17 = *(_DWORD *)a4;
  v18 = *(_DWORD *)(*(_DWORD *)a4 + 88);
  v83 = 1;
  if ( !bIsCompatible(&v76, v18, v17, v16, 1) )
    return 0;
  v100 = v76;
  v77 = 0;
  v80 = 0;
  v82 = 0;
  if ( v89 == 12 )
  {
    v94 = 1;
    v97 = (struct tagRGBQUAD *)(a11 + 12);
    v19 = *(unsigned __int16 *)(a11 + 4);
    v91 = v19;
    v98 = *(unsigned __int16 *)(a11 + 6);
    v85 = v98;
    *(_WORD *)(a11 + 8) = 1;
    v20 = *(unsigned __int16 *)(a11 + 10);
    v93 = v20;
    v21 = ((unsigned int)(v19 * v20 + 31) >> 3) & 0x1FFFFFFC;
    v22 = 0;
    v95 = 0;
    if ( !v91 || !v98 )
      goto LABEL_5;
LABEL_36:
    if ( v22 == 2 || (v101 = 0, v22 == 1) )
      v101 = 1;
    v28 = v100;
    if ( v98 < (unsigned int)v92 )
    {
      v92 = (HDC)v98;
      v84 = (HDC)v98;
      v28 = v100;
    }
    v29 = (HBITMAP)(v98 - (_DWORD)v92);
    if ( v98 - (unsigned int)v92 >= (unsigned int)v96 )
      v29 = v96;
    else
      v96 = (HBITMAP)(v98 - (_DWORD)v92);
    v70 = v29;
    if ( !v101 && (unsigned int)a13 < v21 * (unsigned int)v29 )
      return 0;
    v81 = 0;
    if ( v22 == 3 && a14 < 0x34 )
      return 0;
    switch ( v20 )
    {
      case 1:
        v77 = 1;
        v65 = 2;
        break;
      case 4:
        v77 = 2;
        v65 = 16;
        break;
      case 8:
        v77 = 3;
        v31 = 256;
LABEL_61:
        pxlo = (XLATEOBJ *)v31;
        v30 = a12;
        goto LABEL_62;
      default:
        v30 = a12 != (unsigned __int8 *)1 ? a12 : 0;
        v31 = 0;
        pxlo = 0;
        switch ( v93 )
        {
          case 16:
            v77 = 4;
            break;
          case 24:
            v77 = 5;
            break;
          case 32:
            v77 = 6;
            break;
          default:
            return 0;
        }
LABEL_62:
        v88[1] = 0;
        v88[0] = 0;
        if ( v30 == (unsigned __int8 *)1 )
        {
          if ( a14 < v89 + 2 * v31 )
          {
            EngSetLastError(0x57u);
LABEL_65:
            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v88);
            return 0;
          }
          v89 = _ghsemPalette;
          GreAcquireSemaphore(_ghsemPalette);
          if ( !v28 && v77 == 3 && *(_DWORD *)(*(_DWORD *)v90 + 52) )
          {
            v32 = 0;
            memset(v97, 0, 0x200u);
            for ( i = 0; i < 0x100; ++i )
            {
              v34 = 0;
              v35 = *(_DWORD *)v90;
              v36 = *(_DWORD *)(*(_DWORD *)v90 + 20);
              v94 = 0;
              if ( (_WORD)v36 )
              {
                v94 = *(_DWORD *)(v35 + 52);
                v37 = v36;
                pxlo = (XLATEOBJ *)(unsigned __int16)v36;
                while ( 1 )
                {
                  v38 = v37;
                  v32 = 0;
                  if ( *(unsigned __int8 *)(v34 + v94 + 4) == i )
                    break;
                  ++v34;
                  v37 = (unsigned __int16)pxlo;
                  if ( v34 >= v38 )
                    goto LABEL_76;
                }
                *((_WORD *)&v97->rgbBlue + i) = v34;
              }
LABEL_76:
              ;
            }
            v28 = v100;
          }
          else
          {
            if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v88, 1u, v31, 0, 0, 0, 0, 0x200u, 1) )
            {
              SEMOBJ::vUnlock((SEMOBJ *)&v89);
              goto LABEL_65;
            }
            v32 = v88[0];
            v100 = v88[0];
            v39 = 0;
            v40 = pxlo;
            v41 = v97;
            if ( pxlo )
            {
              do
              {
                *((_WORD *)&v41->rgbBlue + v39) = v39;
                ++v39;
              }
              while ( v39 < (unsigned int)v40 );
            }
            v42 = *(_DWORD *)(*(_DWORD *)a3 + 1112);
            if ( v28 )
              v42 = v28;
            XEPALOBJ::vGetEntriesFrom(&v100, *(_DWORD *)v90, v42, v41, v40);
          }
          SEMOBJ::vUnlock((SEMOBJ *)&v89);
        }
        else
        {
          v43 = *(void **)(*(_DWORD *)v71 + 60);
          if ( v30 )
          {
            if ( (void *)v77 != v43 )
              goto LABEL_65;
            v32 = v28;
          }
          else
          {
            v44 = v77;
            if ( v43 == (void *)v77 && v28 )
            {
              v45 = 1;
              v100 = 1;
              if ( v22 != 3 && (v77 == 4 || v77 == 6) )
              {
                v45 = bIdenticalFormat((void *)v77, v28);
                v100 = v45;
                v44 = v77;
              }
              else if ( v77 == 5 )
              {
                v45 = (*(_BYTE *)(v28 + 16) & 4) == 0 ? v100 : 0;
              }
            }
            else
            {
              v45 = 0;
            }
            if ( v45 )
            {
              v32 = v28;
              v100 = v28;
            }
            else
            {
              v46 = 0;
              if ( v31 )
              {
                v47 = 1;
              }
              else
              {
                LOBYTE(v46) = v44 != 4;
                v47 = ((v46 - 1) & 0xFFFFFFFA) + 8;
              }
              if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)v88, v47, v31, 0, 0x7C00u, 0x3E0u, 0x1Fu, 0x200u, 1) )
                goto LABEL_65;
              v32 = v88[0];
              v100 = v88[0];
              if ( *(_DWORD *)(*(_DWORD *)v75 + 60) == v77 && v77 == 3 )
              {
                v48 = 0;
                v49 = pxlo;
                v50 = v97;
                if ( pxlo )
                {
                  do
                  {
                    *((_WORD *)&v50->rgbBlue + v48) = v48;
                    ++v48;
                  }
                  while ( v48 < (unsigned int)v49 );
                }
                XEPALOBJ::vGetEntriesFrom(&v100, *(_DWORD *)v90, *(_DWORD *)(*(_DWORD *)a3 + 1112), v50, v49);
                XEPALOBJ::vInit256Default((XEPALOBJ *)&v100);
              }
              else
              {
                switch ( v77 )
                {
                  case 1:
                    **(_DWORD **)(v88[0] + 76) = 0;
                    *(_DWORD *)(*(_DWORD *)(v32 + 76) + 4) = 0xFFFFFF;
                    break;
                  case 2:
                    for ( j = 0; j < 0x40; j += 4 )
                      *(_DWORD *)(j + *(_DWORD *)(v32 + 76)) = *(union _PAL_ULONG **)((char *)&aPalVGA + j);
                    break;
                  case 3:
                    XEPALOBJ::vInit256Rainbow((XEPALOBJ *)&v100);
                    break;
                }
              }
            }
            if ( v94 )
            {
              if ( a14 < 3 * (int)&pxlo->flXlate )
                goto LABEL_65;
              if ( v93 != 16 && v93 != 24 && v93 != 32 )
                XEPALOBJ::vFill_triples(
                  (XEPALOBJ *)&v100,
                  (struct tagRGBTRIPLE *)v97,
                  (unsigned int)pxlo,
                  (unsigned int)pxlo);
            }
            else
            {
              if ( v95 == 3 )
                v52 = 3;
              else
                v52 = (unsigned int)pxlo;
              if ( a14 < 4 * v52 + 40 )
                goto LABEL_65;
              if ( (*(_DWORD *)(v32 + 16) & 0x4000) != 0 )
              {
                memcpy(v97, *(const void **)(v32 + 76), 2 * v52);
              }
              else if ( v95 == 3 || v93 == 1 || v93 == 4 || v93 == 8 )
              {
                XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v100, v97, 0, v52);
              }
            }
          }
        }
        pxlo = 0;
        if ( !EXLATEOBJ::bInitXlateObj(
                &pxlo,
                *(_DWORD *)(*((_DWORD *)*v86 + 255) + 264),
                *((_DWORD *)*v86 + 20),
                v28,
                v32,
                *(_DWORD *)v90,
                *(_DWORD *)v90,
                0,
                0xFFFFFF,
                0,
                0) )
          goto LABEL_153;
        if ( !v87 && !v101 )
          goto LABEL_154;
        if ( v101 )
        {
          if ( !v96 )
            v96 = (HBITMAP)v98;
          v53 = 0;
          v54 = v70 != 0 ? v92 : 0;
          v84 = v54;
        }
        else
        {
          v53 = (void *)v87;
          v54 = v92;
        }
        v78 = v91;
        v79 = v96;
        v72 = 0;
        v73 = 0;
        v74 = 0;
        SURFMEM::bCreateDIB((SURFMEM *)&v72, (struct _DEVBITMAPINFO *)&v77, v53, 0, 0, 0, 0, 0, 1, 0, 0);
        if ( !v72 )
          goto LABEL_152;
        v94 = *((_DWORD *)v72 + 11);
        *((_DWORD *)v72 + 7) = *((_DWORD *)*v86 + 9);
        ms_exc.registration.TryLevel = 0;
        memset(*((void **)v72 + 11), 0, *((_DWORD *)v72 + 10));
        ms_exc.registration.TryLevel = -2;
        v55 = v69;
        v102 = 0;
        v103 = 0;
        v104 = v78;
        v105 = v79;
        pptlSrc.x = 0;
        pptlSrc.y = v98 - (_DWORD)v96 - (_DWORD)v54;
        v92 = (HDC)((char *)v54 - (v98 - (_DWORD)v96));
        v66[0] = 0;
        v66[1] = v92;
        v56 = *(SURFACE **)v75;
        v66[2] = *(_DWORD *)(*(_DWORD *)v75 + 32);
        v66[3] = (char *)v92 + *((_DWORD *)v56 + 9);
        ERECTL::operator*=(v66);
        if ( ERECTL::bEmpty(v57) )
        {
LABEL_152:
          SURFMEM::~SURFMEM((SURFMEM *)&v72);
LABEL_153:
          v83 = 0;
LABEL_154:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v88);
          return v83;
        }
        v64 = v58;
        v63 = pxlo;
        v62 = SURFACE::pSurfobj(v56);
        v59 = SURFACE::pSurfobj(v72);
        EngCopyBits(v59, v62, 0, v63, v64, &pptlSrc);
        if ( !v101 )
        {
LABEL_151:
          v61 = (int)v105 - v103;
          SURFMEM::~SURFMEM((SURFMEM *)&v72);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pxlo);
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)v88);
          return v61;
        }
        if ( v95 == 2 )
        {
          v60 = EncodeRLE4(v91, v96, *(_DWORD *)(v55 + 20));
        }
        else
        {
          if ( v95 != 1 )
            goto LABEL_150;
          v60 = EncodeRLE8(v91, v96, *(_DWORD *)(v55 + 20));
        }
        *(_DWORD *)(v55 + 20) = v60;
LABEL_150:
        if ( *(_DWORD *)(v55 + 20) )
          goto LABEL_151;
        goto LABEL_152;
    }
    v31 = v65;
    goto LABEL_61;
  }
  if ( a14 < 0x28 )
    return 0;
  v97 = (struct tagRGBQUAD *)(a11 + 40);
  if ( v89 > 0x28 )
    memset((void *)(a11 + 40), 0, v89 - 40);
  v94 = 0;
  *(_DWORD *)a11 = 40;
  *(_WORD *)(a11 + 12) = 1;
  v93 = *(unsigned __int16 *)(a11 + 14);
  v22 = *(_DWORD *)(a11 + 16);
  v95 = v22;
  v91 = *(_DWORD *)(a11 + 4);
  v24 = v93;
  if ( v91 > 0 )
  {
    v25 = *(_DWORD *)(a11 + 8);
    if ( v25 )
    {
      if ( v25 < 0 )
      {
        v82 = 1;
        if ( v22 && v22 != 3 )
          goto LABEL_5;
        v25 = -v25;
      }
      v85 = v25;
      v98 = v25;
      switch ( v22 )
      {
        case 3:
          if ( v93 == 16 )
            goto LABEL_32;
          v26 = v93 == 32;
          break;
        case 1:
          v26 = v93 == 8;
          break;
        case 2:
          v26 = v93 == 4;
          break;
        case 10:
          IsCMYKColor = DC::bIsCMYKColor(*v86);
          v24 = v93;
          if ( IsCMYKColor )
          {
            v22 = 10;
            *(_DWORD *)(a11 + 16) = 10;
            v95 = 10;
          }
          else
          {
            v22 = v95;
          }
          goto LABEL_32;
        default:
          v22 = 0;
          v95 = 0;
          goto LABEL_31;
      }
      if ( v26 )
        goto LABEL_32;
      v22 = 0;
      v95 = 0;
LABEL_31:
      *(_DWORD *)(a11 + 16) = 0;
LABEL_32:
      v21 = ((unsigned int)(v91 * v24 + 31) >> 3) & 0x1FFFFFFC;
      if ( !v22 || v22 == 3 )
        *(_DWORD *)(a11 + 20) = v98 * v21;
      *(_DWORD *)(a11 + 32) = 0;
      *(_DWORD *)(a11 + 36) = 0;
      v20 = v93;
      goto LABEL_36;
    }
  }
LABEL_5:
  EngSetLastError(0x57u);
  return 0;
}
