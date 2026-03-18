/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1C013BE64
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C01485B0 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C006F460 (xxxResetDisplayDevice.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00BAAC0 (GreIncrementDisplaySettingsUniqueness.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 UserNotifyUniversalScaleFactorChanged()
{
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
  GreIncrementDisplaySettingsUniqueness();
  if ( qword_1C02509D0 )
    qword_1C02509D0(-1LL, 26LL, 159LL);
  return xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
}
