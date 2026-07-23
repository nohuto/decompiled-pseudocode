/*
 * XREFs of ZwSetInformationObject @ 0x1403F2EB0
 * Callers:
 *     CmpCmdHiveClose @ 0x14065B1C8 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
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
