/*
 * XREFs of _RtlpValidateRange@20 @ 0x4B337CC0
 * Callers:
 *     _RtlpValidateRemoteDebugInformation@16 @ 0x4B337DB3 (_RtlpValidateRemoteDebugInformation@16.c)
 * Callees:
 *     _RtlSetBits@12 @ 0x4B2E1AA0 (_RtlSetBits@12.c)
 */

char __fastcall RtlpValidateRange(
        unsigned int a1,
        int a2,
        unsigned int a3,
        ULONG NumberToSet,
        PRTL_BITMAP BitMapHeader)
{
  unsigned int v5; // edx
  ULONG v6; // esi
  _RTL_BITMAP *v7; // ecx
  bool v8; // dl
  unsigned int *Buffer; // ecx
  unsigned int *v10; // ebx
  unsigned int v11; // edx
  unsigned int *v13; // [esp+Ch] [ebp-4h]

  if ( !NumberToSet )
    return 0;
  if ( a1 > a3 )
    return 0;
  if ( a3 + NumberToSet < a3 )
    return 0;
  v5 = a1 + a2;
  if ( v5 < a1 )
    return 0;
  if ( a3 + NumberToSet > v5 )
    return 0;
  v6 = a3 - a1;
  v7 = BitMapHeader;
  if ( v6 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( NumberToSet > 1 )
  {
    if ( BitMapHeader->SizeOfBitMap - v6 < NumberToSet )
      return 0;
    Buffer = BitMapHeader->Buffer;
    v10 = &Buffer[v6 >> 5];
    v11 = *v10;
    v13 = &Buffer[(NumberToSet - 1 + v6) >> 5];
    if ( v10 == v13 )
    {
      v8 = ((0xFFFFFFFF >> (32 - NumberToSet) << v6) & v11) == 0;
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
      v8 = (*v10 & (0xFFFFFFFF >> ~(v6 + NumberToSet - 1))) == 0;
    }
    v7 = BitMapHeader;
  }
  else
  {
    v8 = _bittest((const signed __int32 *)BitMapHeader->Buffer, v6) == 0;
  }
  if ( v8 )
  {
    RtlSetBits(v7, v6, NumberToSet);
    return 1;
  }
  return 0;
}
