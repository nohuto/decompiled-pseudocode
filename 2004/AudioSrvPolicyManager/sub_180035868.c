/*
 * XREFs of sub_180035868 @ 0x180035868
 * Callers:
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

DWORD __fastcall sub_180035868(PACL pAcl)
{
  DWORD result; // eax
  bool v3; // cf
  DWORD i; // ebx
  LPVOID pAce; // [rsp+60h] [rbp-20h] BYREF
  PSID pSid1; // [rsp+68h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+70h] [rbp-10h] BYREF

  *(_WORD *)&pIdentifierAuthority.Value[4] = 3840;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  result = AllocateAndInitializeSid(&pIdentifierAuthority, 2u, 3u, 0x1000u, 0, 0, 0, 0, 0, 0, &pSid1);
  if ( result )
  {
    v3 = pAcl->AceCount != 0;
    for ( i = 0; v3; v3 = i < result )
    {
      pAce = 0LL;
      result = GetAce(pAcl, i, &pAce);
      if ( !result )
        break;
      if ( EqualSid(pSid1, (char *)pAce + 8) && !*(_BYTE *)pAce )
      {
        *((_BYTE *)pAce + 1) = 2;
        result = (unsigned int)pAce;
        *((_DWORD *)pAce + 1) = 131099;
        return result;
      }
      result = pAcl->AceCount;
      ++i;
    }
  }
  return result;
}
