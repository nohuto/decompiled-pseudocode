/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140208A50
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405ED830 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1405F0910 (PsQueryProcessEnergyValues.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140663D00 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateThread @ 0x14068411C (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406C5080 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406CEE0C (PspFoldProcessAccountingIntoJob.c)
 *     NtCreateJobObject @ 0x140710B60 (NtCreateJobObject.c)
 *     PpmCheckReInit @ 0x1407B5B84 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C4D70 (NtAlpcImpersonateClientContainerOfPort.c)
 *     KiInitializeBootStructures @ 0x14099E840 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A3CF64 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
