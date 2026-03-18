/*
 * XREFs of ACPIThermalLoop @ 0x1C00127B0
 * Callers:
 *     ACPIThermalComplete @ 0x1C0011B80 (ACPIThermalComplete.c)
 *     ACPIThermalTMPCallback @ 0x1C0012250 (ACPIThermalTMPCallback.c)
 *     ACPIThermalLoopEx @ 0x1C00127C8 (ACPIThermalLoopEx.c)
 *     ACPIThermalUpdateTemperature @ 0x1C00132D4 (ACPIThermalUpdateTemperature.c)
 *     ACPIThermalWorker @ 0x1C009A7E0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalLoopEx @ 0x1C00127C8 (ACPIThermalLoopEx.c)
 */

__int64 __fastcall ACPIThermalLoop(__int64 a1, __int64 a2)
{
  return ACPIThermalLoopEx(a1, a2, 0LL);
}
