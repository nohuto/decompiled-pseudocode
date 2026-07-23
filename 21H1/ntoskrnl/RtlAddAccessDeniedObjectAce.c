/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x14090DB60
 * Callers:
 *     LocalGetAclForString @ 0x1407730BC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090E210 (RtlpAddKnownObjectAce.c)
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
