/*
 * XREFs of GetDevExtFromIndex @ 0x1C00086BC
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C00252EC (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0025790 (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002E8D8 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     GetLpIndex @ 0x1C002F9D0 (GetLpIndex.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C00377C0 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0039CD8 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
