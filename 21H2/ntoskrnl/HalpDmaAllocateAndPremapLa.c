/*
 * XREFs of HalpDmaAllocateAndPremapLa @ 0x1404B6FB0
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x1404B87E8 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     HalpDomainLaAllocate @ 0x1404C4F54 (HalpDomainLaAllocate.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 */

__int64 __fastcall HalpDmaAllocateAndPremapLa(__int64 a1, int a2, int a3, __int64 *a4)
{
  __int64 v5; // rbp
  char v8; // r12
  int v9; // edi
  __int64 v10; // r8
  __int64 result; // rax

  *a4 = -1LL;
  v5 = *(_QWORD *)(a1 + 504);
  v8 = a3;
  v9 = HalpDomainLaAllocate(v5, a2, a3, 0, 0LL, (__int64)a4);
  if ( v9 >= 0 )
  {
    result = HalpIommuDomainMapLogicalRange(*(_QWORD *)(v5 + 40), 0, 0, a2, *a4);
    v9 = result;
    if ( (int)result >= 0 )
      return result;
    HalpDomainLaDelete(v5, *a4);
    *a4 = -1LL;
  }
  LOBYTE(v10) = v8;
  if ( (unsigned __int8)HalpDmaUseEmergencyLogicalAddressResources(a1, a1 + 592, v10) )
    return 0;
  return (unsigned int)v9;
}
