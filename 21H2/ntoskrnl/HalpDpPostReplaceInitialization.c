/*
 * XREFs of HalpDpPostReplaceInitialization @ 0x1409A9408
 * Callers:
 *     HalpDpOfflineProcessorForReplace @ 0x1409A91AC (HalpDpOfflineProcessorForReplace.c)
 * Callees:
 *     HalpRestartProfiling @ 0x1403867A8 (HalpRestartProfiling.c)
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403A3888 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A3AF0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x1403A6664 (HalpMcUpdateMicrocode.c)
 *     HalpMcaResumeProcessorConfig @ 0x140996A40 (HalpMcaResumeProcessorConfig.c)
 */

__int64 __fastcall HalpDpPostReplaceInitialization(int *a1, unsigned __int64 *a2)
{
  int v2; // edi
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  char CpuInfo; // al
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v12 = 0;
  HalpInterruptReinitializeThisProcessor();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  __writemsr(0x10u, *a2);
  HalpMcaResumeProcessorConfig(1);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL);
  v9 = (unsigned int)_InterlockedExchangeAdd(a1 + 15, 1u);
  while ( a1[15] < v2 )
    _mm_pause();
  while ( a1[16] < (int)v9 )
    _mm_pause();
  HalpMcUpdateMicrocode(v9, v7, v8);
  CpuInfo = HalpGetCpuInfo(0LL, 0LL, 0LL, &v12);
  v12 &= -(CpuInfo != 0);
  if ( v12 == 1 )
  {
    if ( KeGetCurrentPrcb()->CpuType == 15 )
      __writemsr(0xC001001F, __readmsr(0xC001001F) & 0xFFFFFFFEFFEFFFFFuLL | 0x100000000LL);
    if ( KeGetCurrentPrcb()->CpuType == 18 )
      __writemsr(0xC0011029, __readmsr(0xC0011029) | 0x80000000);
  }
  _InterlockedIncrement(a1 + 16);
  while ( a1[16] < v2 )
    _mm_pause();
  HalpRestartProfiling();
  return HalpInterruptEnableNmi();
}
