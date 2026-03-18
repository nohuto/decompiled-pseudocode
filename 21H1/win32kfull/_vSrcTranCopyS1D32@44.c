/*
 * XREFs of _vSrcTranCopyS1D32@44 @ 0x56060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__stdcall vSrcTranCopyS1D32(
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
  char *result; // eax
  char v14; // di
  char *v15; // esi
  int v16; // ecx
  int v17; // edx
  char *v18; // ebx
  char v19; // dl
  char *v20; // ecx
  char *i; // edx
  char v22; // cl
  char v23; // cl
  int v24; // [esp+1Ch] [ebp+Ch]
  int v25; // [esp+20h] [ebp+10h]
  int v26; // [esp+24h] [ebp+14h]
  int v27; // [esp+28h] [ebp+18h]
  char *v28; // [esp+30h] [ebp+20h]

  v11 = a6 - a5;
  result = (char *)(a4 + 4 * a5);
  v24 = a7 - 4 * (a6 - a5);
  v14 = a2;
  v15 = (char *)(a1 + (a2 >> 3));
  v25 = a3 - (((v14 & 7) + a6 - a5 + 7) >> 3);
  v16 = v14 & 7;
  v28 = &result[a8 * a7];
  v27 = 8 - v16;
  if ( v11 < v27 )
    v27 = v11;
  v17 = 4 * v11;
  v26 = v17;
  do
  {
    v18 = &result[v17];
    if ( v16 )
    {
      v19 = *v15++ << v16;
      v20 = &result[4 * v27];
      do
      {
        if ( v19 < 0 )
          *(_DWORD *)result = a9;
        result += 4;
        v19 *= 2;
      }
      while ( result != v20 );
    }
    for ( i = &result[(v18 - result) & 0xFFFFFFE0]; result != i; ++v15 )
    {
      v23 = *v15;
      if ( *v15 < 0 )
        *(_DWORD *)result = a9;
      if ( (v23 & 0x40) != 0 )
        *((_DWORD *)result + 1) = a9;
      if ( (v23 & 0x20) != 0 )
        *((_DWORD *)result + 2) = a9;
      if ( (v23 & 0x10) != 0 )
        *((_DWORD *)result + 3) = a9;
      if ( (v23 & 8) != 0 )
        *((_DWORD *)result + 4) = a9;
      if ( (v23 & 4) != 0 )
        *((_DWORD *)result + 5) = a9;
      if ( (v23 & 2) != 0 )
        *((_DWORD *)result + 6) = a9;
      if ( (v23 & 1) != 0 )
        *((_DWORD *)result + 7) = a9;
      result += 32;
    }
    if ( result != v18 )
    {
      v22 = *v15++;
      do
      {
        if ( v22 < 0 )
          *(_DWORD *)result = a9;
        result += 4;
        v22 *= 2;
      }
      while ( result != v18 );
    }
    result += v24;
    v15 += v25;
    v16 = v14 & 7;
    v17 = v26;
  }
  while ( result != v28 );
  return result;
}
