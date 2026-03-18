/*
 * XREFs of KiSwInterruptPresent @ 0x140A441F4
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A18B5C (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     ExpLicenseWatchInitWorker @ 0x140A44148 (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140A4F5CC (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1402E6B08 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
