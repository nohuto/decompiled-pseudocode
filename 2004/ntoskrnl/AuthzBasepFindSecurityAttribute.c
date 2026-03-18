/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x140296650
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1402684E4 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140269190 (AuthzBasepDeleteSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1402963A0 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     SeSecurityAttributePresent @ 0x140296520 (SeSecurityAttributePresent.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x14029671C (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402FE090 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1406E8A40 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140969280 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140269168 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x1403560E8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rbx
  const UNICODE_STRING *v3; // rdi
  __int64 v4; // rbp
  char v5; // r12
  const UNICODE_STRING *v8; // rsi
  const UNICODE_STRING *v9; // rcx
  __int64 *v11; // rdi

  v2 = *(const UNICODE_STRING **)(a1 + 8);
  v3 = (const UNICODE_STRING *)(a1 + 8);
  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  if ( v2 == (const UNICODE_STRING *)(a1 + 8) )
  {
LABEL_6:
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 == (__int64 *)(a1 + 32) )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = (const UNICODE_STRING *)(v11 - 2);
      if ( (v11[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v8 + 2, a2) )
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
      v9 = v2 + 2;
      if ( KeGetCurrentIrql() >= 2u
         ? AuthzBasepEqualUnicodeStringCaseSensitive(v9, a2)
         : RtlEqualUnicodeString(v9, a2, 1u) )
      {
        break;
      }
      v2 = *(const UNICODE_STRING **)&v2->Length;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  v5 = 1;
LABEL_7:
  if ( v5 )
    return v8;
  return (const UNICODE_STRING *)v4;
}
