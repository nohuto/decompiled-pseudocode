/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x140386A24
 * Callers:
 *     HalMakeBeep @ 0x1404BDA20 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE30C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140995CF0 (HalpRestoreDmaControllerState.c)
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
