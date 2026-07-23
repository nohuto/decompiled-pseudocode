/*
 * XREFs of ZwLoadDriver @ 0x1403F43D0
 * Callers:
 *     KsepLoadShimProvider @ 0x140521200 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140786CEC (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408F1118 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x140943A94 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
