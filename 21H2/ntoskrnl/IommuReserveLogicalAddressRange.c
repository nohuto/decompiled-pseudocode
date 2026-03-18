/*
 * XREFs of IommuReserveLogicalAddressRange @ 0x140528B30
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x1403B1F04 (HalpMmAllocCtxAlloc.c)
 *     HalpIommuDomainFreeLogicalAddressRange @ 0x14045939A (HalpIommuDomainFreeLogicalAddressRange.c)
 *     HalpIommuDomainGetLogicalAddressRange @ 0x14051A9F8 (HalpIommuDomainGetLogicalAddressRange.c)
 *     HalpIommuDomainMapLogicalRange @ 0x14051AC2C (HalpIommuDomainMapLogicalRange.c)
 */

__int64 __fastcall IommuReserveLogicalAddressRange(
        ULONG_PTR a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        ULONG_PTR a6)
{
  _QWORD *v6; // r15
  int v11; // edi
  __int64 v12; // rsi
  int LogicalAddressRange; // eax
  __int64 v14; // rcx

  v6 = (_QWORD *)a6;
  a6 = 0LL;
  *v6 = 0LL;
  if ( (a2 & 0xFFF) != 0 || !a2 )
    return (unsigned int)-1073741584;
  if ( *(_DWORD *)(a1 + 8) )
  {
    return (unsigned int)-1073741585;
  }
  else
  {
    v12 = HalpMmAllocCtxAlloc(a1, 32LL);
    if ( v12 )
    {
      LogicalAddressRange = HalpIommuDomainGetLogicalAddressRange(a1, a3, a2, a4, a5, &a6);
      v11 = LogicalAddressRange;
      if ( LogicalAddressRange >= 0 )
      {
        v11 = HalpIommuDomainMapLogicalRange(a1, 0, 0, a2, a6);
        if ( v11 >= 0 )
        {
          *(_DWORD *)(v12 + 24) = 0;
          *(_QWORD *)(v12 + 16) = a1;
          *(_QWORD *)v12 = a6;
          *(_QWORD *)(v12 + 8) = a2;
          *v6 = v12;
          return (unsigned int)v11;
        }
        HalpIommuDomainFreeLogicalAddressRange(a1, a6);
      }
      else if ( LogicalAddressRange == -1073741584 || LogicalAddressRange == -1073741811 )
      {
        v11 = -1073741583;
      }
      HalpMmAllocCtxFree(v14, v12);
      return (unsigned int)v11;
    }
    return (unsigned int)-1073741670;
  }
}
