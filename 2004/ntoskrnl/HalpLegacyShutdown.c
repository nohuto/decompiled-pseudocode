/*
 * XREFs of HalpLegacyShutdown @ 0x1404B9410
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1404B92C0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
