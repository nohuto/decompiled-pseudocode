/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140205710
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E6290 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1405E92D0 (PsQueryProcessEnergyValues.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140616780 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateThread @ 0x14064B048 (PspAllocateThread.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406A15FC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406AD32C (PspFoldProcessAccountingIntoJob.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x14071EF90 (NtCreateJobObject.c)
 *     PpmCheckReInit @ 0x1407BA7E4 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2530 (NtAlpcImpersonateClientContainerOfPort.c)
 *     KiInitializeBootStructures @ 0x14099C160 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
