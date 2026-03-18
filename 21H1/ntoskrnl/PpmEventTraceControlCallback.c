/*
 * XREFs of PpmEventTraceControlCallback @ 0x1407BF270
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140204F30 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x140278680 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14035D3A4 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PpmEventPlatformVetoRundown @ 0x140574630 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x14057494C (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x140574FAC (PpmEventTraceLPIState.c)
 *     PpmEventQosSupport @ 0x140776F60 (PpmEventQosSupport.c)
 *     PpmEventHeteroPolicy @ 0x1407A5AE8 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x1407B05B4 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x1408EC2C0 (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x1408EE5D4 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x1408EE740 (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1408EE818 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x1408EEA94 (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1408EEBC0 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x1408EEE20 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x1408EEEB0 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x1408EF0E0 (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408EF488 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x1408EF704 (PpmEventTraceProcessorPerformanceRundownHv.c)
 *     PpmEventVetoReasonRundown @ 0x1408EF98C (PpmEventVetoReasonRundown.c)
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
    v34 = qword_140CFC838[0];
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
      v34 = qword_140CFC838[0];
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
