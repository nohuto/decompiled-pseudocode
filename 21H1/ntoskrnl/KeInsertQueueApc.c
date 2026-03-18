/*
 * XREFs of KeInsertQueueApc @ 0x1403575C0
 * Callers:
 *     MiStoreModifiedWriteDereference @ 0x14023AC4C (MiStoreModifiedWriteDereference.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     ExpTimerDpcRoutine @ 0x14031E020 (ExpTimerDpcRoutine.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1403231BC (MiQueueSyncModifiedWriterApc.c)
 *     IoRaiseHardError @ 0x1405001D0 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140500490 (IoRaiseInformationalHardError.c)
 *     EtwpQueueStackWalkApc @ 0x1405A1080 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405A5CEC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405A91F0 (EtwpCovSampCaptureQueueApc.c)
 *     CmpPostNotify @ 0x14061A9A8 (CmpPostNotify.c)
 *     IopCancelIrpsInThreadList @ 0x1406CD8A8 (IopCancelIrpsInThreadList.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     PerfLogImageUnload @ 0x14070993C (PerfLogImageUnload.c)
 *     NtQueueApcThreadEx @ 0x140709C80 (NtQueueApcThreadEx.c)
 *     ExSwapinWorkerThreads @ 0x14075FD14 (ExSwapinWorkerThreads.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140883F44 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1408B83C0 (KeSpecialUserApcKernelRoutine.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090A53C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     EtwTiLogInsertQueueUserApc @ 0x140316780 (EtwTiLogInsertQueueUserApc.c)
 *     KiSignalThreadForApc @ 0x140357158 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403572DC (KiInsertQueueApc.c)
 *     EtwProviderEnabled @ 0x140357A20 (EtwProviderEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  bool v29; // [rsp+A0h] [rbp+8h]

  v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x3000uLL);
  v10 = *(_BYTE *)(a1 + 81);
  v11 = v7;
  v27 = *(_QWORD *)(a1 + 56);
  v29 = v10 != 0;
  v28 = *(_QWORD *)(a1 + 48);
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
  v26 = 0;
  while ( 1 )
  {
    v20 = CurrentPrcb->SchedulerAssist;
    if ( v20 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = v20[6];
        v20[6] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
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
      KeYieldProcessorEx(&v26, (__int64)CurrentThread, v8, (__int64)SchedulerAssist);
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
      EtwTiLogInsertQueueUserApc(KeGetCurrentThread()->PreviousMode, v13, v28, v27, a2, a3, v29);
    ObfDereferenceObjectWithTag((PVOID)v13, 0x5149654Bu);
  }
  return v21;
}
