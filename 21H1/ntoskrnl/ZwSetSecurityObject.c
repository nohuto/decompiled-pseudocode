/*
 * XREFs of ZwSetSecurityObject @ 0x1403F5810
 * Callers:
 *     BiZwSetSecurityObject @ 0x14039808C (BiZwSetSecurityObject.c)
 *     PiDevCfgCopyDeviceKeys @ 0x140754FBC (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1407550CC (PiDevCfgCopyDeviceKey.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     CmpInitBackupHive @ 0x14086FFEC (CmpInitBackupHive.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x14087DDC8 (CmpDoReDoSetSecurityDescriptor.c)
 *     SmKmStoreFileCreateForIoType @ 0x140927BE4 (SmKmStoreFileCreateForIoType.c)
 *     _RegRtlCopyTreeInternal @ 0x140977BD0 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
