/*
 * XREFs of HalpIommuSupportEnabled @ 0x1403C8180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return HalpIommuPolicy >= 0 && (HalpIommuPolicy <= 1 || HalpIommuPolicy == 3);
}
