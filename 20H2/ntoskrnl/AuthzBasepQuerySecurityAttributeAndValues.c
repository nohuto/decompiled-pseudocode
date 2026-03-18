/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x14022B12C
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x14022B2D4 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14022B610 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402E3D64 (AuthzBasepRestartOperandValueEnumeration.c)
 *     AuthzBasepGetNextValue @ 0x1402E478C (AuthzBasepGetNextValue.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140595CE8 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x14022B060 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405BFBBC (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x14068F76C (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 *SecurityAttribute; // rax
  __int64 v8; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return (unsigned int)AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return (unsigned int)AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( v2 )
  {
    v8 = **(_QWORD **)(a1 + 64);
    if ( v8 == v2 + 72 )
      return (unsigned int)-2147483622;
    goto LABEL_11;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(v4, (const UNICODE_STRING *)(a1 + 16));
    if ( SecurityAttribute )
    {
      v8 = SecurityAttribute[9];
      *(_DWORD *)(a1 + 40) = *((_DWORD *)SecurityAttribute + 15);
      *(_WORD *)(a1 + 32) = *((_WORD *)SecurityAttribute + 24);
      *(_DWORD *)(a1 + 36) = *((_DWORD *)SecurityAttribute + 13);
      *(_QWORD *)(a1 + 56) = SecurityAttribute;
LABEL_11:
      *(_QWORD *)(a1 + 64) = v8;
      *(_QWORD *)(a1 + 48) = v8 + 40;
      return v3;
    }
  }
  return (unsigned int)-1073741275;
}
