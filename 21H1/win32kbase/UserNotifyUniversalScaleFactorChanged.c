/*
 * XREFs of UserNotifyUniversalScaleFactorChanged @ 0x1C0144504
 * Callers:
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0150DD0 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C004CD60 (GreIncrementDisplaySettingsUniqueness.c)
 *     xxxResetDisplayDevice @ 0x1C00AB4F0 (xxxResetDisplayDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 UserNotifyUniversalScaleFactorChanged()
{
  ZwUpdateWnfStateData(&WNF_SPI_LOGICALDPIOVERRIDE, 0LL, 0LL, 0LL, &gSessionId, 0, 0);
  GreIncrementDisplaySettingsUniqueness();
  if ( qword_1C0258990 )
    qword_1C0258990(-1LL, 26LL, 159LL);
  return xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
}
