/*
 * XREFs of _RtlSubAuthoritySid@8 @ 0x4B2E8DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PULONG __cdecl RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
