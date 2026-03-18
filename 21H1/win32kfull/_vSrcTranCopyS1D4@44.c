/*
 * XREFs of _vSrcTranCopyS1D4@44 @ 0x1F1298
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall vSrcTranCopyS1D4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11)
{
  int v11; // esi
  char v12; // ch
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // eax
  int v16; // edx
  unsigned __int8 *v17; // esi
  int v18; // edi
  _BYTE *v19; // ebx
  unsigned __int8 *v20; // edi
  unsigned int v21; // edx
  char v22; // cl
  _BYTE *v23; // edx
  char v24; // cl
  int v25; // ebx
  _BYTE *v26; // esi
  _BYTE *v27; // edi
  _BYTE *v28; // edx
  unsigned __int8 v29; // ch
  unsigned int v30; // edx
  int v31; // eax
  char v32; // di
  _BYTE *v33; // esi
  unsigned __int8 v34; // bl
  int v35; // ecx
  bool v36; // zf
  int v37; // edi
  char v38; // cl
  char *v39; // edx
  _BYTE *v40; // edi
  int v41; // esi
  char v42; // cl
  unsigned int v43; // esi
  unsigned __int8 v44; // bl
  int v45; // eax
  int v47; // [esp+Ch] [ebp-2Ch]
  int v48; // [esp+10h] [ebp-28h]
  int v49; // [esp+14h] [ebp-24h]
  int v50; // [esp+18h] [ebp-20h]
  int v51; // [esp+20h] [ebp-18h]
  int v52; // [esp+24h] [ebp-14h]
  int v53; // [esp+28h] [ebp-10h]
  unsigned int v54; // [esp+2Ch] [ebp-Ch]
  int v55; // [esp+2Ch] [ebp-Ch]
  int v56; // [esp+30h] [ebp-8h]
  int v57; // [esp+34h] [ebp-4h]
  unsigned int v58; // [esp+40h] [ebp+8h]
  int v59; // [esp+40h] [ebp+8h]
  _BYTE *v60; // [esp+44h] [ebp+Ch]
  int v61; // [esp+44h] [ebp+Ch]
  _BYTE *v62; // [esp+50h] [ebp+18h]
  int v63; // [esp+50h] [ebp+18h]
  char *v64; // [esp+50h] [ebp+18h]
  int v65; // [esp+54h] [ebp+1Ch]
  char v66; // [esp+57h] [ebp+1Fh]
  int v67; // [esp+58h] [ebp+20h]
  int v68; // [esp+5Ch] [ebp+24h]
  _BYTE *v69; // [esp+5Ch] [ebp+24h]
  char v70; // [esp+63h] [ebp+2Bh]

  v11 = a2;
  v12 = a9 | (16 * a9);
  v52 = a6 - a5 + a2;
  v56 = a2 & 7;
  v57 = -1044736;
  v13 = ((_BYTE)a6 - (_BYTE)a5 + (_BYTE)a2) & 7;
  v48 = a8 * a3 + a1 + ((a2 + 7) >> 3);
  v53 = a8 * a3;
  v70 = v12;
  v47 = 8 - v56;
  v54 = v13;
  v14 = a6;
  v51 = v56 != 0 ? 8 - v56 : 0;
  LOBYTE(v15) = v13 + v51;
  v16 = a6 - a5 - (v13 + v51);
  if ( v16 > 0 )
  {
    v17 = (unsigned __int8 *)(a1 + ((a2 + 7) >> 3));
    v18 = v16 >> 3;
    v50 = a7 - (v16 >> 1);
    v68 = v16 >> 3;
    v49 = a3 - (v16 >> 3);
    v19 = (_BYTE *)(a4 + ((v51 + a5) >> 1));
    do
    {
      v20 = &v17[v18];
      do
      {
        v21 = *v17;
        *v19 = v12 & *((_BYTE *)&v57 + (v21 >> 6)) | *v19 & ~*((_BYTE *)&v57 + (v21 >> 6));
        v19[1] = v12 & *((_BYTE *)&v57 + ((v21 >> 4) & 3)) | v19[1] & ~*((_BYTE *)&v57 + ((v21 >> 4) & 3));
        v22 = *((_BYTE *)&v57 + (v21 & 3));
        v19[2] = v12 & *((_BYTE *)&v57 + ((v21 >> 2) & 3)) | v19[2] & ~*((_BYTE *)&v57 + ((v21 >> 2) & 3));
        LOBYTE(v15) = v12 & v22 | v19[3] & ~v22;
        v19[3] = v15;
        v19 += 4;
        ++v17;
      }
      while ( v17 != v20 );
      v17 += v49;
      v19 += v50;
      v18 = v68;
    }
    while ( v17 != (unsigned __int8 *)v48 );
    v11 = a2;
    v14 = a6;
    v13 = v54;
  }
  if ( (a2 & 7) != 0 )
  {
    LOBYTE(v15) = v11 ^ v52;
    v23 = (_BYTE *)(a4 + (a5 >> 1));
    v62 = v23;
    if ( ((v11 ^ v52) & 0xFFFFFFF8) == 0 )
    {
      v24 = a2 & 7;
      v25 = v13 - v56;
      v55 = v25;
      if ( v25 > 0 )
      {
        v26 = (_BYTE *)(a1 + (v11 >> 3));
        v60 = &v26[v53];
        BYTE1(v15) = a9 | (16 * a9);
        do
        {
          v27 = v23;
          v28 = v62;
          v29 = *v26 << v24;
          v65 = v25;
          if ( (v56 & 1) != 0 )
          {
            if ( (v29 & 0x80u) != 0 )
              *v62 ^= (BYTE1(v15) ^ *v62) & 0xF;
            v27 = v62 + 1;
            v29 *= 2;
            v65 = v25 - 1;
            v28 = v62;
          }
          if ( v65 >= 2 )
          {
            v30 = (unsigned int)v65 >> 1;
            v65 -= 2 * ((unsigned int)v65 >> 1);
            do
            {
              v31 = v29 >> 6;
              v29 *= 4;
              *v27 = v70 & *((_BYTE *)&v57 + v31) | *v27 & ~*((_BYTE *)&v57 + v31);
              ++v27;
              --v30;
            }
            while ( v30 );
            v28 = v62;
            v25 = v55;
            BYTE1(v15) = a9 | (16 * a9);
          }
          LOBYTE(v15) = (v65 & 1) != 0;
          if ( ((unsigned __int8)v15 & (v29 >> 7)) != 0 )
          {
            LOBYTE(v15) = BYTE1(v15) ^ (BYTE1(v15) ^ *v27) & 0xF;
            *v27 = v15;
          }
          v26 += a3;
          v23 = &v28[a7];
          v24 = v56;
          v62 = v23;
        }
        while ( v26 != v60 );
      }
      return v15;
    }
    v32 = a2 & 7;
    v33 = (_BYTE *)(a1 + (v11 >> 3));
    v69 = &v33[v53];
    v15 = (9 - v56) >> 1;
    v61 = a7 - v15;
    do
    {
      v34 = *v33 << v32;
      v35 = 8 - v56;
      v63 = 8 - v56;
      if ( (v47 & 1) != 0 )
      {
        if ( (v34 & 0x80u) != 0 )
        {
          LOBYTE(v15) = (v70 ^ *v23) & 0xF;
          *v23 ^= v15;
        }
        v34 *= 2;
        ++v23;
        v35 = v47 - 1;
        v63 = v47 - 1;
      }
      v36 = v35 == 0;
      v12 = a9 | (16 * a9);
      if ( !v36 )
      {
        v37 = v63;
        do
        {
          v15 = v34 >> 6;
          v34 *= 4;
          v38 = *((_BYTE *)&v57 + v15);
          LOBYTE(v15) = v70 & v38;
          *v23 = v70 & v38 | *v23 & ~v38;
          ++v23;
          v37 -= 2;
        }
        while ( v37 );
        v32 = v56;
      }
      v33 += a3;
      v23 += v61;
    }
    while ( v33 != v69 );
    v14 = a6;
    v13 = v54;
  }
  if ( v13 )
  {
    v39 = (char *)(a1 + (v52 >> 3));
    v40 = (_BYTE *)(a4 + ((int)(v14 - v13) >> 1));
    v64 = &v39[v53];
    v41 = a7 - ((v13 + 1) >> 1);
    v67 = v41;
    do
    {
      v42 = *v39;
      v15 = v13;
      if ( v13 >= 2 )
      {
        v58 = v13;
        v43 = v13 >> 1;
        v44 = *v39;
        v59 = v58 - 2 * v43;
        do
        {
          v45 = v44 >> 6;
          v44 *= 4;
          *v40 = v12 & *((_BYTE *)&v57 + v45) | *v40 & ~*((_BYTE *)&v57 + v45);
          ++v40;
          --v43;
        }
        while ( v43 );
        v15 = v59;
        v41 = v67;
        v66 = v44;
        v13 = v54;
        v42 = v66;
      }
      if ( v15 )
      {
        if ( v42 < 0 )
        {
          LOBYTE(v15) = v12 ^ (v12 ^ *v40) & 0xF;
          *v40 = v15;
        }
        ++v40;
      }
      v39 += a3;
      v40 += v41;
    }
    while ( v39 != v64 );
  }
  return v15;
}
