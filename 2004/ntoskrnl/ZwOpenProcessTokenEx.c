/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1403F3BC0
 * Callers:
 *     RtlAcquirePrivilege @ 0x1406FFFBC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407001F8 (RtlImpersonateSelfEx.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14071BB78 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140773930 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140911938 (RtlpIsAppContainer.c)
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
