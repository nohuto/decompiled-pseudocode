/*
 * XREFs of NtAccessCheckByType @ 0x140237560
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14026BF00 (SeAccessCheckByType.c)
 */

NTSTATUS __cdecl NtAccessCheckByType(
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
           (_DWORD)SecurityDescriptor,
           (_DWORD)PrincipalSelfSid,
           (_DWORD)ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeListLength,
           (__int64)GenericMapping,
           (__int64)PrivilegeSet,
           (__int64)PrivilegeSetLength,
           (__int64)GrantedAccess,
           (__int64)AccessStatus,
           0);
}
