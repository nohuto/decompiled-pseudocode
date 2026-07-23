/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x1800E94C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x1800E9F20 (RtlpAddKnownObjectAce.c)
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
    return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1);
}
