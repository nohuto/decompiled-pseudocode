/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403F2B50
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406DD35C (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x1406E4FD0 (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140771520 (BiAdjustPrivilege.c)
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
