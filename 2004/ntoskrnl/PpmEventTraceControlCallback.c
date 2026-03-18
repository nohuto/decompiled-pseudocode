/*
 * XREFs of PpmEventTraceControlCallback @ 0x1407C2770
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x14021DBD0 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x14021F630 (PpmReleaseLock.c)
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x1402DF294 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopExecuteOnTargetProcessors @ 0x1402E3AE0 (PopExecuteOnTargetProcessors.c)
 *     PpmEventPlatformVetoRundown @ 0x140574C80 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x140574F9C (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x1405755FC (PpmEventTraceLPIState.c)
 *     PpmEventQosSupport @ 0x140779370 (PpmEventQosSupport.c)
 *     PpmEventHeteroPolicy @ 0x1407A83F4 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x1407B3724 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x1408ED540 (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x1408EF8C4 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x1408EFA30 (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1408EFB08 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x1408EFD84 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1408EFEB0 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x1408F0110 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x1408F01A0 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x1408F03D0 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F0778 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x1408F09F4 (PpmEventTraceProcessorPerformanceRundownHv.c)
 *     PpmEventVetoReasonRundown @ 0x1408F0C7C (PpmEventVetoReasonRundown.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 Prcb; // rax
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int k; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rbx
  unsigned __int16 *v33; // [rsp+20h] [rbp-20h] BYREF
  __int64 v34; // [rsp+28h] [rbp-18h]
  __int16 v35; // [rsp+30h] [rbp-10h]
  int v36; // [rsp+32h] [rbp-Eh]
  __int16 v37; // [rsp+36h] [rbp-Ah]
  unsigned int v38; // [rsp+78h] [rbp+38h] BYREF

  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    v36 = 0;
    v37 = 0;
    v38 = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v34 = qword_140CFC848[0];
    v35 = 0;
    v33 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v38, &v33) )
    {
      Prcb = KeGetPrcb(v38);
      PpmEventTraceProcessorPerformance(Prcb);
    }
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( ControlCode == 2 )
        PpmEventTraceProcessorPerformanceDomainRundown(i);
      for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
      {
        v8 = *(_QWORD *)(i + 216) + 136LL * j;
        if ( *(_DWORD *)(v8 + 16) == 1 )
          PpmEventTraceProcessorPerformanceRundownHv(*(_QWORD *)v8);
      }
    }
    if ( ControlCode == 2 )
    {
      PpmEventTraceLPIState();
      PpmEventStaticPolicyRundown(v10, v9, v11);
      PpmEventQosSupport(1);
      PpmEventHeteroPolicy(1);
    }
    for ( k = 0; k < PpmParkNumNodes; ++k )
      PpmEventTraceParkNodeRundown(PpmParkNodes + 272LL * k);
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    PpmEventTracePpmProfileStatusRundown(v14, v13, v15);
    PpmEventTraceProfiles(1);
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
      PpmInfoTraceProfileSettings(v17, v16, v18);
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown(v20, v19, v21);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      PpmEventTraceCoordinatedIdleStates(v24, v23, v25);
      PpmEventTracePlatformIdleAccounting(v27, v26, v28);
      PpmEventVetoReasonRundown(v30, v29, v31);
      PpmEventPlatformVetoRundown();
      v34 = qword_140CFC848[0];
      v35 = 0;
      v33 = (unsigned __int16 *)KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v38, &v33) )
      {
        v32 = KeGetPrcb(v38);
        PpmEventProcessorVetoRundown(v32);
        PpmEventTraceProcessorIdle(v32);
      }
      PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
      PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    }
  }
}
