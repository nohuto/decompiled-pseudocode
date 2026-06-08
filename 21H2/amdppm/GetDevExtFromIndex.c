/*
 * XREFs of GetDevExtFromIndex @ 0x1C0001900
 * Callers:
 *     InitCoreProcessorSetAffinity @ 0x1C00209AC (InitCoreProcessorSetAffinity.c)
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C0020A50 (InitEnergyCountersOnCurrentProcessor.c)
 *     UnInitEnergyCountersOnCurrentProcessor @ 0x1C0020C30 (UnInitEnergyCountersOnCurrentProcessor.c)
 *     GetLpIndex @ 0x1C0023AA0 (GetLpIndex.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002C4E4 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     DeregisterKernelIdleDomains @ 0x1C002DA44 (DeregisterKernelIdleDomains.c)
 *     RegisterKernelIdleDomains @ 0x1C003099C (RegisterKernelIdleDomains.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00338EC (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C00372B0 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1);
}
