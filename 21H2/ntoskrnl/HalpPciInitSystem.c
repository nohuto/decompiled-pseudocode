/*
 * XREFs of HalpPciInitSystem @ 0x1409A2410
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitNonBusHandler @ 0x140A3A058 (HalpInitNonBusHandler.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140A6D8BC (HalpPciInitializeMmConfigAccess.c)
 *     HalpPciReportMmConfigAddressRange @ 0x140A6D94C (HalpPciReportMmConfigAddressRange.c)
 */

__int64 __fastcall HalpPciInitSystem(int a1, __int64 a2, __int64 a3)
{
  int v3; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    if ( v3 == 26 )
      HalpPciReportMmConfigAddressRange();
  }
  else
  {
    HalpPCIConfigLock = 0LL;
    HalpPciInitializeMmConfigAccess(a3);
    HalpInitNonBusHandler();
  }
  return 0LL;
}
