/*
 * XREFs of PoEnergyEstimationEnabled @ 0x140296BC0
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x1406570F0 (NtCreateJobObject.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14065AC0C (PspFoldProcessAccountingIntoJob.c)
 *     AlpcpCaptureAttributes @ 0x140686C00 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1406878B0 (PsQueryProcessEnergyValues.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140698EB0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406F1DEC (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PpmCheckReInit @ 0x1407A7B94 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408BEFC0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     KiInitializeBootStructures @ 0x140998800 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
