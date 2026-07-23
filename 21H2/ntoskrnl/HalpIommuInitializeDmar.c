/*
 * XREFs of HalpIommuInitializeDmar @ 0x1403AD3B8
 * Callers:
 *     HalpIommuInitSystem @ 0x14099C9D0 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1403AD418 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C9834 (HalpIommuGetHardwareDomain.c)
 */

__int64 __fastcall HalpIommuInitializeDmar(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r8d
  unsigned int v4; // ecx
  __int64 i; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( HalpHvIommu )
    return 0LL;
  LOBYTE(a2) = 1;
  result = HalpIommuAllocateDmaDomain(0LL, a2, &HalpIommuBypassDomain);
  v4 = result;
  if ( (int)result >= 0 )
  {
    for ( i = HalpIommuList; (__int64 *)i != &HalpIommuList; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 456) & 0x100) != 0 )
      {
        LOBYTE(v3) = 1;
        result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, i, v3, 0, (__int64)&v6);
        v4 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v4;
  }
  return result;
}
