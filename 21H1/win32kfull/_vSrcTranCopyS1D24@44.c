/*
 * XREFs of _vSrcTranCopyS1D24@44 @ 0x1F1112
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vSrcTranCopyS1D24(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  char v11; // bl
  _BYTE *v14; // esi
  int v15; // edx
  char *v16; // edi
  int v17; // eax
  unsigned int v18; // ecx
  char v19; // dl
  _BYTE *v20; // eax
  char v21; // al
  int result; // eax
  char v23; // al
  char v24; // dl
  int v25; // [esp+Ch] [ebp-8h]
  char v26; // [esp+10h] [ebp-4h]
  _BYTE *v27; // [esp+1Ch] [ebp+8h]
  _BYTE *i; // [esp+1Ch] [ebp+8h]
  int v29; // [esp+20h] [ebp+Ch]
  int v30; // [esp+24h] [ebp+10h]
  int v31; // [esp+28h] [ebp+14h]
  int v32; // [esp+2Ch] [ebp+18h]
  int v33; // [esp+30h] [ebp+1Ch]
  _BYTE *v34; // [esp+30h] [ebp+1Ch]
  _BYTE *v35; // [esp+34h] [ebp+20h]
  int v36; // [esp+3Ch] [ebp+28h]

  v11 = a9;
  v36 = HIWORD(a9);
  v29 = a2 & 7;
  v33 = a6 - a5;
  v30 = a3 - ((v29 + v33 + 7) >> 3);
  v14 = (_BYTE *)(a4 + 3 * a5);
  v31 = 3 * v33;
  v15 = a7 - 3 * v33;
  v16 = (char *)(a1 + (a2 >> 3));
  v35 = &v14[a8 * a7];
  v17 = v33;
  v18 = a9 >> 8;
  v26 = v18;
  v25 = v15;
  if ( v33 >= 8 - v29 )
    v17 = 8 - v29;
  v19 = v36;
  v32 = 3 * v17;
  do
  {
    v20 = &v14[v31];
    v34 = &v14[v31];
    if ( v29 )
    {
      v21 = *v16++ << v29;
      v27 = &v14[v32];
      do
      {
        LOBYTE(v18) = v26;
        if ( v21 < 0 )
        {
          *v14 = v11;
          v14[1] = v26;
          v14[2] = v19;
        }
        v14 += 3;
        v21 *= 2;
      }
      while ( v14 != v27 );
      v20 = v34;
    }
    result = (int)&v14[24 * ((v20 - v14) / 0x18u)];
    for ( i = (_BYTE *)result; v14 != i; ++v16 )
    {
      v23 = *v16;
      if ( *v16 < 0 )
      {
        *v14 = v11;
        v14[1] = v18;
        v14[2] = v36;
      }
      if ( (v23 & 0x40) != 0 )
      {
        v14[3] = v11;
        v14[4] = v18;
        v14[5] = v36;
      }
      if ( (v23 & 0x20) != 0 )
      {
        v14[6] = v11;
        v14[7] = v18;
        v14[8] = v36;
      }
      if ( (v23 & 0x10) != 0 )
      {
        v14[9] = v11;
        v14[10] = v18;
        v14[11] = v36;
      }
      if ( (v23 & 8) != 0 )
      {
        v14[12] = v11;
        v14[13] = v18;
        v14[14] = v36;
      }
      if ( (v23 & 4) != 0 )
      {
        v14[15] = v11;
        v14[16] = v18;
        v14[17] = v36;
      }
      if ( (v23 & 2) != 0 )
      {
        v14[18] = v11;
        v14[19] = v18;
        v14[20] = v36;
      }
      if ( (v23 & 1) != 0 )
      {
        v14[21] = v11;
        v14[22] = v18;
        v14[23] = v36;
      }
      result = 24;
      v14 += 24;
    }
    if ( v14 != v34 )
    {
      v24 = *v16++;
      result = v36;
      do
      {
        if ( v24 < 0 )
        {
          *v14 = v11;
          v14[1] = v18;
          v14[2] = v36;
        }
        v14 += 3;
        v24 *= 2;
      }
      while ( v14 != v34 );
    }
    v14 += v25;
    v16 += v30;
    v19 = v36;
  }
  while ( v14 != v35 );
  return result;
}
