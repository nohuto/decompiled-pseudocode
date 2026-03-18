/*
 * XREFs of AuthzBasepReplaceSecurityAttribute @ 0x140204758
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepAddSecurityAttribute @ 0x1402047C4 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402053E4 (AuthzBasepDeleteSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepReplaceSecurityAttribute(__int64 a1, __int128 *a2)
{
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v4 = a2[1];
  v7 = *a2;
  v5 = *((_QWORD *)a2 + 4);
  v8 = v4;
  DWORD2(v8) = 0;
  v9 = v5;
  result = AuthzBasepDeleteSecurityAttribute(a1, &v7);
  if ( (_DWORD)result == -1073741275 )
  {
    result = 0LL;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( *((_DWORD *)a2 + 6) )
    return AuthzBasepAddSecurityAttribute(a1, a2);
  return result;
}
