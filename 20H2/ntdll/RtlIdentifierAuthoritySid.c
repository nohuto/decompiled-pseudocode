/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x180079500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __cdecl RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
