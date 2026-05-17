/*
 * XREFs of _RtlAddAce@20 @ 0x4B2AAF90
 * Callers:
 *     _RtlCreateAndSetSD@20 @ 0x4B335C50 (_RtlCreateAndSetSD@20.c)
 * Callees:
 *     _RtlValidAcl@4 @ 0x4B2D3740 (_RtlValidAcl@4.c)
 *     _RtlFirstFreeAce@8 @ 0x4B2D7F40 (_RtlFirstFreeAce@8.c)
 */

int __stdcall RtlAddAce(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // ebx
  int v6; // edi
  unsigned int v7; // edx
  unsigned int i; // eax
  unsigned __int8 v9; // al
  unsigned int v10; // edx
  int v11; // ecx
  unsigned int j; // eax
  int v13; // edx
  int v14; // ebx
  bool v16; // cf
  unsigned int v17; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  unsigned __int8 v20; // [esp+1Bh] [ebp-1h]

  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, &v17) )
    return -1073741811;
  v20 = *(_BYTE *)a1;
  if ( (unsigned __int8)a2 > v20 )
    v20 = a2;
  v5 = a4;
  v6 = a5;
  v7 = a4;
  v18 = 0;
  v19 = 0;
  for ( i = a4 + a5; v7 < a4 + a5; i = a4 + a5 )
  {
    v9 = *(_BYTE *)v7;
    if ( *(_BYTE *)v7 > 3u )
    {
      if ( v9 > 4u )
      {
        if ( v9 > 8u )
          goto LABEL_7;
        v16 = a2 < 4;
      }
      else
      {
        v16 = a2 < 3;
      }
      if ( v16 )
        return -1073741811;
    }
LABEL_7:
    v7 += *(unsigned __int16 *)(v7 + 2);
    ++v19;
  }
  if ( v7 > i )
    return -1073741811;
  v10 = v17;
  if ( !v17 || v17 + a5 > a1 + (unsigned int)*(unsigned __int16 *)(a1 + 2) )
    return -1073741789;
  v11 = a1 + 8;
  if ( a3 )
  {
    v17 = *(unsigned __int16 *)(a1 + 4);
    for ( j = 0; j < a3; v18 = j )
    {
      if ( j >= v17 )
        break;
      v11 += *(unsigned __int16 *)(v11 + 2);
      j = v18 + 1;
    }
  }
  v13 = v10 - v11 - 1;
  if ( v13 >= 0 )
  {
    do
    {
      *(_BYTE *)(v11 + a5 + v13) = *(_BYTE *)(v13 + v11);
      --v13;
    }
    while ( v13 >= 0 );
    v5 = a4;
  }
  if ( a5 )
  {
    v14 = v5 - v11;
    do
    {
      *(_BYTE *)v11 = *(_BYTE *)(v14 + v11);
      ++v11;
      --v6;
    }
    while ( v6 );
  }
  *(_WORD *)(a1 + 4) += v19;
  *(_BYTE *)a1 = v20;
  return 0;
}
