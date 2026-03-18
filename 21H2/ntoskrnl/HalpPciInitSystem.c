/*
 * XREFs of HalpPciInitSystem @ 0x140A5B510
 * Callers:
 *     <none>
 * Callees:
 *     HalpInitNonBusHandler @ 0x140AF322C (HalpInitNonBusHandler.c)
 *     HalpPciInitializeMmConfigAccess @ 0x140B26CFC (HalpPciInitializeMmConfigAccess.c)
 *     HalpPciReportMmConfigAddressRange @ 0x140B26D98 (HalpPciReportMmConfigAddressRange.c)
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
