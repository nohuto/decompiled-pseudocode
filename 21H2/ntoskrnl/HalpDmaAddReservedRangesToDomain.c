/*
 * XREFs of HalpDmaAddReservedRangesToDomain @ 0x1404C4C50
 * Callers:
 *     HalpDmaAllocateDomain @ 0x1403C7388 (HalpDmaAllocateDomain.c)
 * Callees:
 *     HalpIommuDomainMapLogicalRange @ 0x1404C9514 (HalpIommuDomainMapLogicalRange.c)
 *     HalpIommuGetReservedRanges @ 0x1404C9A54 (HalpIommuGetReservedRanges.c)
 *     HalpLaReserveRange @ 0x1404DB614 (HalpLaReserveRange.c)
 */

__int64 __fastcall HalpDmaAddReservedRangesToDomain(__int64 a1, __int64 a2)
{
  int ReservedRanges; // ecx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0LL;
  v10 = 0;
  if ( a2 )
  {
    ReservedRanges = HalpIommuGetReservedRanges(a2, &v10, &v11);
    if ( ReservedRanges >= 0 )
    {
      if ( v10 )
        *(_BYTE *)(a1 + 33) = 1;
      v4 = 0LL;
      if ( v10 )
      {
        v5 = v11;
        do
        {
          if ( !*(_BYTE *)(v5 + 24 * v4 + 16) )
          {
            v6 = *(_QWORD *)(v5 + 24 * v4);
            v7 = *(_QWORD *)(v5 + 24 * v4 + 8);
            if ( v6 >= v7 )
              return (unsigned int)-1073741503;
            v8 = v7 - v6 + 1;
            if ( v8 >= 0xFFFFFFFF )
              return (unsigned int)-1073741503;
            ReservedRanges = HalpLaReserveRange(*(_QWORD *)(a1 + 48), *(_QWORD *)(v5 + 24 * v4), v8);
            if ( ReservedRanges < 0 )
              return (unsigned int)ReservedRanges;
            ReservedRanges = HalpIommuDomainMapLogicalRange(*(_QWORD *)(a1 + 40), 3, *(_QWORD *)(v5 + 24 * v4), v8, v6);
          }
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < v10 );
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ReservedRanges;
}
