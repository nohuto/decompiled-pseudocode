/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C007CD30
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C014C224 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C0113790 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02BFE48 (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02DB48C (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

_DWORD *CreateXlateObject(__int64 a1, int a2, __int64 a3, ...)
{
  unsigned int v6; // r15d
  _DWORD *result; // rax
  _DWORD *v8; // r12
  _DWORD *v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rdx
  BOOL v14; // edx
  struct PALETTE *v15; // rbx
  char v16; // cl
  __int64 v17; // r8
  struct _TRANSLATE *v18; // r10
  struct _TRANSLATE *v19; // r11
  int v20; // r13d
  int v21; // eax
  __int64 v22; // rsi
  int v23; // r8d
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // edx
  int v28; // r10d
  int v29; // r9d
  int v30; // edi
  int v31; // ebx
  int v32; // r11d
  int v33; // ecx
  int v34; // eax
  int *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r9d
  int v39; // r13d
  int v40; // ebx
  int *v41; // rcx
  size_t v42; // r8
  int v43; // ebx
  int v44; // edx
  int v45; // r9d
  int v46; // edi
  int NearestIndexFromColorref; // eax
  unsigned int v48; // esi
  int v49; // eax
  __int64 v50; // r9
  unsigned int v51; // eax
  _DWORD *v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  unsigned int v56; // eax
  _DWORD *v57; // rcx
  _DWORD *v58; // rsi
  __int64 v59; // r10
  __int64 v60; // r9
  unsigned int *v61; // rcx
  unsigned int j; // eax
  unsigned int k; // edx
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rdx
  struct _TRANSLATE *v67; // rdx
  int v68; // eax
  int v69; // r13d
  unsigned int v70; // edx
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // r13
  __int64 v74; // rdi
  __int64 v75; // r14
  __int64 v76; // rdi
  __int64 v77; // rsi
  struct _TRANSLATE *v78; // r15
  __int64 i; // rsi
  int v80; // eax
  __int64 v81; // rcx
  struct PALETTE *m; // [rsp+28h] [rbp-30h] BYREF
  struct _TRANSLATE *v83; // [rsp+30h] [rbp-28h]
  struct _TRANSLATE *v84; // [rsp+38h] [rbp-20h]
  __int64 v85; // [rsp+40h] [rbp-18h]
  __int64 v86; // [rsp+48h] [rbp-10h]
  char v87; // [rsp+A0h] [rbp+48h]
  __int16 v88; // [rsp+A0h] [rbp+48h]
  __int64 v89; // [rsp+A8h] [rbp+50h] BYREF
  va_list va; // [rsp+A8h] [rbp+50h]
  __int64 v91; // [rsp+B0h] [rbp+58h]
  __int64 v92; // [rsp+B8h] [rbp+60h]
  __int64 v93; // [rsp+C0h] [rbp+68h]
  __int64 v94; // [rsp+C8h] [rbp+70h]
  __int64 v95; // [rsp+D0h] [rbp+78h]
  __int64 v96; // [rsp+D8h] [rbp+80h]
  va_list va1; // [rsp+E0h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v89 = va_arg(va1, _QWORD);
  v91 = va_arg(va1, _QWORD);
  v92 = va_arg(va1, _QWORD);
  v93 = va_arg(va1, _QWORD);
  v94 = va_arg(va1, _QWORD);
  v95 = va_arg(va1, _QWORD);
  v96 = va_arg(va1, _QWORD);
  v85 = a3;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 28);
  else
    v6 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v6 + 88, 1953265735LL, 0LL);
  v8 = result;
  if ( !result )
    return result;
  v9 = result + 21;
  *result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  v10 = 0;
  if ( !v6 )
  {
    v10 = 512;
    v9 = 0LL;
  }
  v11 = 2;
  if ( !v6 )
    v11 = 0;
  v8[1] = v11;
  *((_QWORD *)v8 + 2) = v9;
  v8[19] = v10;
  v8[2] = 0;
  v8[3] = v6;
  v8[9] = -1;
  *((_QWORD *)v8 + 5) = 0LL;
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  v12 = ghsemPalette;
  v86 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v8[18] = 0;
  *((_QWORD *)v8 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v8[18] = a2;
      *((_QWORD *)v8 + 8) = a1;
      if ( (a2 & 2) != 0 )
      {
        LOBYTE(v13) = 14;
        v53 = HmgShareLockCheck(a1, v13);
        if ( v53 )
        {
          v8[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v53);
        }
      }
      else if ( (a2 & 1) != 0 )
      {
        v54 = v8[1] | 0x20;
        v8[1] = v54;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v8[1] = v54 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v8[1] |= 0x20u;
      v8[18] = a2;
    }
  }
  v14 = (v8[1] & 8) != 0;
  LODWORD(m) = v14;
  if ( !v89 || (*(_DWORD *)(v89 + 24) & 0x800) != 0 )
  {
    v15 = (struct PALETTE *)v92;
    v16 = 1;
    v87 = 1;
    if ( !*(_QWORD *)(v92 + 72) )
      v15 = ppalDefault;
    v17 = (unsigned int)v96;
    if ( (v96 & 0x2000) == 0 )
    {
      v55 = v8[19] | 0x800;
      v8[19] = v55;
      if ( v89 )
        v8[19] = v55 | 0x1000;
    }
  }
  else
  {
    v15 = (struct PALETTE *)v92;
    v16 = 0;
    v17 = (unsigned int)v96;
    v87 = 0;
  }
  *((_QWORD *)v8 + 5) = a3;
  *((_QWORD *)v8 + 6) = v89;
  *((_QWORD *)v8 + 7) = v15;
  v18 = (struct _TRANSLATE *)*((_QWORD *)v15 + 9);
  v19 = (struct _TRANSLATE *)*((_QWORD *)v15 + 10);
  v83 = v18;
  v84 = v19;
  if ( !a3 || (v20 = *(_DWORD *)(a3 + 24), v21 = v20 & 0x800, (v20 & 0x800) != 0) && (v18 == v19 || (v17 & 0x4000) != 0) )
  {
    if ( !v18 )
    {
      v18 = (struct _TRANSLATE *)&defaultTranslate;
      v83 = (struct _TRANSLATE *)&defaultTranslate;
      v19 = (struct _TRANSLATE *)&defaultTranslate;
      v84 = (struct _TRANSLATE *)&defaultTranslate;
      v15 = ppalDefault;
      *((_QWORD *)v8 + 7) = ppalDefault;
    }
    v56 = 0;
    v57 = v8 + 21;
    do
      *v57++ = v56++;
    while ( v56 < 0x100 );
    v58 = (_DWORD *)v89;
    if ( !v89 )
    {
      v8[1] |= 1u;
      goto LABEL_24;
    }
    v68 = *(_DWORD *)(v89 + 24);
    v88 = v68;
    v69 = v68 & 0x8000;
    if ( (v68 & 0x8000) != 0 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v89, v15, v17) )
      {
        v8[1] |= 1u;
        goto LABEL_24;
      }
      LOWORD(v68) = v88;
      v18 = v83;
      v19 = v84;
    }
    if ( v69 && a3 )
    {
      if ( (unsigned int)bEqualRGB_In_Palette(v58, a3, v17) )
      {
        v8[1] |= 1u;
        goto LABEL_24;
      }
      LOWORD(v68) = v88;
      v18 = v83;
      v19 = v84;
    }
    if ( (v68 & 0x800) != 0 )
    {
      if ( v19 == v18 )
      {
        v8[1] |= 1u;
        goto LABEL_24;
      }
      v70 = 0;
      if ( *((_DWORD *)v15 + 7) )
      {
        do
        {
          v71 = v70++;
          v8[*((unsigned __int8 *)v18 + v71 + 4) + 21] = *((unsigned __int8 *)v19 + v71 + 4);
        }
        while ( v70 < *((_DWORD *)v15 + 7) );
        v58 = (_DWORD *)v89;
      }
      v72 = v58[6];
      if ( (v72 & 0x1000) != 0 )
      {
        v8[21] = 0;
        goto LABEL_154;
      }
      if ( (v72 & 0x10000) != 0 )
        goto LABEL_24;
      v8[21] = 0;
      v8[267] = 246;
      v8[22] = 1;
      goto LABEL_153;
    }
    if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
    {
      if ( v58[7] != 256 )
      {
        memset(v8 + 21, 0, 0x400uLL);
        v58 = (_DWORD *)v89;
      }
      v73 = 0LL;
      v74 = 10LL;
      v75 = 10LL;
      while ( 1 )
      {
        v8[v73 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                         (__int64 *)va,
                         (unsigned int)v58[24],
                         *(unsigned int *)(logDefaultPal + v73 * 4 + 4));
        v8[v75 + 257] = XEPALOBJ::ulDispatchGFPEFunction(
                          (__int64 *)va,
                          *(unsigned int *)(v89 + 96),
                          *(unsigned int *)(v75 * 4 + logDefaultPal + 4));
        ++v75;
        ++v73;
        if ( !--v74 )
          break;
        v58 = (_DWORD *)v89;
      }
      v76 = v85;
      v12 = v86;
      if ( (v96 & 0x2000) != 0 )
      {
        v77 = 0LL;
        if ( *(_DWORD *)(v85 + 28) )
        {
          do
          {
            v8[v77 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                             (__int64 *)va,
                             *(unsigned int *)(v89 + 96),
                             *(unsigned int *)(*(_QWORD *)(v76 + 112) + 4 * v77));
            v77 = (unsigned int)(v77 + 1);
          }
          while ( (unsigned int)v77 < *(_DWORD *)(v76 + 28) );
        }
        v8[19] |= 0x2000u;
      }
      else
      {
        v78 = v83;
        if ( v83 )
        {
          for ( i = 0LL; (unsigned int)i < *((_DWORD *)v15 + 7); v8[v81 + 21] = v80 )
          {
            v80 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va,
                    *(unsigned int *)(v89 + 96),
                    *(unsigned int *)(*((_QWORD *)v15 + 14) + 4 * i));
            v81 = *((unsigned __int8 *)v78 + i + 4);
            i = (unsigned int)(i + 1);
          }
        }
      }
      goto LABEL_24;
    }
    v42 = 1024LL;
  }
  else
  {
    v22 = v89;
    if ( (v20 & 0x8000) != 0 )
    {
      if ( !v89 )
        goto LABEL_173;
      v17 = *(unsigned int *)(v89 + 24);
      if ( (v17 & 0x8000) != 0 )
      {
        if ( *(_DWORD *)(v89 + 28) == 256 && *(_DWORD *)(a3 + 28) == 256 )
        {
          if ( (v17 & 0x100) != 0 )
          {
            v59 = *(_QWORD *)(v89 + 72);
            if ( v59 )
            {
              LODWORD(v60) = 256;
              while ( 1 )
              {
                v60 = (unsigned int)(v60 - 1);
                if ( *(unsigned __int8 *)(v60 + v59 + 4) != (_DWORD)v60 )
                  break;
                if ( !(_DWORD)v60 )
                  goto LABEL_74;
              }
            }
          }
          else
          {
LABEL_74:
            LODWORD(v50) = 256;
            while ( 1 )
            {
              v50 = (unsigned int)(v50 - 1);
              if ( ((*(_DWORD *)(*(_QWORD *)(v89 + 112) + 4 * v50) ^ *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4 * v50)) & 0xFFFFFF) != 0 )
                break;
              if ( !(_DWORD)v50 )
                goto LABEL_77;
            }
            v14 = (int)m;
            v19 = v84;
          }
          v18 = v83;
        }
        v16 = v87;
      }
      if ( (v17 & 0x800) != 0 && v18 == v19 )
      {
LABEL_173:
        if ( (unsigned int)bEqualRGB_In_Palette(a3, v15, v17) )
        {
LABEL_77:
          v51 = 0;
          v52 = v8 + 21;
          do
            *v52++ = v51++;
          while ( v51 < 0x100 );
          v8[1] |= 1u;
          goto LABEL_24;
        }
        v21 = v20 & 0x800;
        v14 = (int)m;
        v16 = v87;
        v18 = v83;
        v19 = v84;
      }
    }
    if ( v21 && !v22 )
    {
      v61 = v8 + 21;
      for ( j = 0; j < 0x100; ++j )
        *v61++ = j;
      for ( k = 0;
            k < *((_DWORD *)v15 + 7);
            v8[*((unsigned __int8 *)v19 + v64 + 4) + 21] = *((unsigned __int8 *)v18 + v64 + 4) )
      {
        v64 = k++;
      }
      v65 = *(_DWORD *)(a3 + 24);
      if ( (v65 & 0x1000) != 0 )
      {
        v8[21] = 0;
LABEL_154:
        v8[276] = 255;
        goto LABEL_24;
      }
      if ( (v65 & 0x10000) != 0 )
        goto LABEL_24;
      v8[21] = 0;
      v8[267] = 246;
      v8[22] = 1;
LABEL_153:
      v8[268] = 247;
      v8[23] = 2;
      v8[269] = 248;
      v8[24] = 3;
      v8[270] = 249;
      v8[25] = 4;
      v8[271] = 250;
      v8[26] = 5;
      v8[272] = 251;
      v8[27] = 6;
      v8[273] = 252;
      v8[28] = 7;
      v8[274] = 253;
      v8[29] = 8;
      v8[275] = 254;
      v8[30] = 9;
      goto LABEL_154;
    }
    if ( (v20 & 0x2000) != 0 )
    {
      if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va) )
      {
        v8[21] = 0;
        v8[22] = v45;
      }
      else
      {
        v46 = v93;
        if ( v44 )
        {
          v48 = v94;
          v49 = v94;
          v8[21] = v93;
        }
        else
        {
          NearestIndexFromColorref = ulGetNearestIndexFromColorref(v22, v15, (unsigned int)v93);
          v48 = v94;
          v8[21] = NearestIndexFromColorref;
          v49 = ulGetNearestIndexFromColorref(v89, v15, v48);
        }
        v8[22] = v49;
        v8[19] |= 0x100u;
        v8[7] = v46;
        v8[8] = v48;
      }
      goto LABEL_24;
    }
    if ( !v6 )
    {
      if ( v22 && (*(_DWORD *)(v22 + 24) & 0x2000) != 0 )
      {
        v40 = v95;
        v8[21] = ulGetNearestIndexFromColorref(a3, v91, (unsigned int)v95);
        v8[1] |= 4u;
        v8[6] = v40;
        *((_QWORD *)v8 + 2) = v8 + 21;
      }
      goto LABEL_24;
    }
    if ( !v22 || (*(_DWORD *)(v22 + 24) & 0x2000) == 0 )
    {
      if ( v14 )
      {
        v66 = v6;
        do
        {
          --v66;
          v8[v66 + 21] = *(_DWORD *)(v66 * 4 + *(_QWORD *)(a3 + 112));
          --v6;
        }
        while ( v6 );
      }
      else
      {
        v39 = v96 & 0x2000;
        if ( !v16 || (v96 & 0x2000) != 0 )
        {
          v15 = (struct PALETTE *)v22;
          if ( (v96 & 0x2000) != 0 )
            v8[19] |= 0x2000u;
        }
        for ( m = v15; ; v15 = m )
        {
          --v6;
          v8[v6 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                          &m,
                          *((unsigned int *)v15 + 24),
                          *(unsigned int *)(*(_QWORD *)(a3 + 112) + 4LL * v6));
          if ( !v6 )
            break;
        }
        if ( v87 && !v39 )
        {
          v67 = v84;
          if ( !v89 )
            v67 = v83;
          XLATE::vMapNewXlate((XLATE *)v8, v67);
        }
      }
      goto LABEL_24;
    }
    v42 = 4LL * v6;
  }
  memset(v8 + 21, 0, v42);
  v43 = v95;
  v8[(unsigned int)ulGetNearestIndexFromColorref(a3, v91, (unsigned int)v95) + 21] = 1;
  v8[1] |= 4u;
  v8[6] = v43;
LABEL_24:
  v23 = v8[1];
  if ( (v23 & 9) == 0 )
  {
    v24 = v8[3];
    if ( v24 )
    {
      v36 = *((_QWORD *)v8 + 5);
      if ( !v36 || (v37 = *((_QWORD *)v8 + 6)) == 0 || *(_DWORD *)(v36 + 28) == *(_DWORD *)(v37 + 28) )
      {
        v38 = 0;
        while ( *(_DWORD *)(*((_QWORD *)v8 + 2) + 4LL * v38) == v38 )
        {
          if ( ++v38 >= v24 )
            goto LABEL_38;
        }
      }
    }
    else
    {
      v25 = *((_QWORD *)v8 + 5);
      v26 = *((_QWORD *)v8 + 6);
      if ( v25 && v26 && !*(_DWORD *)(v26 + 28) )
      {
        v27 = *(_DWORD *)(v25 + 24);
        v28 = 65280;
        v29 = 16711680;
        if ( (v27 & 2) != 0 )
        {
          v35 = *(int **)(v25 + 112);
          v31 = *v35;
          v30 = v35[1];
          v32 = v35[2];
        }
        else
        {
          v30 = 65280;
          if ( (v27 & 4) != 0 )
          {
            v31 = 255;
            v32 = 16711680;
          }
          else
          {
            v31 = 16711680;
            v32 = 255;
          }
        }
        v33 = *(_DWORD *)(v26 + 24);
        if ( (v33 & 2) != 0 )
        {
          v41 = *(int **)(v26 + 112);
          v34 = *v41;
          v28 = v41[1];
          v29 = v41[2];
        }
        else if ( (v33 & 4) != 0 )
        {
          v34 = 255;
        }
        else
        {
          v34 = 16711680;
          v29 = 255;
        }
        if ( v31 == v34 && v30 == v28 && v32 == v29 )
LABEL_38:
          v8[1] = v23 | 1;
      }
    }
  }
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v12);
    GreReleaseSemaphoreInternal(v12);
  }
  return v8;
}
