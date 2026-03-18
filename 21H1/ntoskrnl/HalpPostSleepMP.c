/*
 * XREFs of HalpPostSleepMP @ 0x1409910C4
 * Callers:
 *     HaliAcpiSleep @ 0x140382C30 (HaliAcpiSleep.c)
 * Callees:
 *     HalpRestartProfiling @ 0x140382F34 (HalpRestartProfiling.c)
 *     HalpTimerRestoreProcessorCounter @ 0x140382F88 (HalpTimerRestoreProcessorCounter.c)
 *     HalpTimerMarkWake @ 0x140382FBC (HalpTimerMarkWake.c)
 *     HalpSetResumeTime @ 0x140382FE4 (HalpSetResumeTime.c)
 *     HalpInterruptRestoreClock @ 0x14038305C (HalpInterruptRestoreClock.c)
 *     HalpTscSynchronizationWorker @ 0x140399690 (HalpTscSynchronizationWorker.c)
 *     HalpInterruptReinitializeThisProcessor @ 0x1403A0218 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptEnableNmi @ 0x1403A024C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0480 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpMcUpdateMicrocode @ 0x1403A3124 (HalpMcUpdateMicrocode.c)
 *     HalpHvIsReferenceTscConfigured @ 0x1403A42FC (HalpHvIsReferenceTscConfigured.c)
 *     HalpTscInitializeSynchronizationContext @ 0x1403A4464 (HalpTscInitializeSynchronizationContext.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x1404BD610 (HalpHvSetMachineCheckHandlerState.c)
 *     HalpMcaResumeProcessorConfig @ 0x1409912A0 (HalpMcaResumeProcessorConfig.c)
 *     KeLoadMTRR @ 0x140994DD0 (KeLoadMTRR.c)
 *     HalpErrataApplyPerProcessor @ 0x140995340 (HalpErrataApplyPerProcessor.c)
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
    dword_140C50614 = 0;
    dword_140C505F0 = 0;
    dword_140C505FC = v6 - 1;
    qword_140C50608 = (__int64)&dword_140C505F0;
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
    dword_140C50610 = 0;
  }
  _InterlockedIncrement(&dword_140C50614);
  while ( dword_140C50614 != v6 )
    ;
  while ( dword_140C50610 < (int)v7 )
    ;
  HalpMcUpdateMicrocode((unsigned int)dword_140C50610, v3, v4);
  HalpErrataApplyPerProcessor();
  _InterlockedIncrement(&dword_140C50610);
  while ( dword_140C50610 != v6 )
    ;
  HalpRestartProfiling();
  HalpInterruptEnableNmi();
  KeLoadMTRR(&unk_140C505F8);
  if ( !IsReferenceTscConfigured )
    HalpTscSynchronizationWorker((ULONG_PTR)&Argument);
  return HalpMcaResumeProcessorConfig(1LL);
}
