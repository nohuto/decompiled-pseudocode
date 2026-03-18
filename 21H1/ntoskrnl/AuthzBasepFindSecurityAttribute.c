/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x140259DD0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140259940 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140259B20 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     SeSecurityAttributePresent @ 0x140259CA0 (SeSecurityAttributePresent.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140259E9C (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402C15B0 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1403381E8 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140338E90 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1406C8380 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140967EE0 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403185C8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     AuthzBasepEqualUnicodeString @ 0x140338E68 (AuthzBasepEqualUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 */

__int64 *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  char v5; // r12
  __int64 *v8; // rsi
  const UNICODE_STRING *v9; // rcx
  __int64 *v11; // rdi

  v2 = *(_QWORD **)(a1 + 8);
  v3 = (_QWORD *)(a1 + 8);
  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  if ( v2 == (_QWORD *)(a1 + 8) )
  {
LABEL_6:
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 == (__int64 *)(a1 + 32) )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = v11 - 2;
      if ( (v11[5] & 1) == 0 )
      {
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(v8 + 4, a2) )
          break;
      }
      v11 = (__int64 *)*v11;
      if ( v11 == (__int64 *)(a1 + 32) )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = v2;
      v9 = (const UNICODE_STRING *)(v2 + 4);
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v9, a2)
         : RtlEqualUnicodeString(v9, a2, 1u) )
      {
        break;
      }
      v2 = (_QWORD *)*v2;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  v5 = 1;
LABEL_7:
  if ( v5 )
    return v8;
  return (__int64 *)v4;
}
