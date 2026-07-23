/*
 * XREFs of ZwSetInformationObject @ 0x1403F4140
 * Callers:
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
