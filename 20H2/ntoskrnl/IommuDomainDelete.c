/*
 * XREFs of IommuDomainDelete @ 0x140868BC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDmaDomain @ 0x1404C7B9C (HalpIommuFreeDmaDomain.c)
 */

__int64 __fastcall IommuDomainDelete(__int64 a1)
{
  return HalpIommuFreeDmaDomain(a1);
}
