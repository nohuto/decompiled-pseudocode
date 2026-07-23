/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1403F8770
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406D329C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406D34D8 (RtlImpersonateSelfEx.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140729B68 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140781F30 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140917478 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
