/*
 * XREFs of ACPIGpeIndexToGpeRegister @ 0x1C001D5CC
 * Callers:
 *     ACPIGpeInstallRemoveIndex @ 0x1C001D2F0 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001D4E0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001FF34 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C004FD30 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 *     ACPIVectorClear @ 0x1C0061880 (ACPIVectorClear.c)
 *     ACPIVectorDisable @ 0x1C0061AC0 (ACPIVectorDisable.c)
 *     ACPIVectorEnable @ 0x1C0061CF0 (ACPIVectorEnable.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C001D604 (ACPIGpeValidIndex.c)
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
