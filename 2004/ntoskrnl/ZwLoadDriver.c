/*
 * XREFs of ZwLoadDriver @ 0x1403F5660
 * Callers:
 *     KsepLoadShimProvider @ 0x140521850 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x140780938 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408F2408 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x140944D08 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
