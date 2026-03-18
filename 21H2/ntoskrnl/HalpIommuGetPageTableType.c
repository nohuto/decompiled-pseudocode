/*
 * XREFs of HalpIommuGetPageTableType @ 0x14051B254
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403BB820 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x140A61BE0 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403AAE80 (HalpGetCpuInfo.c)
 */

__int64 __fastcall HalpIommuGetPageTableType(char a1, _DWORD *a2)
{
  unsigned __int8 v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v5) )
  {
    if ( v5 == 2 )
    {
      if ( !a1 )
      {
        *a2 = 0;
        return 0LL;
      }
    }
    else if ( v5 == 1 )
    {
      *a2 = 3 - (a1 != 0);
      return 0LL;
    }
  }
  return 3221225659LL;
}
