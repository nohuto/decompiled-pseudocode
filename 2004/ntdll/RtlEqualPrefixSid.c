/*
 * XREFs of RtlEqualPrefixSid @ 0x180037DE0
 * Callers:
 *     RtlpCopyEffectiveAce @ 0x180037A3C (RtlpCopyEffectiveAce.c)
 *     RtlpCompareKnownAces @ 0x180038240 (RtlpCompareKnownAces.c)
 *     RtlpCompareKnownObjectAces @ 0x1800E6F58 (RtlpCompareKnownObjectAces.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 */

char __fastcall RtlEqualPrefixSid(_BYTE *a1, _BYTE *a2)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  _DWORD *v6; // r9
  __int64 v7; // rdx
  int v8; // r9d

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
  v3 = (unsigned __int8)a1[1];
  if ( (_BYTE)v3 != a2[1] )
    return 0;
  v4 = 0LL;
  if ( (_BYTE)v3 )
  {
    if ( (_BYTE)v3 != 11 )
      goto LABEL_12;
    v8 = *(_DWORD *)(a1 + 2);
    if ( !v8 )
      v8 = *((unsigned __int16 *)a1 + 3) - 2816;
    v5 = 5LL;
    if ( v8 )
LABEL_12:
      v5 = 1LL;
    if ( v3 - v5 > 0 )
    {
      v6 = a1 + 8;
      v7 = a2 - a1;
      while ( *v6 == *(_DWORD *)((char *)v6 + v7) )
      {
        ++v4;
        ++v6;
        if ( v4 >= v3 - v5 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
