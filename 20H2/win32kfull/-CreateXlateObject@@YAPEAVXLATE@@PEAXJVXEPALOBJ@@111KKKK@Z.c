/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A81F0
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C014EA34 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C01146C0 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02BE8E8 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02D9FEC (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

_DWORD *__fastcall CreateXlateObject(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v13; // r15d
  _DWORD *result; // rax
  _DWORD *v15; // r12
  _DWORD *v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rdx
  BOOL v21; // edx
  struct PALETTE *v22; // rbx
  char v23; // cl
  __int64 v24; // r8
  struct _TRANSLATE *v25; // r10
  struct _TRANSLATE *v26; // r11
  int v27; // r13d
  int v28; // eax
  __int64 v29; // rsi
  int v30; // r8d
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // edx
  int v35; // r10d
  int v36; // r9d
  int v37; // edi
  int v38; // ebx
  int v39; // r11d
  int v40; // ecx
  int v41; // eax
  int *v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // r9d
  int v46; // r13d
  unsigned int v47; // ebx
  int *v48; // rcx
  size_t v49; // r8
  unsigned int v50; // ebx
  int v51; // edx
  __int64 v52; // r9
  unsigned int v53; // edi
  int NearestIndexFromColorref; // eax
  unsigned int v55; // esi
  unsigned int v56; // eax
  __int64 v57; // r9
  unsigned int v58; // eax
  _DWORD *v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  int v62; // eax
  unsigned int v63; // eax
  _DWORD *v64; // rcx
  _DWORD *v65; // rsi
  __int64 v66; // r10
  __int64 v67; // r9
  unsigned int *v68; // rcx
  unsigned int j; // eax
  unsigned int k; // edx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rdx
  struct _TRANSLATE *v74; // rdx
  int v75; // eax
  int v76; // r13d
  unsigned int v77; // edx
  __int64 v78; // rax
  int v79; // eax
  __int64 v80; // r13
  __int64 v81; // rdi
  __int64 v82; // r14
  __int64 v83; // rdi
  __int64 v84; // rsi
  struct _TRANSLATE *v85; // r15
  __int64 i; // rsi
  int v87; // eax
  __int64 v88; // rcx
  struct PALETTE *m; // [rsp+28h] [rbp-30h] BYREF
  struct _TRANSLATE *v90; // [rsp+30h] [rbp-28h]
  struct _TRANSLATE *v91; // [rsp+38h] [rbp-20h]
  __int64 v92; // [rsp+40h] [rbp-18h]
  __int64 v93; // [rsp+48h] [rbp-10h]
  char v94; // [rsp+A0h] [rbp+48h]
  __int16 v95; // [rsp+A0h] [rbp+48h]
  __int64 v96; // [rsp+A8h] [rbp+50h] BYREF

  v96 = a4;
  v92 = a3;
  if ( a3 )
    v13 = *(_DWORD *)(a3 + 28);
  else
    v13 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v13 + 88, 1953265735LL, 0LL, a4);
  v15 = result;
  if ( !result )
    return result;
  v16 = result + 21;
  *result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  v17 = 0;
  if ( !v13 )
  {
    v17 = 512;
    v16 = 0LL;
  }
  v18 = 2;
  if ( !v13 )
    v18 = 0;
  v15[1] = v18;
  *((_QWORD *)v15 + 2) = v16;
  v15[19] = v17;
  v15[2] = 0;
  v15[3] = v13;
  v15[9] = -1;
  *((_QWORD *)v15 + 5) = 0LL;
  *((_QWORD *)v15 + 6) = 0LL;
  *((_QWORD *)v15 + 7) = 0LL;
  v19 = ghsemPalette;
  v93 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v15[18] = 0;
  *((_QWORD *)v15 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v15[18] = a2;
      *((_QWORD *)v15 + 8) = a1;
      if ( (a2 & 2) != 0 )
      {
        LOBYTE(v20) = 14;
        v60 = HmgShareLockCheck(a1, v20);
        if ( v60 )
        {
          v15[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v60);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v61 = v15[1] | 0x20;
        v15[1] = v61;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v15[1] = v61 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v15[1] |= 0x20u;
      v15[18] = a2;
    }
  }
  v21 = (v15[1] & 8) != 0;
  LODWORD(m) = v21;
  if ( !v96 || (*(_DWORD *)(v96 + 24) & 0x800) != 0 )
  {
    v22 = (struct PALETTE *)a6;
    v23 = 1;
    v94 = 1;
    if ( !*(_QWORD *)(a6 + 72) )
      v22 = ppalDefault;
    v24 = a10;
    if ( (a10 & 0x2000) == 0 )
    {
      v62 = v15[19] | 0x800;
      v15[19] = v62;
      if ( v96 )
        v15[19] = v62 | 0x1000;
    }
  }
  else
  {
    v22 = (struct PALETTE *)a6;
    v23 = 0;
    v24 = a10;
    v94 = 0;
  }
  *((_QWORD *)v15 + 5) = a3;
  *((_QWORD *)v15 + 6) = v96;
  *((_QWORD *)v15 + 7) = v22;
  v25 = (struct _TRANSLATE *)*((_QWORD *)v22 + 9);
  v26 = (struct _TRANSLATE *)*((_QWORD *)v22 + 10);
  v90 = v25;
  v91 = v26;
  if ( !a3 || (v27 = *(_DWORD *)(a3 + 24), v28 = v27 & 0x800, (v27 & 0x800) != 0) && (v25 == v26 || (v24 & 0x4000) != 0) )
  {
    if ( !v25 )
    {
      v25 = (struct _TRANSLATE *)&defaultTranslate;
      v90 = (struct _TRANSLATE *)&defaultTranslate;
      v26 = (struct _TRANSLATE *)&defaultTranslate;
      v91 = (struct _TRANSLATE *)&defaultTranslate;
      v22 = ppalDefault;
      *((_QWORD *)v15 + 7) = ppalDefault;
    }
    v63 = 0;
    v64 = v15 + 21;
    do
      *v64++ = v63++;
    while ( v63 < 0x100 );
    v65 = (_DWORD *)v96;
    if ( !v96 )
    {
      v15[1] |= 1u;
      goto LABEL_24;
    }
    v75 = *(_DWORD *)(v96 + 24);
    v95 = v75;
    v76 = v75 & 0x8000;
    if ( (v75 & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v96, v22, v24) )
      {
        v15[1] |= 1u;
        goto LABEL_24;
      }
      LOWORD(v75) = v95;
      v25 = v90;
      v26 = v91;
    }
    if ( v76 && a3 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v65, a3, v24) )
      {
        v15[1] |= 1u;
        goto LABEL_24;
      }
      LOWORD(v75) = v95;
      v25 = v90;
      v26 = v91;
    }
    if ( (v75 & 0x800) != 0 )
    {
      if ( v26 == v25 )
      {
        v15[1] |= 1u;
        goto LABEL_24;
      }
      v77 = 0;
      if ( *((_DWORD *)v22 + 7) )
      {
        do
        {
          v78 = v77++;
          v15[*((unsigned __int8 *)v25 + v78 + 4) + 21] = *((unsigned __int8 *)v26 + v78 + 4);
        }
        while ( v77 < *((_DWORD *)v22 + 7) );
        v65 = (_DWORD *)v96;
      }
      v79 = v65[6];
      if ( (v79 & 0x1000) != 0 )
      {
        v15[21] = 0;
        goto LABEL_154;
      }
      if ( (v79 & 0x10000) != 0 )
        goto LABEL_24;
      v15[21] = 0;
      v15[267] = 246;
      v15[22] = 1;
      goto LABEL_153;
    }
    if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v96) )
    {
      if ( v65[7] != 256 )
      {
        memset(v15 + 21, 0, 0x400uLL);
        v65 = (_DWORD *)v96;
      }
      v80 = 0LL;
      v81 = 10LL;
      v82 = 10LL;
      while ( 1 )
      {
        v15[v80 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                          &v96,
                          (unsigned int)v65[24],
                          *(unsigned int *)(logDefaultPal + v80 * 4 + 4));
        v15[v82 + 257] = XEPALOBJ::ulDispatchGFPEFunction(
                           &v96,
                           *(unsigned int *)(v96 + 96),
                           *(unsigned int *)(v82 * 4 + logDefaultPal + 4));
        ++v82;
        ++v80;
        if ( !--v81 )
          break;
        v65 = (_DWORD *)v96;
      }
      v83 = v92;
      v19 = v93;
      if ( (a10 & 0x2000) != 0 )
      {
        v84 = 0LL;
        if ( *(_DWORD *)(v92 + 28) )
        {
          do
          {
            v15[v84 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                              &v96,
                              *(unsigned int *)(v96 + 96),
                              *(unsigned int *)(*(_QWORD *)(v83 + 112) + 4 * v84));
            v84 = (unsigned int)(v84 + 1);
          }
          while ( (unsigned int)v84 < *(_DWORD *)(v83 + 28) );
        }
        v15[19] |= 0x2000u;
      }
      else
      {
        v85 = v90;
        if ( v90 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v22 + 7); v15[v88 + 21] = v87 )
          {
            v87 = XEPALOBJ::ulDispatchGFPEFunction(
                    &v96,
                    *(unsigned int *)(v96 + 96),
                    *(unsigned int *)(*((_QWORD *)v22 + 14) + 4 * i));
            v88 = *((unsigned __int8 *)v85 + i + 4);
            i = (unsigned int)(i + 1);
          }
        }
      }
      goto LABEL_24;
    }
    v49 = 1024LL;
  }
  else
  {
    v29 = v96;
    if ( (v27 & 0x8000) != 0 )
    {
      if ( !v96 )
        goto LABEL_173;
      v24 = *(unsigned int *)(v96 + 24);
      if ( (v24 & 0x8000) != 0 )
      {
        if ( *(_DWORD *)(v96 + 28) == 256 && *(_DWORD *)(a3 + 28) == 256 )
        {
          if ( (v24 & 0x100) != 0 )
          {
            v66 = *(_QWORD *)(v96 + 72);
            if ( v66 )
            {
              LODWORD(v67) = 256;
              while ( 1 )
              {
                v67 = (unsigned int)(v67 - 1);
                if ( *(unsigned __int8 *)(v67 + v66 + 4) != (_DWORD)v67 )
                  break;
                if ( !(_DWORD)v67 )
                  goto LABEL_74;
              }
            }
          }
          else
          {
LABEL_74:
            LODWORD(v57) = 256;
            while ( 1 )
            {
              v57 = (unsigned int)(v57 - 1);
              if ( ((*(_DWORD *)(*(_QWORD *)(v96 + 112) + 4 * v57) ^ *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4 * v57)) & 0xFFFFFF) != 0 )
                break;
              if ( !(_DWORD)v57 )
                goto LABEL_77;
            }
            v21 = (int)m;
            v26 = v91;
          }
          v25 = v90;
        }
        v23 = v94;
      }
      if ( (v24 & 0x800) != 0 && v25 == v26 )
      {
LABEL_173:
        if ( (unsigned int)bEqualRGB_In_Palette(a3, v22, v24) )
        {
LABEL_77:
          v58 = 0;
          v59 = v15 + 21;
          do
            *v59++ = v58++;
          while ( v58 < 0x100 );
          v15[1] |= 1u;
          goto LABEL_24;
        }
        v28 = v27 & 0x800;
        v21 = (int)m;
        v23 = v94;
        v25 = v90;
        v26 = v91;
      }
    }
    if ( v28 && !v29 )
    {
      v68 = v15 + 21;
      for ( j = 0; j < 0x100; ++j )
        *v68++ = j;
      for ( k = 0;
            k < *((_DWORD *)v22 + 7);
            v15[*((unsigned __int8 *)v26 + v71 + 4) + 21] = *((unsigned __int8 *)v25 + v71 + 4) )
      {
        v71 = k++;
      }
      v72 = *(_DWORD *)(a3 + 24);
      if ( (v72 & 0x1000) != 0 )
      {
        v15[21] = 0;
LABEL_154:
        v15[276] = 255;
        goto LABEL_24;
      }
      if ( (v72 & 0x10000) != 0 )
        goto LABEL_24;
      v15[21] = 0;
      v15[267] = 246;
      v15[22] = 1;
LABEL_153:
      v15[268] = 247;
      v15[23] = 2;
      v15[269] = 248;
      v15[24] = 3;
      v15[270] = 249;
      v15[25] = 4;
      v15[271] = 250;
      v15[26] = 5;
      v15[272] = 251;
      v15[27] = 6;
      v15[273] = 252;
      v15[28] = 7;
      v15[274] = 253;
      v15[29] = 8;
      v15[275] = 254;
      v15[30] = 9;
      goto LABEL_154;
    }
    if ( (v27 & 0x2000) != 0 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v96) )
      {
        v15[21] = 0;
        v15[22] = v52;
      }
      else
      {
        v53 = a7;
        if ( v51 )
        {
          v55 = a8;
          v56 = a8;
          v15[21] = a7;
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v29, v22, a7, v52);
          v55 = a8;
          v15[21] = NearestIndexFromColorref;
          v56 = ulGetNearestIndexFromColorref(v96, v22, v55, 1LL);
        }
        v15[22] = v56;
        v15[19] |= 0x100u;
        v15[7] = v53;
        v15[8] = v55;
      }
      goto LABEL_24;
    }
    if ( !v13 )
    {
      if ( v29 && (*(_DWORD *)(v29 + 24) & 0x2000) != 0 )
      {
        v47 = a9;
        v15[21] = ulGetNearestIndexFromColorref(a3, a5, a9, 1LL);
        v15[1] |= 4u;
        v15[6] = v47;
        *((_QWORD *)v15 + 2) = v15 + 21;
      }
      goto LABEL_24;
    }
    if ( !v29 || (*(_DWORD *)(v29 + 24) & 0x2000) == 0 )
    {
      if ( v21 )
      {
        v73 = v13;
        do
        {
          --v73;
          v15[v73 + 21] = *(_DWORD *)(v73 * 4 + *(_QWORD *)(a3 + 112));
          --v13;
        }
        while ( v13 );
      }
      else
      {
        v46 = a10 & 0x2000;
        if ( !v23 || (a10 & 0x2000) != 0 )
        {
          v22 = (struct PALETTE *)v29;
          if ( (a10 & 0x2000) != 0 )
            v15[19] |= 0x2000u;
        }
        for ( m = v22; ; v22 = m )
        {
          --v13;
          v15[v13 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                            &m,
                            *((unsigned int *)v22 + 24),
                            *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v13));
          if ( !v13 )
            break;
        }
        if ( v94 && !v46 )
        {
          v74 = v91;
          if ( !v96 )
            v74 = v90;
          XLATE::vMapNewXlate((XLATE *)v15, v74);
        }
      }
      goto LABEL_24;
    }
    v49 = 4LL * v13;
  }
  memset(v15 + 21, 0, v49);
  v50 = a9;
  v15[(unsigned int)ulGetNearestIndexFromColorref(a3, a5, a9, 1LL) + 21] = 1;
  v15[1] |= 4u;
  v15[6] = v50;
LABEL_24:
  v30 = v15[1];
  if ( (v30 & 9) == 0 )
  {
    v31 = v15[3];
    if ( v31 )
    {
      v43 = *((_QWORD *)v15 + 5);
      if ( !v43 || (v44 = *((_QWORD *)v15 + 6)) == 0 || *(_DWORD *)(v43 + 28) == *(_DWORD *)(v44 + 28) )
      {
        v45 = 0;
        while ( *(_DWORD *)(*((_QWORD *)v15 + 2) + 4LL * v45) == v45 )
        {
          if ( ++v45 >= v31 )
            goto LABEL_38;
        }
      }
    }
    else
    {
      v32 = *((_QWORD *)v15 + 5);
      v33 = *((_QWORD *)v15 + 6);
      if ( v32 && v33 && !*(_DWORD *)(v33 + 28) )
      {
        v34 = *(_DWORD *)(v32 + 24);
        v35 = 65280;
        v36 = 16711680;
        if ( (v34 & 2) != 0 )
        {
          v42 = *(int **)(v32 + 112);
          v38 = *v42;
          v37 = v42[1];
          v39 = v42[2];
        }
        else
        {
          v37 = 65280;
          if ( (v34 & 4) != 0 )
          {
            v38 = 255;
            v39 = 16711680;
          }
          else
          {
            v38 = 16711680;
            v39 = 255;
          }
        }
        v40 = *(_DWORD *)(v33 + 24);
        if ( (v40 & 2) != 0 )
        {
          v48 = *(int **)(v33 + 112);
          v41 = *v48;
          v35 = v48[1];
          v36 = v48[2];
        }
        else if ( (v40 & 4) != 0 )
        {
          v41 = 255;
        }
        else
        {
          v41 = 16711680;
          v36 = 255;
        }
        if ( v38 == v41 && v37 == v35 && v39 == v36 )
LABEL_38:
          v15[1] = v30 | 1;
      }
    }
  }
  if ( v19 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v19);
    GreReleaseSemaphoreInternal(v19);
  }
  return v15;
}
