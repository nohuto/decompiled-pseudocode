/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x1402684E4
 * Callers:
 *     AuthzBasepReplaceSecurityAttribute @ 0x140268474 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140268590 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140268674 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140268AE0 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x14026911C (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140296650 (AuthzBasepFindSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 SecurityAttribute; // rax
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r11
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a2 + 24) == 0;
  v11 = 0LL;
  if ( v2 )
    return 3221225485LL;
  LOWORD(v11) = *(_WORD *)a2;
  WORD1(v11) = v11;
  *((_QWORD *)&v11 + 1) = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v11);
  v7 = SecurityAttribute;
  if ( SecurityAttribute )
  {
    *(_DWORD *)(SecurityAttribute + 56) &= ~4u;
    goto LABEL_5;
  }
  v8 = AuthzBasepAllocateSecurityAttribute(&v11);
  v7 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v8 + 48) = *(_WORD *)(a2 + 16);
LABEL_5:
    LOBYTE(v6) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, v7, 0LL, v6);
    return AuthzBasepAddSecurityAttributeValues(v9, a2);
  }
  return 3221225626LL;
}
