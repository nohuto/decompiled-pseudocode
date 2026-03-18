/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140383B08
 * Callers:
 *     HalMakeBeep @ 0x1404B8B40 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x1404B942C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140992490 (HalpRestoreDmaControllerState.c)
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
