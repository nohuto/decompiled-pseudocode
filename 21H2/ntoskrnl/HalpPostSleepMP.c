/*
 * XREFs of HalpPostSleepMP @ 0x140995864
 * Callers:
 *     HaliAcpiSleep @ 0x140385F30 (HaliAcpiSleep.c)
 * Callees:
 *     HalpRestartProfiling @ 0x140386658 (HalpRestartProfiling.c)
 *     HalpTimerRestoreProcessorCounter @ 0x1403866AC (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x140386718 (HalpTimerMarkWake.c)
 *     HalpSetResumeTime @ 0x140386740 (HalpSetResumeTime.c)
 *     HalpInterruptRestoreClock @ 0x1403868C8 (HalpInterruptRestoreClock.c)
 *     HalpTscSynchronizationWorker @ 0x14039CBB0 (HalpTscSynchronizationWorker.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403A3738 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x1403A376C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A39A0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x1403A6514 (HalpMcUpdateMicrocode.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403A773C (HalpHvIsReferenceTscConfigured.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A78A4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x1404C2BE0 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpMcaResumeProcessorConfig @ 0x140995A40 (HalpMcaResumeProcessorConfig.c)
 *     KeLoadMTRR @ 0x140999760 (KeLoadMTRR.c)
 *     HalpErrataApplyPerProcessor @ 0x140999CD0 (HalpErrataApplyPerProcessor.c)
 */

__int64 __fastcall HalpPostSleepMP(ULONG a1, __int64 a2)
{
  bool IsReferenceTscConfigured; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v8 = a1;
  LODWORD(v9) = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)v9 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v9 != HalpBarrier )
      _mm_pause();
    __writecr8(0xFuLL);
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0LL);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  if ( !(_DWORD)v9 )
  {
    dword_140C506D4 = 0;
    dword_140C506B0 = 0;
    dword_140C506BC = v8 - 1;
    qword_140C506C8 = (__int64)&dword_140C506B0;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v8);
  }
  _InterlockedIncrement(&HalpBarrier);
  while ( HalpBarrier != v8 )
    ;
  if ( !(_DWORD)v9 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v9 )
    HalpSetResumeTime(0LL, 1LL);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v4, v3);
  if ( !(_DWORD)v9 )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2LL);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140C506D0 = 0;
  }
  _InterlockedIncrement(&dword_140C506D4);
  while ( dword_140C506D4 != v8 )
    ;
  while ( dword_140C506D0 < (int)v9 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140C506D0, v5, v6);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140C506D0);
  while ( dword_140C506D0 != v8 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR(&unk_140C506B8);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1LL);
}
