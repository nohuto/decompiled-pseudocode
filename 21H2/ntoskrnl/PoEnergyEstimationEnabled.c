/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1402AA040
 * Callers:
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x140600D8C (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14060BA1C (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateThread @ 0x14063FE68 (PspAllocateThread.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1406803E0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     AlpcpCaptureAttributes @ 0x1406D59F0 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1406D8A30 (PsQueryProcessEnergyValues.c)
 *     NtCreateJobObject @ 0x1406F7090 (NtCreateJobObject.c)
 *     PpmCheckReInit @ 0x1407BAF74 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2690 (NtAlpcImpersonateClientContainerOfPort.c)
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
