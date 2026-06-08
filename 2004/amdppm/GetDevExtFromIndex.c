/*
 * XREFs of GetDevExtFromIndex @ 0x1C0001B10
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1C001E9AC (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001EA50 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1C001EC30 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     GetLpIndex @ 0x1C0021290 (GetLpIndex.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002A44C (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x1C002B9AC (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1C002E83C (RegisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C003150C (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0034EB8 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
