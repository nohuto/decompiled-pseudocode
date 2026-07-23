/*
 * XREFs of ZwQueryObject @ 0x1403F37C0
 * Callers:
 *     CmpNameFromAttributes @ 0x140651BEC (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x14070CBDC (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x1407BF528 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x14087360C (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x14093ABA4 (EtwpObjectTypeRundown.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
