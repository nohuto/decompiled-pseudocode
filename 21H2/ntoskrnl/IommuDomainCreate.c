/*
 * XREFs of IommuDomainCreate @ 0x14090AAC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1403BB820 (HalpIommuAllocateDmaDomain.c)
 */

__int64 __fastcall IommuDomainCreate(char a1, __int64 a2)
{
  return HalpIommuAllocateDmaDomain(a1 == 0 ? 2 : 0, 0LL, 0LL, 0LL, a2);
}
