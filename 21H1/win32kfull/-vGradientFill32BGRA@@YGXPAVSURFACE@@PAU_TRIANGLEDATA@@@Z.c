/*
 * XREFs of ?vGradientFill32BGRA@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23D579
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vGradientFill32BGRA(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int v3; // eax
  char *v4; // esi
  int v5; // edx
  int v6; // edx
  int v7; // ecx
  int v8; // edi
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int *v12; // esi
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  bool v18; // cf
  int v19; // [esp+Ch] [ebp-60h]
  int v20; // [esp+10h] [ebp-5Ch]
  int v21; // [esp+14h] [ebp-58h]
  unsigned int v22; // [esp+18h] [ebp-54h]
  unsigned int v23; // [esp+1Ch] [ebp-50h]
  unsigned int v24; // [esp+20h] [ebp-4Ch]
  unsigned int v25; // [esp+24h] [ebp-48h]
  unsigned int v26; // [esp+28h] [ebp-44h]
  unsigned int v27; // [esp+2Ch] [ebp-40h]
  unsigned int v28; // [esp+30h] [ebp-3Ch]
  unsigned int v29; // [esp+34h] [ebp-38h]
  unsigned int *v30; // [esp+38h] [ebp-34h]
  int v31; // [esp+3Ch] [ebp-30h]
  unsigned int v32; // [esp+3Ch] [ebp-30h]
  int v33; // [esp+40h] [ebp-2Ch]
  char *v34; // [esp+44h] [ebp-28h]
  unsigned int v35; // [esp+48h] [ebp-24h]
  int v36; // [esp+4Ch] [ebp-20h]
  unsigned int v37; // [esp+50h] [ebp-1Ch]
  unsigned int v38; // [esp+54h] [ebp-18h]
  unsigned int v39; // [esp+58h] [ebp-14h]
  unsigned int v40; // [esp+5Ch] [ebp-10h]
  unsigned int v41; // [esp+60h] [ebp-Ch]
  unsigned int v42; // [esp+64h] [ebp-8h]
  unsigned int v43; // [esp+68h] [ebp-4h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 28);
  v4 = (char *)a2 + 160;
  v19 = *((_DWORD *)a1 + 13);
  v5 = *((_DWORD *)a2 + 3);
  v34 = (char *)a2 + 160;
  v29 = *((_DWORD *)a2 + 4);
  v28 = *((_DWORD *)a2 + 5);
  v27 = *((_DWORD *)a2 + 6);
  v26 = *((_DWORD *)a2 + 7);
  v25 = *((_DWORD *)a2 + 8);
  v24 = *((_DWORD *)a2 + 9);
  v23 = *((_DWORD *)a2 + 10);
  v22 = *((_DWORD *)a2 + 11);
  v36 = *((_DWORD *)a1 + 12) + v19 * v3;
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  if ( v3 < v5 )
  {
    v6 = v5 - v3;
    v33 = v6;
    do
    {
      v7 = *(_DWORD *)v2;
      v40 = *((_DWORD *)v4 + 2);
      v35 = *((_DWORD *)v4 + 3);
      v39 = *((_DWORD *)v4 + 4);
      v43 = *((_DWORD *)v4 + 5);
      v38 = *((_DWORD *)v4 + 6);
      v42 = *((_DWORD *)v4 + 7);
      v37 = *((_DWORD *)v4 + 8);
      v41 = *((_DWORD *)v4 + 9);
      v20 = *(_DWORD *)v4;
      v21 = *(_DWORD *)v2;
      if ( *(_DWORD *)v4 > *(_DWORD *)v2 )
        v7 = *(_DWORD *)v4;
      v31 = *((_DWORD *)v4 + 1);
      if ( v31 >= *((_DWORD *)v2 + 2) )
        v31 = *((_DWORD *)v2 + 2);
      v8 = v36;
      v2 = a2;
      if ( *((_DWORD *)a1 + 11) <= (unsigned int)(v7 + v36) && v7 < v31 )
      {
        v32 = v36 + 4 * v31;
        v9 = v36 + 4 * v7;
        v10 = v21 - v20;
        v30 = (unsigned int *)v9;
        if ( v21 - v20 > 0 )
        {
          v35 = (v10 * __PAIR64__(v28, v29) + __PAIR64__(v35, v40)) >> 32;
          v40 += v10 * v29;
          v43 = (v10 * __PAIR64__(v26, v27) + __PAIR64__(v43, v39)) >> 32;
          v39 += v10 * v27;
          v42 = (v10 * __PAIR64__(v24, v25) + __PAIR64__(v42, v38)) >> 32;
          v38 += v10 * v25;
          v4 = v34;
          v41 = (v10 * __PAIR64__(v22, v23) + __PAIR64__(v41, v37)) >> 32;
          v37 += v10 * v23;
          v6 = v33;
          v8 = v36;
        }
        v11 = v32 >= v9 ? (v32 - v9 + 3) >> 2 : 0;
        if ( v11 )
        {
          v12 = v30;
          v13 = v11;
          v14 = 0;
          v15 = v35;
          v16 = v43;
          do
          {
            v17 = v41 & 0xFF000000 | ((v15 & 0xFF0000FF | (((v42 >> 8) | v16 & 0xFF00FFFF) >> 8)) >> 8);
            v15 = (__PAIR64__(v15, v29) + __PAIR64__(v28, v40)) >> 32;
            v40 += v29;
            v16 = (__PAIR64__(v43, v27) + __PAIR64__(v26, v39)) >> 32;
            v39 += v27;
            *v12++ = v17;
            v18 = __CFADD__(v25, v38);
            v38 += v25;
            v42 += v24 + v18;
            v18 = __CFADD__(v23, v37);
            v37 += v23;
            v41 += v22 + v18;
            ++v14;
            v43 = v16;
          }
          while ( v14 < v13 );
          v2 = a2;
          v6 = v33;
          v4 = v34;
          v8 = v36;
        }
      }
      v4 += 40;
      --v6;
      v36 = v19 + v8;
      v34 = v4;
      v33 = v6;
    }
    while ( v6 );
  }
}
