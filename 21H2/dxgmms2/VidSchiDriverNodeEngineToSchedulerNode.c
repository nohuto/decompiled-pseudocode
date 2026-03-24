/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0011590
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C006E008 (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C0081600 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D004C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00D02E4 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00D1A10 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchCreateHwContext @ 0x1C00D3310 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 80);
}
