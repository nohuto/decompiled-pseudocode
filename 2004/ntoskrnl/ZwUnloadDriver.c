/*
 * XREFs of ZwUnloadDriver @ 0x1403F6E80
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140780938 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
