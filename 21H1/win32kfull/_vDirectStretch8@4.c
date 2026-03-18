/*
 * XREFs of _vDirectStretch8@4 @ 0xF95D4
 * Callers:
 *     ?StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z @ 0x4916C (-StretchDIBDirect@@YGHPAXJKKPAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall vDirectStretch8(_DWORD *a1)
{
  _DWORD *v1; // ebp
  __int64 v2; // rdi
  int v3; // ecx
  int v4; // ecx
  unsigned __int64 v5; // kr00_8
  unsigned int result; // eax
  int v7; // edx
  int v8; // ebx
  _BYTE *v9; // ebp
  int k; // ecx
  char v11; // dl
  unsigned int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rdi
  int v15; // edx
  __int64 v16; // rdi
  int m; // ecx
  char v18; // dl
  _BYTE *v19; // ebp
  unsigned int v20; // ebx
  int v21; // edx
  int i; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // rdi
  int j; // ecx
  _BYTE *v29; // edi
  int v30; // esi
  unsigned int v32; // [esp+0h] [ebp-30h]
  int v33; // [esp+4h] [ebp-2Ch]
  int v34; // [esp+8h] [ebp-28h]
  int v35; // [esp+Ch] [ebp-24h]
  int v36; // [esp+10h] [ebp-20h]
  int v37; // [esp+14h] [ebp-1Ch]
  int v38; // [esp+18h] [ebp-18h]
  unsigned int v39; // [esp+1Ch] [ebp-14h]

  v1 = a1;
  HIDWORD(v2) = a1[2] + *a1;
  LODWORD(v2) = a1[5] + a1[3];
  v36 = HIDWORD(v2);
  v37 = a1[1] * a1[10];
  v34 = (4 - (v2 & 3)) & 3;
  v3 = a1[6];
  v35 = ((_BYTE)v3 + (unsigned __int8)a1[3]) & 3;
  v4 = v3 - a1[5];
  v38 = a1[4] - v4;
  v39 = (unsigned int)(v4 - v35 - v34) >> 2;
  v32 = a1[9];
  do
  {
    v5 = (unsigned int)v1[11] + (unsigned __int64)(unsigned int)v1[13];
    v33 = HIDWORD(v5);
    v1[13] = v5;
    if ( v37 || HIDWORD(v5) || (int)v1[7] < 2 )
    {
      result = v1[8];
      v20 = v1[9];
      v21 = v1[12];
      v19 = (_BYTE *)v2;
      LODWORD(v2) = v21;
      for ( i = v34; i; --i )
      {
        *v19 = *(_BYTE *)HIDWORD(v2);
        v2 += __PAIR64__(result, v20);
        ++v19;
      }
      v23 = v39;
      do
      {
        LOBYTE(v21) = *(_BYTE *)HIDWORD(v2);
        v24 = __PAIR64__(result, v20) + v2;
        BYTE1(v21) = *(_BYTE *)HIDWORD(v24);
        v25 = __PAIR64__(result, v20) + v24;
        v26 = v21 << 16;
        LOBYTE(v26) = *(_BYTE *)HIDWORD(v25);
        v27 = __PAIR64__(result, v20) + v25;
        BYTE1(v26) = *(_BYTE *)HIDWORD(v27);
        v2 = __PAIR64__(result, v20) + v27;
        v21 = __ROR4__(v26, 16);
        *(_DWORD *)v19 = v21;
        v19 += 4;
        --v23;
      }
      while ( v23 );
      for ( j = v35; j; --j )
      {
        *v19 = *(_BYTE *)HIDWORD(v2);
        v2 += __PAIR64__(result, v20);
        ++v19;
      }
    }
    else
    {
      v33 = ((unsigned int)v1[11] + (unsigned __int64)(unsigned int)v5) >> 32;
      v1[13] = v1[11] + v5;
      --v1[7];
      result = v1[8];
      v7 = v1[12];
      v8 = v1[4];
      v9 = (_BYTE *)v2;
      LODWORD(v2) = v7;
      for ( k = v34; k; --k )
      {
        v11 = *(_BYTE *)HIDWORD(v2);
        *v9 = *(_BYTE *)HIDWORD(v2);
        v9[v8] = v11;
        v2 += __PAIR64__(result, v32);
        ++v9;
      }
      v12 = v39;
      do
      {
        LOBYTE(v7) = *(_BYTE *)HIDWORD(v2);
        v13 = __PAIR64__(result, v32) + v2;
        BYTE1(v7) = *(_BYTE *)HIDWORD(v13);
        v14 = __PAIR64__(result, v32) + v13;
        v15 = v7 << 16;
        LOBYTE(v15) = *(_BYTE *)HIDWORD(v14);
        v16 = __PAIR64__(result, v32) + v14;
        BYTE1(v15) = *(_BYTE *)HIDWORD(v16);
        v2 = __PAIR64__(result, v32) + v16;
        v7 = __ROR4__(v15, 16);
        *(_DWORD *)v9 = v7;
        *(_DWORD *)&v9[v8] = v7;
        v9 += 4;
        --v12;
      }
      while ( v12 );
      for ( m = v35; m; --m )
      {
        v18 = *(_BYTE *)HIDWORD(v2);
        *v9 = *(_BYTE *)HIDWORD(v2);
        v9[v8] = v18;
        v2 += __PAIR64__(result, v32);
        ++v9;
      }
      v19 = &v9[v8];
    }
    v29 = v19;
    v1 = a1;
    v30 = v36;
    if ( v33 == 1 )
      v30 = a1[1] + v36;
    HIDWORD(v2) = v37 + v30;
    v36 = HIDWORD(v2);
    LODWORD(v2) = &v29[v38];
  }
  while ( a1[7]-- != 1 );
  return result;
}
