/*
 * XREFs of HalpPostSleepMP @ 0x140992004
 * Callers:
 *     HaliAcpiSleep @ 0x140383470 (HaliAcpiSleep.c)
 * Callees:
 *     HalpRestartProfiling @ 0x140383774 (HalpRestartProfiling.c)
 *     HalpTimerRestoreProcessorCounter @ 0x1403837C8 (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x1403837FC (HalpTimerMarkWake.c)
 *     HalpSetResumeTime @ 0x140383824 (HalpSetResumeTime.c)
 *     HalpInterruptRestoreClock @ 0x1403839AC (HalpInterruptRestoreClock.c)
 *     HalpTscSynchronizationWorker @ 0x140399E20 (HalpTscSynchronizationWorker.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403A09A8 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x1403A09DC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0C10 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x1403A3884 (HalpMcUpdateMicrocode.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403A4A5C (HalpHvIsReferenceTscConfigured.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A4BE4 (HalpTscInitializeSynchronizationContext.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x1404BDCF0 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpMcaResumeProcessorConfig @ 0x1409921E0 (HalpMcaResumeProcessorConfig.c)
 *     KeLoadMTRR @ 0x1409961A0 (KeLoadMTRR.c)
 *     HalpErrataApplyPerProcessor @ 0x140996710 (HalpErrataApplyPerProcessor.c)
 */

__int64 __fastcall HalpPostSleepMP(ULONG a1, __int64 a2)
{
  bool IsReferenceTscConfigured; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  ULONG v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h]

  v7 = a2;
  v6 = a1;
  LODWORD(v7) = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)v7 )
  {
    HalpInterruptReinitializeThisProcessor();
    while ( (_DWORD)v7 != HalpBarrier )
      _mm_pause();
    __writecr8(0xFuLL);
  }
  if ( (HalpFeatureBits & 0xC) != 0 )
    HalpMcaResumeProcessorConfig(0LL);
  if ( (HalpFeatureBits & 1) != 0 )
    HalpInterruptEnablePerformanceEvents(0LL);
  IsReferenceTscConfigured = HalpHvIsReferenceTscConfigured();
  if ( !(_DWORD)v7 )
  {
    dword_140C504D4 = 0;
    dword_140C504B0 = 0;
    dword_140C504BC = v6 - 1;
    qword_140C504C8 = (__int64)&dword_140C504B0;
    if ( !IsReferenceTscConfigured )
      HalpTscInitializeSynchronizationContext((__int64)&Argument, 0, 0LL, &v6);
  }
  _InterlockedIncrement(&HalpBarrier);
  while ( HalpBarrier != v6 )
    ;
  if ( !(_DWORD)v7 && HalpHvWheaEnlightenedCpuManager && HalpMceEnabled )
    HalpHvSetMachineCheckHandlerState();
  if ( !(_DWORD)v7 )
    HalpSetResumeTime(0LL, 1);
  HalpTimerMarkWake();
  HalpTimerRestoreProcessorCounter();
  v4 = (unsigned int)v7;
  if ( !(_DWORD)v7 )
  {
    SystemPowerPhase = 1;
    HalpSetResumeTime(0LL, 2);
    HalpInterruptRestoreClock();
    HalpHiberInProgress = 0;
    dword_140C504D0 = 0;
  }
  _InterlockedIncrement(&dword_140C504D4);
  while ( dword_140C504D4 != v6 )
    ;
  while ( dword_140C504D0 < (int)v7 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140C504D0, v3, v4);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140C504D0);
  while ( dword_140C504D0 != v6 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR(&unk_140C504B8);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1LL);
}
