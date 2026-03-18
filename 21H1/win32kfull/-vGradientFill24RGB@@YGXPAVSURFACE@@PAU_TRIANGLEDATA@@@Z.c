/*
 * XREFs of ?vGradientFill24RGB@@YGXPAVSURFACE@@PAU_TRIANGLEDATA@@@Z @ 0x23D3E5
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

void __stdcall vGradientFill24RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // ebx
  int v3; // edi
  char *v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // esi
  _BYTE *v10; // edi
  int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // esi
  unsigned int v14; // ecx
  int v15; // [esp+Ch] [ebp-4Ch]
  int v16; // [esp+14h] [ebp-44h]
  int v17; // [esp+18h] [ebp-40h]
  unsigned int v18; // [esp+1Ch] [ebp-3Ch]
  unsigned int v19; // [esp+20h] [ebp-38h]
  unsigned int v20; // [esp+24h] [ebp-34h]
  unsigned int v21; // [esp+28h] [ebp-30h]
  unsigned int v22; // [esp+2Ch] [ebp-2Ch]
  unsigned int v23; // [esp+30h] [ebp-28h]
  unsigned int v24; // [esp+34h] [ebp-24h]
  int v25; // [esp+38h] [ebp-20h]
  char *v26; // [esp+3Ch] [ebp-1Ch]
  unsigned int v27; // [esp+40h] [ebp-18h]
  unsigned int v28; // [esp+44h] [ebp-14h]
  unsigned int v29; // [esp+48h] [ebp-10h]
  int v30; // [esp+4Ch] [ebp-Ch]
  unsigned int v31; // [esp+50h] [ebp-8h]
  unsigned int v32; // [esp+54h] [ebp-4h]
  struct SURFACE *v33; // [esp+60h] [ebp+8h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 28);
  v4 = (char *)a2 + 160;
  v15 = *((_DWORD *)a1 + 13);
  v5 = *((_DWORD *)a2 + 3);
  v26 = (char *)a2 + 160;
  v23 = *((_DWORD *)a2 + 4);
  v22 = *((_DWORD *)a2 + 5);
  v21 = *((_DWORD *)a2 + 6);
  v20 = *((_DWORD *)a2 + 7);
  v19 = *((_DWORD *)a2 + 8);
  v18 = *((_DWORD *)a2 + 9);
  v30 = *((_DWORD *)a1 + 12) + v15 * v3;
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  if ( v3 < v5 )
  {
    v6 = v5 - v3;
    v25 = v6;
    do
    {
      v7 = *(_DWORD *)v4;
      v33 = (struct SURFACE *)*((_DWORD *)v4 + 2);
      v29 = *((_DWORD *)v4 + 3);
      v32 = *((_DWORD *)v4 + 4);
      v28 = *((_DWORD *)v4 + 5);
      v31 = *((_DWORD *)v4 + 6);
      v27 = *((_DWORD *)v4 + 7);
      v16 = *(_DWORD *)v4;
      v17 = *(_DWORD *)v2;
      if ( *(_DWORD *)v4 <= *(_DWORD *)v2 )
        v7 = *(_DWORD *)v2;
      v8 = *((_DWORD *)v4 + 1);
      if ( v8 >= *((_DWORD *)v2 + 2) )
        v8 = *((_DWORD *)v2 + 2);
      v9 = v30;
      if ( v7 < v8 )
      {
        v24 = v30 + 3 * v8;
        v10 = (_BYTE *)(v30 + 3 * v7);
        v11 = v17 - v16;
        if ( v17 - v16 > 0 )
        {
          v29 = (v11 * __PAIR64__(v22, v23) + __PAIR64__(v29, (unsigned int)v33)) >> 32;
          v33 = (struct SURFACE *)((char *)v33 + v11 * v23);
          v28 = (v11 * __PAIR64__(v20, v21) + __PAIR64__(v28, v32)) >> 32;
          v32 += v11 * v21;
          v6 = v25;
          v27 = (v11 * __PAIR64__(v18, v19) + __PAIR64__(v27, v31)) >> 32;
          v31 += v11 * v19;
          v4 = v26;
          v9 = v30;
        }
        if ( (unsigned int)v10 < v24 )
        {
          v12 = v29;
          v13 = v28;
          v14 = v27;
          do
          {
            *v10 = HIBYTE(v12);
            v10[1] = HIBYTE(v13);
            v10[2] = HIBYTE(v14);
            v12 = (__PAIR64__(v12, v23) + __PAIR64__(v22, (unsigned int)v33)) >> 32;
            v33 = (struct SURFACE *)((char *)v33 + v23);
            v13 = (__PAIR64__(v13, v21) + __PAIR64__(v20, v32)) >> 32;
            v32 += v21;
            v14 = (__PAIR64__(v14, v19) + __PAIR64__(v18, v31)) >> 32;
            v31 += v19;
            v10 += 3;
          }
          while ( (unsigned int)v10 < v24 );
          v2 = a2;
          v6 = v25;
          v4 = v26;
          v9 = v30;
        }
      }
      v4 += 40;
      --v6;
      v30 = v15 + v9;
      v26 = v4;
      v25 = v6;
    }
    while ( v6 );
  }
}
