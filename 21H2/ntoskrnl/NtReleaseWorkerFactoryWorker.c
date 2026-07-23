/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1402E73C0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402A7748 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406ABF1C (IopAllocateMiniCompletionPacket.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  _QWORD *v2; // rdi
  volatile __int64 *v3; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v6; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  char v9; // bl
  int v10; // eax
  __int64 v11; // rax
  NTSTATUS v12; // r12d
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  unsigned __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rbx
  _QWORD *v20; // rsi
  char v21; // r15
  struct _KPRCB *v22; // r14
  _KTHREAD *CurrentThread; // r13
  PVOID v24; // rbx
  _DWORD *v25; // r8
  int v26; // edx
  _QWORD *v27; // rcx
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al
  __int128 v38; // [rsp+30h] [rbp-48h] BYREF
  __int64 v39; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+10h]
  PVOID Object; // [rsp+A0h] [rbp+28h] BYREF

  v39 = 0LL;
  v38 = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(
             WorkerFactoryHandle,
             1u,
             ExpWorkerFactoryObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result < 0 )
    return result;
  v2 = Object;
  v3 = (volatile __int64 *)*((_QWORD *)Object + 2);
  *((_QWORD *)&v38 + 1) = v3;
  *(_QWORD *)&v38 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v39) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = v6[6];
      v6[6] = v29 + 1;
      if ( v29 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v38, v3);
  }
  else
  {
    v7 = (_QWORD *)_InterlockedExchange64(v3, (__int64)&v38);
    if ( v7 )
      KxWaitForLockOwnerShip((__int64)&v38, v7);
  }
  v8 = v2[2];
  v9 = 0;
  if ( *(_BYTE *)(v8 + 33) )
  {
    v12 = 128;
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 24);
    if ( v10 == -1 )
    {
      v12 = -1073741823;
    }
    else
    {
      *(_DWORD *)(v8 + 24) = v10 + 1;
      v11 = v2[2];
      if ( !*(_BYTE *)(v11 + 32) )
      {
        *(_BYTE *)(v11 + 32) = 1;
        v9 = 1;
      }
      v12 = 0;
      if ( v9 && (*((_DWORD *)Object + 78) & 0x200) != 0 )
        ExpLeaveWorkerFactoryAwayMode(Object);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v38, retaddr);
  }
  else
  {
    _m_prefetchw(&v38);
    v13 = v38;
    if ( !(_QWORD)v38 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v38 + 1), 0LL, (signed __int64)&v38) == &v38 )
        goto LABEL_17;
      v13 = KxWaitForLockChainValid((__int64 *)&v38);
    }
    *(_QWORD *)&v38 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
  }
LABEL_17:
  v14 = KeGetCurrentPrcb();
  v15 = v14->SchedulerAssist;
  if ( v15 )
  {
    if ( v14->NestingLevel <= 1u )
    {
      v30 = v15[6] - 1;
      v15[6] = v30;
      if ( !v30 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  v16 = (unsigned __int8)v39;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v39 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v14 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v39 + 1);
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v39 + 1));
        v35 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v16);
  if ( v9 )
  {
    v17 = v2[2];
    v18 = *(_QWORD *)(v17 + 16);
    v19 = *(_QWORD *)(v17 + 8);
    if ( v18 )
    {
      *(_QWORD *)(v18 + 24) = 0LL;
      v20 = (_QWORD *)(v19 + 8);
      *(_QWORD *)(v18 + 32) = 0LL;
      *(_DWORD *)(v18 + 40) = 0;
      *(_QWORD *)(v18 + 48) = 0LL;
      v21 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v21 <= 0xFu )
      {
        v25 = KeGetCurrentPrcb()->SchedulerAssist;
        v25[5] |= (-1 << (v21 + 1)) & 4;
      }
      v22 = KeGetCurrentPrcb();
      CurrentThread = v22->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v22->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v18, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v19);
      if ( (_QWORD *)*v20 == v20
        || *(_DWORD *)(v19 + 40) >= *(_DWORD *)(v19 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v19 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v22, v19, v18) )
      {
        v26 = *(_DWORD *)(v19 + 4);
        *(_DWORD *)(v19 + 4) = v26 + 1;
        v27 = *(_QWORD **)(v19 + 32);
        if ( *v27 != v19 + 24 )
          __fastfail(3u);
        *(_QWORD *)v18 = v19 + 24;
        *(_QWORD *)(v18 + 8) = v27;
        *v27 = v18;
        *(_QWORD *)(v19 + 32) = v18;
        if ( !v26 && (_QWORD *)*v20 != v20 )
          KiWakeOtherQueueWaiters(v22, v19);
      }
      _InterlockedAnd((volatile signed __int32 *)v19, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v22, 0, 1, 0, v21);
    }
    else
    {
      LOBYTE(v14) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v14, 0LL);
      if ( MiniCompletionPacket )
      {
        *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
        *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
        *(_DWORD *)(MiniCompletionPacket + 40) = 0;
        *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
        KeInsertQueueEx(v19, (_QWORD *)MiniCompletionPacket, 0, 0);
      }
    }
    v24 = Object;
    ExpWorkerFactoryCheckCreate(Object, 0LL);
  }
  else
  {
    v24 = Object;
  }
  ObfDereferenceObjectWithTag(v24, 0x746C6644u);
  return v12;
}
