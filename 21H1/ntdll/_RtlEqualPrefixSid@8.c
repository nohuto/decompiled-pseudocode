/*
 * XREFs of _RtlEqualPrefixSid@8 @ 0x4B2D8300
 * Callers:
 *     _RtlpCopyEffectiveAce@64 @ 0x4B2D7FF4 (_RtlpCopyEffectiveAce@64.c)
 *     _RtlpCompareKnownAces@16 @ 0x4B2D8537 (_RtlpCompareKnownAces@16.c)
 *     _RtlpCompareKnownObjectAces@16 @ 0x4B3476F8 (_RtlpCompareKnownObjectAces@16.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

BOOLEAN __cdecl RtlEqualPrefixSid(PSID Sid1, PSID Sid2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  int v5; // ecx
  _DWORD *i; // edx
  size_t v7; // [esp-4h] [ebp-20h]
  unsigned __int8 v8; // [esp+Fh] [ebp-Dh]
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v10; // [esp+14h] [ebp-8h]

  if ( *(_BYTE *)Sid1 != *(_BYTE *)Sid2 )
    return 0;
  if ( *((_BYTE *)Sid1 + 2) != *((_BYTE *)Sid2 + 2) )
    return 0;
  if ( *((_BYTE *)Sid1 + 3) != *((_BYTE *)Sid2 + 3) )
    return 0;
  if ( *((_BYTE *)Sid1 + 4) != *((_BYTE *)Sid2 + 4) )
    return 0;
  if ( *((_BYTE *)Sid1 + 5) != *((_BYTE *)Sid2 + 5) )
    return 0;
  if ( *((_BYTE *)Sid1 + 6) != *((_BYTE *)Sid2 + 6) )
    return 0;
  if ( *((_BYTE *)Sid1 + 7) != *((_BYTE *)Sid2 + 7) )
    return 0;
  v3 = *((_BYTE *)Sid1 + 1);
  v8 = v3;
  if ( v3 != *((_BYTE *)Sid2 + 1) )
    return 0;
  v4 = 0;
  v10 = 2816;
  Buf2 = 0;
  if ( v3 )
  {
    if ( v3 == 11 && (LODWORD(v7) = 6, !memcmp((char *)Sid1 + 2, &Buf2, v7)) )
      v5 = 5;
    else
      v5 = 1;
    if ( v8 - v5 > 0 )
    {
      for ( i = (char *)Sid1 + 8; *i == *(_DWORD *)((char *)i + (_BYTE *)Sid2 - (_BYTE *)Sid1); ++i )
      {
        if ( ++v4 >= v8 - v5 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
