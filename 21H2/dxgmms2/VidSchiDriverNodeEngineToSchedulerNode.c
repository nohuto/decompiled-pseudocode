/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C001350C
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C0095CB4 (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C00987A0 (VidSchCreateContext.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00B86B0 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00F3380 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00F35F0 (VidSchiResetEngines.c)
 *     VidSchCreateHwContext @ 0x1C00F5D30 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 88);
}
