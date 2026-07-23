/*
 * XREFs of _RtlIdentifierAuthoritySid@4 @ 0x4B2ED560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __cdecl RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
