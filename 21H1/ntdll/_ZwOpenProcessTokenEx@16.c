/*
 * XREFs of _ZwOpenProcessTokenEx@16 @ 0x4B2F2C80
 * Callers:
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 *     _RtlCheckTokenMembershipEx@16 @ 0x4B2D5F50 (_RtlCheckTokenMembershipEx@16.c)
 *     _RtlImpersonateSelfEx@12 @ 0x4B2EBF70 (_RtlImpersonateSelfEx@12.c)
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 *     _AVrfpAppendCurrentUserSid@4 @ 0x4B338986 (_AVrfpAppendCurrentUserSid@4.c)
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 *     _RtlpIsAppContainer@8 @ 0x4B3490A6 (_RtlpIsAppContainer@8.c)
 *     _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD (_RtlpSysVolTakeOwnership@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  return Wow64SystemServiceCall();
}
