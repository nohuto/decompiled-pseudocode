/*
 * XREFs of HalpLegacyShutdown @ 0x1404BE530
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
