/*
 * XREFs of AuthzBasepQuerySecurityAttributeAndValues @ 0x14029671C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepGetNextValue @ 0x1402FC7EC (AuthzBasepGetNextValue.c)
 *     AuthzBasepRestartOperandValueEnumeration @ 0x1402FCBCC (AuthzBasepRestartOperandValueEnumeration.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140332C40 (SepCanTokenMatchAllPackageSid.c)
 *     SepGetProcUniqueLuidAndIndexFromAttributeInfo @ 0x140592248 (SepGetProcUniqueLuidAndIndexFromAttributeInfo.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x140296650 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405BC05C (AuthzBasepQueryTokenAttributeAndValues.c)
 *     AuthzBasepQuerySystemSecurityAttributeAndValues @ 0x1406143F4 (AuthzBasepQuerySystemSecurityAttributeAndValues.c)
 */

__int64 __fastcall AuthzBasepQuerySecurityAttributeAndValues(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rcx
  const UNICODE_STRING *SecurityAttribute; // rax
  wchar_t *Buffer; // rdx

  if ( *(_DWORD *)a1 == 6 )
    return (unsigned int)AuthzBasepQueryTokenAttributeAndValues();
  if ( *(_DWORD *)a1 == 7 )
    return (unsigned int)AuthzBasepQuerySystemSecurityAttributeAndValues();
  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( v2 )
  {
    Buffer = **(wchar_t ***)(a1 + 64);
    if ( Buffer == (wchar_t *)(v2 + 72) )
      return (unsigned int)-2147483622;
    goto LABEL_11;
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    SecurityAttribute = AuthzBasepFindSecurityAttribute(v4, (const UNICODE_STRING *)(a1 + 16));
    if ( SecurityAttribute )
    {
      Buffer = SecurityAttribute[4].Buffer;
      *(_DWORD *)(a1 + 40) = HIDWORD(SecurityAttribute[3].Buffer);
      *(_WORD *)(a1 + 32) = SecurityAttribute[3].Length;
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(&SecurityAttribute[3].MaximumLength + 1);
      *(_QWORD *)(a1 + 56) = SecurityAttribute;
LABEL_11:
      *(_QWORD *)(a1 + 64) = Buffer;
      *(_QWORD *)(a1 + 48) = Buffer + 20;
      return v3;
    }
  }
  return (unsigned int)-1073741275;
}
