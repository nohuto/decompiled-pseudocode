/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x140590160
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1402582D0 (SeAccessCheckByType.c)
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
           (int)SecurityDescriptor,
           (int)PrincipalSelfSid,
           (int)ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeListLength,
           (__int64)GenericMapping,
           PrivilegeSet,
           (int *)PrivilegeSetLength,
           (__int64)GrantedAccess,
           AccessStatus,
           1);
}
