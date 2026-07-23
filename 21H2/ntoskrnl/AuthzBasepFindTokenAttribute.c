/*
 * XREFs of AuthzBasepFindTokenAttribute @ 0x1405C1618
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1405C168C (AuthzBasepQueryTokenAttributeAndValues.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1402F2400 (AuthzBasepEqualUnicodeString.c)
 */

__int64 **__fastcall AuthzBasepFindTokenAttribute(const UNICODE_STRING *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  const UNICODE_STRING **i; // rsi

  v1 = 0LL;
  v2 = 0;
  for ( i = (const UNICODE_STRING **)&TokenAttributeLookupTable; !AuthzBasepEqualUnicodeString(a1, *i); i += 2 )
  {
    if ( ++v2 >= 4 )
      return (__int64 **)v1;
  }
  return &(&TokenAttributeLookupTable)[2 * v2];
}
