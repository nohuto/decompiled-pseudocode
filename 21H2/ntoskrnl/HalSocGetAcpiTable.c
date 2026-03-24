/*
 * XREFs of HalSocGetAcpiTable @ 0x1403AC144
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403A94B8 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpPmTimerDiscover @ 0x1403AA64C (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403AA74C (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403AA7D8 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403AA91C (HalpApicTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403AABC0 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403AAF70 (HalpPicDiscover.c)
 *     HalpHpetDiscover @ 0x1403AB43C (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403AC0B0 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1404D4DA0 (HalpWdatInitialize.c)
 *     HalpPciGetHpetInterruptSource @ 0x140A8E120 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140294680 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
