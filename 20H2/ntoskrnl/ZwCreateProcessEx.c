/*
 * XREFs of ZwCreateProcessEx @ 0x1403F8B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE TokenHandle,
        ULONG Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
