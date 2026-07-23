/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140386B74
 * Callers:
 *     HalMakeBeep @ 0x1404BDC60 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE54C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140996CF0 (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

bool HalpMiscIsLegacyPcType()
{
  return !HalFirmwareTypeEfi
      || (HalpPlatformFlags & 1) != 0
      && (HalpPlatformFlags & 4) != 0
      && HalpVideoBiosPresent
      && (HalpPlatformFlags & 8) == 0;
}
