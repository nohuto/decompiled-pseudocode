/*
 * XREFs of KeInsertQueueApc @ 0x1402FB5E0
 * Callers:
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     MiStoreModifiedWriteDereference @ 0x1402CDA7C (MiStoreModifiedWriteDereference.c)
 *     ExpTimerDpcRoutine @ 0x14035BC10 (ExpTimerDpcRoutine.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140360CAC (MiQueueSyncModifiedWriterApc.c)
 *     IoRaiseHardError @ 0x140500820 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140500AE0 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1770 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A63DC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405A98E0 (EtwpCovSampCaptureQueueApc.c)
 *     CmpPostNotify @ 0x1405E5388 (CmpPostNotify.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x1406B3AEC (PerfLogImageUnload.c)
 *     NtQueueApcThreadEx @ 0x1406B3E30 (NtQueueApcThreadEx.c)
 *     IopCancelIrpsInThreadList @ 0x1406EEBA8 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x140767E14 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140885264 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408B96E0 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090B7EC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KiSignalThreadForApc @ 0x1402FB178 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402FB2FC (KiInsertQueueApc.c)
 *     EtwProviderEnabled @ 0x1402FBA40 (EtwProviderEnabled.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140354270 (EtwTiLogInsertQueueUserApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  BOOLEAN v7; // al
  __int64 v8; // r8
  _DWORD *SchedulerAssist; // r9
  char v10; // r10
  BOOLEAN v11; // r11
  bool v12; // cl
  __int64 v13; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *v15; // rax
  bool v16; // zf
  char v17; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v20; // rcx
  char v21; // bl
  struct _KTHREAD *v23; // rcx
  _DWORD *v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // [rsp+40h] [rbp-58h] BYREF
  __int64 v28; // [rsp+48h] [rbp-50h]
  __int64 v29; // [rsp+50h] [rbp-48h]
  char v30; // [rsp+A0h] [rbp+8h]

  v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v10 = *(_BYTE *)(a1 + 81);
  v11 = v7;
  v28 = *(_QWORD *)(a1 + 56);
  v30 = v10 != 0;
  v29 = *(_QWORD *)(a1 + 48);
  v12 = *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) == KeSpecialUserApcKernelRoutine && !v10;
  v13 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v15 = *(_KPROCESS **)(v13 + 544);
  if ( v10 )
    v16 = CurrentThread->Process == v15;
  else
    v16 = CurrentThread->ApcState.Process == v15;
  if ( v11 && !v16 && (v10 || v12) )
  {
    v17 = 1;
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x5149654Bu);
  }
  else
  {
    v17 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    CurrentThread = (struct _KTHREAD *)((-1LL << (CurrentIrql + 1)) & 4);
    v8 = (unsigned int)CurrentThread | SchedulerAssist[5];
    SchedulerAssist[5] = v8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v27 = 0;
  while ( 1 )
  {
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v20[6];
        v20[6] = v25 + 1;
        if ( v25 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
      break;
    v24 = CurrentPrcb->SchedulerAssist;
    if ( v24 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v24[6] - 1;
        v24[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v27, (__int64)CurrentThread, v8, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(v13 + 64) );
  }
  if ( (*(_DWORD *)(v13 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v21 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, CurrentIrql);
    v21 = 1;
  }
  KiReleaseThreadLockSafe(v13);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, a4, CurrentIrql);
  if ( v17 )
  {
    if ( v21 )
    {
      v23 = KeGetCurrentThread();
      LOBYTE(v23) = v23->PreviousMode;
      EtwTiLogInsertQueueUserApc((_DWORD)v23, v13, v29, v28, a2, a3, v30);
    }
    ObfDereferenceObjectWithTag((PVOID)v13, 0x5149654Bu);
  }
  return v21;
}
