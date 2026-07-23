/*
 * XREFs of ZwCreateUserProcess @ 0x1403F3C30
 * Callers:
 *     RtlpCreateUserProcess @ 0x140A3EC14 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateUserProcess(
        PHANDLE ProcessHandle,
        PHANDLE ThreadHandle,
        ACCESS_MASK ProcessDesiredAccess,
        ACCESS_MASK ThreadDesiredAccess,
        POBJECT_ATTRIBUTES ProcessObjectAttributes,
        POBJECT_ATTRIBUTES ThreadObjectAttributes,
        ULONG ProcessFlags,
        ULONG ThreadFlags,
        PVOID ProcessParameters,
        PPS_CREATE_INFO CreateInfo,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
