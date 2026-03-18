/*
 * XREFs of ?bSrcCopySRLE8D32@@YGHPAUBLTINFO@@@Z @ 0x232BFF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bSrcCopySRLE8D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  unsigned __int8 *v2; // ebx
  signed int v3; // edx
  int result; // eax
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned __int8 *v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  void *v18; // edi
  int v19; // [esp+8h] [ebp-38h]
  signed int v20; // [esp+Ch] [ebp-34h]
  int v21; // [esp+10h] [ebp-30h]
  unsigned int v22; // [esp+10h] [ebp-30h]
  int v23; // [esp+14h] [ebp-2Ch]
  int v24; // [esp+18h] [ebp-28h]
  int v25; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+20h] [ebp-20h]
  unsigned int v27; // [esp+24h] [ebp-1Ch]
  unsigned int v28; // [esp+28h] [ebp-18h]
  int v29; // [esp+2Ch] [ebp-14h]
  unsigned int v30; // [esp+30h] [ebp-10h]
  int v31; // [esp+30h] [ebp-10h]
  signed int v32; // [esp+34h] [ebp-Ch]
  int v33; // [esp+38h] [ebp-8h]
  int v34; // [esp+3Ch] [ebp-4h]

  v1 = a1;
  v34 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v26 = *((_DWORD *)a1 + 8) / 4;
  v27 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v23 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v29 = *((_DWORD *)a1 + 17);
  v32 = *((_DWORD *)a1 + 19);
  v24 = *((_DWORD *)a1 + 20);
  v20 = *((_DWORD *)a1 + 11);
  v25 = *((_DWORD *)a1 + 18);
  v33 = *((_DWORD *)a1 + 12);
  if ( v33 < v25 )
    return 1;
  v5 = *((_DWORD *)a1 + 23);
  while ( 1 )
  {
    v5 += 2;
    v28 = v5;
    if ( v5 > v27 )
      return 0;
    v6 = *v2;
    v7 = v2[1];
    v2 += 2;
    v30 = v6;
    if ( v6 )
    {
      v1 = a1;
      if ( v33 >= v24 || v3 >= v32 || (int)(v3 + v6) <= v29 )
      {
        v3 += v6;
      }
      else
      {
        v15 = *(_DWORD *)(v23 + 4 * v7);
        v16 = v30;
        v19 = v15;
        if ( v3 < v29 )
        {
          v16 = v3 - v29 + v30;
          v3 = v29;
          v30 = v16;
        }
        if ( (int)(v16 + v3) <= v32 )
        {
          v22 = 0;
        }
        else
        {
          v17 = v3 + v16 - v32;
          v16 = v32 - v3;
          v22 = v17;
          v30 = v32 - v3;
        }
        if ( v16 )
        {
          v18 = (void *)(v34 + 4 * v3);
          v3 += v30;
          memset32(v18, v19, v16);
          v5 = v28;
        }
        v3 += v22;
      }
    }
    else if ( v7 )
    {
      if ( v7 == 1 )
        return 0;
      if ( v7 == 2 )
      {
        v5 += 2;
        if ( v5 > v27 )
          return 0;
        v12 = v2[1];
        v3 += *v2;
        v2 += 2;
        v13 = v33 - v12;
        v34 += 4 * v12 * v26;
        v1 = a1;
        v33 = v13;
        if ( v13 < v25 )
        {
          *((_DWORD *)a1 + 22) = v34;
          *((_DWORD *)a1 + 27) = v3;
LABEL_28:
          *((_DWORD *)v1 + 26) = v13;
          *((_DWORD *)v1 + 21) = v2;
          result = 1;
          *((_DWORD *)v1 + 24) = v5;
          return result;
        }
      }
      else
      {
        v8 = v7 + v5;
        if ( v8 > v27 )
          return 0;
        v21 = v7 & 1;
        if ( v33 >= v24 || v3 >= v32 || v7 + v3 <= v29 )
        {
          v3 += v7;
          v11 = &v2[v7];
        }
        else
        {
          if ( v3 < v29 )
          {
            v9 = v29 - v3;
            v3 = v29;
            v2 += v9;
            v7 -= v9;
          }
          if ( v7 + v3 <= v32 )
          {
            v31 = 0;
          }
          else
          {
            v31 = v3 + v7 - v32;
            v7 = v32 - v3;
          }
          if ( v7 )
          {
            do
            {
              v10 = *v2++;
              *(_DWORD *)(v34 + 4 * v3++) = *(_DWORD *)(v23 + 4 * v10);
              --v7;
            }
            while ( v7 );
            v1 = a1;
          }
          v3 += v31;
          v11 = &v2[v31];
        }
        v5 = v21 + v8;
        v2 = &v11[v21];
      }
    }
    else
    {
      v3 = v20;
      v14 = v34 + 4 * v26;
      v13 = v33 - 1;
      v34 = v14;
      v33 = v13;
      if ( v13 < v25 )
      {
        *((_DWORD *)v1 + 22) = v14;
        *((_DWORD *)v1 + 27) = v20;
        goto LABEL_28;
      }
    }
  }
}
