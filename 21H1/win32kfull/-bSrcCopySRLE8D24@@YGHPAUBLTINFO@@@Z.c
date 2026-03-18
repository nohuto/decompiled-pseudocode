/*
 * XREFs of ?bSrcCopySRLE8D24@@YGHPAUBLTINFO@@@Z @ 0x23297E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bSrcCopySRLE8D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // edx
  unsigned __int8 *v2; // edi
  int v3; // esi
  unsigned int v5; // ecx
  bool i; // cc
  int v7; // eax
  int v8; // ebx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  unsigned __int8 *v14; // edi
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // edx
  int v21; // edx
  int v22; // [esp+14h] [ebp-38h]
  int v23; // [esp+14h] [ebp-38h]
  int v24; // [esp+18h] [ebp-34h]
  int v25; // [esp+1Ch] [ebp-30h]
  int v26; // [esp+1Ch] [ebp-30h]
  int v27; // [esp+20h] [ebp-2Ch]
  int v28; // [esp+24h] [ebp-28h]
  int v29; // [esp+28h] [ebp-24h]
  int v30; // [esp+2Ch] [ebp-20h]
  unsigned int v31; // [esp+30h] [ebp-1Ch]
  int v32; // [esp+34h] [ebp-18h]
  int v33; // [esp+34h] [ebp-18h]
  int v34; // [esp+38h] [ebp-14h]
  int v35; // [esp+3Ch] [ebp-10h]
  int v36; // [esp+40h] [ebp-Ch]
  int v37; // [esp+44h] [ebp-8h]
  unsigned int v38; // [esp+48h] [ebp-4h]
  unsigned int v39; // [esp+48h] [ebp-4h]

  v1 = a1;
  v36 = *((_DWORD *)a1 + 2);
  v2 = (unsigned __int8 *)*((_DWORD *)a1 + 1);
  v3 = *((_DWORD *)a1 + 25);
  v30 = *((_DWORD *)a1 + 8);
  v29 = *((_DWORD *)a1 + 18);
  v31 = *(_DWORD *)(*((_DWORD *)a1 + 14) + 40);
  v27 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  v35 = *((_DWORD *)a1 + 17);
  v34 = *((_DWORD *)a1 + 19);
  v28 = *((_DWORD *)a1 + 20);
  v24 = *((_DWORD *)a1 + 11);
  v37 = *((_DWORD *)a1 + 12);
  if ( v37 < v29 )
    return 1;
  v5 = *((_DWORD *)a1 + 23) + 2;
  for ( i = v5 <= *(_DWORD *)(*((_DWORD *)a1 + 14) + 40); i; i = v5 <= v31 )
  {
    v7 = *v2;
    v8 = v2[1];
    v2 += 2;
    v32 = v7;
    if ( v7 )
    {
      v1 = a1;
      if ( v37 < v28 && v3 < v34 )
      {
        if ( v3 + v7 <= v35 )
          goto LABEL_42;
        v18 = *(_DWORD *)(v27 + 4 * v8);
        v19 = v32;
        v26 = v18;
        if ( v3 < v35 )
        {
          v19 = v3 - v35 + v32;
          v3 = v35;
        }
        if ( v19 + v3 <= v34 )
        {
          v7 = 0;
        }
        else
        {
          v7 = v3 + v19 - v34;
          v19 = v34 - v3;
        }
        v20 = 3 * v3;
        v3 += v19;
        v32 = v7;
        v23 = v20;
        v1 = a1;
        if ( v19 )
        {
          v21 = v23 + 1 + v36;
          do
          {
            *(_WORD *)(v21 - 1) = v26;
            v21 += 3;
            *(_BYTE *)(v21 - 2) = BYTE2(v26);
            --v19;
          }
          while ( v19 );
          v1 = a1;
LABEL_42:
          v7 = v32;
        }
      }
      v3 += v7;
      goto LABEL_44;
    }
    if ( v8 )
    {
      if ( v8 == 1 )
        return 0;
      if ( v8 == 2 )
      {
        v39 = v5 + 2;
        if ( v5 + 2 > v31 )
          return 0;
        v15 = v2[1];
        v3 += *v2;
        v2 += 2;
        v16 = v15 * v30 + v36;
        v17 = v37 - v15;
        v36 = v16;
        v5 = v39;
        v37 = v17;
        if ( v17 < v29 )
        {
          *((_DWORD *)v1 + 24) = v39;
          *((_DWORD *)v1 + 27) = v3;
LABEL_27:
          *((_DWORD *)v1 + 22) = v16;
          *((_DWORD *)v1 + 21) = v2;
          *((_DWORD *)v1 + 26) = v17;
          return 1;
        }
      }
      else
      {
        v9 = v8 + v5;
        v38 = v9;
        if ( v9 > v31 )
          return 0;
        v22 = v8 & 1;
        if ( v37 >= v28 || v3 >= v34 || v8 + v3 <= v35 )
        {
          v3 += v8;
          v14 = &v2[v8];
        }
        else
        {
          if ( v3 < v35 )
          {
            v10 = v35 - v3;
            v3 = v35;
            v2 += v10;
            v8 -= v10;
          }
          if ( v8 + v3 <= v34 )
          {
            v33 = 0;
          }
          else
          {
            v33 = v3 + v8 - v34;
            v8 = v34 - v3;
          }
          if ( v8 )
          {
            v11 = 3 * v3 + v36 + 1;
            v25 = v8 + v3;
            do
            {
              v12 = *v2++;
              v13 = *(_DWORD *)(v27 + 4 * v12);
              *(_WORD *)(v11 - 1) = v13;
              v11 += 3;
              *(_BYTE *)(v11 - 2) = BYTE2(v13);
              --v8;
            }
            while ( v8 );
            v1 = a1;
            v3 = v25;
            v9 = v38;
          }
          v14 = &v2[v33];
          v3 += v33;
        }
        v5 = v22 + v9;
        v2 = &v14[v22];
      }
    }
    else
    {
      v16 = v30 + v36;
      v3 = v24;
      v17 = v37 - 1;
      v36 += v30;
      v37 = v17;
      if ( v17 < v29 )
      {
        *((_DWORD *)v1 + 24) = v5;
        *((_DWORD *)v1 + 27) = v24;
        goto LABEL_27;
      }
    }
LABEL_44:
    v5 += 2;
  }
  return 0;
}
