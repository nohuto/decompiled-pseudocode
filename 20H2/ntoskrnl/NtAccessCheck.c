/*
 * XREFs of NtAccessCheck @ 0x14022AB60
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14022A6B0 (SeAccessCheckByType.c)
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
           (__int16 *)SecurityDescriptor,
           0LL,
           (__int64)ClientToken,
           DesiredAccess,
           0LL,
           0,
           (__int64)GenericMapping,
           PrivilegeSet,
           (int *)PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           0);
}
