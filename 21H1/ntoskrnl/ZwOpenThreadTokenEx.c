/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1403F2910
 * Callers:
 *     RtlCheckTokenCapability @ 0x140580C40 (RtlCheckTokenCapability.c)
 *     RtlpOpenThreadToken @ 0x1406DD6CC (RtlpOpenThreadToken.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407197E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140771520 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140910598 (RtlpIsAppContainer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
