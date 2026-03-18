/*
 * XREFs of ?bSrcCopySRLE4D32@@YGHPAUBLTINFO@@@Z @ 0x23426B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bSrcCopySRLE4D32(struct BLTINFO *a1)
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
  int v17; // ecx
  int v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  unsigned __int8 *v21; // ebx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  char v26; // al
  unsigned int v27; // eax
  int v28; // [esp+Ch] [ebp-40h]
  int v29; // [esp+10h] [ebp-3Ch]
  int v30; // [esp+10h] [ebp-3Ch]
  int v31; // [esp+14h] [ebp-38h]
  int v32; // [esp+18h] [ebp-34h]
  int v33; // [esp+1Ch] [ebp-30h]
  int v34; // [esp+20h] [ebp-2Ch]
  int v35; // [esp+24h] [ebp-28h]
  unsigned int v36; // [esp+28h] [ebp-24h]
  int v37; // [esp+2Ch] [ebp-20h]
  int v38; // [esp+30h] [ebp-1Ch]
  int v39; // [esp+34h] [ebp-18h]
  int v40; // [esp+38h] [ebp-14h]
  unsigned int v41; // [esp+3Ch] [ebp-10h]
  unsigned int v42; // [esp+3Ch] [ebp-10h]
  unsigned int v43; // [esp+40h] [ebp-Ch]
  int v44; // [esp+40h] [ebp-Ch]
  unsigned int v45; // [esp+44h] [ebp-8h]
  BOOL v46; // [esp+44h] [ebp-8h]
  int v47; // [esp+48h] [ebp-4h]

  v1 = a1;
  v47 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v35 = *((_DWORD *)a1 + 8) / 4;
  v36 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v38 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v39 = *((_DWORD *)a1 + 17);
  v37 = *((_DWORD *)a1 + 19);
  v33 = *((_DWORD *)a1 + 20);
  v31 = *((_DWORD *)a1 + 11);
  v34 = *((_DWORD *)a1 + 18);
  v40 = *((_DWORD *)a1 + 12);
  if ( v40 < v34 )
    return 1;
  v5 = *((_DWORD *)a1 + 23) + 2;
  for ( i = v5 <= *(_DWORD *)(*((_DWORD *)a1 + 14) + 40); i; i = v5 <= v36 )
  {
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    v45 = v7;
    if ( v7 )
    {
      v1 = a1;
      if ( v40 >= v33 || v3 >= v37 || (int)(v3 + v7) <= v39 )
      {
        v3 += v7;
      }
      else
      {
        if ( v3 < v39 )
        {
          v25 = v39 - v3;
          v3 = v39;
          v45 -= v25;
        }
        v26 = v45;
        if ( (int)(v3 + v45) <= v37 )
        {
          v44 = 0;
        }
        else
        {
          v44 = v3 + v45 - v37;
          v26 = v37 - v3;
          v45 = v37 - v3;
        }
        v28 = v26 & 1;
        v32 = *(_DWORD *)(v38 + 4 * (v8 >> 4));
        v1 = a1;
        v30 = *(_DWORD *)(v38 + 4 * (v8 & 0xF));
        v27 = v45 >> 1;
        if ( v45 >> 1 )
        {
          do
          {
            *(_DWORD *)(v47 + 4 * v3) = v32;
            *(_DWORD *)(v47 + 4 * v3 + 4) = v30;
            v3 += 2;
            --v27;
          }
          while ( v27 );
          v1 = a1;
        }
        if ( v28 )
          *(_DWORD *)(v47 + 4 * v3++) = v32;
        v3 += v44;
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
        v41 = v10;
        if ( v10 > v36 )
          return 0;
        v46 = ((v8 + 1) & 2) != 0;
        v1 = a1;
        if ( v40 < v33 && v3 < v37 )
        {
          if ( (int)(v8 + v3) > v39 )
          {
            if ( v3 < v39 )
            {
              v11 = v39 - v3;
              v3 = v39;
              v8 -= v11;
              v2 += v11 >> 1;
              if ( (v11 & 1) != 0 )
              {
                v12 = *v2++;
                *(_DWORD *)(v47 + 4 * v39) = *(_DWORD *)(v38 + 4 * (v12 & 0xF));
                v3 = v39 + 1;
                --v8;
              }
            }
            if ( (int)(v8 + v3) <= v37 )
            {
              v43 = 0;
            }
            else
            {
              v43 = v3 + v8 - v37;
              v8 = v37 - v3;
            }
            v13 = v8 & 1;
            v14 = v8 >> 1;
            v29 = v13;
            if ( v14 )
            {
              v15 = v14;
              do
              {
                v16 = *v2++;
                v17 = *(_DWORD *)(v38 + 4 * (v16 >> 4));
                v18 = *(_DWORD *)(v38 + 4 * (v16 & 0xF));
                v19 = v47;
                *(_DWORD *)(v47 + 4 * v3) = v17;
                *(_DWORD *)(v47 + 4 * v3 + 4) = v18;
                v3 += 2;
                --v15;
              }
              while ( v15 );
              v1 = a1;
              v13 = v29;
            }
            else
            {
              v19 = v47;
            }
            if ( v13 )
            {
              *(_DWORD *)(v19 + 4 * v3++) = *(_DWORD *)(v38 + 4 * (*v2 >> 4));
              v20 = (v43 >> 1) + 1;
            }
            else
            {
              v20 = (v43 + 1) >> 1;
            }
            v21 = &v2[v20];
            v3 += v43;
            v10 = v41;
            goto LABEL_29;
          }
          v9 = (v8 + 1) >> 1;
        }
        v3 += v8;
        v21 = &v2[v9];
LABEL_29:
        v5 = v46 + v10;
        v2 = &v21[v46];
        goto LABEL_51;
      }
      v42 = v5 + 2;
      if ( v5 + 2 > v36 )
        return 0;
      v22 = v2[1];
      v3 += *v2;
      v2 += 2;
      v23 = v47 + 4 * v22 * v35;
      v24 = v40 - v22;
      v47 = v23;
      v5 = v42;
      v40 = v24;
      if ( v24 < v34 )
      {
        *((_DWORD *)v1 + 24) = v42;
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
      v3 = v31;
      v23 = v47 + 4 * v35;
      v24 = v40 - 1;
      v47 = v23;
      v40 = v24;
      if ( v24 < v34 )
      {
        *((_DWORD *)v1 + 24) = v5;
        *((_DWORD *)v1 + 27) = v31;
        goto LABEL_33;
      }
    }
LABEL_51:
    v5 += 2;
  }
  return 0;
}
