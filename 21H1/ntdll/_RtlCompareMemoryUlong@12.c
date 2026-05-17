/*
 * XREFs of _RtlCompareMemoryUlong@12 @ 0x4B307F80
 * Callers:
 *     _RtlpGrowBlockInPlace@20 @ 0x4B2B1340 (_RtlpGrowBlockInPlace@20.c)
 *     @RtlpCreateSplitBlock@28 @ 0x4B2B16CC (@RtlpCreateSplitBlock@28.c)
 *     _RtlpCoalesceFreeBlocks@16 @ 0x4B2C1E63 (_RtlpCoalesceFreeBlocks@16.c)
 *     @RtlpFreeHeap@16 @ 0x4B2C3C10 (@RtlpFreeHeap@16.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlpValidateHeapSegment@32 @ 0x4B360CCF (_RtlpValidateHeapSegment@32.c)
 *     _RtlpHpParametersVerify@4 @ 0x4B3708B8 (_RtlpHpParametersVerify@4.c)
 * Callees:
 *     <none>
 */

char *__stdcall RtlCompareMemoryUlong(char *a1, unsigned int a2, int a3)
{
  char *v3; // edi
  bool v4; // zf
  unsigned int v5; // ecx

  v3 = a1;
  v5 = a2 >> 2;
  v4 = a2 >> 2 == 0;
  do
  {
    if ( !v5 )
      break;
    v4 = *(_DWORD *)v3 == a3;
    v3 += 4;
    --v5;
  }
  while ( v4 );
  if ( !v4 )
    v3 -= 4;
  return (char *)(v3 - a1);
}
