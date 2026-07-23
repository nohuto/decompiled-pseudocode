/*
 * XREFs of _RtlpCompareKnownAces@16 @ 0x4B2D8537
 * Callers:
 *     _RtlpCompareAces@16 @ 0x4B2D8505 (_RtlpCompareAces@16.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlEqualPrefixSid@8 @ 0x4B2D8300 (_RtlEqualPrefixSid@8.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

char __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2, PSID Sid2, void *a4)
{
  int v6; // ecx
  int v8; // eax
  BOOLEAN v9; // al
  size_t v10; // [esp-4h] [ebp-50h]
  PSID Sid1; // [esp+Ch] [ebp-40h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [esp+10h] [ebp-3Ch] BYREF
  _BYTE Sid[8]; // [esp+18h] [ebp-34h] BYREF
  int v14; // [esp+20h] [ebp-2Ch]

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  Sid1 = a2 + 8;
  if ( !RtlEqualSid(a2 + 8, a1 + 8) )
  {
    if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !Sid2 && !a4 )
      return 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 768;
    LODWORD(v10) = 48;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    memset(Sid, 0, v10);
    if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
      return 0;
    v14 = 0;
    if ( !RtlEqualPrefixSid(a1 + 8, Sid) )
      return 0;
    v8 = *((_DWORD *)a1 + 4);
    if ( v8 )
    {
      if ( v8 != 1 || !a4 )
        return 0;
      v9 = RtlEqualSid(Sid1, a4);
    }
    else
    {
      if ( !Sid2 )
        return 0;
      v9 = RtlEqualSid(Sid1, Sid2);
    }
    if ( !v9 )
      return 0;
  }
  return 1;
}
