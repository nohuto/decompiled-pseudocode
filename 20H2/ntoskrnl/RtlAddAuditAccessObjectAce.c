/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x140914D30
 * Callers:
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409150F0 (RtlpAddKnownObjectAce.c)
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
  int v10; // r8d

  v9 = AceFlags | 0x40;
  if ( !AuditSuccess )
    v9 = AceFlags;
  v10 = v9 | 0x80;
  if ( !AuditFailure )
    v10 = v9;
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 7);
  else
    return RtlpAddKnownAce(Acl, AceRevision, v10, AccessMask, (unsigned __int8 *)Sid, 2u);
}
