/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x140285AA0
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     IoSetIoCompletionEx2 @ 0x140246230 (IoSetIoCompletionEx2.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     IoFreeMiniCompletionPacket @ 0x14067F4A0 (IoFreeMiniCompletionPacket.c)
 */

__int64 __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v5; // rdx
  _QWORD *v6; // rdx
  int v7; // esi
  bool v8; // zf
  __int64 v9; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rdi
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  int v16; // eax
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  __int64 v19; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int64 *v20; // [rsp+48h] [rbp-20h]
  __int64 v21; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v21 = 0LL;
  v19 = 0LL;
  v20 = (volatile signed __int64 *)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v21) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = CurrentPrcb->SchedulerAssist;
  if ( v5 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = v5[6];
      v5[6] = v15 + 1;
      if ( v15 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v19, a2);
  }
  else
  {
    v6 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)a2, (__int64)&v19);
    if ( v6 )
      KxWaitForLockOwnerShip((__int64)&v19, v6);
  }
  v7 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v7 = 2;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_9;
    v7 = 1;
  }
  else
  {
    v8 = (*(_DWORD *)(a2 + 24))-- == 1;
    if ( v8 )
    {
LABEL_9:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_10;
    }
    v7 = 1;
  }
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v19, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(&v19);
  v9 = v19;
  if ( v19 )
    goto LABEL_18;
  if ( (__int64 *)_InterlockedCompareExchange64(v20, 0LL, (signed __int64)&v19) != &v19 )
  {
    v9 = KxWaitForLockChainValid(&v19);
LABEL_18:
    v19 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v9 + 8), 1uLL);
  }
LABEL_13:
  v10 = KeGetCurrentPrcb();
  v11 = v10->SchedulerAssist;
  if ( v11 )
  {
    if ( v10->NestingLevel <= 1u )
    {
      v16 = v11[6] - 1;
      v11[6] = v16;
      if ( !v16 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v13 = (unsigned __int8)v21;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v21 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v8 = ((unsigned int)result & v18[5]) == 0;
        v18[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  __writecr8(v13);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      return IoSetIoCompletionEx2(*(_QWORD *)(a2 + 8), 0LL, 0LL, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      return ExFreeHeapPool(a2);
    }
  }
  return result;
}
