/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x140914A40
 * Callers:
 *     LocalGetAclForString @ 0x140783ACC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140606130 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409150F0 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 6);
  else
    return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1u);
}
