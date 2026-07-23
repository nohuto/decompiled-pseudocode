/*
 * XREFs of _RtlInitializeSidEx @ 0x4B2D8830
 * Callers:
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 */

NTSTATUS __cdecl RtlInitializeSidEx(char *Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  NTSTATUS result; // eax
  int v4; // ecx
  UCHAR *p_SubAuthorityCount; // edx
  _DWORD *v6; // esi

  result = RtlInitializeSid(Sid, IdentifierAuthority, SubAuthorityCount);
  if ( result >= 0 )
  {
    v4 = SubAuthorityCount;
    if ( SubAuthorityCount )
    {
      p_SubAuthorityCount = &SubAuthorityCount;
      v6 = Sid + 8;
      do
      {
        p_SubAuthorityCount += 4;
        *v6++ = *(_DWORD *)p_SubAuthorityCount;
        --v4;
      }
      while ( v4 );
    }
    return 0;
  }
  return result;
}
