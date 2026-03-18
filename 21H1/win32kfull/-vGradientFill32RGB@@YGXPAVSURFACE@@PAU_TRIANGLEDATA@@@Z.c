/*
 * XREFs of ?vGradientFill32RGB@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23D975
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vGradientFill32RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int v3; // eax
  char *v4; // edi
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int *v12; // edi
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  bool v18; // cf
  int v19; // [esp+Ch] [ebp-50h]
  int v20; // [esp+10h] [ebp-4Ch]
  int v21; // [esp+14h] [ebp-48h]
  unsigned int v22; // [esp+18h] [ebp-44h]
  unsigned int v23; // [esp+1Ch] [ebp-40h]
  unsigned int v24; // [esp+20h] [ebp-3Ch]
  unsigned int v25; // [esp+24h] [ebp-38h]
  unsigned int v26; // [esp+28h] [ebp-34h]
  unsigned int v27; // [esp+2Ch] [ebp-30h]
  unsigned int *v28; // [esp+30h] [ebp-2Ch]
  int v29; // [esp+34h] [ebp-28h]
  unsigned int v30; // [esp+34h] [ebp-28h]
  int v31; // [esp+38h] [ebp-24h]
  char *v32; // [esp+3Ch] [ebp-20h]
  unsigned int v33; // [esp+40h] [ebp-1Ch]
  int v34; // [esp+44h] [ebp-18h]
  unsigned int v35; // [esp+48h] [ebp-14h]
  unsigned int v36; // [esp+4Ch] [ebp-10h]
  unsigned int v37; // [esp+50h] [ebp-Ch]
  unsigned int v38; // [esp+54h] [ebp-8h]
  unsigned int v39; // [esp+58h] [ebp-4h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 28);
  v4 = (char *)a2 + 160;
  v19 = *((_DWORD *)a1 + 13);
  v5 = *((_DWORD *)a2 + 3);
  v32 = (char *)a2 + 160;
  v27 = *((_DWORD *)a2 + 4);
  v26 = *((_DWORD *)a2 + 5);
  v25 = *((_DWORD *)a2 + 6);
  v24 = *((_DWORD *)a2 + 7);
  v23 = *((_DWORD *)a2 + 8);
  v22 = *((_DWORD *)a2 + 9);
  v34 = *((_DWORD *)a1 + 12) + v19 * v3;
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  if ( v3 < v5 )
  {
    v6 = v5 - v3;
    v31 = v6;
    do
    {
      v7 = *(_DWORD *)v2;
      v37 = *((_DWORD *)v4 + 2);
      v33 = *((_DWORD *)v4 + 3);
      v36 = *((_DWORD *)v4 + 4);
      v39 = *((_DWORD *)v4 + 5);
      v35 = *((_DWORD *)v4 + 6);
      v38 = *((_DWORD *)v4 + 7);
      v20 = *(_DWORD *)v4;
      v21 = *(_DWORD *)v2;
      if ( *(_DWORD *)v4 > *(_DWORD *)v2 )
        v7 = *(_DWORD *)v4;
      v29 = *((_DWORD *)v4 + 1);
      if ( v29 >= *((_DWORD *)v2 + 2) )
        v29 = *((_DWORD *)v2 + 2);
      v8 = v34;
      v2 = a2;
      if ( *((_DWORD *)a1 + 11) <= (unsigned int)(v7 + v34) && v7 < v29 )
      {
        v30 = v34 + 4 * v29;
        v9 = v34 + 4 * v7;
        v10 = v21 - v20;
        v28 = (unsigned int *)v9;
        if ( v21 - v20 > 0 )
        {
          v33 = (v10 * __PAIR64__(v26, v27) + __PAIR64__(v33, v37)) >> 32;
          v37 += v10 * v27;
          v39 = (v10 * __PAIR64__(v24, v25) + __PAIR64__(v39, v36)) >> 32;
          v36 += v10 * v25;
          v8 = v34;
          v38 = (v10 * __PAIR64__(v22, v23) + __PAIR64__(v38, v35)) >> 32;
          v35 += v10 * v23;
          v6 = v31;
          v4 = v32;
        }
        v11 = v30 >= v9 ? (v30 - v9 + 3) >> 2 : 0;
        if ( v11 )
        {
          v12 = v28;
          v13 = v11;
          v14 = 0;
          v15 = v33;
          v16 = v39;
          do
          {
            v17 = v38 & 0xFF0000FF | (((v15 >> 8) | v16 & 0xFF00FFFF) >> 8);
            v15 = (__PAIR64__(v15, v27) + __PAIR64__(v26, v37)) >> 32;
            v37 += v27;
            v16 = (__PAIR64__(v39, v25) + __PAIR64__(v24, v36)) >> 32;
            v36 += v25;
            *v12++ = v17 >> 8;
            v18 = __CFADD__(v23, v35);
            v35 += v23;
            v38 += v22 + v18;
            ++v14;
            v39 = v16;
          }
          while ( v14 < v13 );
          v2 = a2;
          v6 = v31;
          v8 = v34;
          v4 = v32;
        }
      }
      v4 += 40;
      --v6;
      v34 = v19 + v8;
      v32 = v4;
      v31 = v6;
    }
    while ( v6 );
  }
}
