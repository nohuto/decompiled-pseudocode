/*
 * XREFs of HalpIommuConstructReservedPageTable @ 0x1409A83D8
 * Callers:
 *     HalpIommuConstructReservedPageTables @ 0x1409A84F0 (HalpIommuConstructReservedPageTables.c)
 * Callees:
 *     HalpIommuGetPageTableType @ 0x1404C99FC (HalpIommuGetPageTableType.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DBBFC (HalpIommuCreateDmarPageTable.c)
 *     HalpIommuGetDmarptRootAddress @ 0x1404DBE78 (HalpIommuGetDmarptRootAddress.c)
 *     HalpIommuMapLogicalRange @ 0x1404DC44C (HalpIommuMapLogicalRange.c)
 */

__int64 __fastcall HalpIommuConstructReservedPageTable(__int64 a1, PHYSICAL_ADDRESS *a2, unsigned int a3)
{
  int PageTableType; // r8d
  __int64 v7; // r9
  __int64 *v8; // rsi
  __int64 i; // rdi
  signed __int64 QuadPart; // rax
  signed __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0;
  if ( HalpHvIommu || !a2[3].LowPart )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PageTableType = HalpIommuGetPageTableType((int *)&v15);
    if ( PageTableType >= 0 )
    {
      v8 = (__int64 *)&a2[1];
      PageTableType = HalpIommuCreateDmarPageTable(v15, a3, a3, v7, v14, a1, (__int64 *)&a2[1]);
      if ( PageTableType >= 0 )
      {
        PageTableType = HalpIommuGetDmarptRootAddress(*v8, a3, a2 + 2);
        if ( PageTableType >= 0 )
        {
          for ( i = 0LL; (unsigned int)i < a2[3].LowPart; i = (unsigned int)(i + 1) )
          {
            if ( !LOBYTE(a2[3 * i + 6].LowPart) )
            {
              if ( (a2[3 * i + 4].LowPart & 0xFFF) != 0 )
                return (unsigned int)-1073741811;
              QuadPart = a2[3 * i + 5].QuadPart;
              v11 = a2[3 * i + 4].QuadPart;
              if ( QuadPart <= v11 )
                return (unsigned int)-1073741811;
              v12 = QuadPart - v11 + 1;
              if ( (v12 & 0xFFF) != 0 )
                return (unsigned int)-1073741811;
              PageTableType = HalpIommuMapLogicalRange(a1, *v8, 3u, a2[3 * i + 4].QuadPart, v12, v11);
              if ( PageTableType < 0 )
                return (unsigned int)PageTableType;
            }
          }
        }
      }
    }
  }
  return (unsigned int)PageTableType;
}
