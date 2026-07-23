/*
 * XREFs of _NtAdjustTokenClaimsAndDeviceGroups@64 @ 0x4B2F3050
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtAdjustTokenClaimsAndDeviceGroups(
        HANDLE TokenHandle,
        BOOLEAN UserResetToDefault,
        BOOLEAN DeviceResetToDefault,
        BOOLEAN DeviceGroupsResetToDefault,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewUserState,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewDeviceState,
        PTOKEN_GROUPS NewDeviceGroupsState,
        ULONG UserBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousUserState,
        ULONG DeviceBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousDeviceState,
        ULONG DeviceGroupsBufferLength,
        PTOKEN_GROUPS PreviousDeviceGroups,
        PULONG UserReturnLength,
        PULONG DeviceReturnLength,
        PULONG DeviceGroupsReturnBufferLength)
{
  return Wow64SystemServiceCall();
}
