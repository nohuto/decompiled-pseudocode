/*
 * XREFs of _RtlAddAuditAccessAce@24 @ 0x4B34AF20
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAce(
        PACL Acl,
        ULONG AceRevision,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  int v6; // eax

  v6 = AuditSuccess != 0 ? 0x40 : 0;
  if ( AuditFailure )
    v6 |= 0x80u;
  return RtlpAddKnownAce(Acl, AceRevision, v6, AccessMask, (unsigned __int8 *)Sid, 2);
}
