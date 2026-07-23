/*
 * XREFs of KiSwInterruptPresent @ 0x140A433F0
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A1CB5C (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140A1CBA0 (KiFilterFiberContext.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     ExpLicenseWatchInitWorker @ 0x140A43344 (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140A600D4 (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140265408 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
