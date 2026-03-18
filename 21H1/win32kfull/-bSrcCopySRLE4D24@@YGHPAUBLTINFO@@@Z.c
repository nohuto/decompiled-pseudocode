/*
 * XREFs of ?bSrcCopySRLE4D24@@YGHPAUBLTINFO@@@Z @ 0x233E84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bSrcCopySRLE4D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // esi
  unsigned __int8 *v2; // ebx
  int v3; // edi
  unsigned int v5; // ecx
  bool i; // cc
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  unsigned __int8 v17; // al
  int v18; // ecx
  int v19; // edx
  bool v20; // zf
  int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned __int8 *v24; // ebx
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // eax
  int v30; // esi
  int v31; // edi
  unsigned int v32; // eax
  int v33; // esi
  int v34; // edx
  char v35; // cl
  int v36; // [esp+Ch] [ebp-54h]
  int v37; // [esp+1Ch] [ebp-44h]
  int v38; // [esp+20h] [ebp-40h]
  int v39; // [esp+24h] [ebp-3Ch]
  int v40; // [esp+28h] [ebp-38h]
  int v41; // [esp+2Ch] [ebp-34h]
  int v42; // [esp+30h] [ebp-30h]
  unsigned int v43; // [esp+34h] [ebp-2Ch]
  int v44; // [esp+34h] [ebp-2Ch]
  unsigned int v45; // [esp+38h] [ebp-28h]
  int v46; // [esp+3Ch] [ebp-24h]
  unsigned int v47; // [esp+40h] [ebp-20h]
  int v48; // [esp+40h] [ebp-20h]
  int v49; // [esp+44h] [ebp-1Ch]
  int v50; // [esp+48h] [ebp-18h]
  int v51; // [esp+4Ch] [ebp-14h]
  unsigned int v52; // [esp+50h] [ebp-10h]
  unsigned int v53; // [esp+50h] [ebp-10h]
  unsigned int v54; // [esp+50h] [ebp-10h]
  unsigned int v55; // [esp+54h] [ebp-Ch]
  BOOL v56; // [esp+54h] [ebp-Ch]
  int v57; // [esp+58h] [ebp-8h]
  int v58; // [esp+5Ch] [ebp-4h]
  int v59; // [esp+5Ch] [ebp-4h]

  v1 = a1;
  v57 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v42 = *((_DWORD *)a1 + 8);
  v41 = *((_DWORD *)a1 + 18);
  v45 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v46 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v50 = *((_DWORD *)a1 + 17);
  v49 = *((_DWORD *)a1 + 19);
  v40 = *((_DWORD *)a1 + 20);
  v38 = *((_DWORD *)a1 + 11);
  v51 = *((_DWORD *)a1 + 12);
  if ( v51 < v41 )
    return 1;
  v5 = *((_DWORD *)a1 + 23) + 2;
  for ( i = v5 <= *(_DWORD *)(*((_DWORD *)a1 + 14) + 40); ; i = v5 <= v45 )
  {
    v54 = v5;
    if ( !i )
      break;
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    v55 = v7;
    if ( v7 )
    {
      v1 = a1;
      if ( v51 >= v40 || v3 >= v49 || (int)(v3 + v7) <= v50 )
      {
        v3 += v7;
      }
      else
      {
        if ( v3 < v50 )
        {
          v28 = v50 - v3;
          v3 = v50;
          v55 -= v28;
        }
        v29 = v55;
        if ( (int)(v3 + v55) <= v49 )
        {
          v39 = 0;
        }
        else
        {
          v29 = v49 - v3;
          v39 = v3 + v55 - v49;
          v55 = v49 - v3;
        }
        v30 = 3 * v3;
        v31 = v29 + v3;
        v36 = v29 & 1;
        v48 = v30;
        v59 = *(_DWORD *)(v46 + 4 * (v8 >> 4));
        v1 = a1;
        v44 = *(_DWORD *)(v46 + 4 * (v8 & 0xF));
        v32 = v55 >> 1;
        if ( v55 >> 1 )
        {
          v33 = v48;
          v34 = v57;
          v35 = v59;
          do
          {
            *(_BYTE *)(v33 + v57) = v35;
            *(_WORD *)(v57 + v33 + 1) = *(_WORD *)((char *)&v59 + 1);
            *(_WORD *)(v57 + v33 + 4) = *(_WORD *)((char *)&v44 + 1);
            v35 = v59;
            *(_BYTE *)(v33 + v57 + 3) = v44;
            v33 += 6;
            --v32;
          }
          while ( v32 );
          v5 = v54;
          v48 = v33;
          v1 = a1;
        }
        else
        {
          v34 = v57;
        }
        if ( v36 )
        {
          *(_WORD *)(v48 + v34) = v59;
          v1 = a1;
          *(_BYTE *)(v48 + v34 + 2) = BYTE2(v59);
          v5 = v54;
        }
        v3 = v39 + v31;
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
        v52 = v10;
        if ( v10 > v45 )
          return 0;
        v56 = ((v8 + 1) & 2) != 0;
        v1 = a1;
        if ( v51 < v40 && v3 < v49 )
        {
          if ( (int)(v8 + v3) > v50 )
          {
            if ( v3 >= v50 )
            {
              v14 = 3 * v3;
LABEL_16:
              v58 = v14;
            }
            else
            {
              v11 = v50 - v3;
              v3 = v50;
              v8 -= v11;
              v58 = 3 * v50;
              v2 += v11 >> 1;
              if ( (v11 & 1) != 0 )
              {
                v12 = *v2++ & 0xF;
                v13 = *(_DWORD *)(v46 + 4 * v12);
                *(_WORD *)(v58 + v57) = v13;
                v1 = a1;
                *(_BYTE *)(v58 + v57 + 2) = BYTE2(v13);
                v14 = v58 + 3;
                v3 = v50 + 1;
                --v8;
                goto LABEL_16;
              }
            }
            if ( (int)(v8 + v3) <= v49 )
            {
              v47 = 0;
            }
            else
            {
              v47 = v3 + v8 - v49;
              v8 = v49 - v3;
            }
            v15 = v8 + v3;
            v16 = v8 & 1;
            v37 = v16;
            v43 = v8 >> 1;
            if ( v8 >> 1 )
            {
              do
              {
                v17 = *v2++;
                v18 = *(_DWORD *)(v46 + 4 * (v17 & 0xF));
                v19 = *(_DWORD *)(v46 + 4 * (v17 >> 4));
                *(_WORD *)(v58 + v57) = v19;
                *(_BYTE *)(v57 + v58 + 2) = BYTE2(v19);
                *(_WORD *)(v58 + v57 + 3) = v18;
                *(_BYTE *)(v57 + v58 + 5) = BYTE2(v18);
                v20 = v43-- == 1;
                v58 += 6;
              }
              while ( !v20 );
              v1 = a1;
              v16 = v37;
            }
            if ( v16 )
            {
              v21 = *(_DWORD *)(v46 + 4 * (*v2 >> 4));
              *(_WORD *)(v58 + v57) = v21;
              v1 = a1;
              *(_BYTE *)(v58 + v57 + 2) = BYTE2(v21);
              v22 = v47;
              v23 = (v47 >> 1) + 1;
            }
            else
            {
              v22 = v47;
              v23 = (v47 + 1) >> 1;
            }
            v24 = &v2[v23];
            v3 = v22 + v15;
            v10 = v52;
LABEL_29:
            v5 = v56 + v10;
            v2 = &v24[v56];
            goto LABEL_53;
          }
          v9 = (v8 + 1) >> 1;
        }
        v3 += v8;
        v24 = &v2[v9];
        goto LABEL_29;
      }
      v53 = v5 + 2;
      if ( v5 + 2 > v45 )
        return 0;
      v25 = v2[1];
      v3 += *v2;
      v2 += 2;
      v26 = v25 * v42 + v57;
      v27 = v51 - v25;
      v57 = v26;
      v5 = v53;
      v51 = v27;
      if ( v27 < v41 )
      {
        *((_DWORD *)v1 + 24) = v53;
        *((_DWORD *)v1 + 27) = v3;
LABEL_33:
        *((_DWORD *)v1 + 22) = v26;
        *((_DWORD *)v1 + 21) = v2;
        *((_DWORD *)v1 + 26) = v27;
        return 1;
      }
    }
    else
    {
      v26 = v42 + v57;
      v3 = v38;
      v27 = v51 - 1;
      v57 += v42;
      v51 = v27;
      if ( v27 < v41 )
      {
        *((_DWORD *)v1 + 24) = v5;
        *((_DWORD *)v1 + 27) = v38;
        goto LABEL_33;
      }
    }
LABEL_53:
    v5 += 2;
  }
  return 0;
}
