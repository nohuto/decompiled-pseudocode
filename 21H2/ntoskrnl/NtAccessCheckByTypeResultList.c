/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x140595F50
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14026BF00 (SeAccessCheckByType.c)
 */

NTSTATUS __cdecl NtAccessCheckByTypeResultList(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeListLength,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (__int16 *)SecurityDescriptor,
           PrincipalSelfSid,
           ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeListLength,
           (__int128 *)GenericMapping,
           PrivilegeSet,
           PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           1);
}
