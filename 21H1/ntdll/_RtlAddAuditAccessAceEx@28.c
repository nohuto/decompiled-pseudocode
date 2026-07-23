/*
 * XREFs of _RtlAddAuditAccessAceEx@28 @ 0x4B34AF60
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  ULONG v7; // eax

  v7 = AceFlags;
  if ( AuditSuccess )
    v7 = AceFlags | 0x40;
  if ( AuditFailure )
    v7 |= 0x80u;
  return RtlpAddKnownAce(Acl, AceRevision, v7, AccessMask, (unsigned __int8 *)Sid, 2);
}
