/*
 * XREFs of ZwAdjustPrivilegesToken @ 0x1403F3DE0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406FFFBC (RtlAcquirePrivilege.c)
 *     RtlReleasePrivilege @ 0x140708BAC (RtlReleasePrivilege.c)
 *     BiAdjustPrivilege @ 0x140773930 (BiAdjustPrivilege.c)
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
