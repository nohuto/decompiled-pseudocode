/*
 * XREFs of HalpMiscIsLegacyPcType @ 0x1403831B8
 * Callers:
 *     HalMakeBeep @ 0x1404B8460 (HalMakeBeep.c)
 *     HalpPowerWriteResetCommand @ 0x1404B8D4C (HalpPowerWriteResetCommand.c)
 *     HalpRestoreDmaControllerState @ 0x140991550 (HalpRestoreDmaControllerState.c)
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
