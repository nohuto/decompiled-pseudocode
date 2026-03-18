/*
 * XREFs of KeInsertQueueApc @ 0x1402EBBB0
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     IopCompleteRequest @ 0x1402186C0 (IopCompleteRequest.c)
 *     MiStoreModifiedWriteDereference @ 0x1402582F0 (MiStoreModifiedWriteDereference.c)
 *     IopfCompleteRequest @ 0x140292590 (IopfCompleteRequest.c)
 *     ExpTimerDpcRoutine @ 0x14032C670 (ExpTimerDpcRoutine.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140331A5C (MiQueueSyncModifiedWriterApc.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0900 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x1405040F0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1405043B0 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A5210 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A9E7C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AD440 (EtwpCovSampCaptureQueueApc.c)
 *     CmpPostNotify @ 0x1405F3C84 (CmpPostNotify.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     NtQueueApcThreadEx @ 0x140699390 (NtQueueApcThreadEx.c)
 *     PerfLogImageUnload @ 0x140699AB0 (PerfLogImageUnload.c)
 *     IopCancelIrpsInThreadList @ 0x1406C2AC8 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x1407734E4 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14088ADB4 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408BF440 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14091141C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     EtwProviderEnabled @ 0x1402EC010 (EtwProviderEnabled.c)
 *     KiSignalThreadForApc @ 0x1402EC4EC (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402EC670 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140324F30 (EtwTiLogInsertQueueUserApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v21; // r8
  char v22; // bl
  struct _KTHREAD *v24; // rcx
  _DWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+40h] [rbp-58h] BYREF
  __int64 v29; // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h]
  char v31; // [rsp+A0h] [rbp+8h]

  v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v10 = *(_BYTE *)(a1 + 81);
  v11 = v7;
  v29 = *(_QWORD *)(a1 + 56);
  v31 = v10 != 0;
  v30 = *(_QWORD *)(a1 + 48);
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
  v28 = 0;
  while ( 1 )
  {
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v26 = v20[6];
        v20[6] = v26 + 1;
        if ( v26 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
      break;
    v25 = CurrentPrcb->SchedulerAssist;
    if ( v25 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v25[6] - 1;
        v25[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v28, (__int64)CurrentThread, v8, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(v13 + 64) );
  }
  if ( (*(_DWORD *)(v13 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v22 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    LOBYTE(v21) = CurrentIrql;
    KiSignalThreadForApc(CurrentPrcb, a1, v21);
    v22 = 1;
  }
  KiReleaseThreadLockSafe(v13);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, a4, CurrentIrql);
  if ( v17 )
  {
    if ( v22 )
    {
      v24 = KeGetCurrentThread();
      LOBYTE(v24) = v24->PreviousMode;
      EtwTiLogInsertQueueUserApc((_DWORD)v24, v13, v30, v29, a2, a3, v31);
    }
    ObfDereferenceObjectWithTag((PVOID)v13, 0x5149654Bu);
  }
  return v22;
}
