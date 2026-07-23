/*
 * XREFs of HalJoinDmaDomain @ 0x1403C72B0
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3BC8 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140234490 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaReferenceDomainObject @ 0x1403A1564 (HalpDmaReferenceDomainObject.c)
 *     HalpDmaAllocateDomain @ 0x1403C7388 (HalpDmaAllocateDomain.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4D38 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaIsDomainCompatible @ 0x1404C4EDC (HalpDmaIsDomainCompatible.c)
 *     HalpDomainLaAllocate @ 0x1404C4F54 (HalpDomainLaAllocate.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuJoinDmaDomain @ 0x1404C9AFC (HalpIommuJoinDmaDomain.c)
 *     HalpIommuLeaveDmaDomain @ 0x1404C9BD4 (HalpIommuLeaveDmaDomain.c)
 */

__int64 __fastcall HalJoinDmaDomain(__int64 a1, __int64 Domain)
{
  char v4; // r15
  char v5; // r14
  int v6; // r9d
  int v7; // r8d
  int v8; // edi
  int v10; // r8d
  __int64 v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 3 && !*(_QWORD *)(a1 + 504) )
  {
    if ( (unsigned __int64)(Domain - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( !(unsigned __int8)HalpDmaIsDomainCompatible(a1, Domain) )
      {
        v8 = -1073741811;
        goto LABEL_21;
      }
      v8 = HalpDmaReferenceDomainObject(Domain);
      if ( v8 < 0 )
        goto LABEL_21;
    }
    else
    {
      LOBYTE(v6) = *(_BYTE *)(a1 + 437);
      v7 = *(_DWORD *)(a1 + 512);
      v11 = *(_QWORD *)(a1 + 528);
      v12 = (-(__int64)(*(_BYTE *)(a1 + 145) != 0) & 0xFFFF0000LL) + 0x10000;
      Domain = HalpDmaAllocateDomain((int)a1 + 136, (unsigned int)&v12, v7, v6, v11);
      if ( !Domain )
      {
        v8 = -1073741670;
        goto LABEL_21;
      }
      v8 = 0;
    }
    *(_QWORD *)(a1 + 504) = Domain;
    if ( *(_DWORD *)(Domain + 64) )
    {
      v8 = HalpIommuJoinDmaDomain(*(_QWORD *)(a1 + 536), *(_QWORD *)(Domain + 40));
      v5 = 1;
      if ( v8 < 0 )
        goto LABEL_21;
      v4 = 1;
      v8 = HalpDomainLaAllocate(Domain, *(_DWORD *)(a1 + 244), v10, 0, 0LL, a1 + 552);
      if ( v8 < 0 )
        goto LABEL_20;
      v8 = HalpIommuDomainMapLogicalRange(*(_QWORD *)(Domain + 40), 0, 0, *(_DWORD *)(a1 + 244), *(_QWORD *)(a1 + 552));
    }
    if ( v8 >= 0 )
      return (unsigned int)v8;
    if ( v4 )
      HalpDomainLaDelete(Domain, *(_QWORD *)(a1 + 552));
    v5 = 1;
    if ( !v4 )
    {
LABEL_21:
      *(_QWORD *)(a1 + 504) = 0LL;
      if ( v5 )
        HalpDmaDereferenceDomainObject(Domain);
      return (unsigned int)v8;
    }
LABEL_20:
    HalpIommuLeaveDmaDomain(*(_QWORD *)(a1 + 536), *(_QWORD *)(Domain + 40));
    v5 = 1;
    goto LABEL_21;
  }
  return 3221225485LL;
}
