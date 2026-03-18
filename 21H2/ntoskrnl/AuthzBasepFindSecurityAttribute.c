/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x1403008B0
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1402047C4 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402053E4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x140231BF8 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140300374 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x140300720 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     SepDetermineGlobalTableCheckNeededForQuery @ 0x14030097C (SepDetermineGlobalTableCheckNeededForQuery.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140695FFC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x140A1A65C (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1402053BC (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140253C50 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rbp
  char v5; // r12
  const UNICODE_STRING *v8; // rsi
  const void **v9; // rcx
  char v10; // al
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
      v8 = (const UNICODE_STRING *)v2;
      v9 = (const void **)(v2 + 4);
      v10 = KeGetCurrentIrql() >= 2u
          ? AuthzBasepEqualUnicodeStringCaseSensitive(v9, (__int64)a2)
          : RtlEqualUnicodeString((PCUNICODE_STRING)v9, a2, 1u);
      if ( v10 )
        break;
      v2 = (_QWORD *)*v2;
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
