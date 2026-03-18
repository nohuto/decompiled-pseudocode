/*
 * XREFs of _vSrcOpaqCopyS1D4@44 @ 0x1F04D9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall vSrcOpaqCopyS1D4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned int a10,
        int a11)
{
  char v11; // cl
  int v12; // edx
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // ebx
  int v16; // edi
  int v17; // eax
  unsigned __int8 *v18; // edx
  int v19; // esi
  int v20; // eax
  _BYTE *v21; // edi
  unsigned __int8 *v22; // ebx
  unsigned int v23; // ecx
  _BYTE *v24; // esi
  int v25; // ebx
  int v26; // edi
  _BYTE *v27; // edx
  unsigned __int8 v28; // bl
  int v29; // ecx
  _BYTE *v30; // edi
  unsigned int v31; // edx
  int v32; // eax
  _BYTE *v33; // edx
  int v34; // ebx
  char v35; // cl
  unsigned __int8 v36; // bl
  int v37; // eax
  int v38; // edi
  unsigned __int8 *v39; // esi
  _BYTE *v40; // edi
  int v41; // ecx
  unsigned __int8 v42; // dl
  unsigned int v43; // ecx
  int v44; // eax
  int v46; // [esp+Ch] [ebp-20h]
  unsigned __int8 *v47; // [esp+10h] [ebp-1Ch]
  _BYTE *v48; // [esp+10h] [ebp-1Ch]
  int v49; // [esp+14h] [ebp-18h]
  int v50; // [esp+1Ch] [ebp-10h]
  int v51; // [esp+20h] [ebp-Ch]
  int v52; // [esp+24h] [ebp-8h]
  int v53; // [esp+28h] [ebp-4h]
  int v54; // [esp+28h] [ebp-4h]
  _BYTE *v55; // [esp+38h] [ebp+Ch]
  int v56; // [esp+38h] [ebp+Ch]
  char v57; // [esp+40h] [ebp+14h]
  _BYTE *v58; // [esp+44h] [ebp+18h]
  int v59; // [esp+44h] [ebp+18h]
  _BYTE *v60; // [esp+48h] [ebp+1Ch]
  unsigned __int8 *v61; // [esp+48h] [ebp+1Ch]
  int v62; // [esp+4Ch] [ebp+20h]
  int v63; // [esp+50h] [ebp+24h]

  v11 = a9;
  LOBYTE(a9) = a10 | (16 * a10);
  BYTE1(a9) = v11 | (16 * a9);
  HIBYTE(a9) = v11 | (16 * BYTE1(a9));
  v12 = a2;
  v13 = a2 & 7;
  BYTE2(a9) = a10 | (16 * HIBYTE(a9));
  v14 = a6 - a5 + a2;
  v17 = a8 * a3 + a1 + ((a2 + 7) >> 3);
  v63 = a8 * a3;
  v47 = (unsigned __int8 *)v17;
  v15 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)a2) & 7;
  v46 = 8 - v13;
  v51 = v14;
  a10 = v15;
  v16 = a6;
  v50 = v13 != 0 ? 8 - v13 : 0;
  LOBYTE(v17) = v15 + v50;
  v53 = a6 - a5 - (v15 + v50);
  if ( v53 > 0 )
  {
    v18 = (unsigned __int8 *)(a1 + ((a2 + 7) >> 3));
    v19 = v53 >> 3;
    v20 = a3 - (v53 >> 3);
    v54 = a7 - (v53 >> 1);
    v49 = v20;
    v21 = (_BYTE *)(a4 + ((v50 + a5) >> 1));
    do
    {
      v22 = &v18[v19];
      do
      {
        v23 = *v18;
        *v21 = *((_BYTE *)&a9 + (v23 >> 6));
        v21[1] = *((_BYTE *)&a9 + ((v23 >> 4) & 3));
        v21[2] = *((_BYTE *)&a9 + ((v23 >> 2) & 3));
        LOBYTE(v17) = *((_BYTE *)&a9 + (v23 & 3));
        v21[3] = v17;
        v21 += 4;
        ++v18;
      }
      while ( v18 != v22 );
      v18 += v49;
      v21 += v54;
    }
    while ( v18 != v47 );
    v12 = a2;
    v16 = a6;
    v15 = a10;
    v14 = a6 - a5 + a2;
    v13 = a2 & 7;
  }
  if ( v13 )
  {
    v24 = (_BYTE *)((a5 >> 1) + a4);
    LOBYTE(v17) = v12 ^ v51;
    if ( ((v12 ^ v51) & 0xFFFFFFF8) == 0 )
    {
      v25 = v15 - v13;
      a10 = v25;
      if ( v25 > 0 )
      {
        v26 = v25;
        v27 = (_BYTE *)(a1 + (v12 >> 3));
        v55 = v27;
        v58 = &v27[v63];
        LOBYTE(v17) = v13 & 0xFE;
        v57 = v13 & 0xFE;
        v52 = v13 & 1;
        do
        {
          v28 = *v27 << v17;
          v29 = v26;
          v60 = v24;
          if ( v52 )
          {
            v29 = v26 - 1;
            *v24 ^= (*v24 ^ *((_BYTE *)&a9 + (v28 >> 6))) & 0xF;
            v28 *= 4;
            v60 = v24 + 1;
          }
          if ( v29 >= 2 )
          {
            v30 = v60;
            v31 = (unsigned int)v29 >> 1;
            v29 -= 2 * ((unsigned int)v29 >> 1);
            do
            {
              v32 = v28 >> 6;
              v28 *= 4;
              *v30++ = *((_BYTE *)&a9 + v32);
              --v31;
            }
            while ( v31 );
            v27 = v55;
            v60 = v30;
            v26 = a10;
          }
          if ( v29 )
            *v60 = *((_BYTE *)&a9 + (v28 >> 6)) ^ (*v60 ^ *((_BYTE *)&a9 + (v28 >> 6))) & 0xF;
          v27 += a3;
          v24 += a7;
          LOBYTE(v17) = v57;
          v55 = v27;
        }
        while ( v27 != v58 );
      }
      return v17;
    }
    v33 = (_BYTE *)(a1 + (v12 >> 3));
    v48 = &v33[v63];
    v34 = a7 - ((9 - v13) >> 1);
    v35 = v13 & 0xFE;
    v59 = v34;
    do
    {
      v17 = v46;
      v36 = *v33 << v35;
      v56 = v46;
      if ( (v46 & 1) != 0 )
      {
        v37 = v36 >> 6;
        v36 *= 4;
        *v24 ^= (*v24 ^ *((_BYTE *)&a9 + v37)) & 0xF;
        ++v24;
        v17 = v46 - 1;
        v56 = v46 - 1;
      }
      if ( v17 )
      {
        v38 = v56;
        do
        {
          v17 = v36 >> 6;
          v36 *= 4;
          LOBYTE(v17) = *((_BYTE *)&a9 + v17);
          *v24++ = v17;
          v38 -= 2;
        }
        while ( v38 );
      }
      v33 += a3;
      v24 += v59;
    }
    while ( v33 != v48 );
    v16 = a6;
    v15 = a10;
    v14 = v51;
  }
  if ( v15 )
  {
    v39 = (unsigned __int8 *)(a1 + (v14 >> 3));
    v40 = (_BYTE *)(a4 + ((int)(v16 - v15) >> 1));
    v61 = &v39[v63];
    v41 = a7 - ((v15 + 1) >> 1);
    v62 = v41;
    do
    {
      v42 = *v39;
      v17 = v15;
      if ( v15 >= 2 )
      {
        v43 = v15 >> 1;
        do
        {
          v44 = v42 >> 6;
          v42 *= 4;
          *v40++ = *((_BYTE *)&a9 + v44);
          --v43;
        }
        while ( v43 );
        v17 = v15 - 2 * (v15 >> 1);
        v41 = v62;
      }
      if ( v17 )
      {
        v17 = v42 >> 6;
        *v40 = *((_BYTE *)&a9 + v17) ^ (*v40 ^ *((_BYTE *)&a9 + v17)) & 0xF;
        ++v40;
        v41 = v62;
      }
      v39 += a3;
      v40 += v41;
    }
    while ( v39 != v61 );
  }
  return v17;
}
