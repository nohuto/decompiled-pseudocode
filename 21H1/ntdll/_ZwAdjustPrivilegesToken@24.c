/*
 * XREFs of _ZwAdjustPrivilegesToken@24 @ 0x4B2F2D90
 * Callers:
 *     _TppCritSetThread@4 @ 0x4B2B807E (_TppCritSetThread@4.c)
 *     _RtlAdjustPrivilege@16 @ 0x4B2E6D40 (_RtlAdjustPrivilege@16.c)
 *     _RtlAcquirePrivilege@16 @ 0x4B345D20 (_RtlAcquirePrivilege@16.c)
 *     _RtlReleasePrivilege@4 @ 0x4B346D00 (_RtlReleasePrivilege@4.c)
 *     _RtlRemovePrivileges@12 @ 0x4B346D90 (_RtlRemovePrivileges@12.c)
 *     _RtlpSysVolTakeOwnership@4 @ 0x4B35DEDD (_RtlpSysVolTakeOwnership@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  return Wow64SystemServiceCall();
}
