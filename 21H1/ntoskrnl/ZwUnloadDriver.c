/*
 * XREFs of ZwUnloadDriver @ 0x1403F5BF0
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786CEC (EtwpUpdateFileInfoDriverState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnloadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
