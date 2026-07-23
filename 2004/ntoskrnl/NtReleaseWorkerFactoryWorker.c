/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x140282320
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402826A0 (ExpWorkerFactoryCheckCreate.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1402D59F0 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeInsertQueueEx @ 0x140339334 (KeInsertQueueEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     IopAllocateMiniCompletionPacket @ 0x14060EE3C (IopAllocateMiniCompletionPacket.c)
 */

NTSTATUS __cdecl NtReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  NTSTATUS result; // eax
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v4; // rdi
  volatile __int64 *v5; // rbx
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // bl
  int v12; // eax
  __int64 v13; // rax
  NTSTATUS v14; // r12d
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rsi
  char v23; // r15
  struct _KPRCB *v24; // r14
  _KTHREAD *CurrentThread; // r13
  PVOID v26; // rbx
  int v27; // edx
  __int64 *v28; // rcx
  int v29; // eax
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  int v33; // eax
  bool v34; // zf
  __int64 MiniCompletionPacket; // rax
  unsigned __int8 IsThreadRunning; // al
  __int128 v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+10h]
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
  v4 = Object;
  v5 = (volatile __int64 *)*((_QWORD *)Object + 2);
  *((_QWORD *)&v37 + 1) = v5;
  *(_QWORD *)&v37 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  LOBYTE(v38) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v29 = v8[6];
      v8[6] = v29 + 1;
      if ( v29 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v37, v5);
  }
  else
  {
    v9 = _InterlockedExchange64(v5, (__int64)&v37);
    if ( v9 )
      KxWaitForLockOwnerShip(&v37);
  }
  v10 = v4[2];
  v11 = 0;
  if ( *(_BYTE *)(v10 + 33) )
  {
    v14 = 128;
  }
  else
  {
    v12 = *(_DWORD *)(v10 + 24);
    if ( v12 == -1 )
    {
      v14 = -1073741823;
    }
    else
    {
      *(_DWORD *)(v10 + 24) = v12 + 1;
      v13 = v4[2];
      if ( !*(_BYTE *)(v13 + 32) )
      {
        *(_BYTE *)(v13 + 32) = 1;
        v11 = 1;
      }
      v14 = 0;
      if ( v11 && (*((_DWORD *)Object + 78) & 0x200) != 0 )
        ExpLeaveWorkerFactoryAwayMode(Object);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v37, retaddr);
  }
  else
  {
    _m_prefetchw(&v37);
    v15 = v37;
    if ( !(_QWORD)v37 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v37 + 1), 0LL, (signed __int64)&v37) == &v37 )
        goto LABEL_17;
      v15 = KxWaitForLockChainValid((__int64 *)&v37, v9, v2, (__int64)SchedulerAssist);
    }
    *(_QWORD *)&v37 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
  }
LABEL_17:
  v16 = KeGetCurrentPrcb();
  v17 = (__int64)v16->SchedulerAssist;
  if ( v17 )
  {
    if ( v16->NestingLevel <= 1u )
    {
      v30 = *(_DWORD *)(v17 + 24) - 1;
      *(_DWORD *)(v17 + 24) = v30;
      if ( !v30 )
        KiRemoveSystemWorkPriorityKick(v16);
    }
  }
  v18 = (unsigned __int8)v38;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v38 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        SchedulerAssist = v32->SchedulerAssist;
        v16 = (struct _KPRCB *)((unsigned int)(unsigned __int8)v38 + 1);
        v17 = -1LL << ((unsigned __int8)v38 + 1);
        v33 = ~(unsigned __int16)v17;
        v34 = (v33 & SchedulerAssist[5]) == 0;
        v2 = (unsigned int)v33 & SchedulerAssist[5];
        SchedulerAssist[5] = v2;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v18);
  if ( v11 )
  {
    v19 = v4[2];
    v20 = *(_QWORD *)(v19 + 16);
    v21 = *(_QWORD *)(v19 + 8);
    if ( v20 )
    {
      *(_QWORD *)(v20 + 24) = 0LL;
      v22 = (_QWORD *)(v21 + 8);
      *(_QWORD *)(v20 + 32) = 0LL;
      *(_DWORD *)(v20 + 40) = 0;
      *(_QWORD *)(v20 + 48) = 0LL;
      v23 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v23 <= 0xFu )
      {
        v2 = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
        v17 = (-1 << (v23 + 1)) & 4u | *(_DWORD *)(v2 + 20);
        *(_DWORD *)(v2 + 20) = v17;
      }
      v24 = KeGetCurrentPrcb();
      CurrentThread = v24->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v24->CurrentThread, v17);
        EtwTraceEnqueueWork(CurrentThread, v20, IsThreadRunning);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v21, v17, v2, (__int64)SchedulerAssist);
      if ( (_QWORD *)*v22 == v22
        || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v24, v21, v20) )
      {
        v27 = *(_DWORD *)(v21 + 4);
        *(_DWORD *)(v21 + 4) = v27 + 1;
        v28 = *(__int64 **)(v21 + 32);
        if ( *v28 != v21 + 24 )
          __fastfail(3u);
        *(_QWORD *)v20 = v21 + 24;
        *(_QWORD *)(v20 + 8) = v28;
        *v28 = v20;
        *(_QWORD *)(v21 + 32) = v20;
        if ( !v27 && (_QWORD *)*v22 != v22 )
          KiWakeOtherQueueWaiters(v24, v21);
      }
      _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
      KiExitDispatcher((_DWORD)v24, 0, 1, 0, v23);
    }
    else
    {
      LOBYTE(v16) = 1;
      MiniCompletionPacket = IopAllocateMiniCompletionPacket(v16, 0LL);
      if ( MiniCompletionPacket )
      {
        *(_QWORD *)(MiniCompletionPacket + 24) = 0LL;
        *(_QWORD *)(MiniCompletionPacket + 32) = 0LL;
        *(_DWORD *)(MiniCompletionPacket + 40) = 0;
        *(_QWORD *)(MiniCompletionPacket + 48) = 0LL;
        KeInsertQueueEx(v21, MiniCompletionPacket, 0LL, 0LL);
      }
    }
    v26 = Object;
    ExpWorkerFactoryCheckCreate((PSLIST_ENTRY)Object, 0LL);
  }
  else
  {
    v26 = Object;
  }
  ObfDereferenceObjectWithTag(v26, 0x746C6644u);
  return v14;
}
