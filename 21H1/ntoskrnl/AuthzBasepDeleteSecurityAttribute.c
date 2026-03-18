/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x140338E90
 * Callers:
 *     AuthzBasepReplaceSecurityAttribute @ 0x140338178 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140338294 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x140259DD0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14031A22C (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14031A27C (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x1403204DC (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140338E1C (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1405BB774 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(_DWORD *a1, __int64 a2)
{
  int v3; // edi
  __int64 *SecurityAttribute; // rax
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  UNICODE_STRING v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  v3 = 0;
  v11 = 0;
  v10.Length = *(_WORD *)a2;
  v10.MaximumLength = v10.Length;
  v10.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a1, &v10);
  v6 = (__int64)SecurityAttribute;
  if ( !SecurityAttribute || (SecurityAttribute[7] & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists((__int64)a1, (__int64)SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v3 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v11);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v11 )
        *(_DWORD *)(v6 + 56) |= 4u;
    }
    else
    {
      *(_DWORD *)(v6 + 56) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6, v8);
    }
    if ( (*(_DWORD *)(v6 + 56) & 5) == 4 )
    {
      AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)v6, 0, 1);
      AuthzBasepFreeSecurityAttributeValues(v6, 0, v9);
      ExFreePoolWithTag((PVOID)v6, 0);
    }
  }
  return (unsigned int)v3;
}
