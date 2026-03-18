/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1C013E1B4
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C014AA80 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C005A940 (GreIncrementDisplaySettingsUniqueness.c)
 *     xxxResetDisplayDevice @ 0x1C0062740 (xxxResetDisplayDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 UserNotifyUniversalScaleFactorChanged()
{
  __int64 v0; // r9

  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
  GreIncrementDisplaySettingsUniqueness();
  if ( qword_1C02529D0 )
    qword_1C02529D0(-1LL, 26LL, 159LL);
  return xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0, v0);
}
