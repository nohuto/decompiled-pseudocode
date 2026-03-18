/*
 * XREFs of KeInsertQueueApc @ 0x1402ED9E0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1402566A0 (ExpTimerDpcRoutine.c)
 *     IopfCompleteRequest @ 0x1402B59D0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140347E10 (IopCompleteRequest.c)
 *     MiStoreModifiedWriteDereference @ 0x14037AF3C (MiStoreModifiedWriteDereference.c)
 *     IopCopyCompleteReadIrp @ 0x140417DE0 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14059CFBC (MiQueueSyncModifiedWriterApc.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1406330FC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406362D0 (EtwpCovSampCaptureQueueApc.c)
 *     NtQueueApcThreadEx2 @ 0x1406A1F70 (NtQueueApcThreadEx2.c)
 *     IopCancelIrpsInThreadList @ 0x1406A4C58 (IopCancelIrpsInThreadList.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x140701B0C (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     CmpPostNotify @ 0x14071C288 (CmpPostNotify.c)
 *     PerfLogImageUnload @ 0x14079D948 (PerfLogImageUnload.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14092B264 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140962BA0 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AD99C (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     EtwTiLogInsertQueueUserApc @ 0x14024BD24 (EtwTiLogInsertQueueUserApc.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     EtwProviderEnabled @ 0x1402EDE50 (EtwProviderEnabled.c)
 *     KiInsertQueueApc @ 0x1402EE784 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
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
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v18; // rcx
  __int64 v19; // r8
  char v20; // bl
  _DWORD *SchedulerAssist; // r9
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  bool v29; // [rsp+A0h] [rbp+8h]

  v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v8 = *(_BYTE *)(a1 + 81);
  v9 = v7;
  v27 = *(_QWORD *)(a1 + 56);
  v29 = v8 != 0;
  v28 = *(_QWORD *)(a1 + 48);
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v26 = 0;
  while ( 1 )
  {
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v18[6];
        v18[6] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      break;
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v23[6] - 1;
        v23[6] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v26);
    while ( *(_QWORD *)(v11 + 64) );
  }
  if ( (*(_DWORD *)(v11 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v20 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    LOBYTE(v19) = CurrentIrql;
    KiSignalThreadForApc(CurrentPrcb, a1, v19);
    v20 = 1;
  }
  KiReleaseThreadLockSafe(v11);
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1, a4, CurrentIrql);
  if ( v15 )
  {
    if ( v20 )
      EtwTiLogInsertQueueUserApc(KeGetCurrentThread()->PreviousMode, v11, v28, v27, a2, a3, v29);
    ObfDereferenceObjectWithTag((PVOID)v11, 0x5149654Bu);
  }
  return v20;
}
