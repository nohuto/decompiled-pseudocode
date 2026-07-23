/*
 * XREFs of HalpIommuGetPageTableType @ 0x1404C99FC
 * Callers:
 *     HalpIommuAllocateDmaDomain @ 0x1403AD418 (HalpIommuAllocateDmaDomain.c)
 *     HalpIommuConstructReservedPageTable @ 0x1409A83D8 (HalpIommuConstructReservedPageTable.c)
 * Callees:
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 */

__int64 __fastcall HalpIommuGetPageTableType(int *a1)
{
  int v2; // ebx
  unsigned __int8 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0;
  if ( HalpGetCpuInfo(0LL, 0LL, 0LL, &v4) )
  {
    if ( v4 == 2 )
    {
LABEL_5:
      *a1 = v2;
      return 0LL;
    }
    if ( v4 == 1 )
    {
      v2 = 3;
      goto LABEL_5;
    }
  }
  return 3221225659LL;
}
