/*
 * XREFs of ?bSrcCopySRLE8D1@@YGHPAUBLTINFO@@@Z @ 0x23244A
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v1; // edi
  int v2; // ecx
  int v3; // ebx
  char v5; // dl
  char v6; // dh
  int v7; // ecx
  int i; // eax
  struct BLTINFO *v9; // esi
  unsigned __int8 *v10; // eax
  unsigned int v11; // ecx
  _BYTE *v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned __int8 *v15; // esi
  int v16; // ecx
  unsigned __int8 v17; // dh
  _BYTE *v18; // eax
  int v19; // eax
  unsigned __int8 *v20; // eax
  unsigned int v21; // ecx
  int v22; // ecx
  char v23; // al
  unsigned __int8 *v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  bool v30; // cc
  char v31; // dh
  unsigned __int8 v32; // al
  unsigned int v33; // ebx
  char v34; // al
  char v35; // al
  char v36; // dl
  unsigned int v37; // ecx
  int Val; // [esp+Ch] [ebp-54h]
  int v39; // [esp+10h] [ebp-50h]
  int v40; // [esp+14h] [ebp-4Ch]
  unsigned int v41; // [esp+14h] [ebp-4Ch]
  int v42; // [esp+18h] [ebp-48h]
  int v43; // [esp+1Ch] [ebp-44h]
  size_t Size; // [esp+20h] [ebp-40h]
  int Sizea; // [esp+20h] [ebp-40h]
  int v46; // [esp+24h] [ebp-3Ch]
  unsigned int v47; // [esp+24h] [ebp-3Ch]
  int v48; // [esp+28h] [ebp-38h]
  int v49; // [esp+2Ch] [ebp-34h]
  unsigned int v50; // [esp+30h] [ebp-30h]
  unsigned int v51; // [esp+34h] [ebp-2Ch]
  int v52; // [esp+38h] [ebp-28h]
  _BYTE *v53; // [esp+38h] [ebp-28h]
  int v54; // [esp+38h] [ebp-28h]
  unsigned int v55; // [esp+3Ch] [ebp-24h]
  int v56; // [esp+40h] [ebp-20h]
  int v57; // [esp+40h] [ebp-20h]
  int v58; // [esp+44h] [ebp-1Ch]
  int v59; // [esp+48h] [ebp-18h]
  int v60; // [esp+4Ch] [ebp-14h]
  int v61; // [esp+50h] [ebp-10h]
  int v62; // [esp+54h] [ebp-Ch]
  unsigned int v63; // [esp+54h] [ebp-Ch]
  unsigned int v64; // [esp+54h] [ebp-Ch]
  unsigned __int8 *v65; // [esp+58h] [ebp-8h]
  unsigned __int8 *v66; // [esp+58h] [ebp-8h]
  char v67; // [esp+5Dh] [ebp-3h]
  unsigned __int8 v68; // [esp+5Eh] [ebp-2h]
  char v69; // [esp+5Fh] [ebp-1h]

  v65 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v1 = *((_DWORD *)a1 + 2);
  v43 = *((_DWORD *)a1 + 8);
  v2 = *((_DWORD *)a1 + 19);
  v3 = *((_DWORD *)a1 + 25);
  v62 = *((_DWORD *)a1 + 23);
  v49 = v1;
  v61 = v2;
  v42 = *((_DWORD *)a1 + 18);
  v50 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v48 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v58 = *((_DWORD *)a1 + 17);
  v60 = *((_DWORD *)a1 + 20);
  v39 = *((_DWORD *)a1 + 11);
  v59 = *((_DWORD *)a1 + 12);
  if ( v59 < v42 )
    return 1;
  v5 = 0;
  v55 = (unsigned int)v58 >> 3;
  v69 = *((_BYTE *)&EndMask + (*((_DWORD *)a1 + 17) & 7));
  v51 = (unsigned int)(v2 - 1) >> 3;
  v6 = ~*((_BYTE *)&EndMask + (*((_DWORD *)a1 + 19) & 7));
  v67 = v6;
  if ( v59 >= v60 )
    goto LABEL_10;
  if ( v3 >= v58 )
  {
    if ( v3 < v2 )
    {
      v5 = *((_BYTE *)&EndMask + (*((_DWORD *)a1 + 25) & 7)) & *(_BYTE *)((*((int *)a1 + 25) >> 3) + v1);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v3 >= v2 )
  {
LABEL_8:
    v5 = *(_BYTE *)(v51 + v1);
    goto LABEL_10;
  }
  v5 = v69 & *(_BYTE *)(v55 + v1);
LABEL_10:
  v7 = 1;
  for ( i = 1; i < 256; ++i )
  {
    *(_DWORD *)(v48 + 4 * i) = v7;
    v7 ^= 1u;
  }
  v9 = a1;
  v63 = v62 + 2;
  if ( v63 > v50 )
    return 0;
  v10 = v65;
  while ( 1 )
  {
    v11 = *v10;
    v12 = v10 + 1;
    v66 = v12 + 1;
    v52 = (unsigned __int8)*v12;
    v56 = v3 >> 3;
    if ( v11 )
    {
      if ( v59 >= v60 || v3 >= v61 || (int)(v11 + v3) <= v58 )
      {
        v3 += v11;
      }
      else
      {
        if ( v3 < v58 )
        {
          v11 += v3 - v58;
          v3 = v58;
          v56 = v58 >> 3;
        }
        if ( (int)(v11 + v3) <= v61 )
        {
          v41 = 0;
        }
        else
        {
          v41 = v3 + v11 - v61;
          v11 = v61 - v3;
        }
        v31 = v3 & 7;
        v32 = 7 - (v3 & 7);
        v33 = v11 + v3;
        v68 = v32;
        v9 = a1;
        v54 = *(_DWORD *)(v48 + 4 * v52);
        if ( v32 < (unsigned __int8)v11 )
        {
          Sizea = ((unsigned __int8)v11 - v32 - 1) >> 3;
          v35 = *((_BYTE *)&unk_25D667 - v32);
          if ( v54 )
            v36 = ~v35 | v5;
          else
            v36 = v35 & v5;
          *(_BYTE *)(v56 + v1) = v36;
          v57 = v56 + 1;
          v37 = -1 - v68 + v11;
          v47 = v37;
          if ( Sizea )
          {
            LOBYTE(Val) = (v54 == 0) - 1;
            memset((void *)(v1 + v57), Val, Sizea);
            v37 = v47 - 8 * Sizea;
          }
          v5 = 0;
          if ( v37 && v54 && v37 < 9 )
            v5 = *((_BYTE *)&EndMask + v37);
        }
        else if ( v11 < 9 )
        {
          v34 = *((_BYTE *)&EndMask + v11) >> v31;
          if ( v54 )
            v5 |= v34;
          else
            v5 &= ~v34;
        }
        v3 = v41 + v33;
      }
      goto LABEL_91;
    }
    v13 = (unsigned __int8)*v12;
    if ( !*v12 )
    {
      v28 = v59;
      v29 = v60;
      if ( v59 >= v60 )
      {
LABEL_64:
        v1 += v43;
        v27 = v28 - 1;
        v3 = v39;
        v49 = v1;
        v59 = v27;
        if ( v27 < v42 )
        {
          *((_DWORD *)v9 + 24) = v63;
          *((_DWORD *)v9 + 21) = v66;
          *((_DWORD *)v9 + 27) = v39;
          goto LABEL_96;
        }
        v30 = v27 < v29;
        v21 = v63;
        if ( v30 )
          v5 = v69 & *(_BYTE *)(v55 + v1);
        goto LABEL_92;
      }
      if ( (v3 & 7) != 0 )
      {
        if ( v3 < v58 )
        {
          if ( v3 < v61 )
            goto LABEL_63;
        }
        else if ( v3 < v61 )
        {
          *(_BYTE *)(v56 + v1) = v5 | *(_BYTE *)(v56 + v1) & ~*((_BYTE *)&EndMask + (v3 & 7));
          v28 = v59;
          goto LABEL_63;
        }
        *(_BYTE *)(v51 + v1) = v5 | *(_BYTE *)(v51 + v1) & v6;
      }
LABEL_63:
      v29 = v60;
      goto LABEL_64;
    }
    if ( v52 == 1 )
      break;
    if ( v52 == 2 )
    {
      if ( v59 < v60 && (v3 & 7) != 0 )
      {
        if ( v3 < v58 )
        {
          if ( v3 >= v61 )
            goto LABEL_45;
        }
        else
        {
          if ( v3 < v61 )
          {
            v22 = v3 >> 3;
            v23 = ~*((_BYTE *)&EndMask + (v3 & 7));
            goto LABEL_46;
          }
LABEL_45:
          v22 = v51;
          v23 = v6;
LABEL_46:
          *(_BYTE *)(v22 + v1) = v5 | *(_BYTE *)(v22 + v1) & v23;
        }
      }
      v63 += 2;
      if ( v63 > v50 )
        return 0;
      v24 = v66 + 1;
      v3 += *v66;
      v66 += 2;
      v25 = *v24;
      v59 -= v25;
      v26 = v25 * v43;
      v27 = v59;
      v1 += v26;
      v49 = v1;
      if ( v59 < v42 )
      {
        *((_DWORD *)v9 + 24) = v63;
        *((_DWORD *)v9 + 21) = v66;
        *((_DWORD *)v9 + 27) = v3;
LABEL_96:
        *((_DWORD *)v9 + 22) = v1;
        *((_DWORD *)v9 + 26) = v27;
        return 1;
      }
      if ( v59 < v60 )
      {
        if ( v3 < v58 )
        {
          if ( v3 >= v61 )
            goto LABEL_54;
          v5 = v69 & *(_BYTE *)(v55 + v1);
        }
        else
        {
          if ( v3 < v61 )
          {
            v5 = *((_BYTE *)&EndMask + (v3 & 7)) & *(_BYTE *)((v3 >> 3) + v1);
            goto LABEL_91;
          }
LABEL_54:
          v5 = *(_BYTE *)(v51 + v1);
        }
      }
LABEL_91:
      v21 = v63;
LABEL_92:
      v10 = v66;
      goto LABEL_93;
    }
    v64 = v52 + v63;
    if ( v64 > v50 )
      return 0;
    Size = v52 & 1;
    if ( v59 >= v60 || v3 >= v61 || v52 + v3 <= v58 )
    {
      v3 += v52;
      v20 = &v66[v52];
    }
    else
    {
      if ( v3 < v58 )
      {
        v14 = v58 - v3;
        v3 = v58;
        v13 = v52 - v14;
        v56 = v58 >> 3;
        v66 += v14;
        v52 -= v14;
      }
      if ( v13 + v3 <= v61 )
      {
        v46 = 0;
      }
      else
      {
        v46 = v3 + v13 - v61;
        v52 = v61 - v3;
      }
      v15 = v66;
      v16 = v52;
      v40 = v52 + v3;
      v17 = byte_25D66C[(unsigned __int8)(7 - (v3 & 7))];
      v18 = (_BYTE *)(v1 + v56);
      v53 = (_BYTE *)(v1 + v56);
      do
      {
        if ( v17 )
        {
          do
          {
            if ( !v16 )
              break;
            v19 = *v15++;
            if ( *(_DWORD *)(v48 + 4 * v19) )
              v5 |= v17;
            --v16;
            v17 >>= 1;
          }
          while ( v17 );
          v18 = v53;
          v66 = v15;
          if ( v17 )
            continue;
        }
        *v18 = v5;
        v17 = 0x80;
        ++v18;
        v5 = 0;
        v53 = v18;
      }
      while ( v16 );
      v3 = v46 + v40;
      v9 = a1;
      v1 = v49;
      v20 = &v66[v46];
    }
    v21 = Size + v64;
    v10 = &v20[Size];
LABEL_93:
    v63 = v21 + 2;
    if ( v21 + 2 > v50 )
      return 0;
    v6 = v67;
  }
  if ( v59 < v60 && (v3 & 7) != 0 )
  {
    if ( v3 < v58 )
    {
      if ( v3 >= v61 )
        goto LABEL_104;
    }
    else
    {
      if ( v3 < v61 )
      {
        *(_BYTE *)(v56 + v1) = v5 | *(_BYTE *)(v56 + v1) & ~*((_BYTE *)&EndMask + (v3 & 7));
        return 0;
      }
LABEL_104:
      *(_BYTE *)(v51 + v1) = v5 | *(_BYTE *)(v51 + v1) & v6;
    }
  }
  return 0;
}
