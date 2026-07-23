/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x1405942F0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14022A6B0 (SeAccessCheckByType.c)
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
           (__int64)ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeListLength,
           (__int64)GenericMapping,
           PrivilegeSet,
           (int *)PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           1);
}
