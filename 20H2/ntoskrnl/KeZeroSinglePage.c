/*
 * XREFs of KeZeroSinglePage @ 0x140400910
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 *     ViGrowPoolAllocation @ 0x1409D8494 (ViGrowPoolAllocation.c)
 *     MxMarkActiveDriverBits @ 0x140A6ACA8 (MxMarkActiveDriverBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroSinglePage(_OWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 128LL;
  v2 = 32LL;
  do
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1 += 8;
    *(a1 - 4) = 0LL;
    *(a1 - 3) = 0LL;
    --v2;
    *(a1 - 2) = 0LL;
    *(a1 - 1) = 0LL;
  }
  while ( v2 );
  return result;
}
