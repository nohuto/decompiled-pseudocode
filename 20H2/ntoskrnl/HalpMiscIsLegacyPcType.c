/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140385C34
 * Callers:
 *     HalMakeBeep @ 0x1404BC060 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BC94C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140998500 (HalpRestoreDmaControllerState.c)
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
