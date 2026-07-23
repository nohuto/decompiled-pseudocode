/*
 * XREFs of RtlpValidateRange @ 0x1800D92C8
 * Callers:
 *     RtlpValidateRemoteDebugInformation @ 0x1800D93DC (RtlpValidateRemoteDebugInformation.c)
 * Callees:
 *     RtlSetBits @ 0x1800489E0 (RtlSetBits.c)
 */

char __fastcall RtlpValidateRange(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  bool v7; // al
  unsigned int *Buffer; // rcx
  unsigned int *v9; // rdx
  unsigned int v10; // esi
  unsigned int *v11; // rbx
  bool v12; // zf
  bool i; // zf

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
  if ( (unsigned int)(a3 - a1) >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( (unsigned int)a4 > 1 )
  {
    if ( BitMapHeader->SizeOfBitMap - v6 < (unsigned int)a4 )
      return 0;
    Buffer = BitMapHeader->Buffer;
    v9 = &Buffer[(unsigned __int64)v6 >> 5];
    v10 = *v9;
    v11 = &Buffer[(unsigned __int64)(v6 + (_DWORD)a4 - 1) >> 5];
    if ( v9 != v11 )
    {
      for ( i = (v10 & (-1 << v6)) == 0; i; i = *v9 == 0 )
      {
        if ( ++v9 == v11 )
        {
          v12 = ((0xFFFFFFFF >> ~(v6 + a4 - 1)) & *v9) == 0;
          goto LABEL_18;
        }
      }
      return 0;
    }
    v12 = (v10 & (0xFFFFFFFF >> (32 - a4) << v6)) == 0;
LABEL_18:
    v7 = v12;
  }
  else
  {
    if ( (_DWORD)a4 != 1 )
      return 0;
    v7 = !_bittest((const signed __int32 *)BitMapHeader->Buffer, v6);
  }
  if ( v7 )
  {
    RtlSetBits(BitMapHeader, v6, a4);
    return 1;
  }
  return 0;
}
