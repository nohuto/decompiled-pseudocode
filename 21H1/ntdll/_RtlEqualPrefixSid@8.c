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

char __stdcall RtlEqualPrefixSid(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v3; // al
  int v4; // ebx
  int v5; // ecx
  _DWORD *i; // edx
  unsigned __int8 v7; // [esp+Fh] [ebp-Dh]
  int Buf2; // [esp+10h] [ebp-Ch] BYREF
  __int16 v9; // [esp+14h] [ebp-8h]

  if ( *a1 != *a2 )
    return 0;
  if ( a1[2] != a2[2] )
    return 0;
  if ( a1[3] != a2[3] )
    return 0;
  if ( a1[4] != a2[4] )
    return 0;
  if ( a1[5] != a2[5] )
    return 0;
  if ( a1[6] != a2[6] )
    return 0;
  if ( a1[7] != a2[7] )
    return 0;
  v3 = a1[1];
  v7 = v3;
  if ( v3 != a2[1] )
    return 0;
  v4 = 0;
  v9 = 2816;
  Buf2 = 0;
  if ( v3 )
  {
    v5 = v3 == 11 && !memcmp(a1 + 2, &Buf2, 6u) ? 5 : 1;
    if ( v7 - v5 > 0 )
    {
      for ( i = a1 + 8; *i == *(_DWORD *)((char *)i + a2 - a1); ++i )
      {
        if ( ++v4 >= v7 - v5 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
