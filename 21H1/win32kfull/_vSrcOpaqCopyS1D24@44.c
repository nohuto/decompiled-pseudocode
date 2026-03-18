/*
 * XREFs of _vSrcOpaqCopyS1D24@44 @ 0x1F02B4
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

char __stdcall vSrcOpaqCopyS1D24(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // edx
  _BYTE *v12; // esi
  int v13; // ebx
  unsigned __int8 *v14; // edi
  _BYTE *v15; // eax
  unsigned __int8 v16; // dl
  _BYTE *v17; // ebx
  unsigned int v18; // ecx
  int v19; // ecx
  _BYTE *v20; // eax
  _BYTE *v21; // ebx
  unsigned int v22; // edx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // edx
  unsigned __int8 v27; // dl
  unsigned int v28; // ecx
  int v29; // ecx
  int v31; // [esp+10h] [ebp-24h]
  int v32; // [esp+14h] [ebp-20h]
  _BYTE *v33; // [esp+1Ch] [ebp-18h]
  int v34; // [esp+20h] [ebp-14h]
  _BYTE *v35; // [esp+24h] [ebp-10h]
  _DWORD v36[2]; // [esp+28h] [ebp-Ch]
  int v37; // [esp+44h] [ebp+10h]

  v11 = a6 - a5;
  v12 = (_BYTE *)(a4 + 3 * a5);
  v13 = a2 & 7;
  v14 = (unsigned __int8 *)(a1 + (a2 >> 3));
  v34 = v13;
  v32 = 3 * (a6 - a5);
  v37 = a3 - ((v13 + a6 - a5 + 7) >> 3);
  v33 = &v12[a8 * a7];
  if ( a6 - a5 >= 8 - v13 )
    v11 = 8 - v13;
  v31 = 3 * v11;
  v36[0] = a10;
  v36[1] = a9;
  do
  {
    v15 = &v12[v32];
    v35 = &v12[v32];
    if ( v13 )
    {
      v16 = *v14++ << v13;
      v17 = &v12[v31];
      do
      {
        v18 = v16;
        v16 *= 2;
        v19 = (v18 >> 5) & 4;
        *v12 = *((_BYTE *)v36 + v19);
        v12[1] = *((_BYTE *)v36 + v19 + 1);
        v12[2] = *((_BYTE *)v36 + v19 + 2);
        v12 += 3;
      }
      while ( v12 != v17 );
      v13 = v34;
      v15 = v35;
    }
    v20 = &v12[24 * ((v15 - v12) / 0x18u)];
    if ( v12 != v20 )
    {
      v21 = v20;
      do
      {
        v22 = *v14;
        v23 = (v22 >> 5) & 4;
        *v12 = *((_BYTE *)v36 + v23);
        v12[1] = *((_BYTE *)v36 + v23 + 1);
        v12[2] = *((_BYTE *)v36 + v23 + 2);
        v12[3] = *((_BYTE *)v36 + ((v22 >> 4) & 4));
        v12[4] = *((_BYTE *)v36 + ((v22 >> 4) & 4) + 1);
        v12[5] = *((_BYTE *)v36 + ((v22 >> 4) & 4) + 2);
        v24 = (v22 >> 3) & 4;
        v12[6] = *((_BYTE *)v36 + v24);
        v12[7] = *((_BYTE *)v36 + v24 + 1);
        v12[8] = *((_BYTE *)v36 + v24 + 2);
        v12[9] = *((_BYTE *)v36 + ((v22 >> 2) & 4));
        v12[10] = *((_BYTE *)v36 + ((v22 >> 2) & 4) + 1);
        v12[11] = *((_BYTE *)v36 + ((v22 >> 2) & 4) + 2);
        v12[12] = *((_BYTE *)v36 + ((v22 >> 1) & 4));
        v12[13] = *((_BYTE *)v36 + ((v22 >> 1) & 4) + 1);
        v12[14] = *((_BYTE *)v36 + ((v22 >> 1) & 4) + 2);
        v12[15] = *((_BYTE *)v36 + (v22 & 4));
        v12[16] = *((_BYTE *)v36 + (v22 & 4) + 1);
        v25 = v22 & 2;
        v12[17] = *((_BYTE *)v36 + (v22 & 4) + 2);
        v26 = v22 & 1;
        ++v14;
        v12[18] = *((_BYTE *)v36 + 2 * v25);
        v12[19] = *((_BYTE *)v36 + 2 * v25 + 1);
        v12[20] = *((_BYTE *)v36 + 2 * v25 + 2);
        v12[21] = v36[v26];
        v12[22] = BYTE1(v36[v26]);
        v12[23] = BYTE2(v36[v26]);
        LOBYTE(v20) = 24;
        v12 += 24;
      }
      while ( v12 != v21 );
      v13 = v34;
    }
    if ( v12 != v35 )
    {
      v27 = *v14++;
      do
      {
        v28 = v27;
        v27 *= 2;
        v29 = (v28 >> 5) & 4;
        *v12 = *((_BYTE *)v36 + v29);
        v12[1] = *((_BYTE *)v36 + v29 + 1);
        LOBYTE(v20) = *((_BYTE *)v36 + v29 + 2);
        v12[2] = (_BYTE)v20;
        v12 += 3;
      }
      while ( v12 != v35 );
      v13 = v34;
    }
    v12 += a7 - v32;
    v14 += v37;
  }
  while ( v12 != v33 );
  return (char)v20;
}
