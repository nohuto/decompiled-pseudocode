/*
 * XREFs of ?bSrcCopySRLE8D16@@YGHPAUBLTINFO@@@Z @ 0x232203
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bSrcCopySRLE8D16(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // ebx
  unsigned __int8 *v2; // edi
  int v3; // esi
  unsigned int v4; // edx
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // eax
  int v9; // eax
  unsigned __int8 *v10; // edi
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  char *v17; // edi
  char v18; // cf
  unsigned int v19; // ecx
  char *v20; // edi
  int v21; // ecx
  unsigned __int8 *v23; // [esp+Ch] [ebp-3Ch]
  unsigned __int16 v24; // [esp+10h] [ebp-38h]
  int v25; // [esp+14h] [ebp-34h]
  int v26; // [esp+18h] [ebp-30h]
  int v27; // [esp+18h] [ebp-30h]
  int v28; // [esp+1Ch] [ebp-2Ch]
  int v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h]
  int v31; // [esp+28h] [ebp-20h]
  unsigned int v32; // [esp+2Ch] [ebp-1Ch]
  int v33; // [esp+34h] [ebp-14h]
  int v34; // [esp+38h] [ebp-10h]
  int v35; // [esp+38h] [ebp-10h]
  int v36; // [esp+3Ch] [ebp-Ch]
  int v37; // [esp+40h] [ebp-8h]
  int v38; // [esp+44h] [ebp-4h]

  v1 = a1;
  v38 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v31 = *((_DWORD *)a1 + 8) / 2;
  v32 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v28 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v33 = *((_DWORD *)a1 + 17);
  v36 = *((_DWORD *)a1 + 19);
  v29 = *((_DWORD *)a1 + 20);
  v25 = *((_DWORD *)a1 + 11);
  v30 = *((_DWORD *)a1 + 18);
  v37 = *((_DWORD *)a1 + 12);
  if ( v37 >= v30 )
  {
    v4 = *((_DWORD *)a1 + 23);
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v4 += 2;
          if ( v4 > v32 )
            return nullsub_1((int)a1);
          v5 = *v2;
          v6 = v2[1];
          v2 += 2;
          v34 = v5;
          v23 = v2;
          if ( !v5 )
            break;
          v1 = a1;
          if ( v37 >= v29 || v3 >= v36 || v3 + v5 <= v33 )
          {
            v3 += v5;
          }
          else
          {
            v14 = *(_DWORD *)(v28 + 4 * v6);
            v15 = v34;
            v24 = v14;
            if ( v3 < v33 )
            {
              v15 = v3 - v33 + v34;
              v3 = v33;
              v34 = v15;
            }
            if ( (int)(v15 + v3) <= v36 )
            {
              v27 = 0;
            }
            else
            {
              v16 = v3 + v15 - v36;
              v15 = v36 - v3;
              v27 = v16;
              v34 = v36 - v3;
            }
            if ( v15 )
            {
              v17 = (char *)(v38 + 2 * v3);
              v18 = v15 & 1;
              v19 = v15 >> 1;
              memset32(v17, (v24 << 16) | v24, v19);
              v20 = &v17[4 * v19];
              v21 = v18;
              v3 += v34;
              while ( v21 )
              {
                *(_WORD *)v20 = v24;
                v20 += 2;
                --v21;
              }
              v2 = v23;
            }
            v3 += v27;
          }
        }
        if ( !v6 )
          break;
        if ( v6 == 1 )
          return nullsub_1((int)a1);
        if ( v6 == 2 )
        {
          v4 += 2;
          if ( v4 > v32 )
            return nullsub_1((int)a1);
          v11 = v2[1];
          v3 += *v2;
          v2 += 2;
          v12 = v37 - v11;
          v38 += 2 * v11 * v31;
          v1 = a1;
          v37 = v12;
          if ( v12 < v30 )
          {
            *((_DWORD *)a1 + 22) = v38;
            *((_DWORD *)a1 + 27) = v3;
LABEL_25:
            *((_DWORD *)v1 + 21) = v2;
            *((_DWORD *)v1 + 24) = v4;
            *((_DWORD *)v1 + 26) = v12;
            return nullsub_1((int)a1);
          }
        }
        else
        {
          v7 = v6 + v4;
          if ( v7 > v32 )
            return nullsub_1((int)a1);
          v26 = v6 & 1;
          if ( v37 >= v29 || v3 >= v36 || v6 + v3 <= v33 )
          {
            v3 += v6;
            v10 = &v2[v6];
          }
          else
          {
            if ( v3 < v33 )
            {
              v8 = v33 - v3;
              v3 = v33;
              v2 += v8;
              v6 -= v8;
            }
            if ( v6 + v3 <= v36 )
            {
              v35 = 0;
            }
            else
            {
              v35 = v3 + v6 - v36;
              v6 = v36 - v3;
            }
            if ( v6 )
            {
              do
              {
                v9 = *v2++;
                *(_WORD *)(v38 + 2 * v3++) = *(_WORD *)(v28 + 4 * v9);
                --v6;
              }
              while ( v6 );
              v1 = a1;
            }
            v10 = &v2[v35];
            v3 += v35;
          }
          v4 = v26 + v7;
          v2 = &v10[v26];
        }
      }
      v3 = v25;
      v13 = v38 + 2 * v31;
      v12 = v37 - 1;
      v38 = v13;
      v37 = v12;
      if ( v12 < v30 )
      {
        *((_DWORD *)v1 + 22) = v13;
        *((_DWORD *)v1 + 27) = v25;
        goto LABEL_25;
      }
    }
  }
  return nullsub_1((int)a1);
}
