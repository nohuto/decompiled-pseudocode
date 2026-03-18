/*
 * XREFs of KeZeroSinglePage @ 0x140424F10
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     ViGrowPoolAllocation @ 0x1405FF8F0 (ViGrowPoolAllocation.c)
 *     MiValidateSectionCreate @ 0x1406B79C8 (MiValidateSectionCreate.c)
 *     MxMarkActiveDriverBits @ 0x140B1D5F4 (MxMarkActiveDriverBits.c)
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
