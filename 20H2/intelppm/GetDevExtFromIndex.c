/*
 * XREFs of GetDevExtFromIndex @ 0x1C00086AC
 * Callers:
 *     RegisterKernelIdleDomains @ 0x1C002668C (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C0026B30 (DeregisterKernelIdleDomains.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002FC38 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     GetLpIndex @ 0x1C0030D30 (GetLpIndex.c)
 *     PepNotifyCoordinatedLpiStates @ 0x1C0038C18 (PepNotifyCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C003B138 (LpiEnumerateDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDevExtFromIndex(unsigned int a1)
{
  return *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + a1);
}
