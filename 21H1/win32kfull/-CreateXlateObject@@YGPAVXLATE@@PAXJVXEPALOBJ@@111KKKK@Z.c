/*
 * XREFs of ?CreateXlateObject@@YGPAVXLATE@@PAXJVXEPALOBJ@@111KKKK@Z @ 0x5D380
 * Callers:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     ?iCheckPassthroughImage@@YGHAAVDCOBJ@@AAVPDEVOBJ@@HHPAXH2@Z @ 0x1D7C6A (-iCheckPassthroughImage@@YGHAAVDCOBJ@@AAVPDEVOBJ@@HHPAXH2@Z.c)
 * Callees:
 *     ?bEqualRGB_In_Palette@@YGHVXEPALOBJ@@0@Z @ 0x9B3A0 (-bEqualRGB_In_Palette@@YGHVXEPALOBJ@@0@Z.c)
 *     ?bIsMonochrome@XEPALOBJ@@QBEHXZ @ 0xA6110 (-bIsMonochrome@XEPALOBJ@@QBEHXZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vMapNewXlate@XLATE@@QAIXPAU_TRANSLATE@@@Z @ 0x226041 (-vMapNewXlate@XLATE@@QAIXPAU_TRANSLATE@@@Z.c)
 */

_DWORD *__fastcall CreateXlateObject(
        int a1,
        int a2,
        _DWORD *a3,
        struct PALETTE *a4,
        int a5,
        struct PALETTE *a6,
        int i,
        int a8,
        int j,
        int a10)
{
  int v10; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // ebx
  int v13; // edi
  int v14; // edx
  struct PALETTE *v15; // edx
  _DWORD *v16; // eax
  int v17; // ecx
  struct PALETTE *v18; // esi
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // ecx
  int v22; // ecx
  _DWORD *v23; // eax
  int v24; // ebx
  int v25; // ebx
  int v26; // esi
  int v27; // ecx
  bool v28; // zf
  int v29; // ecx
  int v30; // eax
  int *v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // esi
  unsigned int v36; // eax
  _DWORD *v37; // esi
  int v38; // eax
  int v39; // eax
  int v40; // esi
  int v41; // edx
  int v42; // eax
  int NearestIndexFromColorref; // eax
  int v44; // ecx
  int v45; // edx
  int *v46; // eax
  int v47; // esi
  int v48; // eax
  int v49; // edx
  int v50; // eax
  _DWORD *v51; // edx
  unsigned int v52; // eax
  _DWORD *v53; // ecx
  struct PALETTE *v54; // esi
  unsigned int v55; // eax
  _DWORD *v56; // ecx
  unsigned int v57; // eax
  _DWORD *v58; // ecx
  unsigned __int8 *v59; // edx
  int v60; // eax
  int v61; // eax
  unsigned int v62; // ecx
  unsigned int *v63; // edx
  unsigned int v64; // eax
  struct _TRANSLATE *v65; // eax
  int v66; // eax
  unsigned __int8 *v67; // edx
  int v68; // eax
  int v69; // eax
  unsigned int v70; // ecx
  unsigned int *v71; // edx
  unsigned int v72; // eax
  void *v73; // edx
  int v74; // esi
  _DWORD *v75; // edi
  int v76; // eax
  int v77; // ebx
  int v78; // eax
  _DWORD *v79; // eax
  unsigned int k; // esi
  struct PALETTE *v81; // eax
  unsigned int v82; // esi
  int v83; // eax
  int v84; // ecx
  int Size; // [esp+8h] [ebp-30h]
  int v86; // [esp+Ch] [ebp-2Ch]
  int v87; // [esp+10h] [ebp-28h]
  _DWORD *v88; // [esp+14h] [ebp-24h]
  __int16 v90; // [esp+18h] [ebp-20h]
  struct PALETTE *v92; // [esp+1Ch] [ebp-1Ch]
  BOOL v93; // [esp+20h] [ebp-18h]
  int v94; // [esp+24h] [ebp-14h]
  int v95; // [esp+24h] [ebp-14h]
  __int16 v96; // [esp+2Ch] [ebp-Ch]
  int v97; // [esp+2Ch] [ebp-Ch]
  struct _TRANSLATE *v98; // [esp+30h] [ebp-8h]
  struct _TRANSLATE *v99; // [esp+34h] [ebp-4h]

  v96 = a10;
  if ( a3 )
    v10 = a3[5];
  else
    v10 = 256;
  v94 = v10;
  Size = 4 * v10;
  if ( 4 * v10 == -64 )
    return 0;
  v11 = (_DWORD *)AllocThreadBufferWithTag(4 * v10 + 64, 1953265735, 0);
  v12 = v11;
  v88 = v11;
  if ( !v11 )
    return 0;
  *v11 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
  v11[1] = v10 != 0 ? 2 : 0;
  v11[4] = v10 != 0 ? v11 + 15 : 0;
  v11[14] = v10 != 0 ? 0 : 512;
  v11[2] = 0;
  v11[3] = v10;
  v11[8] = -1;
  v11[9] = 0;
  v11[10] = 0;
  v11[11] = 0;
  v13 = _ghsemPalette;
  GreAcquireSemaphore(_ghsemPalette);
  v12[13] = 0;
  v12[12] = 0;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v12[13] = a2;
      v12[12] = a1;
      if ( (a2 & 2) != 0 )
      {
        LOBYTE(v14) = 14;
        v48 = HmgShareLockCheck(a1, v14);
        if ( v48 )
        {
          v12[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v48);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v49 = v12[1] | 0x20;
        v12[1] = v49;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v12[1] = v49 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v12[1] |= 0x20u;
      v12[13] = a2;
    }
  }
  v93 = (v12[1] & 8) != 0;
  if ( !a4 || (*((_DWORD *)a4 + 4) & 0x800) != 0 )
  {
    HIBYTE(a10) = 1;
    if ( !*((_DWORD *)a6 + 13) )
      a6 = ppalDefault;
    if ( (v96 & 0x2000) == 0 )
    {
      v50 = v12[14] | 0x800;
      v12[14] = v50;
      if ( a4 )
        v12[14] = v50 | 0x1000;
    }
  }
  else
  {
    HIBYTE(a10) = 0;
  }
  v12[9] = a3;
  v12[10] = a4;
  v12[11] = a6;
  v15 = a6;
  v92 = a6;
  v99 = (struct _TRANSLATE *)*((_DWORD *)a6 + 13);
  v16 = a3;
  v98 = (struct _TRANSLATE *)*((_DWORD *)a6 + 14);
  if ( a3 )
  {
    v17 = a3[4];
    v90 = v17;
    v86 = v17 & 0x800;
    if ( (v17 & 0x800) == 0 || v99 != v98 && (v96 & 0x4000) == 0 )
    {
      v18 = a4;
      if ( (v17 & 0x8000) != 0 )
      {
        if ( !a4 )
          goto LABEL_161;
        v87 = *((_DWORD *)a4 + 4);
        v13 = _ghsemPalette;
        if ( (v87 & 0x8000) != 0 )
        {
          if ( bEqualRGB_In_Palette(a3, a4) )
            goto LABEL_94;
          v16 = a3;
          v15 = v92;
          LOWORD(v17) = v90;
        }
        if ( (v87 & 0x800) != 0 )
        {
          v13 = _ghsemPalette;
          if ( v99 == v98 )
          {
LABEL_161:
            if ( !bEqualRGB_In_Palette(v16, v15) )
            {
              v16 = a3;
              v15 = v92;
              LOWORD(v17) = v90;
              goto LABEL_15;
            }
LABEL_94:
            v55 = 0;
            v56 = v12 + 15;
            do
              *v56++ = v55++;
            while ( v55 < 0x100 );
            v12[1] |= 1u;
            goto LABEL_21;
          }
        }
      }
LABEL_15:
      if ( v86 && !v18 )
      {
        v51 = v12 + 15;
        v57 = 0;
        v58 = v12 + 15;
        do
          *v58++ = v57++;
        while ( v57 < 0x100 );
        if ( *((_DWORD *)a6 + 5) )
        {
          v59 = (unsigned __int8 *)v98 + 4;
          do
          {
            v60 = *v59++;
            v12[v60 + 15] = v59[v99 - v98 - 1];
          }
          while ( (unsigned int)&v59[-4 - (_DWORD)v98] < *((_DWORD *)a6 + 5) );
          v13 = _ghsemPalette;
          v51 = v12 + 15;
        }
        v61 = a3[4];
        if ( (v61 & 0x1000) == 0 )
        {
          if ( (v61 & 0x10000) == 0 )
          {
            v62 = 0;
            v63 = v12 + 261;
            do
            {
              *(v63 - 246) = v62;
              v64 = v62 + 246;
              ++v62;
              *v63++ = v64;
            }
            while ( v62 < 0xA );
          }
          goto LABEL_21;
        }
LABEL_109:
        *v51 = 0;
        v12[270] = 255;
        goto LABEL_21;
      }
      if ( (v17 & 0x2000) != 0 )
      {
        if ( XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a4) )
        {
          v12[15] = 0;
          v12[16] = 1;
        }
        else
        {
          v42 = i;
          if ( v93 )
          {
            v44 = a8;
            v45 = a8;
            v12[15] = i;
          }
          else
          {
            v12[15] = ulGetNearestIndexFromColorref(v18, v41, i, 1);
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(a4, a6, a8, 1);
            v44 = a8;
            v45 = NearestIndexFromColorref;
            v42 = i;
          }
          v12[16] = v45;
          v12[14] |= 0x100u;
          v12[6] = v42;
          v12[7] = v44;
        }
        goto LABEL_21;
      }
      v19 = v94;
      if ( !v94 )
      {
        if ( v18 && (*((_DWORD *)v18 + 4) & 0x2000) != 0 )
        {
          v47 = j;
          v12[15] = ulGetNearestIndexFromColorref(v16, a5, j, 1);
          v12[1] |= 4u;
          v12[5] = v47;
          v12[4] = v12 + 15;
        }
        goto LABEL_21;
      }
      if ( v18 )
      {
        if ( XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a4) )
        {
          memset(v12 + 15, 0, Size);
          v40 = j;
          v12[ulGetNearestIndexFromColorref(a3, a5, j, 1) + 15] = 1;
          v12[1] |= 4u;
          v12[5] = v40;
          goto LABEL_21;
        }
        v19 = v94;
      }
      if ( !v93 )
      {
        v38 = v96 & 0x2000;
        v97 = v38;
        if ( !HIBYTE(a10) || v38 )
        {
          v15 = v18;
          if ( v38 )
            v12[14] |= 0x2000u;
        }
        for ( i = (int)v15; ; v15 = (struct PALETTE *)i )
        {
          v95 = v19 - 1;
          v39 = XEPALOBJ::ulDispatchGFPEFunction(&i, *((_DWORD *)v15 + 16), *(_DWORD *)(a3[19] + 4 * (v19 - 1)));
          v19 = v95;
          v12[v95 + 15] = v39;
          if ( !v95 )
            break;
        }
        if ( HIBYTE(a10) && !v97 )
        {
          v65 = v98;
          if ( !a4 )
            v65 = v99;
          XLATE::vMapNewXlate((XLATE *)v12, v65);
        }
        goto LABEL_21;
      }
      do
      {
        --v19;
        v12[v19 + 15] = *(_DWORD *)(a3[19] + 4 * v19);
      }
      while ( v19 );
      goto LABEL_155;
    }
  }
  if ( !v99 )
  {
    v98 = (struct _TRANSLATE *)&defaultTranslate;
    v99 = (struct _TRANSLATE *)&defaultTranslate;
    a6 = ppalDefault;
    v12[11] = ppalDefault;
  }
  v51 = v12 + 15;
  v52 = 0;
  v53 = v12 + 15;
  do
    *v53++ = v52++;
  while ( v52 < 0x100 );
  v54 = a4;
  if ( !a4 )
  {
    v12[1] |= 1u;
    goto LABEL_21;
  }
  a8 = *((_DWORD *)a4 + 4);
  v66 = a8 & 0x8000;
  i = v66;
  if ( (a8 & 0x8000) != 0 )
  {
    if ( bEqualRGB_In_Palette(a4, a6) )
    {
      v12[1] |= 1u;
      goto LABEL_21;
    }
    v66 = i;
    v51 = v12 + 15;
  }
  if ( v66 && a3 )
  {
    if ( bEqualRGB_In_Palette(v54, a3) )
    {
      v12[1] |= 1u;
      goto LABEL_21;
    }
    v51 = v12 + 15;
  }
  if ( (a8 & 0x800) != 0 )
  {
    if ( v98 == v99 )
    {
      v12[1] |= 1u;
      goto LABEL_21;
    }
    if ( *((_DWORD *)a6 + 5) )
    {
      v67 = (unsigned __int8 *)v99 + 4;
      do
      {
        v68 = *v67++;
        v12[v68 + 15] = v67[v98 - v99 - 1];
      }
      while ( (unsigned int)&v67[-4 - (_DWORD)v99] < *((_DWORD *)a6 + 5) );
      v54 = a4;
      v51 = v12 + 15;
      v13 = _ghsemPalette;
    }
    v69 = *((_DWORD *)v54 + 4);
    if ( (v69 & 0x1000) == 0 )
    {
      if ( (v69 & 0x10000) == 0 )
      {
        v70 = 0;
        v71 = v12 + 261;
        do
        {
          *(v71 - 246) = v70;
          v72 = v70 + 246;
          ++v70;
          *v71++ = v72;
        }
        while ( v70 < 0xA );
      }
      goto LABEL_21;
    }
    goto LABEL_109;
  }
  if ( XEPALOBJ::bIsMonochrome((XEPALOBJ *)&a4) )
  {
    memset(v73, 0, 0x400u);
    v74 = j;
    v12[ulGetNearestIndexFromColorref(a3, a5, j, 1) + 15] = 1;
    v12[1] |= 4u;
    v12[5] = v74;
    goto LABEL_21;
  }
  if ( *((_DWORD *)v54 + 5) != 256 )
  {
    memset(v73, 0, 0x400u);
    v54 = a4;
  }
  i = 10;
  v75 = v12 + 261;
  a8 = -1000 - (_DWORD)v12;
  v76 = -1044 - (_DWORD)v12;
  v77 = -1000 - (_DWORD)v12;
  for ( j = v76; ; v76 = j )
  {
    *(v75 - 246) = XEPALOBJ::ulDispatchGFPEFunction(
                     &a4,
                     *((_DWORD *)v54 + 16),
                     *(_DWORD *)((char *)v75 + v76 + logDefaultPal + 4));
    v78 = XEPALOBJ::ulDispatchGFPEFunction(&a4, *((_DWORD *)a4 + 16), *(_DWORD *)((char *)v75 + v77 + logDefaultPal));
    v28 = i-- == 1;
    *v75++ = v78;
    if ( v28 )
      break;
    v54 = a4;
  }
  v13 = _ghsemPalette;
  v12 = v88;
  if ( (v96 & 0x2000) != 0 )
  {
    v79 = a3;
    for ( k = 0; k < a3[5]; v79 = a3 )
    {
      v88[k + 15] = XEPALOBJ::ulDispatchGFPEFunction(&a4, *((_DWORD *)a4 + 16), *(_DWORD *)(v79[19] + 4 * k));
      ++k;
    }
    v88[14] |= 0x2000u;
    goto LABEL_21;
  }
  if ( v99 )
  {
    v81 = a6;
    v82 = 0;
    if ( *((_DWORD *)a6 + 5) )
    {
      do
      {
        v83 = XEPALOBJ::ulDispatchGFPEFunction(&a4, *((_DWORD *)a4 + 16), *(_DWORD *)(*((_DWORD *)v81 + 19) + 4 * v82));
        v84 = *((unsigned __int8 *)v99 + v82++ + 4);
        v88[v84 + 15] = v83;
        v81 = a6;
      }
      while ( v82 < *((_DWORD *)a6 + 5) );
LABEL_155:
      v13 = _ghsemPalette;
    }
  }
LABEL_21:
  v20 = v12[1];
  if ( (v20 & 9) == 0 )
  {
    v21 = v12[3];
    if ( v21 )
    {
      v34 = v12[9];
      if ( !v34 || (v35 = v12[10]) == 0 || *(_DWORD *)(v34 + 20) == *(_DWORD *)(v35 + 20) )
      {
        v36 = 0;
        v37 = (_DWORD *)v12[4];
        while ( *v37 == v36 )
        {
          ++v36;
          ++v37;
          if ( v36 >= v21 )
            goto LABEL_35;
        }
      }
    }
    else
    {
      v22 = v12[9];
      v23 = (_DWORD *)v12[10];
      if ( v22 && v23 && !v23[5] )
      {
        v24 = *(_DWORD *)(v22 + 16);
        i = v24;
        if ( (v24 & 2) != 0 )
        {
          v32 = *(int **)(v22 + 76);
          v33 = v32[1];
          i = *v32;
          v26 = v32[2];
          a8 = v33;
          v25 = i;
        }
        else
        {
          a8 = 65280;
          if ( (v24 & 4) != 0 )
          {
            v25 = 255;
            v26 = 16711680;
          }
          else
          {
            v25 = 16711680;
            v26 = 255;
          }
        }
        v27 = v23[4];
        if ( (v27 & 2) != 0 )
        {
          v46 = (int *)v23[19];
          i = *v46;
          v29 = v46[1];
          v30 = v46[2];
        }
        else
        {
          v28 = (v27 & 4) == 0;
          v29 = 65280;
          if ( v28 )
          {
            i = 16711680;
            v30 = 255;
          }
          else
          {
            i = 255;
            v30 = 16711680;
          }
        }
        v28 = v25 == i;
        v12 = v88;
        if ( v28 && a8 == v29 && v26 == v30 )
LABEL_35:
          v12[1] = v20 | 1;
      }
    }
  }
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v13);
    GreReleaseSemaphoreInternal(v13);
  }
  return v12;
}
