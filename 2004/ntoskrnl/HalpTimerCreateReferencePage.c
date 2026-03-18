/*
 * XREFs of HalpTimerCreateReferencePage @ 0x1403AD23C
 * Callers:
 *     HalpInitializeTimers @ 0x1403AD0A0 (HalpInitializeTimers.c)
 * Callees:
 *     RtlUdiv128 @ 0x1403AD2C0 (RtlUdiv128.c)
 *     HalpMmAllocateMemoryInternal @ 0x1403B7E18 (HalpMmAllocateMemoryInternal.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 HalpTimerCreateReferencePage()
{
  void *MemoryInternal; // rax
  _QWORD *v1; // rbx
  ULONG_PTR v2; // r8

  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
    return 0LL;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(4096LL, 1LL);
  HalpTimerReferencePage = MemoryInternal;
  v1 = MemoryInternal;
  if ( MemoryInternal )
  {
    memset(MemoryInternal, 0, 0x1000uLL);
    v2 = HalpPerformanceCounter;
    *(_DWORD *)v1 = 1416388936;
    v1[1] = RtlUdiv128(10000000LL, 0LL, *(_QWORD *)(v2 + 192), 0LL);
    return 0LL;
  }
  return 3221225626LL;
}
