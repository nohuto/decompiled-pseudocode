/*
 * XREFs of KeInsertQueueApc @ 0x14025F8C0
 * Callers:
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     ExpTimerDpcRoutine @ 0x1402CDD60 (ExpTimerDpcRoutine.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1402D3D2C (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x1402DAAA0 (MiStoreModifiedWriteDereference.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     IopCopyCompleteReadIrp @ 0x1403F16B0 (IopCopyCompleteReadIrp.c)
 *     IoRaiseHardError @ 0x140505C70 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140505F30 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6C40 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405AB88C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AEE40 (EtwpCovSampCaptureQueueApc.c)
 *     NtQueueApcThreadEx2 @ 0x1405CF9B0 (NtQueueApcThreadEx2.c)
 *     CmpPostNotify @ 0x1405ED0C0 (CmpPostNotify.c)
 *     PerfLogImageUnload @ 0x140629C50 (PerfLogImageUnload.c)
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 *     IopCancelIrpsInThreadList @ 0x14069DCC8 (IopCancelIrpsInThreadList.c)
 *     ExSwapinWorkerThreads @ 0x140777354 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140888354 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408BCBE0 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EBCC (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     EtwProviderEnabled @ 0x14025F840 (EtwProviderEnabled.c)
 *     KiSignalThreadForApc @ 0x14027A6C0 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x14027A844 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     EtwTiLogInsertQueueUserApc @ 0x1402C57E0 (EtwTiLogInsertQueueUserApc.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeInsertQueueApc(__int64 a1, __int64 a2, __int64 a3, int a4)
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
  char CurrentIrql; // bp
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
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
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
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, a4, CurrentIrql);
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
