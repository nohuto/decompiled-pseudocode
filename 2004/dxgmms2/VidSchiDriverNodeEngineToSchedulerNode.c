/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0010D00
 * Callers:
 *     VidSchGetNodeOrdinal @ 0x1C00685D8 (VidSchGetNodeOrdinal.c)
 *     VidSchCreateContext @ 0x1C007FC00 (VidSchCreateContext.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00D147C (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00D1714 (VidSchiResetEngines.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00D2E40 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchCreateHwContext @ 0x1C00D4660 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 80);
}
