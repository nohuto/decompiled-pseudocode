/*
 * XREFs of ?bSrcCopySRLE8D4@@YGHPAUBLTINFO@@@Z @ 0x232E31
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall bSrcCopySRLE8D4(struct BLTINFO *a1)
{
  int v1; // edi
  int v2; // edx
  int v3; // ebx
  int v4; // eax
  char v6; // cl
  unsigned int v7; // esi
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned __int8 *v10; // eax
  size_t v11; // esi
  unsigned __int8 *v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  char v16; // cl
  unsigned int v17; // ebx
  unsigned int v18; // eax
  _BYTE *v19; // edx
  unsigned int v20; // esi
  unsigned __int8 *v21; // edi
  int v22; // ecx
  int v23; // eax
  char v24; // bl
  char v25; // bl
  unsigned __int8 *v26; // eax
  unsigned __int8 *v27; // eax
  char v28; // cl
  int v29; // ecx
  unsigned __int8 *v30; // edx
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // edx
  size_t v36; // eax
  int v37; // eax
  char v38; // al
  char v39; // cl
  unsigned int v40; // eax
  char v41; // ch
  unsigned int v42; // ebx
  int Val; // [esp+Ch] [ebp-54h]
  unsigned int v44; // [esp+10h] [ebp-50h]
  char v45; // [esp+10h] [ebp-50h]
  int v46; // [esp+14h] [ebp-4Ch]
  int v47; // [esp+18h] [ebp-48h]
  int v48; // [esp+1Ch] [ebp-44h]
  int v49; // [esp+20h] [ebp-40h]
  unsigned int v50; // [esp+24h] [ebp-3Ch]
  unsigned int v51; // [esp+28h] [ebp-38h]
  unsigned int v52; // [esp+2Ch] [ebp-34h]
  int v53; // [esp+30h] [ebp-30h]
  int v54; // [esp+34h] [ebp-2Ch]
  size_t v55; // [esp+34h] [ebp-2Ch]
  int v56; // [esp+38h] [ebp-28h]
  size_t Size; // [esp+3Ch] [ebp-24h]
  size_t Sizea; // [esp+3Ch] [ebp-24h]
  int v59; // [esp+40h] [ebp-20h]
  int v60; // [esp+44h] [ebp-1Ch]
  int v61; // [esp+48h] [ebp-18h]
  int v62; // [esp+4Ch] [ebp-14h]
  int v63; // [esp+50h] [ebp-10h]
  unsigned int v64; // [esp+54h] [ebp-Ch]
  unsigned int v65; // [esp+54h] [ebp-Ch]
  unsigned __int8 *v66; // [esp+58h] [ebp-8h]
  char v67; // [esp+5Eh] [ebp-2h]
  char v68; // [esp+5Fh] [ebp-1h]

  v1 = *((_DWORD *)a1 + 2);
  v48 = *((_DWORD *)a1 + 8);
  v2 = *((_DWORD *)a1 + 19);
  v3 = *((_DWORD *)a1 + 25);
  v56 = v1;
  v63 = v2;
  v47 = *((_DWORD *)a1 + 18);
  v51 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v53 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v59 = *((_DWORD *)a1 + 17);
  v61 = *((_DWORD *)a1 + 20);
  v46 = *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 12);
  v60 = v4;
  if ( v4 < v47 )
    return 1;
  v6 = 0;
  v50 = (unsigned int)v59 >> 1;
  v7 = (unsigned int)(v2 - 1) >> 1;
  v49 = v2 & 1;
  v8 = v3 >> 1;
  v68 = 0;
  v52 = v7;
  if ( v4 < v61 )
  {
    v9 = (unsigned int)v59 >> 1;
    if ( v8 >= v50 )
    {
      v9 = v7;
      if ( v8 <= v7 )
        v9 = v3 >> 1;
    }
    v6 = *(_BYTE *)(v9 + v1);
    v68 = v6;
  }
  v64 = *((_DWORD *)a1 + 23) + 2;
  if ( v64 > v51 )
    return 0;
  v10 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  while ( 1 )
  {
    v11 = *v10;
    v12 = v10 + 1;
    v66 = v12 + 1;
    Size = v11;
    v13 = *v12;
    v62 = v13;
    if ( v11 )
    {
      if ( v60 >= v61 || v3 >= v63 || (int)(v3 + v11) <= v59 )
      {
        v3 += v11;
      }
      else
      {
        v36 = v11;
        if ( v3 < v59 )
        {
          v36 = v3 - v59 + v11;
          v3 = v59;
          Size = v36;
          v8 = v59 >> 1;
        }
        if ( (int)(v3 + v36) <= v63 )
        {
          v55 = 0;
        }
        else
        {
          v55 = v3 + Size - v63;
          Size = v63 - v3;
        }
        v37 = *(_DWORD *)(v53 + 4 * v62);
        v45 = v37;
        if ( (v3 & 1) != 0 )
        {
          v38 = v6 ^ (v6 ^ v37) & 0xF;
          v39 = v45;
          *(_BYTE *)(v8 + v1) = v38;
          ++v8;
          ++v3;
          v40 = Size - 1;
        }
        else
        {
          v39 = v37;
          v40 = Size;
        }
        v41 = 16 * v39;
        v42 = v40 + v3;
        v6 = (16 * v39) | v39 & 0xF;
        v67 = v41;
        v68 = v6;
        LOBYTE(Val) = v6;
        if ( v40 >= 2 )
        {
          memset((void *)(v8 + v1), Val, v40 >> 1);
          v6 = v68;
          v41 = v67;
        }
        if ( (v42 & 1) != 0 )
        {
          v6 = v41 | v6 & 0xF;
          v68 = v6;
        }
        v3 = v55 + v42;
      }
      goto LABEL_80;
    }
    if ( !v13 )
    {
      v34 = v61;
      if ( v60 >= v61 )
      {
LABEL_59:
        v1 += v48;
        v3 = v46;
        v35 = v60 - 1;
        v56 = v1;
        v60 = v35;
        if ( v35 < v47 )
        {
          *((_DWORD *)a1 + 24) = v64;
          *((_DWORD *)a1 + 21) = v66;
          *((_DWORD *)a1 + 22) = v1;
          *((_DWORD *)a1 + 27) = v46;
          *((_DWORD *)a1 + 26) = v35;
          return 1;
        }
        if ( v35 >= v34 )
          goto LABEL_80;
        v32 = (unsigned int)v59 >> 1;
        goto LABEL_49;
      }
      if ( v3 < v59 || v3 >= v63 || (v3 & 1) == 0 )
      {
        if ( !v49 || v3 < v63 )
          goto LABEL_58;
        v8 = v52;
      }
      v6 ^= (v6 ^ *(_BYTE *)(v8 + v1)) & 0xF;
      *(_BYTE *)(v8 + v1) = v6;
      v68 = v6;
LABEL_58:
      v34 = v61;
      goto LABEL_59;
    }
    if ( v13 == 1 )
      break;
    if ( v13 != 2 )
    {
      v65 = v13 + v64;
      v1 = v56;
      if ( v65 > v51 )
        return 0;
      v54 = v13 & 1;
      if ( v60 >= v61 || v3 >= v63 || v3 + v13 <= v59 )
      {
        v3 += v13;
        v27 = &v66[v13];
      }
      else
      {
        if ( v3 < v59 )
        {
          v14 = v59 - v3;
          v3 = v59;
          v62 -= v14;
          v8 = v59 >> 1;
          v66 += v14;
        }
        v15 = v62;
        if ( v3 + v62 <= v63 )
        {
          Sizea = 0;
        }
        else
        {
          Sizea = v3 + v62 - v63;
          v15 = v63 - v3;
          v1 = v56;
          v62 = v63 - v3;
        }
        if ( (v3 & 1) != 0 )
        {
          v16 = (v6 ^ *(_BYTE *)(v53 + 4 * *v66++)) & 0xF ^ v6;
          ++v3;
          *(_BYTE *)(v8 + v1) = v16;
          ++v8;
          v68 = v16;
          v15 = v62 - 1;
        }
        v17 = v15 + v3;
        v18 = v15 >> 1;
        v44 = v17;
        if ( v18 )
        {
          v19 = (_BYTE *)(v1 + v8);
          v20 = v18;
          v21 = v66;
          do
          {
            v22 = v53;
            v23 = *v21;
            v24 = *(_BYTE *)(v53 + 4 * v21[1]) & 0xF;
            v21 += 2;
            v25 = (16 * *(_BYTE *)(v53 + 4 * v23)) | v24;
            *v19++ = v25;
            v68 = v25;
            --v20;
          }
          while ( v20 );
          v17 = v44;
          v66 = v21;
          v1 = v56;
        }
        else
        {
          v22 = v53;
        }
        v26 = v66;
        if ( (v17 & 1) != 0 )
        {
          v68 = (16 * *(_BYTE *)(v22 + 4 * *v66)) | v68 & 0xF;
          v26 = v66 + 1;
        }
        v27 = &v26[Sizea];
        v3 = Sizea + v17;
      }
      v64 = v54 + v65;
      v10 = &v27[v54];
      v6 = v68;
      goto LABEL_81;
    }
    if ( v60 >= v61 )
      goto LABEL_43;
    if ( v3 < v59 || v3 >= v63 || (v3 & 1) == 0 )
    {
      if ( !v49 || v3 < v63 )
        goto LABEL_43;
      v8 = v52;
    }
    v28 = (v6 ^ *(_BYTE *)(v8 + v1)) & 0xF ^ v6;
    *(_BYTE *)(v8 + v1) = v28;
    v68 = v28;
LABEL_43:
    v64 += 2;
    if ( v64 > v51 )
      return 0;
    v29 = v66[1];
    v3 += *v66;
    v30 = v66 + 2;
    v66 += 2;
    v1 += v29 * v48;
    v31 = v60 - v29;
    v56 = v1;
    v60 = v31;
    if ( v31 < v47 )
    {
      *((_DWORD *)a1 + 24) = v64;
      *((_DWORD *)a1 + 21) = v30;
      *((_DWORD *)a1 + 22) = v1;
      *((_DWORD *)a1 + 27) = v3;
      *((_DWORD *)a1 + 26) = v31;
      return 1;
    }
    v32 = v3 >> 1;
    if ( v60 >= v61 )
    {
      v6 = v68;
      goto LABEL_80;
    }
    v33 = (unsigned int)v59 >> 1;
    if ( v32 < v50 || (v33 = v52, v32 > v52) )
      v32 = v33;
LABEL_49:
    v6 = *(_BYTE *)(v32 + v1);
    v68 = v6;
LABEL_80:
    v10 = v66;
LABEL_81:
    v64 += 2;
    v8 = v3 >> 1;
    if ( v64 > v51 )
      return 0;
  }
  if ( v60 >= v61 )
    return 0;
  if ( v3 >= v59 && v3 < v63 && (v3 & 1) != 0 )
    goto LABEL_91;
  if ( v49 && v3 >= v63 )
  {
    v8 = v52;
LABEL_91:
    *(_BYTE *)(v8 + v1) = v6 ^ (v6 ^ *(_BYTE *)(v8 + v1)) & 0xF;
  }
  return 0;
}
