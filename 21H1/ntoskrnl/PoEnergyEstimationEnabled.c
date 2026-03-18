/*
 * XREFs of PoEnergyEstimationEnabled @ 0x14025A340
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1405EF9A0 (PspQueryProcessAccountingInformationCallback.c)
 *     AlpcpCaptureAttributes @ 0x14060EA80 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x14060F730 (PsQueryProcessEnergyValues.c)
 *     NtCreateJobObject @ 0x14065B8E0 (NtCreateJobObject.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14065E584 (PspFoldProcessAccountingIntoJob.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D0A30 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PpmCheckReInit @ 0x1407A5444 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BDC70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     KiInitializeBootStructures @ 0x1409977A0 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
