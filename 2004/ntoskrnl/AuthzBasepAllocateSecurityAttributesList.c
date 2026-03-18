/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x140340B2C
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCreateClaimAttributes @ 0x14062F7C8 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407AA878 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140921848 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140340CAC (AuthzBasepMemAlloc.c)
 */

_QWORD *AuthzBasepAllocateSecurityAttributesList()
{
  _QWORD *result; // rax

  result = (_QWORD *)AuthzBasepMemAlloc(0x30uLL);
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
