/*
 * XREFs of HalSocGetAcpiTable @ 0x1403AFBA4
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403ACF20 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpPmTimerDiscover @ 0x1403AE0AC (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403AE1AC (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403AE238 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403AE37C (HalpApicTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403AE620 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403AE9D0 (HalpPicDiscover.c)
 *     HalpHpetDiscover @ 0x1403AEE9C (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403AFB10 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1404CFE30 (HalpWdatInitialize.c)
 *     HalpPciGetHpetInterruptSource @ 0x140A8B5B0 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140335770 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
