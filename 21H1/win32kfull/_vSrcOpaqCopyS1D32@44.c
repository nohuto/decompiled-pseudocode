/*
 * XREFs of _vSrcOpaqCopyS1D32@44 @ 0xB58A0
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

char *__stdcall vSrcOpaqCopyS1D32(
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
  int v13; // edi
  unsigned __int8 *v14; // esi
  int v15; // ecx
  char *v16; // ebx
  unsigned __int8 v17; // dl
  char *v18; // edi
  unsigned int v19; // ecx
  char *i; // edi
  unsigned int v21; // edx
  unsigned __int8 v22; // dl
  unsigned int v23; // ecx
  int v24; // [esp+Ch] [ebp-20h]
  char *v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]
  _DWORD v27[2]; // [esp+20h] [ebp-Ch]
  int v28; // [esp+3Ch] [ebp+10h]

  v11 = a6 - a5;
  result = (char *)(a4 + 4 * a5);
  v13 = a2 & 7;
  v25 = &result[a8 * a7];
  v14 = (unsigned __int8 *)(a1 + (a2 >> 3));
  v28 = a3 - ((v13 + a6 - a5 + 7) >> 3);
  v26 = 8 - v13;
  if ( a6 - a5 < 8 - v13 )
    v26 = a6 - a5;
  v27[0] = a10;
  v27[1] = a9;
  v15 = 4 * v11;
  v24 = 4 * v11;
  do
  {
    v16 = &result[v15];
    if ( v13 )
    {
      v17 = *v14++ << v13;
      v18 = &result[4 * v26];
      do
      {
        v19 = v17;
        v17 *= 2;
        *(_DWORD *)result = *(_DWORD *)((char *)v27 + ((v19 >> 5) & 4));
        result += 4;
      }
      while ( result != v18 );
    }
    for ( i = &result[(v16 - result) & 0xFFFFFFE0]; result != i; result += 32 )
    {
      v21 = *v14++;
      *(_DWORD *)result = *(_DWORD *)((char *)v27 + ((v21 >> 5) & 4));
      *((_DWORD *)result + 1) = *(_DWORD *)((char *)v27 + ((v21 >> 4) & 4));
      *((_DWORD *)result + 2) = *(_DWORD *)((char *)v27 + ((v21 >> 3) & 4));
      *((_DWORD *)result + 3) = *(_DWORD *)((char *)v27 + ((v21 >> 2) & 4));
      *((_DWORD *)result + 4) = *(_DWORD *)((char *)v27 + ((v21 >> 1) & 4));
      *((_DWORD *)result + 5) = *(_DWORD *)((char *)v27 + (v21 & 4));
      *((_DWORD *)result + 6) = *(_DWORD *)((char *)v27 + 2 * (v21 & 2));
      *((_DWORD *)result + 7) = v27[v21 & 1];
    }
    if ( result != v16 )
    {
      v22 = *v14++;
      do
      {
        v23 = v22;
        v22 *= 2;
        *(_DWORD *)result = *(_DWORD *)((char *)v27 + ((v23 >> 5) & 4));
        result += 4;
      }
      while ( result != v16 );
    }
    result += a7 - 4 * (a6 - a5);
    v14 += v28;
    v13 = a2 & 7;
    v15 = v24;
  }
  while ( result != v25 );
  return result;
}
