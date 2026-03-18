/*
 * XREFs of _GreGetCharacterPlacementW@24 @ 0x2221E7
 * Callers:
 *     _NtGdiGetCharacterPlacementW@24 @ 0x21278A (_NtGdiGetCharacterPlacementW@24.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _GreGetGlyphIndicesW@24 @ 0x8564C (_GreGetGlyphIndicesW@24.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 *     ?nCalcJustInArray@@YGKPAPAIGPAXHI@Z @ 0x222085 (-nCalcJustInArray@@YGKPAPAIGPAXHI@Z.c)
 */

int __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned int **a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned int a6)
{
  PATHOBJ *v6; // ebx
  LONG v7; // eax
  LONG cx_low; // ecx
  unsigned int v9; // eax
  int *v10; // edi
  int v11; // eax
  bool v12; // zf
  int v13; // ecx
  size_t v15; // esi
  int *v16; // edx
  int v17; // ebx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int KerningPairs; // eax
  PATHOBJ *v22; // eax
  PATHOBJ *v23; // edx
  unsigned int **v24; // ebx
  ULONG *p_cCurves; // ecx
  unsigned int **v26; // edx
  unsigned int v27; // eax
  unsigned int **v28; // eax
  int v29; // ebx
  unsigned int **v30; // esi
  __int16 v31; // dx
  int *v32; // ecx
  unsigned int v33; // eax
  unsigned int **v34; // eax
  int *v35; // edx
  unsigned int **v36; // ecx
  int v37; // edi
  int v38; // eax
  int *v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // eax
  int v42; // edx
  unsigned int v43; // et2
  unsigned int v44; // edi
  int *v45; // ecx
  _DWORD *v46; // edi
  int v47; // edx
  size_t i; // ecx
  int v49; // eax
  unsigned __int16 *v50; // edi
  _DWORD *v51; // ecx
  size_t j; // eax
  int v53; // [esp+0h] [ebp-70h]
  unsigned int v54; // [esp+4h] [ebp-6Ch]
  void *v55[9]; // [esp+Ch] [ebp-64h] BYREF
  struct tagSIZE v56; // [esp+30h] [ebp-40h] BYREF
  unsigned int v57; // [esp+38h] [ebp-38h]
  int v58; // [esp+3Ch] [ebp-34h]
  int v59; // [esp+40h] [ebp-30h]
  size_t v60; // [esp+44h] [ebp-2Ch]
  int *v61; // [esp+48h] [ebp-28h]
  int v62; // [esp+4Ch] [ebp-24h]
  PATHOBJ *v63; // [esp+50h] [ebp-20h]
  ULONG *v64; // [esp+54h] [ebp-1Ch]
  unsigned int **v65; // [esp+58h] [ebp-18h]
  HDC v66; // [esp+5Ch] [ebp-14h]
  size_t Size; // [esp+60h] [ebp-10h] BYREF
  unsigned int **v68; // [esp+64h] [ebp-Ch]
  PATHOBJ *v69; // [esp+68h] [ebp-8h] BYREF
  int v70; // [esp+6Ch] [ebp-4h]
  unsigned int v71; // [esp+78h] [ebp+8h]
  unsigned int v72; // [esp+78h] [ebp+8h]
  unsigned int v73; // [esp+78h] [ebp+8h]
  unsigned int v74; // [esp+84h] [ebp+14h]

  v68 = a2;
  v6 = 0;
  v70 = 0;
  v62 = 0;
  v56.cy = 0;
  v56.cx = 0;
  v66 = a1;
  Size = (size_t)a3;
  v69 = 0;
  if ( a5 )
  {
    qmemcpy(v55, a5, sizeof(v55));
    if ( a3 > v55[7] )
    {
      a3 = v55[7];
      Size = (size_t)v55[7];
    }
    v9 = a6;
    if ( (a6 & 0x10000) != 0 )
    {
      v9 = a6 | 0x100000;
      a6 |= 0x100000u;
    }
    v10 = (int *)v55[3];
    if ( (v9 & 0x200000) != 0 )
    {
      if ( !v55[3] )
      {
        v13 = 0;
        goto LABEL_16;
      }
      v11 = nCalcJustInArray(1u, &v69, (unsigned int **)v55[3], 1, v55[7], v53, v54);
      v6 = v69;
      v12 = v11 == 0;
      a2 = v68;
      v62 = v11;
      v9 = a6;
      if ( v12 )
      {
        v9 = a6 & 0xFFDFFFFF;
        a6 &= ~0x200000u;
      }
    }
    if ( v10 )
    {
      v13 = 1;
      v70 = 1;
    }
    else
    {
      v13 = v70;
    }
LABEL_16:
    if ( v55[4] )
    {
      v13 += 2;
      v70 = v13;
    }
    v61 = v10;
    if ( v13 == 2 )
    {
      v10 = (int *)v55[4];
      v61 = (int *)v55[4];
    }
    v58 = v9 & 0x100000;
    if ( !GreGetTextExtentExW(
            v66,
            (unsigned __int16 *)a2,
            (unsigned int)a3,
            a4,
            (v9 & 0x100000) != 0 ? &Size : 0,
            v10,
            &v56,
            0) )
    {
      if ( v6 )
        Win32FreePool(v6);
      return 0;
    }
    v15 = Size;
    v60 = Size;
    if ( v10 )
    {
      if ( Size )
      {
        v16 = &v10[Size - 1];
        if ( v16 > v10 )
        {
          v17 = *v16;
          do
          {
            v18 = *(v16 - 1);
            *v16-- = v17 - v18;
            v17 = v18;
          }
          while ( v16 > v10 );
          v6 = v69;
        }
      }
    }
    if ( v58 && !v15 )
    {
      if ( v6 )
        Win32FreePool(v6);
LABEL_115:
      cx_low = LOWORD(v56.cx);
      v7 = v56.cy << 16;
      return cx_low | v7;
    }
    v19 = a6;
    v20 = v70;
    if ( (a6 & 8) != 0 && v70 && v15 >= 2 )
    {
      KerningPairs = GreGetKerningPairs(v66, 0, 0);
      v71 = KerningPairs;
      if ( KerningPairs )
      {
        v59 = 8 * KerningPairs;
        v22 = (PATHOBJ *)PALLOCMEM2(8 * KerningPairs, 1954051143, 1);
        v63 = v22;
        if ( v22 )
        {
          if ( GreGetKerningPairs(v66, v71, (struct _FD_KERNINGPAIR *)v22) != v71 )
          {
            if ( v6 )
              Win32FreePool(v6);
            Win32FreePool(v63);
            return 0;
          }
          v23 = v63;
          if ( v63 < (PATHOBJ *)((char *)v63 + v59) )
          {
            v24 = v68;
            p_cCurves = &v63->cCurves;
            v64 = &v63->cCurves;
            v65 = (unsigned int **)((char *)v68 + 2 * v15 - 2);
            v26 = v65;
            v27 = ((unsigned int)(v59 - 1) >> 3) + 1;
            v59 = v27;
            do
            {
              v57 = *((unsigned __int16 *)p_cCurves - 2);
              v72 = (unsigned int)v24;
              if ( v24 < v26 )
              {
                v28 = v24;
                v29 = 0;
                v30 = v68;
                v31 = v57;
                do
                {
                  if ( v31 == *(_WORD *)v28 )
                  {
                    if ( *(_WORD *)((char *)v30 + v29 + 2) == *((_WORD *)p_cCurves - 1) )
                    {
                      v10[v29 >> 1] += *v64;
                      p_cCurves = v64;
                      v56.cx += *v64;
                    }
                    v28 = (unsigned int **)v72;
                  }
                  v28 = (unsigned int **)((char *)v28 + 2);
                  v29 += 2;
                  v72 = (unsigned int)v28;
                }
                while ( v28 < v65 );
                v27 = v59;
                v24 = v30;
                v26 = v65;
              }
              p_cCurves += 2;
              --v27;
              v64 = p_cCurves;
              v59 = v27;
            }
            while ( v27 );
            v15 = Size;
            v6 = v69;
            v23 = v63;
          }
          Win32FreePool(v23);
          if ( v58 )
          {
            if ( v56.cx > a4 )
            {
              v32 = &v10[v15 - 1];
              do
              {
                if ( !v15 )
                  break;
                v33 = v56.cx - *v32;
                --v15;
                --v32;
                v56.cx = v33;
              }
              while ( v33 > a4 );
              v60 = v15;
            }
            if ( !v15 )
            {
LABEL_71:
              if ( v6 )
                Win32FreePool(v6);
              a5[7] = 0;
              a5[8] = 0;
              return 0;
            }
          }
        }
      }
      v20 = v70;
      v19 = a6;
    }
    if ( (v19 & 0x10000) == 0 || !v20 || !v15 )
    {
LABEL_97:
      v46 = v55[4];
      if ( v70 == 3 )
        memcpy(v55[4], v55[3], 4 * v15);
      if ( v46 )
      {
        v47 = 0;
        for ( i = 0; i < v15; ++i )
        {
          v49 = v46[i];
          v46[i] = v47;
          v47 += v49;
        }
      }
      v50 = (unsigned __int16 *)v68;
      if ( v55[1] )
        memcpy(v55[1], v68, 2 * v15);
      if ( v55[5] )
        memset(v55[5], 1, v15);
      v51 = v55[2];
      if ( v55[2] )
      {
        for ( j = 0; j < v15; ++j )
          v51[j] = j;
      }
      if ( v55[6] && GreGetGlyphIndicesW(v66, v50, v15, (int)v55[6], 0, 0) == -1 )
      {
        v15 = 0;
        v56.cy = 0;
        v56.cx = 0;
      }
      if ( v6 )
        Win32FreePool(v6);
      a5[7] = v15;
      a5[8] = v15;
      goto LABEL_115;
    }
    v34 = v68;
    v35 = &v10[v15 - 1];
    v36 = (unsigned int **)((char *)v68 + 2 * v15 - 2);
    if ( v36 >= v68 )
    {
      do
      {
        if ( *(_WORD *)v36 != 32 )
          break;
        v36 = (unsigned int **)((char *)v36 - 2);
        v56.cx -= *v35--;
        v34 = v68;
        --v15;
      }
      while ( v36 >= v68 );
      v60 = v15;
    }
    if ( !v15 )
      goto LABEL_71;
    v37 = a4 - v56.cx;
    if ( (int)(a4 - v56.cx) >= 0 && v15 >= 2 )
    {
      if ( v62 )
      {
        v38 = v62;
      }
      else
      {
        v38 = nCalcJustInArray(0x20u, &v69, v34, 0, (void *)v15, v53, v54);
        if ( !v38 )
        {
          if ( v37 > 0 )
          {
            v39 = v61;
            do
            {
              v40 = 0;
              do
              {
                ++v39[v40];
                if ( !--v37 )
                  break;
                ++v40;
              }
              while ( v40 < v15 - 1 );
            }
            while ( v37 > 0 );
          }
          v6 = v69;
          goto LABEL_96;
        }
        v6 = v69;
      }
      do
        --v38;
      while ( v38 >= 0 && v15 - 1 < *(&v6->fl + v38) );
      v73 = v38 + 1;
      v43 = v37 % (unsigned int)(v38 + 1);
      v41 = v37 / (unsigned int)(v38 + 1);
      v42 = v43;
      v44 = 0;
      v57 = v41;
      if ( v73 )
      {
        v45 = v61;
        do
        {
          v74 = v41;
          if ( v42 > 0 )
            v74 = v41 + 1;
          v45[*(&v6->fl + v44++)] += v74;
          v41 = v57;
          --v42;
        }
        while ( v44 < v73 );
        v15 = v60;
      }
    }
LABEL_96:
    v56.cx = a4;
    goto LABEL_97;
  }
  if ( !GreGetTextExtentW(a1, (unsigned __int16 *)a2, (unsigned int)a3, &v56, 1) )
    return 0;
  v7 = LOWORD(v56.cx);
  cx_low = v56.cy << 16;
  return cx_low | v7;
}
