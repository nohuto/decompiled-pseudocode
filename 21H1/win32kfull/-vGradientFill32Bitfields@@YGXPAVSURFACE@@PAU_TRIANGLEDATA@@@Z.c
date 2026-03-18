/*
 * XREFs of ?vGradientFill32Bitfields@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23D791
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vGradientFill32Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int v3; // ecx
  int v4; // esi
  int v5; // edi
  int *v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // ecx
  _DWORD *v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // [esp+Ch] [ebp-54h]
  int v21; // [esp+10h] [ebp-50h]
  int v22; // [esp+18h] [ebp-48h]
  int v23; // [esp+1Ch] [ebp-44h]
  char *v24; // [esp+20h] [ebp-40h]
  unsigned int v25; // [esp+24h] [ebp-3Ch]
  unsigned int v26; // [esp+28h] [ebp-38h]
  unsigned int v27; // [esp+2Ch] [ebp-34h]
  unsigned int v28; // [esp+30h] [ebp-30h]
  unsigned int v29; // [esp+34h] [ebp-2Ch]
  unsigned int v30; // [esp+38h] [ebp-28h]
  _DWORD *v31; // [esp+3Ch] [ebp-24h]
  int v32; // [esp+40h] [ebp-20h]
  int v33; // [esp+44h] [ebp-1Ch]
  unsigned int v34; // [esp+48h] [ebp-18h]
  unsigned int v35; // [esp+4Ch] [ebp-14h]
  unsigned int v36; // [esp+50h] [ebp-10h]
  unsigned __int64 v37; // [esp+54h] [ebp-Ch]
  unsigned int v38; // [esp+5Ch] [ebp-4h]

  v2 = a2;
  v20 = *((_DWORD *)a1 + 13);
  v3 = *((_DWORD *)a2 + 28);
  v4 = *((_DWORD *)a2 + 3);
  v30 = *((_DWORD *)a2 + 4);
  v29 = *((_DWORD *)a2 + 5);
  v5 = *((_DWORD *)a1 + 12) + v20 * v3;
  v6 = (int *)((char *)a2 + 160);
  v28 = *((_DWORD *)a2 + 6);
  v27 = *((_DWORD *)a2 + 7);
  v26 = *((_DWORD *)a2 + 8);
  v25 = *((_DWORD *)a2 + 9);
  v21 = *((_DWORD *)a2 + 38);
  v33 = v5;
  v24 = (char *)a2 + 160;
  if ( v4 >= *((_DWORD *)a2 + 29) )
    v4 = *((_DWORD *)a2 + 29);
  if ( v3 < v4 )
  {
    v7 = v4 - v3;
    v32 = v7;
    do
    {
      v36 = v6[2];
      v38 = v6[3];
      v35 = v6[4];
      HIDWORD(v37) = v6[5];
      v34 = v6[6];
      LODWORD(v37) = v6[7];
      v8 = *(_DWORD *)v2;
      v22 = *v6;
      v23 = *(_DWORD *)v2;
      if ( *v6 > *(_DWORD *)v2 )
        v8 = *v6;
      v9 = v6[1];
      if ( v9 >= *((_DWORD *)v2 + 2) )
        v9 = *((_DWORD *)v2 + 2);
      v2 = a2;
      if ( *((_DWORD *)a1 + 11) <= (unsigned int)(v8 + v5) && v8 < v9 )
      {
        v10 = v5 + 4 * v8;
        v11 = v23 - v22;
        v12 = v5 + 4 * v9;
        v31 = (_DWORD *)v10;
        if ( v23 - v22 > 0 )
        {
          v38 = (v11 * __PAIR64__(v29, v30) + __PAIR64__(v38, v36)) >> 32;
          v36 += v11 * v30;
          HIDWORD(v37) = (v11 * __PAIR64__(v27, v28) + __PAIR64__(HIDWORD(v37), v35)) >> 32;
          v35 += v11 * v28;
          v7 = v32;
          LODWORD(v37) = (v11 * __PAIR64__(v25, v26) + __PAIR64__(v37, v34)) >> 32;
          v34 += v11 * v26;
          v5 = v33;
        }
        v13 = v12 >= v10 ? (v12 - v10 + 3) >> 2 : 0;
        if ( v13 )
        {
          v14 = v31;
          v15 = v13;
          v16 = 0;
          v17 = v38;
          v18 = HIDWORD(v37);
          v19 = v37;
          do
          {
            *v14++ = XEPALOBJ::ulDispatchGFPEFunction(
                       v21,
                       *(_DWORD *)(*(_DWORD *)v21 + 68),
                       (v19 & 0xFF0000FF | (((v17 >> 8) | v18 & 0xFF00FFFF) >> 8)) >> 8);
            v17 = (__PAIR64__(v38, v30) + __PAIR64__(v29, v36)) >> 32;
            v36 += v30;
            v18 = (__PAIR64__(HIDWORD(v37), v28) + __PAIR64__(v27, v35)) >> 32;
            v35 += v28;
            v19 = (__PAIR64__(v37, v26) + __PAIR64__(v25, v34)) >> 32;
            v34 += v26;
            ++v16;
            v38 = v17;
            v37 = __PAIR64__(v18, v19);
          }
          while ( v16 < v15 );
          v2 = a2;
          v7 = v32;
          v5 = v33;
        }
      }
      v5 += v20;
      v6 = (int *)(v24 + 40);
      --v7;
      v33 = v5;
      v24 += 40;
      v32 = v7;
    }
    while ( v7 );
  }
}
