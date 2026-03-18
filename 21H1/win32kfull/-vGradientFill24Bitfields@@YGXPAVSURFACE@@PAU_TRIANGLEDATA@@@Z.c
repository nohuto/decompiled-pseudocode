/*
 * XREFs of ?vGradientFill24Bitfields@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23D214
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vGradientFill24Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int v3; // edx
  char *v4; // edi
  int v5; // esi
  int v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  _BYTE *v10; // edx
  int v11; // eax
  _BYTE *v12; // ebx
  unsigned int v13; // esi
  struct SURFACE *v14; // eax
  int v15; // eax
  bool v16; // cf
  int v17; // [esp+Ch] [ebp-50h]
  int v18; // [esp+10h] [ebp-4Ch]
  int v19; // [esp+14h] [ebp-48h]
  int v20; // [esp+18h] [ebp-44h]
  unsigned int v21; // [esp+1Ch] [ebp-40h]
  unsigned int v22; // [esp+20h] [ebp-3Ch]
  unsigned int v23; // [esp+24h] [ebp-38h]
  unsigned int v24; // [esp+28h] [ebp-34h]
  unsigned int v25; // [esp+2Ch] [ebp-30h]
  unsigned int v26; // [esp+30h] [ebp-2Ch]
  unsigned int v27; // [esp+34h] [ebp-28h]
  int v28; // [esp+3Ch] [ebp-20h]
  char *v29; // [esp+40h] [ebp-1Ch]
  unsigned int v30; // [esp+44h] [ebp-18h]
  int v31; // [esp+48h] [ebp-14h]
  unsigned int v32; // [esp+4Ch] [ebp-10h]
  unsigned int v33; // [esp+50h] [ebp-Ch]
  unsigned int v34; // [esp+54h] [ebp-8h]
  unsigned int v35; // [esp+58h] [ebp-4h]
  struct SURFACE *v36; // [esp+64h] [ebp+8h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 28);
  v4 = (char *)a2 + 160;
  v17 = *((_DWORD *)a1 + 13);
  v5 = *((_DWORD *)a2 + 3);
  v29 = (char *)a2 + 160;
  v26 = *((_DWORD *)a2 + 4);
  v25 = *((_DWORD *)a2 + 5);
  v24 = *((_DWORD *)a2 + 6);
  v23 = *((_DWORD *)a2 + 7);
  v22 = *((_DWORD *)a2 + 8);
  v21 = *((_DWORD *)a2 + 9);
  v18 = *((_DWORD *)a2 + 38);
  v31 = *((_DWORD *)a1 + 12) + v17 * v3;
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  if ( v3 < v5 )
  {
    v6 = v5 - v3;
    v28 = v6;
    do
    {
      v7 = *(_DWORD *)v4;
      v34 = *((_DWORD *)v4 + 2);
      v30 = *((_DWORD *)v4 + 3);
      v33 = *((_DWORD *)v4 + 4);
      v36 = (struct SURFACE *)*((_DWORD *)v4 + 5);
      v32 = *((_DWORD *)v4 + 6);
      v35 = *((_DWORD *)v4 + 7);
      v19 = *(_DWORD *)v4;
      v20 = *(_DWORD *)v2;
      if ( *(_DWORD *)v4 <= *(_DWORD *)v2 )
        v7 = *(_DWORD *)v2;
      v8 = *((_DWORD *)v4 + 1);
      if ( v8 >= *((_DWORD *)v2 + 2) )
        v8 = *((_DWORD *)v2 + 2);
      v9 = v31;
      if ( v7 < v8 )
      {
        v27 = v31 + 3 * v8;
        v10 = (_BYTE *)(v31 + 3 * v7);
        v11 = v20 - v19;
        if ( v20 - v19 > 0 )
        {
          v30 = (v11 * __PAIR64__(v25, v26) + __PAIR64__(v30, v34)) >> 32;
          v34 += v11 * v26;
          v36 = (struct SURFACE *)((v11 * __PAIR64__(v23, v24) + __PAIR64__((unsigned int)v36, v33)) >> 32);
          v33 += v11 * v24;
          v6 = v28;
          v35 = (v11 * __PAIR64__(v21, v22) + __PAIR64__(v35, v32)) >> 32;
          v32 += v11 * v22;
          v4 = v29;
          v9 = v31;
        }
        if ( (unsigned int)v10 < v27 )
        {
          v12 = v10;
          v13 = v30;
          v14 = v36;
          do
          {
            v15 = XEPALOBJ::ulDispatchGFPEFunction(
                    v18,
                    *(_DWORD *)(*(_DWORD *)v18 + 68),
                    (v35 & 0xFF0000FF | (((v13 >> 8) | (unsigned int)v14 & 0xFF00FFFF) >> 8)) >> 8);
            *v12 = v15;
            v12[2] = BYTE2(v15);
            v12[1] = BYTE1(v15);
            v12 += 3;
            v13 = (__PAIR64__(v13, v26) + __PAIR64__(v25, v34)) >> 32;
            v34 += v26;
            v14 = (struct SURFACE *)((__PAIR64__((unsigned int)v36, v24) + __PAIR64__(v23, v33)) >> 32);
            v33 += v24;
            v16 = __CFADD__(v22, v32);
            v32 += v22;
            v35 += v21 + v16;
            v36 = v14;
          }
          while ( (unsigned int)v12 < v27 );
          v2 = a2;
          v6 = v28;
          v4 = v29;
          v9 = v31;
        }
      }
      v4 += 40;
      --v6;
      v31 = v17 + v9;
      v29 = v4;
      v28 = v6;
    }
    while ( v6 );
  }
}
