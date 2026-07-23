/*
 * XREFs of _ZwFilterTokenEx@56 @ 0x4B2F37D0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwFilterTokenEx(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        ULONG DisableUserClaimsCount,
        PUNICODE_STRING UserClaimsToDisable,
        ULONG DisableDeviceClaimsCount,
        PUNICODE_STRING DeviceClaimsToDisable,
        PTOKEN_GROUPS DeviceGroupsToDisable,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedUserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedDeviceAttributes,
        PTOKEN_GROUPS RestrictedDeviceGroups,
        PHANDLE NewTokenHandle)
{
  return Wow64SystemServiceCall();
}
