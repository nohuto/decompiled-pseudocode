/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1403F8750
 * Callers:
 *     RtlpOpenThreadToken @ 0x1406D360C (RtlpOpenThreadToken.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140729B68 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140781F30 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140917478 (RtlpIsAppContainer.c)
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
