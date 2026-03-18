/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x1402E3090
 * Callers:
 *     AuthzBasepReplaceSecurityAttribute @ 0x1402E2374 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402E2490 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14022B060 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x1402E1960 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402E19B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1402E1AA4 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x1402E301C (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1405BF9F4 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(_DWORD *a1, __int64 a2)
{
  int v3; // edi
  __int64 *SecurityAttribute; // rax
  __int64 v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  v3 = 0;
  v12 = 0;
  v11.Length = *(_WORD *)a2;
  v11.MaximumLength = v11.Length;
  v11.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a1, &v11);
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
      v3 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v12);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v12 )
        *(_DWORD *)(v6 + 56) |= 4u;
    }
    else
    {
      *(_DWORD *)(v6 + 56) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6, v8, v9);
    }
    if ( (*(_DWORD *)(v6 + 56) & 5) == 4 )
    {
      AuthzBasepRemoveSecurityAttributeFromLists(a1, (__int64 *)v6, 0, 1);
      AuthzBasepFreeSecurityAttributeValues(v6, 0, v10);
      ExFreePoolWithTag((PVOID)v6, 0);
    }
  }
  return (unsigned int)v3;
}
