/*
 * XREFs of KiSwInterruptPresent @ 0x140A4A494
 * Callers:
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140A1EB5C (KeFreeInitializationCode.c)
 *     KiFilterFiberContext @ 0x140A1EBA0 (KiFilterFiberContext.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 *     ExpLicenseWatchInitWorker @ 0x140A4A3E8 (ExpLicenseWatchInitWorker.c)
 *     KeInitAmd64SpecificState @ 0x140A5E568 (KeInitAmd64SpecificState.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x1402E7528 (HvlQueryVsmConnection.c)
 */

__int64 KiSwInterruptPresent()
{
  return HvlQueryVsmConnection(0LL) == 0 ? 0xC0000001 : 0;
}
