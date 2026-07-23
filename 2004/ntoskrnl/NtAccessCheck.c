/*
 * XREFs of NtAccessCheck @ 0x14033A040
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140294B50 (SeAccessCheckByType.c)
 */

NTSTATUS __cdecl NtAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (int)SecurityDescriptor,
           0,
           (int)ClientToken,
           DesiredAccess,
           0LL,
           0,
           (__int64)GenericMapping,
           PrivilegeSet,
           (int *)PrivilegeSetLength,
           (__int64)GrantedAccess,
           AccessStatus,
           0);
}
