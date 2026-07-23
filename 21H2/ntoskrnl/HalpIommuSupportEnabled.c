/*
 * XREFs of HalpIommuSupportEnabled @ 0x1403CB900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool HalpIommuSupportEnabled()
{
  return HalpIommuPolicy >= 0 && (HalpIommuPolicy <= 1 || HalpIommuPolicy == 3);
}
