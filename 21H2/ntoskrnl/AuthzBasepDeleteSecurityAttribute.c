/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x140251080
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402508E0 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140250BC8 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14024EBF0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140251034 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1402C9764 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1402C97B4 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x1402D07EC (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1405C1294 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v3; // edi
  const UNICODE_STRING *SecurityAttribute; // rax
  UNICODE_STRING *v6; // rbx
  __int64 v8; // r9
  UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  v3 = 0;
  v10 = 0;
  v9.Length = *(_WORD *)a2;
  v9.MaximumLength = v9.Length;
  v9.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v9);
  v6 = (UNICODE_STRING *)SecurityAttribute;
  if ( !SecurityAttribute || ((__int64)SecurityAttribute[3].Buffer & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists(a1, (__int64)SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v3 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v10);
      if ( v3 < 0 )
        return (unsigned int)v3;
      if ( v10 )
        LODWORD(v6[3].Buffer) |= 4u;
    }
    else
    {
      LODWORD(v6[3].Buffer) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6);
    }
    if ( ((__int64)v6[3].Buffer & 5) == 4 )
    {
      LOBYTE(v8) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v6, 0LL, v8);
      AuthzBasepFreeSecurityAttributeValues(v6, 0LL);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (unsigned int)v3;
}
