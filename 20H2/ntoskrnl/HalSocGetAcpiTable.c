/*
 * XREFs of HalSocGetAcpiTable @ 0x1403B2194
 * Callers:
 *     HalpIommuRegisterBuiltinPlugins @ 0x1403AF508 (HalpIommuRegisterBuiltinPlugins.c)
 *     HalpPmTimerDiscover @ 0x1403B069C (HalpPmTimerDiscover.c)
 *     HalpSfiTimerDiscover @ 0x1403B079C (HalpSfiTimerDiscover.c)
 *     HalpRtcDiscover @ 0x1403B0828 (HalpRtcDiscover.c)
 *     HalpApicTimerDiscover @ 0x1403B096C (HalpApicTimerDiscover.c)
 *     HalpApicDiscover @ 0x1403B0C10 (HalpApicDiscover.c)
 *     HalpPicDiscover @ 0x1403B0FC0 (HalpPicDiscover.c)
 *     HalpHpetDiscover @ 0x1403B148C (HalpHpetDiscover.c)
 *     HalpWdatDiscover @ 0x1403B2100 (HalpWdatDiscover.c)
 *     HalpWdatInitialize @ 0x1404D33D0 (HalpWdatInitialize.c)
 *     HalpPciGetHpetInterruptSource @ 0x140A912C0 (HalpPciGetHpetInterruptSource.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14025EF70 (HalpAcpiGetTable.c)
 */

__int64 __fastcall HalSocGetAcpiTable(int a1)
{
  if ( HalpTimerLoaderBlock )
    return HalpAcpiGetTable(HalpTimerLoaderBlock, a1, 0, 0);
  else
    return 0LL;
}
