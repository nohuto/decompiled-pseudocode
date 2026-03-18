/*
 * XREFs of KeEnterCriticalRegion @ 0x140205E40
 * Callers:
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     EtwpAddGuidEntry @ 0x1406369BC (EtwpAddGuidEntry.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x14087A7F4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     EtwpCoverageSamplerStart @ 0x140943BFC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     <none>
 */

void KeEnterCriticalRegion(void)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
}
