/*
 * XREFs of _IN6_IS_ADDR_V4MAPPED@4 @ 0x4B34D88C
 * Callers:
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IN6_IS_ADDR_V4MAPPED(const IN6_ADDR *a)
{
  _WORD *v1; // ecx
  BOOLEAN result; // al

  result = 0;
  if ( !*v1 && !v1[1] && !v1[2] && !v1[3] && !v1[4] )
    return v1[5] == 0xFFFF;
  return result;
}
