/*
 * XREFs of ?bSrcCopySRLE4D16@@YGHPAUBLTINFO@@@Z @ 0x233565
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bSrcCopySRLE4D16(struct BLTINFO *a1)
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
  __int16 v17; // cx
  __int16 v18; // ax
  int v19; // edx
  unsigned int v20; // eax
  unsigned __int8 *v21; // ebx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  char v26; // al
  unsigned int v27; // eax
  int v28; // edx
  int v29; // [esp+10h] [ebp-40h]
  int v30; // [esp+14h] [ebp-3Ch]
  __int16 v31; // [esp+14h] [ebp-3Ch]
  __int16 v32; // [esp+18h] [ebp-38h]
  int v33; // [esp+1Ch] [ebp-34h]
  int v34; // [esp+20h] [ebp-30h]
  int v35; // [esp+24h] [ebp-2Ch]
  int v36; // [esp+28h] [ebp-28h]
  unsigned int v37; // [esp+2Ch] [ebp-24h]
  int v38; // [esp+30h] [ebp-20h]
  int v39; // [esp+34h] [ebp-1Ch]
  int v40; // [esp+38h] [ebp-18h]
  int v41; // [esp+3Ch] [ebp-14h]
  unsigned int v42; // [esp+40h] [ebp-10h]
  unsigned int v43; // [esp+40h] [ebp-10h]
  unsigned int v44; // [esp+44h] [ebp-Ch]
  int v45; // [esp+44h] [ebp-Ch]
  unsigned int v46; // [esp+48h] [ebp-8h]
  BOOL v47; // [esp+48h] [ebp-8h]
  int v48; // [esp+4Ch] [ebp-4h]

  v1 = a1;
  v48 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v36 = *((_DWORD *)a1 + 8) / 2;
  v37 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v39 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v40 = *((_DWORD *)a1 + 17);
  v38 = *((_DWORD *)a1 + 19);
  v34 = *((_DWORD *)a1 + 20);
  v33 = *((_DWORD *)a1 + 11);
  v35 = *((_DWORD *)a1 + 18);
  v41 = *((_DWORD *)a1 + 12);
  if ( v41 < v35 )
    return 1;
  v5 = *((_DWORD *)a1 + 23) + 2;
  for ( i = v5 <= *(_DWORD *)(*((_DWORD *)a1 + 14) + 40); i; i = v5 <= v37 )
  {
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    v46 = v7;
    if ( v7 )
    {
      v1 = a1;
      if ( v41 >= v34 || v3 >= v38 || (int)(v3 + v7) <= v40 )
      {
        v3 += v7;
      }
      else
      {
        if ( v3 < v40 )
        {
          v25 = v40 - v3;
          v3 = v40;
          v46 -= v25;
        }
        v26 = v46;
        if ( (int)(v3 + v46) <= v38 )
        {
          v45 = 0;
        }
        else
        {
          v45 = v3 + v46 - v38;
          v26 = v38 - v3;
          v46 = v38 - v3;
        }
        v29 = v26 & 1;
        v31 = *(_WORD *)(v39 + 4 * (v8 >> 4));
        v1 = a1;
        v32 = *(_WORD *)(v39 + 4 * (v8 & 0xF));
        v27 = v46 >> 1;
        if ( v46 >> 1 )
        {
          v28 = v48;
          do
          {
            *(_WORD *)(v48 + 2 * v3) = v31;
            *(_WORD *)(v48 + 2 * v3 + 2) = v32;
            v3 += 2;
            --v27;
          }
          while ( v27 );
          v1 = a1;
        }
        else
        {
          v28 = v48;
        }
        if ( v29 )
          *(_WORD *)(v28 + 2 * v3++) = v31;
        v3 += v45;
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
        v42 = v10;
        if ( v10 > v37 )
          return 0;
        v47 = ((v8 + 1) & 2) != 0;
        v1 = a1;
        if ( v41 < v34 && v3 < v38 )
        {
          if ( (int)(v8 + v3) > v40 )
          {
            if ( v3 < v40 )
            {
              v11 = v40 - v3;
              v3 = v40;
              v8 -= v11;
              v2 += v11 >> 1;
              if ( (v11 & 1) != 0 )
              {
                v12 = *v2++;
                *(_WORD *)(v48 + 2 * v40) = *(_WORD *)(v39 + 4 * (v12 & 0xF));
                v3 = v40 + 1;
                --v8;
              }
            }
            if ( (int)(v8 + v3) <= v38 )
            {
              v44 = 0;
            }
            else
            {
              v44 = v3 + v8 - v38;
              v8 = v38 - v3;
            }
            v13 = v8 & 1;
            v14 = v8 >> 1;
            v30 = v13;
            if ( v14 )
            {
              v15 = v14;
              do
              {
                v16 = *v2++;
                v17 = *(_WORD *)(v39 + 4 * (v16 >> 4));
                v18 = *(_WORD *)(v39 + 4 * (v16 & 0xF));
                v19 = v48;
                *(_WORD *)(v48 + 2 * v3) = v17;
                *(_WORD *)(v48 + 2 * v3 + 2) = v18;
                v3 += 2;
                --v15;
              }
              while ( v15 );
              v1 = a1;
              v13 = v30;
            }
            else
            {
              v19 = v48;
            }
            if ( v13 )
            {
              *(_WORD *)(v19 + 2 * v3++) = *(_WORD *)(v39 + 4 * (*v2 >> 4));
              v20 = (v44 >> 1) + 1;
            }
            else
            {
              v20 = (v44 + 1) >> 1;
            }
            v21 = &v2[v20];
            v3 += v44;
            v10 = v42;
            goto LABEL_29;
          }
          v9 = (v8 + 1) >> 1;
        }
        v3 += v8;
        v21 = &v2[v9];
LABEL_29:
        v5 = v47 + v10;
        v2 = &v21[v47];
        goto LABEL_53;
      }
      v43 = v5 + 2;
      if ( v5 + 2 > v37 )
        return 0;
      v22 = v2[1];
      v3 += *v2;
      v2 += 2;
      v23 = v48 + 2 * v22 * v36;
      v24 = v41 - v22;
      v48 = v23;
      v5 = v43;
      v41 = v24;
      if ( v24 < v35 )
      {
        *((_DWORD *)v1 + 24) = v43;
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
      v3 = v33;
      v23 = v48 + 2 * v36;
      v24 = v41 - 1;
      v48 = v23;
      v41 = v24;
      if ( v24 < v35 )
      {
        *((_DWORD *)v1 + 24) = v5;
        *((_DWORD *)v1 + 27) = v33;
        goto LABEL_33;
      }
    }
LABEL_53:
    v5 += 2;
  }
  return 0;
}
