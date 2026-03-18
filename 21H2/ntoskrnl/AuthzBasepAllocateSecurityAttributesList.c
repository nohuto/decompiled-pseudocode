/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x140389ED0
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140300534 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403763A8 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14066B830 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14084C934 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE94C (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x1402199B0 (AuthzBasepMemAlloc.c)
 */

_QWORD *__fastcall AuthzBasepAllocateSecurityAttributesList(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = (_QWORD *)AuthzBasepMemAlloc(48LL, a2, 1950442835LL, a4);
  if ( result )
  {
    *result = 0LL;
    result[2] = 0LL;
    result[3] = 0LL;
    result[5] = 0LL;
    result[2] = result + 1;
    result[1] = result + 1;
    result[5] = result + 4;
    result[4] = result + 4;
  }
  return result;
}
