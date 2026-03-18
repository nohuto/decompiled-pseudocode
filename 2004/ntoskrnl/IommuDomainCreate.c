/*
 * XREFs of IommuDomainCreate @ 0x140863180
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1403B00E8 (HalpIommuAllocateDmaDomain.c)
 */

__int64 __fastcall IommuDomainCreate(char a1, __int64 *a2)
{
  return HalpIommuAllocateDmaDomain(2LL, a1, a2);
}
