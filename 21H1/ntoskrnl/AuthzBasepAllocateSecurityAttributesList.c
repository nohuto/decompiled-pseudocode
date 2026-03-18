/*
 * XREFs of AuthzBasepAllocateSecurityAttributesList @ 0x140303D5C
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140259940 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCreateClaimAttributes @ 0x140674008 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407A7718 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140920598 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140303EDC (AuthzBasepMemAlloc.c)
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
