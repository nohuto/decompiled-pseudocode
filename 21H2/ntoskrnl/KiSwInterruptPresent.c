/*
 * XREFs of KiSwInterruptPresent @ 0x140B1D468
 * Callers:
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140AD6B50 (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140AD6B90 (KiFilterFiberContext.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 *     KeInitAmd64SpecificState @ 0x140B12A50 (KeInitAmd64SpecificState.c)
 *     ExpLicenseWatchInitWorker @ 0x140B1D3C4 (ExpLicenseWatchInitWorker.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
