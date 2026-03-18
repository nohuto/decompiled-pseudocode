/*
 * XREFs of ACPIThermalTMPCallback @ 0x1C00204A0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIThermalLoop @ 0x1C00209C0 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateTemperature @ 0x1C002167C (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs(a3, 1u);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
