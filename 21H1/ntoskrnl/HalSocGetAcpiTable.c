/*
 * XREFs of HalSocGetAcpiTable @ 0x1403A8AE4
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403A5E60 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpPmTimerDiscover @ 0x1403A6FEC (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403A70EC (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403A7178 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403A72BC (HalpApicTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403A7560 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403A7910 (HalpPicDiscover.c)
 *     HalpHpetDiscover @ 0x1403A7DDC (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403A8A50 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1404CF980 (HalpWdatInitialize.c)
 *     HalpPciGetHpetInterruptSource @ 0x140A8C020 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x1402F8740 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
