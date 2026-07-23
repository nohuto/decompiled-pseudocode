/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x1402F5890
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1402F53D8 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140248044 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140248094 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14024EC7C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1402F3440 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x1402F5844 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1405C14C4 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(_DWORD *a1, __int64 a2)
{
  int v3; // edi
  const UNICODE_STRING *SecurityAttribute; // rax
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
  if ( !SecurityAttribute || ((__int64)SecurityAttribute[3].Buffer & 4) != 0 )
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
