/*
 * XREFs of _RtlpValidateRange@20 @ 0x4B337CC0
 * Callers:
 *     _RtlpValidateRemoteDebugInformation@16 @ 0x4B337DB3 (_RtlpValidateRemoteDebugInformation@16.c)
 * Callees:
 *     _RtlSetBits@12 @ 0x4B2E1AA0 (_RtlSetBits@12.c)
 */

char __fastcall RtlpValidateRange(unsigned int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // edx
  unsigned int v6; // esi
  int v7; // ecx
  bool v8; // dl
  int v9; // ecx
  int *v10; // ebx
  int v11; // edx
  int *v13; // [esp+Ch] [ebp-4h]

  if ( !a4 )
    return 0;
  if ( a1 > a3 )
    return 0;
  if ( a3 + a4 < a3 )
    return 0;
  v5 = a1 + a2;
  if ( v5 < a1 )
    return 0;
  if ( a3 + a4 > v5 )
    return 0;
  v6 = a3 - a1;
  v7 = a5;
  if ( v6 >= *(_DWORD *)a5 )
    return 0;
  if ( a4 > 1 )
  {
    if ( *(_DWORD *)a5 - v6 < a4 )
      return 0;
    v9 = *(_DWORD *)(a5 + 4);
    v10 = (int *)(v9 + 4 * (v6 >> 5));
    v11 = *v10;
    v13 = (int *)(v9 + 4 * ((a4 - 1 + v6) >> 5));
    if ( v10 == v13 )
    {
      v8 = ((0xFFFFFFFF >> (32 - a4) << v6) & v11) == 0;
    }
    else
    {
      if ( (v11 & (-1 << v6)) != 0 )
        return 0;
      while ( ++v10 != v13 )
      {
        if ( *v10 )
          return 0;
      }
      v8 = (*v10 & (0xFFFFFFFF >> ~(v6 + a4 - 1))) == 0;
    }
    v7 = a5;
  }
  else
  {
    v8 = _bittest(*(const signed __int32 **)(a5 + 4), v6) == 0;
  }
  if ( v8 )
  {
    RtlSetBits(v7, v6, a4);
    return 1;
  }
  return 0;
}
