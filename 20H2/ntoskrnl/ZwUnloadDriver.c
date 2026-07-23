/*
 * XREFs of ZwUnloadDriver @ 0x1403FBA50
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14078DED0 (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
