/*
 * XREFs of ZwQueryObject @ 0x1403F8370
 * Callers:
 *     CmpAddToHiveFileList @ 0x1406DF078 (CmpAddToHiveFileList.c)
 *     CmpNameFromAttributes @ 0x1406FEF3C (CmpNameFromAttributes.c)
 *     _RegRtlQueryKeyPathName @ 0x1407CDDB8 (_RegRtlQueryKeyPathName.c)
 *     CmpCmdRenameHive @ 0x14087915C (CmpCmdRenameHive.c)
 *     EtwpObjectTypeRundown @ 0x1409409D4 (EtwpObjectTypeRundown.c)
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
