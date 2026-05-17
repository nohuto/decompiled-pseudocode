/*
 * XREFs of _RtlpHeapFindListLookupEntry@20 @ 0x4B2C0D29
 * Callers:
 *     _RtlpFindEntry@8 @ 0x4B2B1BCE (_RtlpFindEntry@8.c)
 *     @RtlpFindUCREntry@8 @ 0x4B2C0A8E (@RtlpFindUCREntry@8.c)
 * Callees:
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

_DWORD *__fastcall RtlpHeapFindListLookupEntry(int a1, _DWORD *a2, char a3, int a4, int a5)
{
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned int v9; // edi
  _DWORD *v10; // edx
  int v11; // edx
  int v12; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  _DWORD *v17; // edi
  char v18; // al
  int v19; // eax
  int v20; // edx
  unsigned int v21; // edi
  unsigned int *v22; // ecx
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // edi
  _DWORD *v26; // [esp+10h] [ebp-14h]
  int v27; // [esp+10h] [ebp-14h]
  char v28; // [esp+14h] [ebp-10h]
  int v29; // [esp+18h] [ebp-Ch]
  int v30; // [esp+1Ch] [ebp-8h]
  int v31; // [esp+1Ch] [ebp-8h]
  __int16 v32; // [esp+1Ch] [ebp-8h]
  _DWORD *v33; // [esp+20h] [ebp-4h]

  v7 = 0;
  v8 = (_DWORD *)a2[6];
  v9 = a4 - a2[5];
  v29 = a1;
  v28 = v9;
  v10 = (_DWORD *)v8[1];
  v33 = v8;
  if ( v8 == v10 )
    return v8;
  if ( a3 )
  {
    v26 = v10 - 2;
    v11 = *(v10 - 2);
    if ( *(_DWORD *)(a1 + 76) )
    {
      v30 = v11 ^ *(_DWORD *)(a1 + 80);
      if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
        RtlpLogHeapFailure(v26, 0, 0, 0);
      LOWORD(v11) = v30;
      v8 = v33;
    }
    v12 = a5 - (unsigned __int16)v11;
    a1 = v29;
  }
  else
  {
    v12 = a5 - *(_DWORD *)(v8[1] + 20);
  }
  if ( v12 > 0 )
    return v8;
  v14 = *v8;
  if ( a3 )
  {
    v27 = v14 - 8;
    v15 = *(_DWORD *)(v14 - 8);
    if ( *(_DWORD *)(a1 + 76) )
    {
      v31 = v15 ^ *(_DWORD *)(a1 + 80);
      if ( HIBYTE(v31) != ((unsigned __int8)v31 ^ (unsigned __int8)(BYTE1(v31) ^ BYTE2(v31))) )
        RtlpLogHeapFailure(v27, 0, 0, 0);
      LOWORD(v15) = v31;
      v8 = v33;
    }
    v16 = a5 - (unsigned __int16)v15;
  }
  else
  {
    v16 = a5 - *(_DWORD *)(*v8 + 20);
  }
  if ( v16 <= 0 )
    return (_DWORD *)*v8;
  if ( *a2 || a4 != a2[1] - 1 )
  {
    v21 = v9 >> 5;
    v22 = (unsigned int *)(a2[7] + 4 * v21);
    v23 = *v22 & (-1 << (v28 & 0x1F));
    if ( v23 )
      goto LABEL_35;
    do
    {
      if ( v21 > ((unsigned int)(a2[1] - a2[5]) >> 5) - 1 )
        break;
      ++v22;
      ++v21;
      v23 = *v22;
    }
    while ( !*v22 );
    if ( v23 )
    {
LABEL_35:
      if ( (_WORD)v23 )
      {
        if ( (_BYTE)v23 )
          v24 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v23];
        else
          v24 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v23)] + 8;
      }
      else if ( BYTE2(v23) )
      {
        v24 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v23)] + 16;
      }
      else
      {
        v24 = (unsigned __int8)RtlpBitsClearLow[HIBYTE(v23)] + 24;
      }
      v25 = v24 + 32 * v21;
      if ( a2[2] )
        v25 *= 2;
      return *(_DWORD **)(a2[8] + 4 * v25);
    }
  }
  else
  {
    if ( a2[2] )
      v9 *= 2;
    v17 = *(_DWORD **)(a2[8] + 4 * v9);
    if ( v8 != v17 )
    {
      v18 = a3;
      while ( 1 )
      {
        if ( v18 )
        {
          v19 = *(v17 - 2);
          if ( *(_DWORD *)(v29 + 76) )
          {
            v19 ^= *(_DWORD *)(v29 + 80);
            v32 = v19;
            if ( HIBYTE(v19) != ((unsigned __int8)v19 ^ (unsigned __int8)(BYTE1(v19) ^ BYTE2(v19))) )
            {
              RtlpLogHeapFailure(v17 - 2, 0, 0, 0);
              LOWORD(v19) = v32;
            }
            v8 = v33;
          }
          v20 = a5 - (unsigned __int16)v19;
          v18 = a3;
        }
        else
        {
          v20 = a5 - v17[5];
        }
        if ( v20 <= 0 )
          break;
        v17 = (_DWORD *)*v17;
        if ( v8 == v17 )
          return (_DWORD *)v7;
      }
      return v17;
    }
  }
  return (_DWORD *)v7;
}
