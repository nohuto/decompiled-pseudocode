/*
 * XREFs of ACPIGpeIndexToByteIndex @ 0x1C0030BE0
 * Callers:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001FF34 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0057880 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIVectorDisconnect @ 0x1C0061BB0 (ACPIVectorDisconnect.c)
 *     ACPIVectorInstall @ 0x1C0061EF8 (ACPIVectorInstall.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1C001D604 (ACPIGpeValidIndex.c)
 */

__int64 __fastcall ACPIGpeIndexToByteIndex(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // edx

  if ( !ACPIGpeValidIndex(a1) )
    KeBugCheckEx(0xA5u, 0x17uLL, v1, 1uLL, 0LL);
  v2 = *((unsigned __int16 *)AcpiInformation + 50);
  if ( v1 >= v2 )
    return v1 + *((unsigned __int16 *)AcpiInformation + 43) - v2;
  else
    return v1;
}
