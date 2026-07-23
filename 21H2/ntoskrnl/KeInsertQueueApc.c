/*
 * XREFs of KeInsertQueueApc @ 0x14027E260
 * Callers:
 *     ExpTimerDpcRoutine @ 0x14024C260 (ExpTimerDpcRoutine.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140251F9C (MiQueueSyncModifiedWriterApc.c)
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     MiStoreModifiedWriteDereference @ 0x14028BDF0 (MiStoreModifiedWriteDereference.c)
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IopCopyCompleteReadIrp @ 0x1403F1580 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x140505BF0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140505EB0 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6E70 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405ABABC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AF070 (EtwpCovSampCaptureQueueApc.c)
 *     NtQueueApcThreadEx2 @ 0x1405CF9B0 (NtQueueApcThreadEx2.c)
 *     IopCancelIrpsInThreadList @ 0x1405FCD98 (IopCancelIrpsInThreadList.c)
 *     PerfLogImageUnload @ 0x1405FE2D4 (PerfLogImageUnload.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 *     CmpPostNotify @ 0x1406DC820 (CmpPostNotify.c)
 *     ExSwapinWorkerThreads @ 0x140777514 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1408884B4 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408BCD40 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090ED2C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140243FC0 (EtwTiLogInsertQueueUserApc.c)
 *     KiSignalThreadForApc @ 0x140268660 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402687E4 (KiInsertQueueApc.c)
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  BOOLEAN v7; // al
  char v8; // r10
  BOOLEAN v9; // r11
  bool v10; // cl
  __int64 v11; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  _KPROCESS *v13; // rax
  bool v14; // zf
  char v15; // r15
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v18; // rcx
  char v19; // bl
  _DWORD *v21; // rcx
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+48h] [rbp-50h]
  __int64 v27; // [rsp+50h] [rbp-48h]
  bool v28; // [rsp+A0h] [rbp+8h]

  v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v8 = *(_BYTE *)(a1 + 81);
  v9 = v7;
  v26 = *(_QWORD *)(a1 + 56);
  v28 = v8 != 0;
  v27 = *(_QWORD *)(a1 + 48);
  v10 = *(__int64 (__fastcall **)(int, int, int, int, __int64))(a1 + 32) == KeSpecialUserApcKernelRoutine && !v8;
  v11 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v13 = *(_KPROCESS **)(v11 + 544);
  if ( v8 )
    v14 = CurrentThread->Process == v13;
  else
    v14 = CurrentThread->ApcState.Process == v13;
  if ( v9 && !v14 && (v8 || v10) )
  {
    v15 = 1;
    ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x5149654Bu);
  }
  else
  {
    v15 = 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v25 = 0;
  while ( 1 )
  {
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v18[6];
        v18[6] = v23 + 1;
        if ( v23 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      break;
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v21[6] - 1;
        v21[6] = v24;
        if ( !v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v25);
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v19 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, CurrentIrql);
    v19 = 1;
  }
  KiReleaseThreadLockSafe(v11);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a4, CurrentIrql);
  if ( v15 )
  {
    if ( v19 )
      EtwTiLogInsertQueueUserApc(KeGetCurrentThread()->PreviousMode, v11, v27, v26, a2, a3, v28);
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v19;
}
