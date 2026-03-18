/*
 * XREFs of HalpPostSleepMP @ 0x140998074
 * Callers:
 *     HaliAcpiSleep @ 0x140385150 (HaliAcpiSleep.c)
 * Callees:
 *     HalpRestartProfiling @ 0x140385868 (HalpRestartProfiling.c)
 *     HalpTimerRestoreProcessorCounter @ 0x1403858BC (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x140385928 (HalpTimerMarkWake.c)
 *     HalpSetResumeTime @ 0x140385950 (HalpSetResumeTime.c)
 *     HalpInterruptRestoreClock @ 0x140385AD8 (HalpInterruptRestoreClock.c)
 *     HalpTscSynchronizationWorker @ 0x14039CF70 (HalpTscSynchronizationWorker.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403A2E78 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x1403A2EAC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A30E0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x1403A5C54 (HalpMcUpdateMicrocode.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403A6E7C (HalpHvIsReferenceTscConfigured.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A6FE4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x1404C1210 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpMcaResumeProcessorConfig @ 0x140998250 (HalpMcaResumeProcessorConfig.c)
 *     KeLoadMTRR @ 0x14099C1E0 (KeLoadMTRR.c)
 *     HalpErrataApplyPerProcessor @ 0x14099C750 (HalpErrataApplyPerProcessor.c)
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
    dword_140C50554 = 0;
    dword_140C50530 = 0;
    dword_140C5053C = v8 - 1;
    qword_140C50548 = (__int64)&dword_140C50530;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v8);
  }
  _InterlockedIncrement(&HalpBarrier);
  while ( HalpBarrier != v8 )
    ;
  if ( !(_DWORD)v9 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v9 )
    HalpSetResumeTime(0LL, 1);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter(v4, v3);
  if ( !(_DWORD)v9 )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140C50550 = 0;
  }
  _InterlockedIncrement(&dword_140C50554);
  while ( dword_140C50554 != v8 )
    ;
  while ( dword_140C50550 < (int)v9 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140C50550, v5, v6);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140C50550);
  while ( dword_140C50550 != v8 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR(&unk_140C50538);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1LL);
}
