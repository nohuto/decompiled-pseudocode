/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x140259E9C
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x1402052A8 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepGetNextValue @ 0x1403587CC (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x140358BAC (AuthzBasepRestartOperandValueEnumeration.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140591B58 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x140259DD0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405BB93C (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1406F77E0 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
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
