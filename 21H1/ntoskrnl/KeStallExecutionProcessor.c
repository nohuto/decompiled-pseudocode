/*
 * XREFs of KeStallExecutionProcessor @ 0x140278400
 * Callers:
 *     HalpInterruptWaitForProcessorStartUp @ 0x14039DFEC (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpApicStartProcessor @ 0x1403A3490 (HalpApicStartProcessor.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403A4EF4 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403A6278 (HalpTimerMeasureFrequencies.c)
 *     HalpInterruptResetThisProcessor @ 0x1404B6EC0 (HalpInterruptResetThisProcessor.c)
 *     HalpPowerWriteResetCommand @ 0x1404B8D4C (HalpPowerWriteResetCommand.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404BC55C (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404BDFF0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x1404CD868 (HalpNmiReboot.c)
 *     HalpSfiTimerArm @ 0x1404D0350 (HalpSfiTimerArm.c)
 *     HalpSfiTimerInitialize @ 0x1404D0450 (HalpSfiTimerInitialize.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1404D1F6C (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1404D2098 (HalpUsbLegacyStopUhciInterrupt.c)
 *     IvtUpdateGlobalCommand @ 0x1404DBB60 (IvtUpdateGlobalCommand.c)
 *     HsaGetPageFault @ 0x1404DE1A0 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F04FC (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x1404FD230 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140517BF0 (KeFreezeExecution.c)
 *     ExpWaitForBootDevices @ 0x1405AD720 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405BF970 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405BFB34 (BgpFwDisplayBugCheckScreen.c)
 *     IvtInitializeIommu @ 0x1409A5CD0 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x1409EBD54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402785B0 (HalpTimerGetInternalData.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalpProcessorFence @ 0x1403F1C50 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KiCheckStall @ 0x140518220 (KiCheckStall.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v2; // rsi
  char v3; // r13
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned __int128 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 Mask; // r12
  __int64 v14; // rax
  ULONG_PTR v15; // rdi
  __int64 InternalData; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  signed __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  signed __int64 v27; // rcx
  unsigned int v28; // edx
  signed __int32 v29[8]; // [rsp+0h] [rbp-78h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF
  int v32; // [rsp+70h] [rbp-8h]

  if ( HalpTimerProcessorsFrozen )
  {
    v15 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        (*(void (__fastcall **)(__int64))(v15 + 112))(InternalData);
      }
      else
      {
        do
        {
          v17 = *(_QWORD *)(v15 + 208);
          do
          {
            v18 = *(_QWORD *)(v15 + 200);
            v19 = HalpTimerGetInternalData(v15);
            v20 = (*(__int64 (__fastcall **)(__int64))(v15 + 112))(v19);
            _InterlockedOr(v29, 0);
            v21 = *(_QWORD *)(v15 + 200);
          }
          while ( v18 != v21 );
        }
        while ( v17 != *(_QWORD *)(v15 + 208) );
        v22 = *(_DWORD *)(v15 + 220);
        if ( ((v18 ^ v20) & (1LL << ((unsigned __int8)v22 - 1))) != 0 )
        {
          v23 = 1LL << v22;
          v24 = v22 == 64;
          v25 = -1LL;
          if ( !v24 )
            v25 = v23 - 1;
          v26 = v18 & v25;
          v27 = v20 | v18 ^ v26;
          if ( v20 < v26 )
            v27 += v23;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 200), v27, v21);
        }
      }
    }
    KiCheckStall(KeGetCurrentPrcb(), 0LL);
  }
  v2 = HalpStallCounter;
  v3 = 0;
  Affinity = 0LL;
  v4 = *(_DWORD *)(HalpStallCounter + 224);
  PreviousAffinity = 0LL;
  if ( (v4 & 1) != 0
    && KeQueryActiveProcessorCountEx(0xFFFFu) >= 2
    && KeGetCurrentIrql() < 2u
    && (v32 & 0x200) != 0
    && (*(_DWORD *)(v2 + 184) & 0x20) == 0 )
  {
    v3 = 1;
    v28 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v28 >> 6);
    Affinity.Mask = 1LL << (v28 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v5 = HalpTimerGetInternalData(v2);
  v6 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v5);
  HalpProcessorFence();
  v8 = 0LL;
  Affinity.Mask = 1LL << *(_DWORD *)(v2 + 220);
  v9 = v6;
  v10 = 0;
  v11 = (*(_QWORD *)(v2 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999)
      * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  v12 = (*(_QWORD *)(v2 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 + 1;
  if ( (*(_QWORD *)(v2 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 != -1LL )
  {
    Mask = Affinity.Mask;
    do
    {
      if ( (++v10 & dword_140C4A35C) == 0 && qword_140C4A360 )
        qword_140C4A360(v10, *((_QWORD *)&v11 + 1), v7);
      else
        _mm_pause();
      v14 = HalpTimerGetInternalData(v2);
      *(_QWORD *)&v11 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v14);
      if ( (unsigned __int64)v11 < v9 )
        v8 += Mask;
      v9 = v11;
    }
    while ( (__int64)v11 + v8 - v6 < v12 );
  }
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
