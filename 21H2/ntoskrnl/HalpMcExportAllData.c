/*
 * XREFs of HalpMcExportAllData @ 0x140792EB0
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x140792DE8 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x140866180 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall HalpMcExportAllData(unsigned int *a1, __int64 a2, POOL_TYPE a3)
{
  unsigned int v3; // ebx
  PVOID PoolWithTag; // rdi
  PVOID result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0;
  PoolWithTag = 0LL;
  if ( HalpMcUpdateExportDataFunc )
  {
    if ( (unsigned int)HalpMcUpdateExportDataFunc(0LL, &v9, a2) == -1073741789 )
    {
      v9 = (v9 + 4095) & 0xFFFFF000;
      PoolWithTag = ExAllocatePoolWithTag(a3, v9, 0x206C6148u);
      if ( PoolWithTag )
      {
        v10 = v9;
        if ( (int)HalpMcUpdateExportDataFunc(PoolWithTag, &v10, a2) < 0 )
        {
          ExFreePoolWithTag(PoolWithTag, 0x206C6148u);
          PoolWithTag = 0LL;
        }
        if ( PoolWithTag )
          v3 = v9;
      }
    }
  }
  result = PoolWithTag;
  *a1 = v3;
  return result;
}
