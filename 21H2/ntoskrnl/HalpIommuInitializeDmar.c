/*
 * XREFs of HalpIommuInitializeDmar @ 0x1403BB7AC
 * Callers:
 *     HalpIommuInitSystem @ 0x140A55270 (HalpIommuInitSystem.c)
 * Callees:
 *     HalpIommuAllocateDmaDomain @ 0x1403BB820 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x14051B094 (HalpIommuGetHardwareDomain.c)
 */

__int64 HalpIommuInitializeDmar()
{
  __int64 result; // rax
  int v1; // r8d
  unsigned int v2; // ecx
  __int64 i; // rbx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( HalpHvIommu )
    return 0LL;
  result = HalpIommuAllocateDmaDomain(1, 0, 0, 0, (__int64)&HalpIommuBypassDomain);
  v2 = result;
  if ( (int)result >= 0 )
  {
    for ( i = HalpIommuList; (__int64 *)i != &HalpIommuList; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 472) & 0x100) != 0 )
      {
        LOBYTE(v1) = 1;
        result = HalpIommuGetHardwareDomain(HalpIommuBypassDomain, i, v1, 0, (__int64)&v4);
        v2 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    return v2;
  }
  return result;
}
