/*
 * XREFs of _BuildShrinkAAInfo @ 0x1C22ED
 * Callers:
 *     <none>
 * Callees:
 *     __alldvrm @ 0xF91D9 (__alldvrm.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 *     _ULongAdd @ 0x1BAE44 (_ULongAdd.c)
 *     _BuildRepData @ 0x1C211D (_BuildRepData.c)
 *     _ALIGN_MEM @ 0x1C4224 (_ALIGN_MEM.c)
 */

_DWORD *__cdecl BuildShrinkAAInfo(
        int a1,
        __int16 a2,
        int *a3,
        int *a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        int a10)
{
  ULONG v10; // esi
  int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // ebx
  _DWORD *v19; // eax
  _DWORD *v20; // ebx
  _DWORD *v21; // ecx
  int v22; // edx
  int v23; // eax
  _DWORD *v24; // esi
  _DWORD *v25; // edx
  unsigned int v26; // eax
  int v27; // eax
  int v28; // ebx
  int v29; // edi
  unsigned int v30; // eax
  _WORD *v31; // esi
  signed int v32; // ecx
  unsigned int v33; // edx
  int v34; // eax
  __int64 v35; // rax
  __int16 v36; // cx
  bool v37; // zf
  int v38; // eax
  char *v39; // esi
  char *v40; // edx
  int v41; // ecx
  int v42; // eax
  int v43; // edx
  int v44; // eax
  int v46; // [esp+14h] [ebp-64h]
  int v47; // [esp+18h] [ebp-60h]
  int v48; // [esp+1Ch] [ebp-5Ch]
  unsigned int v49; // [esp+20h] [ebp-58h] BYREF
  _WORD *v50; // [esp+24h] [ebp-54h] BYREF
  unsigned int v51; // [esp+28h] [ebp-50h] BYREF
  int v52; // [esp+2Ch] [ebp-4Ch]
  __int64 v53; // [esp+30h] [ebp-48h]
  int v54; // [esp+38h] [ebp-40h]
  _DWORD *v55; // [esp+3Ch] [ebp-3Ch]
  int v56; // [esp+40h] [ebp-38h]
  unsigned int v57; // [esp+44h] [ebp-34h]
  int v58; // [esp+48h] [ebp-30h]
  unsigned int v59; // [esp+4Ch] [ebp-2Ch]
  int v60; // [esp+50h] [ebp-28h]
  signed int v61; // [esp+54h] [ebp-24h]
  unsigned int v62; // [esp+58h] [ebp-20h] BYREF
  unsigned int v63; // [esp+5Ch] [ebp-1Ch] BYREF
  int v64; // [esp+60h] [ebp-18h]
  int v65; // [esp+64h] [ebp-14h]
  ULONG cjMemSize; // [esp+68h] [ebp-10h] BYREF
  int v67; // [esp+6Ch] [ebp-Ch]
  int v68; // [esp+70h] [ebp-8h]
  int v69; // [esp+74h] [ebp-4h]
  int v70; // [esp+84h] [ebp+Ch]
  unsigned int v71; // [esp+98h] [ebp+20h]

  v10 = 0;
  v67 = 0;
  v11 = *a4;
  v64 = 0;
  v48 = 0;
  v12 = *a3;
  v51 = 0;
  v50 = 0;
  v63 = 0;
  v49 = 0;
  v54 = v11;
  v60 = v12;
  v65 = v12;
  if ( v11 < v12 || a7 <= a6 )
    return 0;
  v13 = a7 - a6;
  v14 = v11 - v60;
  v59 = v11 - v60;
  v71 = a7 - a6;
  if ( v60 < 0 )
    v60 = 0;
  if ( v11 > a5 )
    v54 = a5;
  v69 = -1;
  v68 = 0;
  v47 = *a8;
  v15 = v47 - 1;
  v52 = *a8 - 1;
  v16 = *a9;
  v58 = v16;
  if ( v47 - 1 >= v16 )
    return 0;
  if ( v14 <= v13 )
    return 0;
  v62 = 0;
  LODWORD(v53) = v16 - v15;
  if ( (ULongAdd(v16 - v15, 1, (int *)&v62) & 0x80000000) != 0 )
    return 0;
  v17 = v14 * v62;
  if ( !is_mul_ok(v14, v62) )
    return 0;
  v62 *= v14;
  if ( (ULongAdd(v17, v71 - 1, (int *)&v62) & 0x80000000) != 0
    || (ULongAdd(v62 / v71, 4, (int *)&v49) & 0x80000000) != 0 )
  {
    return 0;
  }
  v57 = v49;
  if ( v49 > v14 )
    v57 = v14;
  v49 = 0;
  if ( ALIGN_MEM(&v50, 2048) < 0
    || (ULongAdd(v57, 1, (int *)&v49) & 0x80000000) != 0
    || !is_mul_ok(2u, v49)
    || ALIGN_MEM(&v63, 2 * v49) < 0
    || (ULongAdd(v63, (int)v50, (int *)&v63) & 0x80000000) != 0 )
  {
    return 0;
  }
  v56 = ((unsigned __int64)v71 << 13) / v14;
  if ( (a2 & 0x4A80) != 0 )
  {
    v49 = 0;
    if ( (ULongAdd(v53, 4, (int *)&v49) & 0x80000000) != 0 || !is_mul_ok(2u, v49) || ALIGN_MEM(&v51, 2 * v49) < 0 )
      return 0;
    v10 = v51;
    v18 = (a2 & 0x200) == 0 ? v63 : 0;
  }
  else
  {
    v18 = v63;
  }
  v70 = v18;
  cjMemSize = v10;
  if ( ALIGN_MEM(&a10, a10) < 0
    || (ULongAdd(v10, v18, (int *)&cjMemSize) & 0x80000000) != 0
    || (ULongAdd(cjMemSize, a10, (int *)&cjMemSize) & 0x80000000) != 0
    || (ULongAdd(cjMemSize, 180, (int *)&cjMemSize) & 0x80000000) != 0 )
  {
    return 0;
  }
  v19 = EngAllocMem(1u, cjMemSize, 0x35355448u);
  v20 = v19;
  v55 = v19;
  if ( v19 )
  {
    v21 = v19 + 45;
    if ( a10 )
    {
      v19[7] = v21;
      v21 = (_DWORD *)((char *)v21 + a10);
    }
    if ( v10 )
    {
      v22 = v65;
      v19[9] = v59;
      v19[10] = v71;
      v19[13] = v60;
      v19[14] = v54;
      v19[15] = v47;
      v19[16] = v58;
      v23 = v53 + 1;
      v20[18] = v21;
      v49 = (unsigned int)v21 + v10;
      v20[19] = (char *)v21 + 2 * v23;
      if ( !BuildRepData(v20 + 9, v22, a6) )
      {
LABEL_95:
        EngFreeMem(v20);
        return 0;
      }
      qmemcpy(v20 + 21, v20 + 9, 0x30u);
      qmemcpy(v20 + 33, v20 + 21, 0x30u);
      v21 = (_DWORD *)v49;
    }
    if ( !v70 )
    {
      v29 = v20[14] - 1;
      v44 = v20[13];
      v41 = v20[16] - 1;
      v43 = v20[15];
LABEL_98:
      *a3 = v44;
      *a4 = v29;
      *a8 = v43;
      *a9 = v41;
      *v20 = v29 - v44 + 1;
      v20[1] = v41 - v43 + 1;
      return v20;
    }
    v20[6] = v21;
    v24 = v21 + 512;
    *((_WORD *)v20 + 6) = 1;
    v25 = v21 + 256;
    v26 = v57;
    v20[8] = v21 + 512;
    v51 = (unsigned int)v21 + 2 * v26 + 2048;
    v27 = -v56;
    v49 = v56 + 1;
    v28 = ~v56;
    v29 = v67;
    do
    {
      v27 += v56;
      v28 += v49;
      *v21 = v27;
      v21[256] = v28;
      ++v21;
    }
    while ( v21 < v25 );
    v30 = v59;
    v31 = (_WORD *)v24 - 1;
    v61 = v28;
    v32 = v59;
    v62 = v59;
    cjMemSize = 0;
    v33 = v59;
    v53 = 0LL;
    v20 = v55;
    if ( v59 )
    {
      v46 = -v59;
      v57 = -v59;
      v29 = v67;
      do
      {
        v50 = v31;
        v49 = v33 - 1;
        v62 -= v71;
        v57 += v71;
        v63 = v32;
        if ( (int)v62 > 0 )
        {
          v32 = v71;
          v67 = 0;
          v34 = a6;
          v63 = v71;
        }
        else
        {
          v62 += v30;
          v67 = 0x4000;
          v61 = v57;
          v34 = a6 + 1;
          v57 += v46;
          ++a6;
        }
        v20 = v55;
        if ( v34 < v52 - 1 || v34 > v58 )
        {
          WORD2(v35) = v63;
          v36 = v67;
        }
        else
        {
          v35 = (((__int64)v32 << 13) + v53) / v59;
          v53 = (((__int64)v32 << 13) + v53) % v59;
          WORD2(v35) = v35;
          v63 = v35;
          v36 = v67;
          if ( (int)v35 > v56 )
          {
            v36 = v67 | 0x8000;
            v67 |= 0x8000u;
          }
          cjMemSize += v35;
          if ( (v36 & 0x4000) != 0 )
          {
            v35 = ((__int64)v61 << 13) / v59;
            WORD2(v35) = v63;
            v53 = ((__int64)v61 << 13) % v59;
            cjMemSize = ((__int64)v61 << 13) / v59;
            if ( (int)(v35 + v63) <= v56 )
              v36 = v67 & 0x7FFF;
            else
              v36 = v67 | 0x8000;
            v61 = 0;
          }
          v20 = v55;
          v34 = a6;
        }
        if ( v34 < v52 || v34 > v58 )
        {
          if ( v69 != -1 )
          {
            if ( (unsigned int)++v31 >= v51 )
              v31 = v50;
            v29 = v65;
            *v31 = (0x2000 - cjMemSize) | 0x4000;
            goto LABEL_90;
          }
        }
        else
        {
          if ( v65 >= v60 && v65 < v54 )
          {
            v68 += (v36 & 0x4000) != 0;
            if ( (unsigned int)++v31 >= v51 )
              v31 = v50;
            v37 = v69 == -1;
            *v31 = v36 | WORD2(v35);
            if ( v37 )
            {
              v69 = v65;
              v64 = a6;
              if ( (v36 & 0x4000) != 0 )
              {
                if ( a6 == v52 )
                {
                  *((_WORD *)v20 + 7) = cjMemSize;
                  --v68;
                  *((_WORD *)v20 + 5) = 1;
                  --v31;
                  goto LABEL_67;
                }
                *((_WORD *)v20 + 7) = 0x2000 - WORD2(v35);
                v38 = a6 - 1;
                v64 = a6 - 1;
              }
              else
              {
                *((_WORD *)v20 + 7) = cjMemSize - WORD2(v35);
LABEL_67:
                v38 = v64;
              }
            }
            else
            {
              v38 = a6;
            }
            v29 = v65;
            v48 = v38;
            goto LABEL_70;
          }
          if ( v69 != -1 )
          {
            if ( (unsigned int)++v31 >= v51 )
              v31 = v50;
            if ( (v36 & 0x4000) == 0 )
              WORD2(v35) += 0x2000 - cjMemSize;
            *v31 = v36 | WORD2(v35) | 0x4000;
LABEL_90:
            ++v68;
            v33 = 0;
            goto LABEL_71;
          }
        }
LABEL_70:
        v33 = v49;
LABEL_71:
        ++v65;
        v30 = v59;
        v32 = v62;
      }
      while ( v33 );
    }
    v39 = (char *)(v31 + 1);
    if ( v69 != -1 )
    {
      v40 = (char *)v20[8];
      if ( v39 != v40 )
      {
        if ( v29 >= v54 )
          v29 = v54 - 1;
        if ( v64 < v47 )
        {
          ++*((_WORD *)v20 + 6);
          v64 = v47;
        }
        v41 = v48;
        if ( v48 >= v58 )
          v41 = v58 - 1;
        if ( *((_WORD *)v20 + 5) )
        {
          if ( !*((_WORD *)v20 + 7) )
          {
            ++v69;
            *((_WORD *)v20 + 5) = 0;
          }
        }
        v42 = v39 - v40;
        v43 = v64;
        v20[4] = v42 >> 1;
        v20[5] = v68;
        *(_WORD *)v39 = 0;
        v44 = v69;
        goto LABEL_98;
      }
    }
    goto LABEL_95;
  }
  return v20;
}
