/*
 * XREFs of HalpLegacyShutdown @ 0x1404BC930
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1404BC7E0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
