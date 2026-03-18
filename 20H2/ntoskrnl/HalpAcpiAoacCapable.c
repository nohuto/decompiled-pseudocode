/*
 * XREFs of HalpAcpiAoacCapable @ 0x1407D1210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpAcpiAoacCapable()
{
  return (HalpPlatformFlags & 8) != 0;
}
