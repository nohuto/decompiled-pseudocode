/*
 * XREFs of ?bSrcCopySRLE4D8@@YGHPAUBLTINFO@@@Z @ 0x23456F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bSrcCopySRLE4D8(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edi
  unsigned __int8 *v2; // ebx
  int v3; // esi
  unsigned int v5; // ecx
  bool i; // cc
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  char v12; // al
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edi
  unsigned __int8 v16; // al
  char v17; // cl
  char v18; // al
  int v19; // edx
  unsigned int v20; // eax
  unsigned __int8 *v21; // ebx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  char v25; // al
  unsigned int j; // eax
  int v27; // [esp+Ch] [ebp-40h]
  int v28; // [esp+Ch] [ebp-40h]
  int v29; // [esp+14h] [ebp-38h]
  int v30; // [esp+18h] [ebp-34h]
  int v31; // [esp+1Ch] [ebp-30h]
  int v32; // [esp+20h] [ebp-2Ch]
  unsigned int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  int v35; // [esp+2Ch] [ebp-20h]
  int v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+34h] [ebp-18h]
  unsigned int v38; // [esp+38h] [ebp-14h]
  unsigned int v39; // [esp+38h] [ebp-14h]
  unsigned int v40; // [esp+3Ch] [ebp-10h]
  int v41; // [esp+3Ch] [ebp-10h]
  unsigned int v42; // [esp+40h] [ebp-Ch]
  BOOL v43; // [esp+40h] [ebp-Ch]
  int v44; // [esp+44h] [ebp-8h]
  char v45; // [esp+4Ah] [ebp-2h]
  char v46; // [esp+4Bh] [ebp-1h]

  v1 = a1;
  v44 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v32 = *((_DWORD *)a1 + 8);
  v31 = *((_DWORD *)a1 + 18);
  v33 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v35 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v36 = *((_DWORD *)a1 + 17);
  v34 = *((_DWORD *)a1 + 19);
  v30 = *((_DWORD *)a1 + 20);
  v29 = *((_DWORD *)a1 + 11);
  v37 = *((_DWORD *)a1 + 12);
  if ( v37 < v31 )
    return 1;
  v5 = *((_DWORD *)a1 + 23) + 2;
  for ( i = v5 <= *(_DWORD *)(*((_DWORD *)a1 + 14) + 40); i; i = v5 <= v33 )
  {
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    v42 = v7;
    if ( v7 )
    {
      v1 = a1;
      if ( v37 >= v30 || v3 >= v34 || (int)(v3 + v7) <= v36 )
      {
        v3 += v7;
      }
      else
      {
        if ( v3 < v36 )
        {
          v7 += v3 - v36;
          v3 = v36;
          v42 = v7;
        }
        i = (int)(v3 + v7) <= v34;
        v25 = v42;
        if ( i )
        {
          v41 = 0;
        }
        else
        {
          v41 = v3 + v42 - v34;
          v25 = v34 - v3;
          v42 = v34 - v3;
        }
        v28 = v25 & 1;
        v46 = *(_BYTE *)(v35 + 4 * (v8 >> 4));
        v1 = a1;
        v45 = *(_BYTE *)(v35 + 4 * (v8 & 0xF));
        for ( j = v42 >> 1; j; --j )
        {
          *(_BYTE *)(v44 + v3) = v46;
          *(_BYTE *)(v44 + v3 + 1) = v45;
          v3 += 2;
        }
        if ( v28 )
          *(_BYTE *)(v44 + v3++) = v46;
        v3 += v41;
      }
    }
    else if ( v8 )
    {
      if ( v8 == 1 )
        return 0;
      if ( v8 != 2 )
      {
        v9 = (v8 + 1) >> 1;
        v10 = v9 + v5;
        v38 = v10;
        if ( v10 > v33 )
          return 0;
        v43 = ((v8 + 1) & 2) != 0;
        v1 = a1;
        if ( v37 < v30 && v3 < v34 )
        {
          if ( (int)(v8 + v3) > v36 )
          {
            if ( v3 < v36 )
            {
              v11 = v36 - v3;
              v3 = v36;
              v8 -= v11;
              v2 += v11 >> 1;
              if ( (v11 & 1) != 0 )
              {
                v12 = *v2++;
                *(_BYTE *)(v36 + v44) = *(_BYTE *)(v35 + 4 * (v12 & 0xF));
                v3 = v36 + 1;
                --v8;
              }
            }
            if ( (int)(v8 + v3) <= v34 )
            {
              v40 = 0;
            }
            else
            {
              v40 = v3 + v8 - v34;
              v8 = v34 - v3;
            }
            v13 = v8 & 1;
            v14 = v8 >> 1;
            v27 = v13;
            if ( v14 )
            {
              v15 = v14;
              do
              {
                v16 = *v2++;
                v17 = *(_BYTE *)(v35 + 4 * (v16 >> 4));
                v18 = *(_BYTE *)(v35 + 4 * (v16 & 0xF));
                v19 = v44;
                *(_BYTE *)(v44 + v3) = v17;
                *(_BYTE *)(v44 + v3 + 1) = v18;
                v3 += 2;
                --v15;
              }
              while ( v15 );
              v1 = a1;
              v13 = v27;
            }
            else
            {
              v19 = v44;
            }
            if ( v13 )
            {
              *(_BYTE *)(v19 + v3++) = *(_BYTE *)(v35 + 4 * (*v2 >> 4));
              v20 = (v40 >> 1) + 1;
            }
            else
            {
              v20 = (v40 + 1) >> 1;
            }
            v21 = &v2[v20];
            v3 += v40;
            v10 = v38;
            goto LABEL_29;
          }
          v9 = (v8 + 1) >> 1;
        }
        v3 += v8;
        v21 = &v2[v9];
LABEL_29:
        v5 = v43 + v10;
        v2 = &v21[v43];
        goto LABEL_50;
      }
      v39 = v5 + 2;
      if ( v5 + 2 > v33 )
        return 0;
      v22 = v2[1];
      v3 += *v2;
      v2 += 2;
      v23 = v22 * v32 + v44;
      v24 = v37 - v22;
      v44 = v23;
      v5 = v39;
      v37 = v24;
      if ( v24 < v31 )
      {
        *((_DWORD *)v1 + 24) = v39;
        *((_DWORD *)v1 + 27) = v3;
LABEL_33:
        *((_DWORD *)v1 + 22) = v23;
        *((_DWORD *)v1 + 21) = v2;
        *((_DWORD *)v1 + 26) = v24;
        return 1;
      }
    }
    else
    {
      v23 = v32 + v44;
      v3 = v29;
      v24 = v37 - 1;
      v44 += v32;
      v37 = v24;
      if ( v24 < v31 )
      {
        *((_DWORD *)v1 + 24) = v5;
        *((_DWORD *)v1 + 27) = v29;
        goto LABEL_33;
      }
    }
LABEL_50:
    v5 += 2;
  }
  return 0;
}
