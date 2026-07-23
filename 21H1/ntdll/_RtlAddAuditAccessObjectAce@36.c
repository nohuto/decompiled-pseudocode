/*
 * XREFs of _RtlAddAuditAccessObjectAce@36 @ 0x4B34AFA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlpAddKnownObjectAce@32 @ 0x4B34B856 (_RtlpAddKnownObjectAce@32.c)
 */

NTSTATUS __cdecl RtlAddAuditAccessObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid,
        BOOLEAN AuditSuccess,
        BOOLEAN AuditFailure)
{
  ULONG v9; // eax

  v9 = AceFlags;
  if ( AuditSuccess )
    v9 = AceFlags | 0x40;
  if ( AuditFailure )
    v9 |= 0x80u;
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, v9, AccessMask, (int)ObjectTypeGuid, (int)InheritedObjectTypeGuid, Sid, 7);
  else
    return RtlpAddKnownAce(Acl, AceRevision, v9, AccessMask, (unsigned __int8 *)Sid, 2);
}
