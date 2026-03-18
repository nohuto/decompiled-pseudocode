/*
 * XREFs of HalpMcExportAllData @ 0x14077BC30
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x14077BB68 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x1408616D0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
