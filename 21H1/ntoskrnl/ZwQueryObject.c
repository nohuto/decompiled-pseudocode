/*
 * XREFs of ZwQueryObject @ 0x1403F2530
 * Callers:
 *     CmpNameFromAttributes @ 0x14068D57C (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1406E8D3C (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x1407BC3B8 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x14087231C (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x140939904 (EtwpObjectTypeRundown.c)
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
