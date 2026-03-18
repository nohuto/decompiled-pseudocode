/*
 * XREFs of _vSrcTranCopyS1D8@44 @ 0x1F15DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__stdcall vSrcTranCopyS1D8(
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
  int *v11; // edi
  unsigned __int8 *v12; // ebx
  _BYTE *result; // eax
  int v14; // esi
  unsigned __int8 v15; // al
  int v16; // ecx
  int v17; // eax
  unsigned __int8 v18; // al
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // edx
  int v24; // esi
  unsigned __int8 *v25; // ecx
  char v26; // bl
  _BYTE *v27; // ecx
  int v28; // ebx
  char *v29; // esi
  char v30; // cl
  _BYTE *v31; // edi
  int *v32; // [esp+Ch] [ebp-24h]
  int v33; // [esp+14h] [ebp-1Ch]
  int *v34; // [esp+18h] [ebp-18h]
  int v35; // [esp+20h] [ebp-10h]
  int v36; // [esp+24h] [ebp-Ch]
  int v37; // [esp+2Ch] [ebp-4h]
  int v38; // [esp+3Ch] [ebp+Ch]
  _BYTE *v39; // [esp+44h] [ebp+14h]
  int v40; // [esp+50h] [ebp+20h]
  unsigned __int8 *v41; // [esp+54h] [ebp+24h]

  v36 = a5 & 7;
  v35 = a8 * a7;
  v11 = (int *)((a5 & 0xFFFFFFF8) + a4);
  v37 = ((a9 | (a9 << 8)) << 16) | a9 | (a9 << 8);
  v32 = (int *)((char *)v11 + a8 * a7);
  v41 = (unsigned __int8 *)(a1 + (a2 >> 3));
  v12 = v41;
  result = (_BYTE *)((a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8));
  v33 = a7 - (_DWORD)result;
  v14 = a2;
  if ( (a6 & 0xFFFFFFF8) != (a5 & 0xFFFFFFF8) )
  {
    do
    {
      v34 = (int *)&result[(_DWORD)v11];
      v15 = (255 >> (a5 & 7)) & *v12;
      if ( v15 )
      {
        v16 = dword_25D518[v15 & 0xF];
        v17 = dword_25D518[v15 >> 4];
        *v11 = v37 & v17 | *v11 & ~v17;
        v11[1] = v37 & v16 | v11[1] & ~v16;
      }
      while ( 1 )
      {
        v11 += 2;
        ++v12;
        if ( v11 == v34 )
          break;
        v18 = *v12;
        if ( *v12 )
        {
          v19 = dword_25D518[v18 & 0xF];
          v20 = dword_25D518[v18 >> 4];
          *v11 = v37 & v20 | *v11 & ~v20;
          v11[1] = v37 & v19 | v11[1] & ~v19;
        }
      }
      v11 = (int *)((char *)v11 + v33);
      v12 += a3 - (((a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8)) >> 3);
      result = (_BYTE *)((a6 & 0xFFFFFFF8) - (a5 & 0xFFFFFFF8));
    }
    while ( v11 != v32 );
    v14 = a2;
  }
  v21 = a6 & 7;
  if ( (a6 & 7) != 0 )
  {
    result = (_BYTE *)(a5 & 0xFFFFFFF8);
    v22 = a6 & 0xFFFFFFF8;
    if ( (a5 & 0xFFFFFFF8) == (a6 & 0xFFFFFFF8) )
    {
      v23 = v21 - v36;
      v38 = v23;
      if ( v23 > 0 )
      {
        result = (_BYTE *)(a5 + a4);
        v24 = a7 - v23;
        v25 = v41;
        do
        {
          v26 = *v25 << v36;
          v27 = &result[v23];
          do
          {
            if ( v26 < 0 )
              *result = a9;
            v26 *= 2;
            ++result;
          }
          while ( result != v27 );
          result += v24;
          v25 = &v41[a3];
          v23 = v38;
          v41 += a3;
        }
        while ( result != (_BYTE *)(a5 + a4 + v35) );
      }
    }
    else
    {
      result = (_BYTE *)(v22 + a4);
      v28 = a7 - v21;
      v29 = (char *)(a1 + ((a6 + v14 - a5) >> 3));
      v40 = a7 - v21;
      v39 = (_BYTE *)(v22 + a4 + v35);
      do
      {
        v30 = *v29;
        v31 = &result[v21];
        if ( *v29 )
        {
          do
          {
            if ( v30 < 0 )
              *result = a9;
            v30 *= 2;
            ++result;
          }
          while ( result != v31 );
          v21 = a6 & 7;
          v28 = v40;
        }
        else
        {
          result += v21;
        }
        v29 += a3;
        result += v28;
      }
      while ( result != v39 );
    }
  }
  return result;
}
