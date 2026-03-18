/*
 * XREFs of ?bSrcCopySRLE4D1@@YGHPAUBLTINFO@@@Z @ 0x233892
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  int v1; // edi
  int v2; // ebx
  char v4; // ch
  char v5; // cl
  unsigned int v6; // eax
  int v7; // edx
  unsigned __int8 *v8; // edx
  unsigned int v9; // edx
  unsigned __int8 *v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned __int8 v14; // cl
  int v15; // eax
  unsigned __int8 *v16; // esi
  int v17; // ebx
  _BYTE *v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  unsigned int v21; // eax
  unsigned __int8 *v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // edx
  char v25; // al
  int v26; // ecx
  int v27; // eax
  int v28; // edx
  int v29; // edx
  bool v30; // cc
  char v31; // ch
  char v32; // cl
  size_t v33; // eax
  unsigned int v34; // ebx
  int v35; // edx
  bool v36; // zf
  unsigned __int8 v37; // ch
  int v38; // [esp+Ch] [ebp-5Ch]
  int v39; // [esp+10h] [ebp-58h]
  unsigned int v40; // [esp+10h] [ebp-58h]
  int v41; // [esp+14h] [ebp-54h]
  int v42; // [esp+18h] [ebp-50h]
  unsigned int v43; // [esp+1Ch] [ebp-4Ch]
  int v44; // [esp+20h] [ebp-48h]
  int v45; // [esp+20h] [ebp-48h]
  unsigned int v46; // [esp+20h] [ebp-48h]
  unsigned int v47; // [esp+24h] [ebp-44h]
  int Val; // [esp+28h] [ebp-40h]
  size_t Size; // [esp+2Ch] [ebp-3Ch]
  unsigned int v50; // [esp+30h] [ebp-38h]
  int v51; // [esp+34h] [ebp-34h]
  int v52; // [esp+38h] [ebp-30h]
  int v53; // [esp+3Ch] [ebp-2Ch]
  unsigned int v54; // [esp+40h] [ebp-28h]
  int v55; // [esp+40h] [ebp-28h]
  int v56; // [esp+40h] [ebp-28h]
  int v57; // [esp+44h] [ebp-24h]
  _BYTE *v58; // [esp+44h] [ebp-24h]
  int v59; // [esp+48h] [ebp-20h]
  int v60; // [esp+4Ch] [ebp-1Ch]
  int v61; // [esp+50h] [ebp-18h]
  int v62; // [esp+54h] [ebp-14h]
  unsigned int v63; // [esp+54h] [ebp-14h]
  unsigned int v64; // [esp+54h] [ebp-14h]
  unsigned __int8 *v65; // [esp+58h] [ebp-10h]
  unsigned __int8 *v66; // [esp+58h] [ebp-10h]
  unsigned __int8 v67; // [esp+5Ch] [ebp-Ch]
  unsigned __int8 v68; // [esp+5Dh] [ebp-Bh]
  char v69; // [esp+62h] [ebp-6h]
  unsigned __int8 v70; // [esp+63h] [ebp-5h]
  char v71; // [esp+64h] [ebp-4h]
  char v72; // [esp+65h] [ebp-3h]
  unsigned __int8 v73; // [esp+66h] [ebp-2h]
  char v74; // [esp+67h] [ebp-1h]

  v42 = *((_DWORD *)a1 + 8);
  v1 = *((_DWORD *)a1 + 2);
  v62 = *((_DWORD *)a1 + 23);
  v2 = *((_DWORD *)a1 + 25);
  v65 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v52 = v1;
  v47 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v41 = *((_DWORD *)a1 + 18);
  v51 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v59 = *((_DWORD *)a1 + 17);
  v61 = *((_DWORD *)a1 + 19);
  v53 = *((_DWORD *)a1 + 20);
  v38 = *((_DWORD *)a1 + 11);
  v60 = *((_DWORD *)a1 + 12);
  if ( v60 < v41 )
    return 1;
  v4 = 0;
  v74 = 0;
  v43 = (unsigned int)v59 >> 3;
  v72 = *((_BYTE *)&EndMask + (v59 & 7));
  v50 = (unsigned int)(v61 - 1) >> 3;
  v5 = ~*((_BYTE *)&EndMask + (v61 & 7));
  v71 = v5;
  if ( v60 >= v53 )
    goto LABEL_11;
  if ( v2 < v59 )
  {
    if ( v2 < v61 )
    {
      v4 = v72 & *(_BYTE *)(v43 + v1);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v2 >= v61 )
  {
LABEL_8:
    v4 = *(_BYTE *)(((unsigned int)(v61 - 1) >> 3) + v1);
    goto LABEL_10;
  }
  v4 = *((_BYTE *)&EndMask + (v2 & 7)) & *(_BYTE *)((v2 >> 3) + v1);
  v5 = v71;
LABEL_10:
  v74 = v4;
LABEL_11:
  v6 = 1;
  v7 = 1;
  do
  {
    *(_DWORD *)(v51 + 4 * v6++) = v7;
    v7 ^= 1u;
  }
  while ( v6 < 0x10 );
  v8 = v65;
  v63 = v62 + 2;
  if ( v63 > v47 )
    return 0;
  while ( 1 )
  {
    v9 = *v8;
    v66 = v65 + 1;
    v57 = v2 >> 3;
    v54 = *v66;
    v10 = v66 + 1;
    v65 = v66 + 1;
    if ( v9 )
    {
      if ( v60 >= v53 || v2 >= v61 || (int)(v9 + v2) <= v59 )
      {
        v2 += v9;
      }
      else
      {
        if ( v2 < v59 )
        {
          v9 += v2 - v59;
          v2 = v59;
          v57 = v59 >> 3;
        }
        if ( (int)(v9 + v2) <= v61 )
        {
          v40 = 0;
        }
        else
        {
          v40 = v2 + v9 - v61;
          v9 = v61 - v2;
        }
        v67 = *(_BYTE *)(v51 + 4 * (v54 >> 4));
        v68 = *(_BYTE *)(v51 + 4 * (v54 & 0xF));
        v31 = byte_25D678[2 * v67 + v68];
        v32 = v2 & 7;
        v73 = v31;
        LOBYTE(Val) = v31;
        v69 = v31;
        v70 = 7 - (v2 & 7);
        v45 = v70;
        if ( v9 >= (unsigned int)v70 + 1 )
          v33 = ((unsigned __int8)v9 - v70 - 1) >> 3;
        else
          v33 = 0;
        v34 = v9 + v2;
        v35 = v9 - 8 * v33;
        if ( v70 < v35 )
        {
          v36 = (v70 & 1) == 0;
          *(_BYTE *)(v57 + v1) = v74 | ((unsigned __int8)(v31 & byte_25D661[v70]) >> v32);
          if ( v36 )
          {
            v37 = 2 * v31;
            if ( v69 < 0 )
              v37 |= 1u;
            LOBYTE(Val) = v37;
            v73 = v37;
          }
          ++v57;
          v4 = 0;
          v46 = -1 - v45 + v35;
        }
        else
        {
          v73 = *((_BYTE *)&EndMask + v35) & v31;
          LOBYTE(Val) = v73;
          v4 = (v73 >> v32) | v74;
          v46 = 0;
        }
        v74 = v4;
        if ( v33 )
        {
          memset((void *)(v1 + v57), Val, v33);
          v4 = 0;
          v74 = 0;
        }
        if ( v46 < 9 )
        {
          v4 |= v73 & *((_BYTE *)&EndMask + v46);
          v74 = v4;
        }
        v2 = v40 + v34;
      }
      v8 = v65;
      goto LABEL_102;
    }
    v11 = v54;
    if ( !v54 )
    {
      v28 = v60;
      if ( v60 >= v53 || (v2 & 7) == 0 )
      {
LABEL_74:
        v1 += v42;
        v29 = v28 - 1;
        v2 = v38;
        v52 = v1;
        v60 = v29;
        if ( v29 < v41 )
        {
          *((_DWORD *)a1 + 21) = v10;
          *((_DWORD *)a1 + 24) = v63;
          *((_DWORD *)a1 + 22) = v1;
          *((_DWORD *)a1 + 27) = v38;
          *((_DWORD *)a1 + 26) = v29;
          return 1;
        }
        v30 = v29 < v53;
        v8 = v65;
        if ( !v30 )
          goto LABEL_102;
LABEL_76:
        v4 = v72 & *(_BYTE *)(v43 + v1);
        goto LABEL_63;
      }
      if ( v2 < v59 )
      {
        if ( v2 < v61 )
          goto LABEL_74;
      }
      else if ( v2 < v61 )
      {
        *(_BYTE *)(v57 + v1) = v4 | *(_BYTE *)(v57 + v1) & ~*((_BYTE *)&EndMask + (v2 & 7));
        v28 = v60;
LABEL_73:
        v10 = v65;
        goto LABEL_74;
      }
      *(_BYTE *)(v50 + v1) = v4 | *(_BYTE *)(v50 + v1) & v71;
      goto LABEL_73;
    }
    if ( v54 == 1 )
      break;
    if ( v54 != 2 )
    {
      v12 = (v54 + 1) >> 1;
      v64 = v12 + v63;
      if ( v64 > v47 )
        return 0;
      Size = ((v54 + 1) & 2) != 0;
      if ( v60 < v53 && v2 < v61 )
      {
        if ( (int)(v54 + v2) > v59 )
        {
          if ( v2 >= v59 )
          {
            v14 = byte_25D66C[(unsigned __int8)(7 - (v2 & 7))];
            v73 = v14;
          }
          else
          {
            v13 = v59 - v2;
            v2 = v59;
            v55 = v54 - v13;
            v57 = v59 >> 3;
            v65 += v13 >> 1;
            v14 = byte_25D66C[(unsigned __int8)(7 - (v59 & 7))];
            v73 = v14;
            if ( (v13 & 1) != 0 )
            {
              v15 = *v65++ & 0xF;
              v1 = v52;
              if ( *(_BYTE *)(v51 + 4 * v15) )
              {
                v4 |= v14;
                v74 = v4;
              }
              v14 >>= 1;
              v2 = v59 + 1;
              v73 = v14;
              v11 = v55 - 1;
            }
            else
            {
              v11 = v55;
            }
          }
          if ( v11 + v2 <= v61 )
          {
            v56 = 0;
          }
          else
          {
            v56 = v2 + v11 - v61;
            v11 = v61 - v2;
          }
          v44 = 0;
          v16 = v65;
          v39 = v11 & 1;
          v17 = v11 + v2;
          v18 = (_BYTE *)(v1 + v57);
          v58 = (_BYTE *)(v1 + v57);
          do
          {
            if ( v14 )
            {
              v19 = v44;
              do
              {
                if ( !v11 )
                  break;
                if ( !v19 )
                {
                  v20 = *v16++;
                  v67 = *(_BYTE *)(v51 + 4 * (v20 >> 4));
                  v14 = v73;
                  v68 = *(_BYTE *)(v51 + 4 * (v20 & 0xF));
                  v19 = v44;
                }
                v4 = v74;
                if ( *(&v67 + v19) )
                {
                  v4 = v14 | v74;
                  v74 |= v14;
                }
                v14 >>= 1;
                v19 ^= 1u;
                --v11;
                v73 = v14;
                v44 = v19;
              }
              while ( v14 );
              v18 = v58;
              v65 = v16;
              if ( v14 )
                continue;
            }
            *v18 = v4;
            v14 = 0x80;
            ++v18;
            v73 = 0x80;
            v4 = 0;
            v58 = v18;
            v74 = 0;
          }
          while ( v11 );
          v1 = v52;
          v21 = v56;
          if ( !v39 )
            v21 = v56 + 1;
          v22 = &v65[v21 >> 1];
          v2 = v56 + v17;
          goto LABEL_49;
        }
        v12 = (v54 + 1) >> 1;
      }
      v2 += v54;
      v22 = &v65[v12];
LABEL_49:
      v23 = Size + v64;
      v8 = &v22[Size];
      v65 = v8;
      goto LABEL_103;
    }
    if ( v60 < v53 && (v2 & 7) != 0 )
    {
      if ( v2 < v59 )
      {
        if ( v2 < v61 )
          goto LABEL_58;
      }
      else if ( v2 < v61 )
      {
        v24 = v2 >> 3;
        v25 = ~*((_BYTE *)&EndMask + (v2 & 7));
LABEL_57:
        *(_BYTE *)(v24 + v1) = v4 | *(_BYTE *)(v24 + v1) & v25;
        goto LABEL_58;
      }
      v24 = (unsigned int)(v61 - 1) >> 3;
      v25 = v5;
      goto LABEL_57;
    }
LABEL_58:
    v63 += 2;
    if ( v63 > v47 )
      return 0;
    v26 = v65[1];
    v2 += *v65;
    v8 = v65 + 2;
    v65 += 2;
    v1 += v26 * v42;
    v27 = v60 - v26;
    v52 = v1;
    v60 = v27;
    if ( v27 < v41 )
    {
      *((_DWORD *)a1 + 24) = v63;
      *((_DWORD *)a1 + 21) = v8;
      *((_DWORD *)a1 + 22) = v1;
      *((_DWORD *)a1 + 27) = v2;
      *((_DWORD *)a1 + 26) = v27;
      return 1;
    }
    if ( v2 < v59 )
    {
      if ( v2 < v61 )
        goto LABEL_76;
LABEL_65:
      v4 = *(_BYTE *)(v50 + v1);
      goto LABEL_63;
    }
    if ( v2 >= v61 )
      goto LABEL_65;
    v4 = *((_BYTE *)&EndMask + (v2 & 7)) & *(_BYTE *)((v2 >> 3) + v1);
LABEL_63:
    v74 = v4;
LABEL_102:
    v23 = v63;
LABEL_103:
    v63 = v23 + 2;
    if ( v23 + 2 > v47 )
      return 0;
    v5 = v71;
  }
  if ( v60 < v53 && (v2 & 7) != 0 )
  {
    if ( v2 < v59 )
    {
      if ( v2 < v61 )
        return 0;
    }
    else if ( v2 < v61 )
    {
      *(_BYTE *)(v57 + v1) = v4 | *(_BYTE *)(v57 + v1) & ~*((_BYTE *)&EndMask + (v2 & 7));
      return 0;
    }
    *(_BYTE *)(v50 + v1) = v4 | *(_BYTE *)(v50 + v1) & v5;
  }
  return 0;
}
