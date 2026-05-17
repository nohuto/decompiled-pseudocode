/*
 * XREFs of _RtlCopyMemoryNonTemporal@12 @ 0x4B3080B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCopyMemoryNonTemporal(int *a1, int *a2, unsigned int a3)
{
  int *v3; // esi
  int result; // eax
  int v6; // edx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int i; // edx

  v3 = a2;
  result = *a2;
  if ( !(a3 >> 6) )
    goto LABEL_10;
  if ( a3 >> 6 != 1 )
  {
    _mm_prefetch((const char *)a2 - 128, 0);
    if ( a3 >> 6 != 2 )
    {
      _mm_prefetch((const char *)a2 - 64, 0);
      v6 = (a3 >> 6) - 3;
      if ( a3 >> 6 != 3 )
      {
        do
        {
          _mm_prefetch((const char *)v3 + 256, 0);
          v7 = v3[1];
          _mm_stream_si32(a1, *v3);
          _mm_stream_si32(a1 + 1, v7);
          v8 = v3[3];
          _mm_stream_si32(a1 + 2, v3[2]);
          _mm_stream_si32(a1 + 3, v8);
          v9 = v3[5];
          _mm_stream_si32(a1 + 4, v3[4]);
          _mm_stream_si32(a1 + 5, v9);
          v10 = v3[7];
          _mm_stream_si32(a1 + 6, v3[6]);
          _mm_stream_si32(a1 + 7, v10);
          v11 = v3[9];
          _mm_stream_si32(a1 + 8, v3[8]);
          _mm_stream_si32(a1 + 9, v11);
          v12 = v3[11];
          _mm_stream_si32(a1 + 10, v3[10]);
          _mm_stream_si32(a1 + 11, v12);
          v13 = v3[13];
          _mm_stream_si32(a1 + 12, v3[12]);
          _mm_stream_si32(a1 + 13, v13);
          v14 = v3[15];
          _mm_stream_si32(a1 + 14, v3[14]);
          _mm_stream_si32(a1 + 15, v14);
          v3 += 16;
          a1 += 16;
          --v6;
        }
        while ( v6 );
      }
      v15 = v3[1];
      _mm_stream_si32(a1, *v3);
      _mm_stream_si32(a1 + 1, v15);
      v16 = v3[3];
      _mm_stream_si32(a1 + 2, v3[2]);
      _mm_stream_si32(a1 + 3, v16);
      v17 = v3[5];
      _mm_stream_si32(a1 + 4, v3[4]);
      _mm_stream_si32(a1 + 5, v17);
      v18 = v3[7];
      _mm_stream_si32(a1 + 6, v3[6]);
      _mm_stream_si32(a1 + 7, v18);
      v19 = v3[9];
      _mm_stream_si32(a1 + 8, v3[8]);
      _mm_stream_si32(a1 + 9, v19);
      v20 = v3[11];
      _mm_stream_si32(a1 + 10, v3[10]);
      _mm_stream_si32(a1 + 11, v20);
      v21 = v3[13];
      _mm_stream_si32(a1 + 12, v3[12]);
      _mm_stream_si32(a1 + 13, v21);
      v22 = v3[15];
      _mm_stream_si32(a1 + 14, v3[14]);
      _mm_stream_si32(a1 + 15, v22);
      v3 += 16;
      a1 += 16;
    }
    v23 = v3[1];
    _mm_stream_si32(a1, *v3);
    _mm_stream_si32(a1 + 1, v23);
    v24 = v3[3];
    _mm_stream_si32(a1 + 2, v3[2]);
    _mm_stream_si32(a1 + 3, v24);
    v25 = v3[5];
    _mm_stream_si32(a1 + 4, v3[4]);
    _mm_stream_si32(a1 + 5, v25);
    v26 = v3[7];
    _mm_stream_si32(a1 + 6, v3[6]);
    _mm_stream_si32(a1 + 7, v26);
    v27 = v3[9];
    _mm_stream_si32(a1 + 8, v3[8]);
    _mm_stream_si32(a1 + 9, v27);
    v28 = v3[11];
    _mm_stream_si32(a1 + 10, v3[10]);
    _mm_stream_si32(a1 + 11, v28);
    v29 = v3[13];
    _mm_stream_si32(a1 + 12, v3[12]);
    _mm_stream_si32(a1 + 13, v29);
    v30 = v3[15];
    _mm_stream_si32(a1 + 14, v3[14]);
    _mm_stream_si32(a1 + 15, v30);
    v3 += 16;
    a1 += 16;
  }
  v31 = v3[1];
  _mm_stream_si32(a1, *v3);
  _mm_stream_si32(a1 + 1, v31);
  v32 = v3[3];
  _mm_stream_si32(a1 + 2, v3[2]);
  _mm_stream_si32(a1 + 3, v32);
  v33 = v3[5];
  _mm_stream_si32(a1 + 4, v3[4]);
  _mm_stream_si32(a1 + 5, v33);
  v34 = v3[7];
  _mm_stream_si32(a1 + 6, v3[6]);
  _mm_stream_si32(a1 + 7, v34);
  v35 = v3[9];
  _mm_stream_si32(a1 + 8, v3[8]);
  _mm_stream_si32(a1 + 9, v35);
  v36 = v3[11];
  _mm_stream_si32(a1 + 10, v3[10]);
  _mm_stream_si32(a1 + 11, v36);
  v37 = v3[13];
  _mm_stream_si32(a1 + 12, v3[12]);
  _mm_stream_si32(a1 + 13, v37);
  result = v3[14];
  v38 = v3[15];
  _mm_stream_si32(a1 + 14, result);
  _mm_stream_si32(a1 + 15, v38);
  if ( (a3 & 0x3F) != 0 )
  {
    _mm_prefetch((const char *)v3, 0);
    v3 += 16;
    a1 += 16;
LABEL_10:
    for ( i = (unsigned __int8)(a3 & 0x3F) >> 2; i; --i )
    {
      result = *v3;
      _mm_stream_si32(a1++, *v3++);
    }
    if ( (a3 & 3) != 0 )
      qmemcpy(a1, v3, a3 & 3);
  }
  _mm_sfence();
  return result;
}
