/*
 * XREFs of HalpLegacyShutdown @ 0x1404B8D30
 * Callers:
 *     <none>
 * Callees:
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 */

void __noreturn HalpLegacyShutdown()
{
  HalReturnToFirmware(1);
}
