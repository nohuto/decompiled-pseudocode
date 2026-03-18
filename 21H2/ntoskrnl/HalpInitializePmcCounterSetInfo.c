/*
 * XREFs of HalpInitializePmcCounterSetInfo @ 0x140AF89EC
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140A54EF0 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403BB634 (HalpMmAllocatePerProcessorMemory.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void *HalpInitializePmcCounterSetInfo()
{
  __int64 MaximumProcessorCount; // rbx
  void *result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  _QWORD *v4; // rcx

  MaximumProcessorCount = (unsigned int)HalQueryMaximumProcessorCount();
  result = HalpMmAllocatePerProcessorMemory(24);
  v2 = 0LL;
  HalpCounterSetInfo = (__int64)result;
  if ( !result )
    KeBugCheckEx(
      0xACu,
      24 * MaximumProcessorCount,
      0x2200uLL,
      (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\profile.c",
      0x930uLL);
  if ( (_DWORD)MaximumProcessorCount )
  {
    v3 = (unsigned int)MaximumProcessorCount;
    do
    {
      v4 = (_QWORD *)(v2 + HalpCounterSetInfo);
      v2 += 24LL;
      v4[1] = v4;
      *v4 = v4;
      result = (void *)MEMORY[0xFFFFF78000000008];
      v4[2] = MEMORY[0xFFFFF78000000008];
      --v3;
    }
    while ( v3 );
  }
  return result;
}
