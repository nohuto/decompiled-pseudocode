/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C0019EA8
 * Callers:
 *     ACPIGpeInstallRemoveIndex @ 0x1C0017084 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AD48 (ACPIGpeBuildWakeMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0026138 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C00509EC (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C0060930 (ACPIVectorClear.c)
 *     ACPIVectorDisable @ 0x1C0060B70 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0060DA0 (ACPIVectorEnable.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C0019EE0 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToGpeRegister(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx

  if ( !(unsigned __int8)ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 0LL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return ((v1 - v2) >> 3) + *((unsigned __int16 *)AcpiInformation + 43);
  else
    return v1 >> 3;
}
