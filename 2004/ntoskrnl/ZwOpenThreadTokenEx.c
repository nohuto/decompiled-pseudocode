/*
 * XREFs of ZwOpenThreadTokenEx @ 0x1403F3BA0
 * Callers:
 *     RtlpOpenThreadToken @ 0x14070032C (RtlpOpenThreadToken.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14071BB78 (_SysCtxRegOpenCurrentUserKey.c)
 *     BiAdjustPrivilege @ 0x140773930 (BiAdjustPrivilege.c)
 *     RtlpIsAppContainer @ 0x140911938 (RtlpIsAppContainer.c)
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
