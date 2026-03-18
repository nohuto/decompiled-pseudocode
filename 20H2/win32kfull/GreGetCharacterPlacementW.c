/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C02BAC10
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C02AD850 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     GreGetGlyphIndicesW @ 0x1C010B4F8 (GreGetGlyphIndicesW.c)
 *     GreGetKerningPairs @ 0x1C0134784 (GreGetKerningPairs.c)
 *     GreGetTextExtentExW @ 0x1C015EFE8 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02BAA74 (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 */

__int64 __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5,
        int a6)
{
  int v6; // r15d
  unsigned int v7; // ebx
  HDC v9; // r10
  unsigned int *v10; // rdi
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  int *v14; // r13
  __int128 v15; // xmm0
  unsigned int v16; // r8d
  int v17; // r12d
  bool v18; // zf
  int v19; // eax
  unsigned int *v20; // rcx
  __int64 v21; // rbx
  int *v22; // rdx
  int v23; // r8d
  int v24; // ecx
  unsigned int KerningPairs; // eax
  __int64 v26; // rsi
  unsigned int *v27; // rax
  unsigned int *v28; // r15
  unsigned __int64 v29; // r9
  unsigned int cx; // esi
  _DWORD *v31; // rcx
  unsigned __int16 *v32; // r10
  __int16 v33; // r11
  unsigned __int16 *i; // r8
  unsigned int v35; // r9d
  unsigned __int16 *v36; // r12
  __int64 v37; // rax
  int *v38; // rdx
  unsigned __int16 *j; // rax
  int v40; // r15d
  int v41; // eax
  unsigned int v42; // ecx
  int *v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  unsigned int v46; // r8d
  signed int v47; // edx
  unsigned int v48; // r10d
  unsigned int *v49; // rcx
  __int64 v50; // r9
  unsigned int v51; // r8d
  __int64 v52; // rax
  int *v53; // r8
  int v54; // ecx
  __int64 v55; // rdx
  int v56; // eax
  _DWORD *v57; // rax
  unsigned int k; // ecx
  LONG cy; // esi
  struct tagSIZE v60; // [rsp+48h] [rbp-59h] BYREF
  unsigned int *v61; // [rsp+50h] [rbp-51h] BYREF
  unsigned int Size; // [rsp+58h] [rbp-49h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-45h]
  int v64; // [rsp+60h] [rbp-41h]
  void *v65[2]; // [rsp+68h] [rbp-39h]
  void *Src[2]; // [rsp+78h] [rbp-29h]
  void *v67[2]; // [rsp+88h] [rbp-19h]
  __m128i v68; // [rsp+98h] [rbp-9h]
  int v71; // [rsp+108h] [rbp+67h]
  unsigned int v72; // [rsp+110h] [rbp+6Fh]

  v72 = a4;
  v6 = 0;
  v61 = 0LL;
  v7 = a3;
  v64 = 0;
  v60 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( !a5 )
  {
    if ( (unsigned int)GreGetTextExtentW(a1, a2, a3, &v60, 1u) )
      return (unsigned int)LOWORD(v60.cx) | (v60.cy << 16);
    return 0LL;
  }
  v12 = *a5;
  *(_OWORD *)Src = a5[1];
  v13 = (__m128i)a5[3];
  v14 = (int *)Src[1];
  *(_OWORD *)v65 = v12;
  v15 = a5[2];
  v68 = v13;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  *(_OWORD *)v67 = v15;
  if ( v7 > v16 )
    v7 = v16;
  v17 = a6 | 0x100000;
  Size = v7;
  if ( (a6 & 0x10000) == 0 )
    v17 = a6;
  if ( (v17 & 0x200000) != 0 )
  {
    v18 = Src[1] == 0LL;
    if ( !Src[1] )
      goto LABEL_13;
    v19 = nCalcJustInArray(&v61, 1u, (char *)Src[1], 1, v16);
    v10 = v61;
    a4 = v72;
    v9 = a1;
    v64 = v19;
    if ( !v19 )
      v17 &= ~0x200000u;
  }
  v18 = v14 == 0LL;
LABEL_13:
  if ( !v18 )
    v6 = 1;
  v71 = v6;
  if ( v67[0] )
  {
    v6 += 2;
    v71 = v6;
  }
  if ( v6 == 2 )
    v14 = (int *)v67[0];
  Size_4 = v17 & 0x100000;
  if ( !(unsigned int)GreGetTextExtentExW(
                        v9,
                        a2,
                        v7,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v17 & 0x100000) != 0)),
                        v14,
                        &v60,
                        0) )
  {
    if ( !v10 )
      return 0LL;
    v20 = v10;
LABEL_22:
    Win32FreePool(v20);
    return 0LL;
  }
  LODWORD(v21) = Size;
  if ( v14 )
  {
    if ( Size )
    {
      v22 = &v14[Size - 1];
      if ( v22 > v14 )
      {
        v23 = *v22;
        do
        {
          v24 = *(v22 - 1);
          *v22-- = v23 - v24;
          v23 = v24;
        }
        while ( v22 > v14 );
      }
    }
  }
  if ( Size_4 && !(_DWORD)v21 )
  {
    if ( v10 )
      Win32FreePool(v10);
    return (unsigned int)LOWORD(v60.cx) | (v60.cy << 16);
  }
  if ( (v17 & 8) != 0
    && v6
    && (unsigned int)v21 >= 2
    && (KerningPairs = GreGetKerningPairs(a1, 0, 0LL), (v26 = KerningPairs) != 0)
    && (v27 = (unsigned int *)PALLOCMEM2(8 * KerningPairs, 1954051143LL, 1), (v28 = v27) != 0LL) )
  {
    if ( (unsigned int)GreGetKerningPairs(a1, v26, (unsigned __int64)v27) != (_DWORD)v26 )
    {
      if ( v10 )
        Win32FreePool(v10);
      v20 = v28;
      goto LABEL_22;
    }
    v29 = (unsigned __int64)&v28[2 * v26];
    cx = v60.cx;
    if ( (unsigned __int64)v28 < v29 )
    {
      v31 = v28 + 1;
      v32 = &a2[(unsigned int)(v21 - 1)];
      do
      {
        v33 = *((_WORD *)v31 - 2);
        for ( i = a2; i < v32; ++i )
        {
          if ( v33 == *i && i[1] == *((_WORD *)v31 - 1) )
          {
            v14[i - a2] += *v31;
            cx += *v31;
            v60.cx = cx;
          }
        }
        v31 += 2;
      }
      while ( (unsigned __int64)(v31 - 1) < v29 );
      v10 = v61;
    }
    Win32FreePool(v28);
    v35 = v72;
    if ( Size_4 )
    {
      while ( cx > v72 )
      {
        if ( !(_DWORD)v21 )
          goto LABEL_67;
        v21 = (unsigned int)(v21 - 1);
        cx -= v14[v21];
        v60.cx = cx;
      }
      if ( !(_DWORD)v21 )
      {
LABEL_67:
        if ( v10 )
          Win32FreePool(v10);
        *((_DWORD *)a5 + 14) = 0;
        *((_DWORD *)a5 + 15) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v60.cx;
    v35 = v72;
  }
  if ( (v17 & 0x10000) == 0 || !v71 )
  {
    v36 = a2;
    goto LABEL_91;
  }
  v36 = a2;
  if ( (_DWORD)v21 )
  {
    v37 = (unsigned int)(v21 - 1);
    v38 = &v14[v37];
    for ( j = &a2[v37]; j >= a2 && *j == 32; --j )
    {
      cx -= *v38;
      LODWORD(v21) = v21 - 1;
      --v38;
    }
    if ( !(_DWORD)v21 )
      goto LABEL_67;
    v40 = v35 - cx;
    if ( (int)(v35 - cx) < 0 || (unsigned int)v21 < 2 )
      goto LABEL_89;
    v41 = v64;
    if ( !v64 )
    {
      v41 = nCalcJustInArray(&v61, 0x20u, (char *)a2, 0, v21);
      if ( !v41 )
      {
        while ( v40 > 0 )
        {
          v42 = 0;
          v43 = v14;
          do
          {
            ++*v43;
            if ( !--v40 )
              break;
            ++v42;
            ++v43;
          }
          while ( v42 < (int)v21 - 1 );
        }
        v10 = v61;
LABEL_89:
        v60.cx = v72;
        goto LABEL_91;
      }
      v10 = v61;
    }
    v44 = v41 - 1;
    v45 = v41 - 1;
    if ( v44 >= 0 )
    {
      do
      {
        if ( (int)v21 - 1 >= v10[v45] )
          break;
        --v44;
        --v45;
      }
      while ( v45 >= 0 );
    }
    v46 = v44 + 1;
    v47 = v40 % (unsigned int)(v44 + 1);
    v48 = v40 / (unsigned int)(v44 + 1);
    if ( v44 != -1 )
    {
      v49 = v10;
      v50 = v46;
      do
      {
        v51 = v48;
        if ( v47 > 0 )
          v51 = v48 + 1;
        v52 = *v49;
        --v47;
        ++v49;
        v14[v52] += v51;
        --v50;
      }
      while ( v50 );
    }
    goto LABEL_89;
  }
LABEL_91:
  if ( v71 == 3 )
    memmove(v67[0], Src[1], 4LL * (unsigned int)v21);
  v53 = (int *)v67[0];
  if ( v67[0] )
  {
    v54 = 0;
    if ( (_DWORD)v21 )
    {
      v55 = (unsigned int)v21;
      do
      {
        v56 = *v53;
        *v53 = v54;
        v54 += v56;
        ++v53;
        --v55;
      }
      while ( v55 );
    }
  }
  if ( v65[1] )
    memmove(v65[1], v36, 2LL * (unsigned int)v21);
  if ( v67[1] )
    memset(v67[1], 1, (unsigned int)v21);
  v57 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v21; ++v57 )
      *v57 = k++;
  }
  if ( v68.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, v36, v21, v68.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v21) = 0;
    cy = 0;
    v60.cx = 0;
  }
  else
  {
    cy = v60.cy;
  }
  if ( v10 )
    Win32FreePool(v10);
  *((_DWORD *)a5 + 14) = v21;
  *((_DWORD *)a5 + 15) = v21;
  return (cy << 16) | (unsigned int)LOWORD(v60.cx);
}
