/*
 * XREFs of HalpInitializePmcCounterSetInfo @ 0x140A3A690
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x14099C540 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpMmAllocatePerProcessorMemory @ 0x1403A98D4 (HalpMmAllocatePerProcessorMemory.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

void *__fastcall HalpInitializePmcCounterSetInfo(__int64 a1)
{
  __int64 MaximumProcessorCount; // rbx
  void *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rcx

  MaximumProcessorCount = (unsigned int)HalQueryMaximumProcessorCount(a1);
  result = HalpMmAllocatePerProcessorMemory(24LL);
  v3 = 0LL;
  HalpCounterSetInfo = (__int64)result;
  if ( !result )
    KeBugCheckEx(
      0xACu,
      24 * MaximumProcessorCount,
      0x2200uLL,
      (ULONG_PTR)"minkernel\\hals\\lib\\hwperfcnt\\profile.c",
      0x851uLL);
  if ( (_DWORD)MaximumProcessorCount )
  {
    v4 = (unsigned int)MaximumProcessorCount;
    do
    {
      v5 = (_QWORD *)(v3 + HalpCounterSetInfo);
      v3 += 24LL;
      v5[1] = v5;
      *v5 = v5;
      result = (void *)MEMORY[0xFFFFF78000000008];
      v5[2] = MEMORY[0xFFFFF78000000008];
      --v4;
    }
    while ( v4 );
  }
  return result;
}
