/*
 * XREFs of ?bSrcCopySRLE8D8@@YGHPAUBLTINFO@@@Z @ 0xBF5BE
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall bSrcCopySRLE8D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  unsigned __int8 *v2; // ebx
  signed int v3; // edi
  unsigned int v4; // edx
  bool i; // cc
  size_t v6; // eax
  int v7; // ecx
  int v8; // eax
  size_t v9; // ecx
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  unsigned __int8 *v15; // ebx
  int v16; // eax
  int v17; // ecx
  size_t v18; // eax
  int Val; // [esp+Ch] [ebp-38h]
  signed int v20; // [esp+10h] [ebp-34h]
  size_t v21; // [esp+14h] [ebp-30h]
  int v22; // [esp+14h] [ebp-30h]
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  int v25; // [esp+20h] [ebp-24h]
  int v26; // [esp+24h] [ebp-20h]
  unsigned int v27; // [esp+28h] [ebp-1Ch]
  unsigned int v28; // [esp+2Ch] [ebp-18h]
  signed int v29; // [esp+30h] [ebp-14h]
  size_t Size; // [esp+34h] [ebp-10h]
  size_t Sizea; // [esp+34h] [ebp-10h]
  signed int v32; // [esp+38h] [ebp-Ch]
  int v33; // [esp+3Ch] [ebp-8h]
  int v34; // [esp+40h] [ebp-4h]

  v1 = a1;
  v34 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v26 = *((_DWORD *)a1 + 8);
  v25 = *((_DWORD *)a1 + 18);
  v27 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v23 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v29 = *((_DWORD *)a1 + 17);
  v32 = *((_DWORD *)a1 + 19);
  v24 = *((_DWORD *)a1 + 20);
  v20 = *((_DWORD *)a1 + 11);
  v33 = *((_DWORD *)a1 + 12);
  if ( v33 < v25 )
    return 1;
  v4 = *((_DWORD *)a1 + 23) + 2;
  for ( i = v4 <= *(_DWORD *)(*((_DWORD *)a1 + 14) + 40); ; i = v4 <= v27 )
  {
    v28 = v4;
    if ( !i )
      return 0;
    v6 = *v2;
    v7 = v2[1];
    v2 += 2;
    Size = v6;
    if ( v6 )
    {
      v1 = a1;
      if ( v33 >= v24 || v3 >= v32 || (int)(v3 + v6) <= v29 )
      {
        v3 += v6;
      }
      else
      {
        v8 = *(_DWORD *)(v23 + 4 * v7);
        v9 = Size;
        Val = v8;
        if ( v3 < v29 )
        {
          v9 = v3 - v29 + Size;
          v3 = v29;
          Size = v9;
        }
        if ( (int)(v9 + v3) > v32 )
        {
          v18 = v3 + v9 - v32;
          v9 = v32 - v3;
          v21 = v18;
          Size = v32 - v3;
        }
        else
        {
          v21 = 0;
        }
        if ( v9 )
        {
          memset((void *)(v3 + v34), Val, v9);
          v4 = v28;
          v3 += Size;
        }
        v3 += v21;
      }
      goto LABEL_14;
    }
    if ( !v7 )
    {
      v11 = v26 + v34;
      v3 = v20;
      v12 = v33 - 1;
      v34 += v26;
      v33 = v12;
      if ( v12 < v25 )
      {
        *((_DWORD *)v1 + 22) = v11;
        *((_DWORD *)v1 + 27) = v20;
        goto LABEL_37;
      }
      goto LABEL_14;
    }
    if ( v7 == 1 )
      return 0;
    if ( v7 != 2 )
    {
      v13 = v7 + v4;
      if ( v13 > v27 )
        return 0;
      v22 = v7 & 1;
      if ( v33 >= v24 || v3 >= v32 || v7 + v3 <= v29 )
      {
        v3 += v7;
        v15 = &v2[v7];
      }
      else
      {
        if ( v3 < v29 )
        {
          v16 = v29 - v3;
          v3 = v29;
          v2 += v16;
          v7 -= v16;
        }
        if ( v7 + v3 > v32 )
        {
          Sizea = v3 + v7 - v32;
          v7 = v32 - v3;
        }
        else
        {
          Sizea = 0;
        }
        if ( v7 )
        {
          do
          {
            v14 = *v2++;
            *(_BYTE *)(v34 + v3++) = *(_BYTE *)(v23 + 4 * v14);
            --v7;
          }
          while ( v7 );
          v1 = a1;
        }
        v15 = &v2[Sizea];
        v3 += Sizea;
      }
      v4 = v22 + v13;
      v2 = &v15[v22];
      goto LABEL_14;
    }
    v4 += 2;
    if ( v4 > v27 )
      return 0;
    v17 = v2[1];
    v3 += *v2;
    v2 += 2;
    v34 += v17 * v26;
    v12 = v33 - v17;
    v33 = v12;
    if ( v12 < v25 )
      break;
LABEL_14:
    v4 += 2;
  }
  *((_DWORD *)v1 + 22) = v34;
  *((_DWORD *)v1 + 27) = v3;
LABEL_37:
  *((_DWORD *)v1 + 21) = v2;
  *((_DWORD *)v1 + 24) = v4;
  *((_DWORD *)v1 + 26) = v12;
  return 1;
}
