/*
 * XREFs of RtlIdentifierAuthoritySid @ 0x14062F720
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 * Callees:
 *     <none>
 */

PSID_IDENTIFIER_AUTHORITY __stdcall RtlIdentifierAuthoritySid(PSID Sid)
{
  return (PSID_IDENTIFIER_AUTHORITY)((char *)Sid + 2);
}
