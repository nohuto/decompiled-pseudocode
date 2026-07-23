/*
 * XREFs of _RtlEqualComputerName@8 @ 0x4B34DB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlEqualComputerName(PUNICODE_STRING String1, PUNICODE_STRING String2)
{
  return RtlEqualDomainName(String1, String2);
}
