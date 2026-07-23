/*
 * XREFs of NtOpenProcessTokenEx @ 0x18009D410
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x180036520 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003C650 (RtlCheckTokenCapability.c)
 *     TppCritSetThread @ 0x180054424 (TppCritSetThread.c)
 *     RtlAcquirePrivilege @ 0x180077080 (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x180077300 (RtlImpersonateSelfEx.c)
 *     RtlpSysVolTakeOwnership @ 0x18008832C (RtlpSysVolTakeOwnership.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800DA404 (AVrfpAppendCurrentUserSid.c)
 *     RtlpIsAppContainer @ 0x1800E8760 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 48;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
