/*
 * XREFs of HalpLegacyShutdown @ 0x14050A920
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
