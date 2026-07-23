/*
 * XREFs of ZwOpenProcessTokenEx @ 0x1403F2930
 * Callers:
 *     RtlCheckTokenCapability @ 0x140580C40 (RtlCheckTokenCapability.c)
 *     RtlAcquirePrivilege @ 0x1406DD35C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406DD598 (RtlImpersonateSelfEx.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407197E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140771520 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140910598 (RtlpIsAppContainer.c)
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
