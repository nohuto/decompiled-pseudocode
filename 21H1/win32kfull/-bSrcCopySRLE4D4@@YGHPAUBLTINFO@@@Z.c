/*
 * XREFs of ?bSrcCopySRLE4D4@@YGHPAUBLTINFO@@@Z @ 0xB98DC
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall bSrcCopySRLE4D4(struct BLTINFO *a1)
{
  int v1; // ecx
  unsigned __int8 *v2; // edi
  int v3; // ebx
  int v4; // eax
  char v5; // dh
  unsigned int v6; // esi
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // esi
  char v13; // dl
  char v14; // ah
  unsigned int v15; // ebx
  char v16; // dl
  unsigned int v18; // eax
  int v19; // eax
  bool v20; // cc
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // esi
  _BYTE *v24; // ebx
  unsigned __int8 v25; // al
  unsigned int v26; // ecx
  unsigned int v27; // eax
  int v28; // eax
  struct BLTINFO *v29; // esi
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  int v33; // eax
  char v34; // al
  unsigned __int8 v35; // al
  char v36; // dl
  int v37; // eax
  _BYTE *v38; // ebx
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  int v43; // edx
  unsigned int v44; // eax
  char v45; // al
  unsigned int v46; // eax
  int v47; // [esp+Ch] [ebp-54h]
  int Val; // [esp+10h] [ebp-50h]
  int v49; // [esp+14h] [ebp-4Ch]
  int v50; // [esp+18h] [ebp-48h]
  unsigned int v51; // [esp+1Ch] [ebp-44h]
  int v52; // [esp+1Ch] [ebp-44h]
  int v53; // [esp+20h] [ebp-40h]
  size_t Size; // [esp+24h] [ebp-3Ch]
  unsigned int v55; // [esp+28h] [ebp-38h]
  unsigned int v56; // [esp+2Ch] [ebp-34h]
  unsigned int v57; // [esp+30h] [ebp-30h]
  int v58; // [esp+34h] [ebp-2Ch]
  int v59; // [esp+38h] [ebp-28h]
  unsigned int v60; // [esp+38h] [ebp-28h]
  int v61; // [esp+3Ch] [ebp-24h]
  unsigned int v62; // [esp+40h] [ebp-20h]
  int v63; // [esp+44h] [ebp-1Ch]
  unsigned int v64; // [esp+48h] [ebp-18h]
  unsigned int v65; // [esp+48h] [ebp-18h]
  int v66; // [esp+4Ch] [ebp-14h]
  unsigned int v67; // [esp+50h] [ebp-10h]
  unsigned int v68; // [esp+50h] [ebp-10h]
  int v69; // [esp+54h] [ebp-Ch]
  int v70; // [esp+58h] [ebp-8h]
  char v71; // [esp+5Eh] [ebp-2h]
  char v72; // [esp+5Fh] [ebp-1h]
  char v73; // [esp+5Fh] [ebp-1h]

  v70 = *((_DWORD *)a1 + 2);
  v50 = *((_DWORD *)a1 + 8);
  v1 = *((_DWORD *)a1 + 19);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v66 = v1;
  v49 = *((_DWORD *)a1 + 18);
  v55 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v61 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v62 = *((_DWORD *)a1 + 17);
  v58 = *((_DWORD *)a1 + 20);
  v47 = *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 12);
  v63 = v4;
  if ( v4 < v49 )
    return 1;
  v5 = 0;
  v57 = v62 >> 1;
  v6 = (unsigned int)(v1 - 1) >> 1;
  v53 = v1 & 1;
  v7 = v3 >> 1;
  v56 = v6;
  v59 = v3 >> 1;
  if ( v4 >= v58 )
  {
    v10 = *((_DWORD *)a1 + 2);
  }
  else
  {
    v8 = v62 >> 1;
    if ( v7 < v57 || (v8 = v6, v9 = v3 >> 1, v7 > v6) )
      v9 = v8;
    v10 = *((_DWORD *)a1 + 2);
    v5 = *(_BYTE *)(v9 + v70);
  }
  v67 = *((_DWORD *)a1 + 23) + 2;
  v11 = v3 >> 1;
  if ( v67 > v55 )
    return 0;
  while ( 1 )
  {
    v64 = *v2;
    v12 = v2[1];
    v2 += 2;
    v69 = v12;
    if ( v64 )
    {
      if ( v63 >= v58 || v3 >= v66 || (int)(v3 + v64) <= (int)v62 )
      {
        v3 += v64;
      }
      else
      {
        if ( v3 < (int)v62 )
        {
          v11 = v62 >> 1;
          v46 = v62 - v3;
          v3 = v62;
          v64 -= v46;
        }
        if ( (int)(v3 + v64) > v66 )
        {
          v51 = v3 + v64 - v66;
          v64 = v66 - v3;
        }
        else
        {
          v51 = 0;
        }
        v13 = *(_BYTE *)(v61 + 4 * (v12 >> 4));
        v72 = v13;
        v14 = *(_BYTE *)(v61 + 4 * (v12 & 0xF));
        v71 = v14;
        if ( (v3 & 1) != 0 )
        {
          *(_BYTE *)(v11 + v70) = v5 ^ (v5 ^ v13) & 0xF;
          ++v11;
          ++v3;
          --v64;
          v13 = v14;
          v71 = v72;
        }
        v15 = v64 + v3;
        v16 = 16 * v13;
        v5 = v16 | v71 & 0xF;
        v73 = v16;
        LOBYTE(Val) = v5;
        if ( v64 >= 2 )
        {
          memset((void *)(v11 + v70), Val, v64 >> 1);
          v5 = Val;
          v16 = v73;
        }
        if ( (v15 & 1) != 0 )
          v5 = v16 | v5 & 0xF;
        v3 = v51 + v15;
      }
      goto LABEL_22;
    }
    if ( v12 )
      break;
    v29 = a1;
    if ( v63 >= v58 )
      goto LABEL_50;
    if ( v3 < v66 && v3 >= (int)v62 && (v3 & 1) != 0 )
      goto LABEL_97;
    if ( v53 && v3 >= v66 )
    {
      v11 = v56;
LABEL_97:
      v5 ^= (v5 ^ *(_BYTE *)(v11 + v10)) & 0xF;
      v10 = v70;
      *(_BYTE *)(v11 + v70) = v5;
    }
LABEL_50:
    v10 += v50;
    v3 = v47;
    v30 = v63 - 1;
    v70 = v10;
    v63 = v30;
    if ( v30 < v49 )
    {
      *((_DWORD *)a1 + 22) = v10;
      *((_DWORD *)a1 + 24) = v67;
      *((_DWORD *)a1 + 27) = v47;
LABEL_55:
      *((_DWORD *)v29 + 21) = v2;
      *((_DWORD *)v29 + 26) = v63;
      return 1;
    }
    if ( v30 < v58 )
    {
      v31 = v62 >> 1;
LABEL_53:
      v5 = *(_BYTE *)(v31 + v10);
    }
LABEL_23:
    v67 += 2;
    v11 = v3 >> 1;
    v59 = v3 >> 1;
    if ( v67 > v55 )
      return 0;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      v29 = a1;
      if ( v63 >= v58 )
        goto LABEL_83;
      if ( v3 < (int)v62 || v3 >= v66 || (v3 & 1) == 0 )
      {
        if ( !v53 || v3 < v66 )
        {
LABEL_83:
          v41 = v70;
LABEL_84:
          v67 += 2;
          if ( v67 > v55 )
            return 0;
          v42 = v2[1];
          v3 += *v2;
          v2 += 2;
          v43 = v42 * v50 + v41;
          v70 = v43;
          v63 -= v42;
          if ( v63 < v49 )
          {
            *((_DWORD *)a1 + 24) = v67;
            *((_DWORD *)a1 + 22) = v43;
            *((_DWORD *)a1 + 27) = v3;
            goto LABEL_55;
          }
          v44 = v62 >> 1;
          v31 = v3 >> 1;
          if ( v3 >> 1 < v57 || (v44 = v56, v31 > v56) )
            v31 = v44;
          v10 = v43;
          goto LABEL_53;
        }
        v11 = v56;
      }
      v45 = v5 ^ (v5 ^ *(_BYTE *)(v11 + v10)) & 0xF;
      v41 = v70;
      *(_BYTE *)(v11 + v70) = v45;
      goto LABEL_84;
    }
    v18 = v12;
    v68 = ((v12 + 1) >> 1) + v67;
    if ( v68 > v55 )
      return 0;
    v52 = ((v12 + 1) & 2) != 0;
    if ( v63 < v58 && v3 < v66 )
    {
      if ( (int)(v3 + v12) > (int)v62 )
      {
        if ( v3 >= (int)v62 )
          goto LABEL_33;
        v32 = v62 - v3;
        v3 = v62;
        v69 = v12 - v32;
        v59 = v62 >> 1;
        v2 += v32 >> 1;
        if ( (v32 & 1) != 0 )
        {
          v33 = *v2++ & 0xF;
          v34 = *(_BYTE *)(v61 + 4 * v33);
          v11 = v62 >> 1;
          if ( (v62 & 1) != 0 )
          {
            v5 ^= (v5 ^ v34) & 0xF;
            *(_BYTE *)(v57 + v70) = v5;
            v11 = v57 + 1;
            v59 = v57 + 1;
          }
          else
          {
            v5 = v5 & 0xF | (16 * v34);
          }
          v3 = v62 + 1;
          v19 = --v69;
          if ( !v69 )
          {
LABEL_46:
            v67 = v52 + v68;
            v2 += v52;
LABEL_22:
            v10 = v70;
            goto LABEL_23;
          }
        }
        else
        {
          v11 = v62 >> 1;
LABEL_33:
          v19 = v69;
        }
        v20 = v3 + v19 <= v66;
        v21 = v69;
        if ( v20 )
        {
          v65 = 0;
        }
        else
        {
          v65 = v3 + v69 - v66;
          v21 = v66 - v3;
          v69 = v66 - v3;
        }
        if ( v21 )
        {
          Size = v21 + v3;
          if ( (v3 & 1) != 0 )
          {
            v35 = *v2++;
            v36 = *(_BYTE *)(v61 + 4 * (v35 & 0xF));
            v5 ^= (v5 ^ *(_BYTE *)(v61 + 4 * (v35 >> 4))) & 0xF;
            *(_BYTE *)(v59 + v70) = v5;
            v37 = v59 + 1;
            v60 = (unsigned int)(v69 - 1) >> 1;
            if ( v60 )
            {
              v38 = (_BYTE *)(v37 + v70);
              do
              {
                v39 = *v2 & 0xF;
                v40 = *v2++ >> 4;
                v5 = (16 * v36) | *(_BYTE *)(v61 + 4 * v40) & 0xF;
                v36 = *(_BYTE *)(v61 + 4 * v39);
                *v38++ = v5;
                --v60;
              }
              while ( v60 );
            }
            v27 = v65;
            if ( (Size & 1) != 0 )
            {
              v27 = v65 + 1;
              v5 = v5 & 0xF | (16 * v36);
            }
            v26 = v65;
LABEL_43:
            v28 = v27 >> 1;
          }
          else
          {
            v22 = v21 >> 1;
            if ( v22 )
            {
              v23 = v22;
              v24 = (_BYTE *)(v11 + v70);
              do
              {
                v25 = *v2++;
                v5 = *(_BYTE *)(v61 + 4 * (v25 & 0xF)) & 0xF | (16 * *(_BYTE *)(v61 + 4 * (v25 >> 4)));
                *v24++ = v5;
                --v23;
              }
              while ( v23 );
            }
            if ( (Size & 1) == 0 )
            {
              v26 = v65;
              v27 = v65 + 1;
              goto LABEL_43;
            }
            v26 = v65;
            v5 = (16 * *(_BYTE *)(v61 + 4 * (*v2 >> 4))) | v5 & 0xF;
            v28 = (v65 >> 1) + 1;
          }
          v3 = Size;
        }
        else
        {
          v26 = v65;
          v28 = (v65 + 1) >> 1;
        }
        v2 += v28;
        v3 += v26;
        goto LABEL_46;
      }
      v18 = v12;
    }
    v3 += v18;
    v2 += (v12 + 1) >> 1;
    goto LABEL_46;
  }
  if ( v63 < v58 )
  {
    if ( v3 >= (int)v62 && v3 < v66 && (v3 & 1) != 0 )
    {
LABEL_108:
      *(_BYTE *)(v11 + v70) = v5 ^ (v5 ^ *(_BYTE *)(v11 + v10)) & 0xF;
    }
    else if ( v53 && v3 >= v66 )
    {
      v11 = v56;
      goto LABEL_108;
    }
  }
  return 0;
}
