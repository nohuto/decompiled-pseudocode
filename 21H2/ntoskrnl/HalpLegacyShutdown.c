/*
 * XREFs of HalpLegacyShutdown @ 0x1404BE2F0
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1404BE1A0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
