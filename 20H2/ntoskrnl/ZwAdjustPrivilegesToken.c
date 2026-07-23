/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403F8990
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406D329C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406DB348 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140781F30 (BiAdjustPrivilege.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
