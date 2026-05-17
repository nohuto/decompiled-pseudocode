/*
 * XREFs of _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0
 * Callers:
 *     _RtlpInitializeLfhRandomDataArray@0 @ 0x4B2B2266 (_RtlpInitializeLfhRandomDataArray@0.c)
 *     _RtlpCreateHeapEncoding@4 @ 0x4B2B22A1 (_RtlpCreateHeapEncoding@4.c)
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 *     @RtlpAllocateHeap@24 @ 0x4B2C6F90 (@RtlpAllocateHeap@24.c)
 *     _RtlpLfhIncrementDataSlot@0 @ 0x4B3079D9 (_RtlpLfhIncrementDataSlot@0.c)
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 *     _RtlpInitializeLowFragHeapManager@0 @ 0x4B370FB3 (_RtlpInitializeLowFragHeapManager@0.c)
 *     _RtlHpGlobalsInitialize@0 @ 0x4B375D0E (_RtlHpGlobalsInitialize@0.c)
 *     _RtlpUpdateLfhRandomDataArray@0 @ 0x4B379CD7 (_RtlpUpdateLfhRandomDataArray@0.c)
 *     _RtlpHpSegMgrApplyLargePagePolicy@4 @ 0x4B37BEAA (_RtlpHpSegMgrApplyLargePagePolicy@4.c)
 * Callees:
 *     _RtlRandomEx@4 @ 0x4B2AECC0 (_RtlRandomEx@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

unsigned int __stdcall RtlpHeapGenerateRandomValue32()
{
  int v1; // eax

  if ( !dword_4B3A6634 && (int)ZwQueryInformationProcess(-1, 36, &dword_4B3A6634, 4, 0) < 0 )
  {
    if ( MEMORY[0x7FFE0004] < 0x1000000u )
    {
      while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
        _mm_pause();
      v1 = MEMORY[0x7FFE0004] * (MEMORY[0x7FFE0324] << 8)
         + ((MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24);
    }
    else
    {
      v1 = (MEMORY[0x7FFE0004] * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24;
    }
    dword_4B3A6634 = v1;
  }
  return RtlRandomEx(&dword_4B3A6634);
}
