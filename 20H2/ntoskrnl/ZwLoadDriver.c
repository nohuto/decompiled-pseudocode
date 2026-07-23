/*
 * XREFs of ZwLoadDriver @ 0x1403FA230
 * Callers:
 *     KsepLoadShimProvider @ 0x140525220 (KsepLoadShimProvider.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     EtwpUpdateFileInfoDriverState @ 0x14078DED0 (EtwpUpdateFileInfoDriverState.c)
 *     PopCadTriggerDriverLoad @ 0x1408F8018 (PopCadTriggerDriverLoad.c)
 *     EtwpConstructIptData @ 0x14094AAC8 (EtwpConstructIptData.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwLoadDriver(PUNICODE_STRING DriverServiceName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverServiceName);
}
