/*
 * XREFs of ACPIThermalTMPCallback @ 0x1C00124B0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C0012A28 (ACPIThermalLoopEx.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     ACPIThermalLoop @ 0x1C0012A10 (ACPIThermalLoop.c)
 *     ACPIThermalUpdateTemperature @ 0x1C0013534 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalTMPCallback(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( a2 >= 0 )
  {
    ACPIThermalUpdateTemperature(a4, *(unsigned int *)(a3 + 16));
    dword_1C0082908 = 0;
    pszDest = 0;
    FreeDataBuffs(a3, 1u);
  }
  return ACPIThermalLoop(a4, 0x40000000LL);
}
