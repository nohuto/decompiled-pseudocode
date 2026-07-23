/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x14028C630
 * Callers:
 *     <none>
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140206148 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14028C9B0 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KeInsertQueueEx @ 0x140295180 (KeInsertQueueEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x14070AE4C (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  _QWORD *v2; // rdi
  volatile __int64 *v3; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  char v8; // bl
  int v9; // eax
  __int64 v10; // rax
  NTSTATUS v11; // r12d
  __int64 v12; // rax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rbx
  _QWORD *v19; // rsi
  unsigned __int8 v20; // r15
  struct _KPRCB *v21; // r14
  _KTHREAD *CurrentThread; // r13
  PVOID v23; // rbx
  _DWORD *v24; // r8
  int v25; // edx
  _QWORD *v26; // rcx
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  int v29; // eax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  bool v34; // zf
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al
  __int128 v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+88h] [rbp+10h]
  PVOID Object; // [rsp+A0h] [rbp+28h] BYREF

  v38 = 0LL;
  v37 = 0LL;
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
  *((_QWORD *)&v37 + 1) = v3;
  *(_QWORD *)&v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v38) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v28 = v6[6];
      v6[6] = v28 + 1;
      if ( v28 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v37, v3);
  }
  else if ( _InterlockedExchange64(v3, (__int64)&v37) )
  {
    KxWaitForLockOwnerShip(&v37);
  }
  v7 = v2[2];
  v8 = 0;
  if ( *(_BYTE *)(v7 + 33) )
  {
    v11 = 128;
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 24);
    if ( v9 == -1 )
    {
      v11 = -1073741823;
    }
    else
    {
      *(_DWORD *)(v7 + 24) = v9 + 1;
      v10 = v2[2];
      if ( !*(_BYTE *)(v10 + 32) )
      {
        *(_BYTE *)(v10 + 32) = 1;
        v8 = 1;
      }
      v11 = 0;
      if ( v8 && (*((_DWORD *)Object + 78) & 0x200) != 0 )
        ExpLeaveWorkerFactoryAwayMode((char *)Object);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v37, retaddr);
  }
  else
  {
    _m_prefetchw(&v37);
    v12 = v37;
    if ( !(_QWORD)v37 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v37 + 1), 0LL, (signed __int64)&v37) == &v37 )
        goto LABEL_17;
      v12 = KxWaitForLockChainValid(&v37);
    }
    *(_QWORD *)&v37 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_17:
  v13 = KeGetCurrentPrcb();
  v14 = v13->SchedulerAssist;
  if ( v14 )
  {
    if ( v13->NestingLevel <= 1u )
    {
      v29 = v14[6] - 1;
      v14[6] = v29;
      if ( !v29 )
        KiRemoveSystemWorkPriorityKick(v13);
    }
  }
  v15 = (unsigned __int8)v38;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v13 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v38 + 1);
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v38 + 1));
        v34 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v31);
      }
    }
  }
  __writecr8(v15);
  if ( v8 )
  {
    v16 = v2[2];
    v17 = *(_QWORD *)(v16 + 16);
    v18 = *(_QWORD *)(v16 + 8);
    if ( v17 )
    {
      *(_QWORD *)(v17 + 24) = 0LL;
      v19 = (_QWORD *)(v18 + 8);
      *(_QWORD *)(v17 + 32) = 0LL;
      *(_DWORD *)(v17 + 40) = 0;
      *(_QWORD *)(v17 + 48) = 0LL;
      v20 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 <= 0xFu )
      {
        v24 = KeGetCurrentPrcb()->SchedulerAssist;
        v24[5] |= (-1 << (v20 + 1)) & 4;
      }
      v21 = KeGetCurrentPrcb();
      CurrentThread = v21->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v21->CurrentThread);
        EtwTraceEnqueueWork(CurrentThread, v17, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe(v18);
      if ( (_QWORD *)*v19 == v19
        || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15
        || !(unsigned __int8)KiWakeQueueWaiter(v21, v18, v17) )
      {
        v25 = *(_DWORD *)(v18 + 4);
        *(_DWORD *)(v18 + 4) = v25 + 1;
        v26 = *(_QWORD **)(v18 + 32);
        if ( *v26 != v18 + 24 )
          __fastfail(3u);
        *(_QWORD *)v17 = v18 + 24;
        *(_QWORD *)(v17 + 8) = v26;
        *v26 = v17;
        *(_QWORD *)(v18 + 32) = v17;
        if ( !v25 && (_QWORD *)*v19 != v19 )
          KiWakeOtherQueueWaiters(v21, v18);
      }
      _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
      KiExitDispatcher((__int64)v21, 0LL, 1u, 0, v20);
    }
    else
    {
      LOBYTE(v13) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v13, 0LL);
      if ( MiniCompletionPacket )
      {
        *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
        *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
        *(_DWORD *)(MiniCompletionPacket + 40) = 0;
        *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
        KeInsertQueueEx(v18, MiniCompletionPacket, 0LL, 0LL);
      }
    }
    v23 = Object;
    ExpWorkerFactoryCheckCreate(Object, 0LL);
  }
  else
  {
    v23 = Object;
  }
  ObfDereferenceObjectWithTag(v23, 0x746C6644u);
  return v11;
}
