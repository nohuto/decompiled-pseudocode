/*
 * XREFs of HalSocGetAcpiTable @ 0x1403ACED4
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403AA248 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpPmTimerDiscover @ 0x1403AB3DC (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403AB4DC (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403AB568 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403AB6AC (HalpApicTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403AB950 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403ABD00 (HalpPicDiscover.c)
 *     HalpHpetDiscover @ 0x1403AC1CC (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403ACE40 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1404D4FE0 (HalpWdatInitialize.c)
 *     HalpPciGetHpetInterruptSource @ 0x140A8F120 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140216340 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
