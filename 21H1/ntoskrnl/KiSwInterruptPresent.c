/*
 * XREFs of KiSwInterruptPresent @ 0x140A3E990
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A18B5C (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     ExpLicenseWatchInitWorker @ 0x140A3E8E4 (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140A58168 (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
