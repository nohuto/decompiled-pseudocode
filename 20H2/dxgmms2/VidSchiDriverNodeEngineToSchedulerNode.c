/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C00103D0
 * Callers:
 *     VidSchCreateContext @ 0x1C0068B60 (VidSchCreateContext.c)
 *     VidSchGetNodeOrdinal @ 0x1C0077928 (VidSchGetNodeOrdinal.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D0E7C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00D1114 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00D2840 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchCreateHwContext @ 0x1C00D4060 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 80);
}
