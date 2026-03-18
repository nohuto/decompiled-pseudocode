/*
 * XREFs of _FastExpAA_CX @ 0x1C87B3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl FastExpAA_CX(int a1, int a2, _BYTE *a3, _BYTE *a4, int a5)
{
  unsigned int v5; // ecx
  _BYTE *v6; // ebx
  unsigned __int16 *v7; // edi
  int v8; // eax
  unsigned __int8 v9; // dh
  int v10; // esi
  int result; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int16 v14; // ax
  __int16 v15; // di
  unsigned __int8 v16; // dh
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // al
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _BYTE *v23; // ebx
  _BYTE *v24; // ebx
  _BYTE *v25; // ebx
  unsigned int v26; // eax
  _BYTE *v27; // edi
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // esi
  int v31; // edx
  int v32; // ecx
  __int16 v33; // [esp+Ch] [ebp-4Ch]
  __int16 v34; // [esp+Fh] [ebp-49h]
  __int16 v35; // [esp+12h] [ebp-46h]
  unsigned int v36; // [esp+18h] [ebp-40h]
  int v37; // [esp+2Ch] [ebp-2Ch]
  unsigned __int16 *v38; // [esp+40h] [ebp-18h]
  int v39; // [esp+4Ch] [ebp-Ch]
  __int16 v40; // [esp+52h] [ebp-6h]
  __int16 v41; // [esp+54h] [ebp-4h]
  unsigned __int8 v42; // [esp+56h] [ebp-2h]
  unsigned __int8 v43; // [esp+57h] [ebp-1h]
  unsigned __int8 v44; // [esp+63h] [ebp+Bh]
  int v45; // [esp+64h] [ebp+Ch]
  _BYTE *v46; // [esp+68h] [ebp+10h]
  _BYTE *v47; // [esp+68h] [ebp+10h]
  _BYTE *v48; // [esp+68h] [ebp+10h]
  _BYTE *v49; // [esp+68h] [ebp+10h]

  v5 = *(_DWORD *)(a1 + 76);
  v6 = a3;
  v7 = *(unsigned __int16 **)(a1 + 72);
  v8 = 3 * *(unsigned __int8 *)(a1 + 68);
  v36 = v5;
  v9 = *(_BYTE *)(v8 + a2 + 2);
  v41 = *(_WORD *)(v8 + a2 - 3);
  v10 = v8 + a2 + 3;
  v40 = *(_WORD *)(v8 + a2);
  v43 = *(_BYTE *)(v8 + a2 - 1);
  result = a4 - a3;
  v44 = v9;
  v39 = a4 - a3;
  while ( (unsigned int)v7 < v5 )
  {
    v12 = result / a5;
    v13 = *v7;
    v38 = v7 + 1;
    if ( v13 > v12 )
      v13 = v12;
    v14 = v41;
    v15 = *(_WORD *)v10;
    v41 = v40;
    v34 = v40;
    v16 = *(_BYTE *)(v10 + 2);
    v10 += 3;
    v17 = v44;
    v33 = v14;
    v18 = v43;
    v40 = v15;
    v35 = v15;
    v7 = v38;
    v42 = v43;
    v43 = v44;
    v44 = v16;
    v45 = v10;
    v19 = v13 - 1;
    if ( !v19 )
    {
      v6[2] = (v18 + v16 + 2 * (v17 + 8 + 2 * (v18 + v16 + 5 * (unsigned int)v17))) >> 5;
      v6[1] = (HIBYTE(v33)
             + HIBYTE(v35)
             + 2 * (HIBYTE(v34) + 8 + 2 * (HIBYTE(v33) + HIBYTE(v35) + 5 * (unsigned int)HIBYTE(v34)))) >> 5;
      v26 = (unsigned __int8)v33
          + (unsigned __int8)v35
          + 2
          * ((unsigned __int8)v34 + 2 * ((unsigned __int8)v33 + (unsigned __int8)v35 + 5 * (unsigned __int8)v34 + 4));
LABEL_16:
      v29 = v26 >> 5;
      goto LABEL_17;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v30 = 3 * v17;
      v6[2] = (v30 + (unsigned int)v42 + 2) >> 2;
      v31 = 3 * HIBYTE(v34);
      v6[1] = (v31 + (unsigned int)HIBYTE(v33) + 2) >> 2;
      v32 = 3 * (unsigned __int8)v34;
      *v6 = (v32 + (unsigned int)(unsigned __int8)v33 + 2) >> 2;
      v39 -= a5;
      v6 += a5;
      v6[2] = (v30 + (unsigned int)v44 + 2) >> 2;
      v6[1] = (v31 + (unsigned int)HIBYTE(v35) + 2) >> 2;
      v29 = (v32 + (unsigned int)(unsigned __int8)v35 + 2) >> 2;
      goto LABEL_17;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v6[2] = (v18 + v17 + 2 * (v18 + 2 + 2 * (unsigned int)v17)) >> 3;
      v6[1] = (HIBYTE(v33) + HIBYTE(v34) + 2 * (HIBYTE(v33) + 2 * ((unsigned int)HIBYTE(v34) + 1))) >> 3;
      *a3 = ((unsigned __int8)v33
           + (unsigned __int8)v34
           + 2 * ((unsigned __int8)v33 + 2 * ((unsigned int)(unsigned __int8)v34 + 1))) >> 3;
      v49 = &a3[a5];
      v49[2] = (v16 + 14 * v17 + v18 + 8) >> 4;
      v49[1] = (HIBYTE(v35) + 14 * HIBYTE(v34) + HIBYTE(v33) + 8) >> 4;
      *v49 = ((unsigned __int8)v35 + 14 * (unsigned __int8)v34 + (unsigned __int8)v33 + 8) >> 4;
      v39 -= 2 * a5;
      v6 = &v49[a5];
      v6[2] = (v17 + 4 + v16 + 2 * (v16 + 2 * (unsigned int)v17)) >> 3;
      v6[1] = (HIBYTE(v34) + HIBYTE(v35) + 2 * (HIBYTE(v35) + 2 * ((unsigned int)HIBYTE(v34) + 1))) >> 3;
      v28 = (unsigned __int8)v34 + 4 + (unsigned __int8)v35 + 2 * ((unsigned __int8)v35 + 2 * (unsigned __int8)v34);
LABEL_12:
      v7 = v38;
      v29 = v28 >> 3;
LABEL_17:
      v10 = v45;
      *v6 = v29;
      goto LABEL_18;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      v6[2] = (v18 + v17 + 2 * (v18 + 2 + 2 * (unsigned int)v17)) >> 3;
      a3[1] = (HIBYTE(v33) + HIBYTE(v34) + 2 * (HIBYTE(v33) + 2 * ((unsigned int)HIBYTE(v34) + 1))) >> 3;
      *a3 = ((unsigned __int8)v33
           + (unsigned __int8)v34
           + 2 * ((unsigned __int8)v33 + 2 * ((unsigned int)(unsigned __int8)v34 + 1))) >> 3;
      v47 = &a3[a5];
      v47[2] = (v16 + 3 * (v18 + 4 * (unsigned int)v17) + 8) >> 4;
      v47[1] = (HIBYTE(v35) + 3 * (HIBYTE(v33) + 4 * (unsigned int)HIBYTE(v34)) + 8) >> 4;
      *v47 = ((unsigned __int8)v35 + 3 * ((unsigned __int8)v33 + 4 * (unsigned int)(unsigned __int8)v34) + 8) >> 4;
      v48 = &v47[a5];
      v48[2] = (v18 + 8 + 3 * (v16 + 4 * (unsigned int)v17)) >> 4;
      v48[1] = (HIBYTE(v33) + 8 + 3 * (HIBYTE(v35) + 4 * (unsigned int)HIBYTE(v34))) >> 4;
      *v48 = ((unsigned __int8)v33 + 8 + 3 * ((unsigned __int8)v35 + 4 * (unsigned int)(unsigned __int8)v34)) >> 4;
      v39 = v39 - 2 * a5 - a5;
      v27 = &v48[a5];
      v27[2] = (v17 + 4 + v16 + 2 * (v16 + 2 * (unsigned int)v17)) >> 3;
      v27[1] = (HIBYTE(v34) + 4 + HIBYTE(v35) + 2 * (HIBYTE(v35) + 2 * (unsigned int)HIBYTE(v34))) >> 3;
      v28 = (unsigned __int8)v34 + 4 + (unsigned __int8)v35 + 2 * ((unsigned __int8)v35 + 2 * (unsigned __int8)v34);
      v6 = &v48[a5];
      goto LABEL_12;
    }
    if ( v22 == 1 )
    {
      v6[2] = (19 * v17 + 13 * (unsigned int)v18 + 16) >> 5;
      v6[1] = (19 * HIBYTE(v34) + 16 + 13 * (unsigned int)HIBYTE(v33)) >> 5;
      *v6 = (19 * (unsigned __int8)v34 + 16 + 13 * (unsigned int)(unsigned __int8)v33) >> 5;
      v46 = &v6[a5];
      v37 = 25 * v17;
      v46[2] = (v37 + v16 + 16 + 6 * (unsigned int)v18) >> 5;
      v23 = &v6[a5];
      v46[1] = (25 * HIBYTE(v34) + 16 + HIBYTE(v35) + 6 * (unsigned int)HIBYTE(v33)) >> 5;
      *v23 = (25 * (unsigned __int8)v34 + (unsigned __int8)v35 + 6 * (unsigned int)(unsigned __int8)v33 + 16) >> 5;
      v24 = &v23[a5];
      v24[2] = (v18 + v16 + 16 + 2 * (v18 + v16 + 13 * (unsigned int)v17)) >> 5;
      v24[1] = (HIBYTE(v33) + 16 + HIBYTE(v35) + 2 * (HIBYTE(v33) + HIBYTE(v35) + 13 * (unsigned int)HIBYTE(v34))) >> 5;
      v7 = v38;
      *v24 = ((unsigned __int8)v33
            + (unsigned __int8)v35
            + 2 * ((unsigned __int8)v33 + (unsigned __int8)v35 + 13 * (unsigned int)(unsigned __int8)v34 + 8)) >> 5;
      v24[a5 + 2] = (v18 + 16 + v37 + 6 * (unsigned int)v16) >> 5;
      v25 = &v24[a5];
      v25[1] = (HIBYTE(v33) + 16 + 25 * HIBYTE(v34) + 6 * (unsigned int)HIBYTE(v35)) >> 5;
      *v25 = ((unsigned __int8)v33 + 16 + 25 * (unsigned __int8)v34 + 6 * (unsigned int)(unsigned __int8)v35) >> 5;
      v6 = &v25[a5];
      v39 -= 4 * a5;
      v6[2] = (19 * v17 + 16 + 13 * (unsigned int)v16) >> 5;
      v6[1] = (19 * HIBYTE(v34) + 16 + 13 * (unsigned int)HIBYTE(v35)) >> 5;
      v26 = 19 * (unsigned __int8)v34 + 16 + 13 * (unsigned __int8)v35;
      goto LABEL_16;
    }
LABEL_18:
    v6 += a5;
    result = v39 - a5;
    v5 = v36;
    a3 = v6;
    v39 -= a5;
    if ( v6 == a4 )
      return result;
  }
  return result;
}
