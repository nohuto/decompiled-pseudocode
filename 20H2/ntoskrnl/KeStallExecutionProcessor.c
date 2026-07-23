/*
 * XREFs of KeStallExecutionProcessor @ 0x140288CF0
 * Callers:
 *     HalpInterruptWaitForProcessorStartUp @ 0x1403A0C4C (HalpInterruptWaitForProcessorStartUp.c)
 *     HalpApicStartProcessor @ 0x1403A5FC0 (HalpApicStartProcessor.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403AE5B0 (HalpTimerWaitForPhase0Interrupt.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AF928 (HalpTimerMeasureFrequencies.c)
 *     HalpInterruptResetThisProcessor @ 0x1404BAAC0 (HalpInterruptResetThisProcessor.c)
 *     HalpPowerWriteResetCommand @ 0x1404BC94C (HalpPowerWriteResetCommand.c)
 *     HalpTimerTestHypervisorTimer @ 0x1404C015C (HalpTimerTestHypervisorTimer.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C1BF0 (HalpTimerMeasureProcessorsWorker.c)
 *     HalpNmiReboot @ 0x1404D12B8 (HalpNmiReboot.c)
 *     HalpSfiTimerArm @ 0x1404D3DA0 (HalpSfiTimerArm.c)
 *     HalpSfiTimerInitialize @ 0x1404D3EA0 (HalpSfiTimerInitialize.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1404D59AC (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpUsbLegacyStopUhciInterrupt @ 0x1404D5AD8 (HalpUsbLegacyStopUhciInterrupt.c)
 *     IvtUpdateGlobalCommand @ 0x1404DF600 (IvtUpdateGlobalCommand.c)
 *     HsaGetPageFault @ 0x1404E1CF0 (HsaGetPageFault.c)
 *     HvlPrepareForRootCrashdump @ 0x1404F43BC (HvlPrepareForRootCrashdump.c)
 *     IoWriteCrashDump @ 0x140501150 (IoWriteCrashDump.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     ExpWaitForBootDevices @ 0x1405B19A0 (ExpWaitForBootDevices.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1405C3D10 (BgpFwDisplayBugCheckProgressUpdate.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1405C3ED4 (BgpFwDisplayBugCheckScreen.c)
 *     IvtInitializeIommu @ 0x1409ACA80 (IvtInitializeIommu.c)
 *     HdlspBugCheckProcessing @ 0x1409F1D54 (HdlspBugCheckProcessing.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     HalpTimerGetInternalData @ 0x140288EA0 (HalpTimerGetInternalData.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     HalpProcessorFence @ 0x1403F7A90 (HalpProcessorFence.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiCheckStall @ 0x14051C240 (KiCheckStall.c)
 */

void __stdcall KeStallExecutionProcessor(ULONG MicroSeconds)
{
  __int64 v2; // rsi
  char v3; // r13
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned __int64 v10; // rbp
  unsigned __int64 Mask; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  ULONG_PTR v14; // rdi
  __int64 InternalData; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  signed __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rdx
  bool v23; // zf
  __int64 v24; // r8
  unsigned __int64 v25; // r8
  signed __int64 v26; // rcx
  unsigned int v27; // edx
  signed __int32 v28[8]; // [rsp+0h] [rbp-78h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+70h] [rbp-8h]

  if ( HalpTimerProcessorsFrozen )
  {
    v14 = HalpAlwaysOnCounter;
    if ( HalpAlwaysOnCounter )
    {
      if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(HalpAlwaysOnCounter);
        (*(void (__fastcall **)(__int64))(v14 + 112))(InternalData);
      }
      else
      {
        do
        {
          v16 = *(_QWORD *)(v14 + 208);
          do
          {
            v17 = *(_QWORD *)(v14 + 200);
            v18 = HalpTimerGetInternalData(v14);
            v19 = (*(__int64 (__fastcall **)(__int64))(v14 + 112))(v18);
            _InterlockedOr(v28, 0);
            v20 = *(_QWORD *)(v14 + 200);
          }
          while ( v17 != v20 );
        }
        while ( v16 != *(_QWORD *)(v14 + 208) );
        v21 = *(_DWORD *)(v14 + 220);
        if ( ((v17 ^ v19) & (1LL << ((unsigned __int8)v21 - 1))) != 0 )
        {
          v22 = 1LL << v21;
          v23 = v21 == 64;
          v24 = -1LL;
          if ( !v23 )
            v24 = v22 - 1;
          v25 = v17 & v24;
          v26 = v19 | v17 ^ v25;
          if ( v19 < v25 )
            v26 += v22;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 200), v26, v20);
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
    && (v31 & 0x200) != 0
    && (*(_DWORD *)(v2 + 184) & 0x20) == 0 )
  {
    v3 = 1;
    v27 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v27 >> 6);
    Affinity.Mask = 1LL << (v27 & 0x3F);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  v5 = HalpTimerGetInternalData(v2);
  v6 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v5);
  HalpProcessorFence();
  v7 = 0LL;
  Affinity.Mask = 1LL << *(_DWORD *)(v2 + 220);
  v8 = v6;
  v9 = 0;
  v10 = (*(_QWORD *)(v2 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 + 1;
  if ( (*(_QWORD *)(v2 + 192) * (unsigned __int64)(10 * MicroSeconds) + 9999999) / 0x989680 != -1LL )
  {
    Mask = Affinity.Mask;
    do
    {
      if ( (++v9 & dword_140C4A25C) == 0 && qword_140C4A260 )
        qword_140C4A260(v9);
      else
        _mm_pause();
      v12 = HalpTimerGetInternalData(v2);
      v13 = (*(__int64 (__fastcall **)(__int64))(v2 + 112))(v12);
      if ( v13 < v8 )
        v7 += Mask;
      v8 = v13;
    }
    while ( v13 + v7 - v6 < v10 );
  }
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
