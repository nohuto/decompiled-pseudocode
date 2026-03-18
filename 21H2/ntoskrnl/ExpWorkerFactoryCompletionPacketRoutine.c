/*
 * XREFs of ExpWorkerFactoryCompletionPacketRoutine @ 0x140224210
 * Callers:
 *     <none>
 * Callees:
 *     IoSetIoCompletionEx3 @ 0x140257EE0 (IoSetIoCompletionEx3.c)
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     IoFreeMiniCompletionPacket @ 0x14074F6E0 (IoFreeMiniCompletionPacket.c)
 */

__int64 __fastcall ExpWorkerFactoryCompletionPacketRoutine(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v5; // rdx
  int v6; // esi
  bool v7; // zf
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  _DWORD *v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // rdi
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  int v15; // eax
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v20 = 0LL;
  v18 = 0LL;
  v19 = (volatile signed __int64 *)a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v20) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = CurrentPrcb->SchedulerAssist;
  if ( v5 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v14 = v5[6];
      v5[6] = v14 + 1;
      if ( v14 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v18, a2);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)a2, (__int64)&v18) )
  {
    KxWaitForLockOwnerShip(&v18);
  }
  v6 = 0;
  if ( *(_BYTE *)(a2 + 34) )
  {
    v6 = 2;
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a2 + 33) )
  {
    if ( !*(_DWORD *)(a2 + 28) )
      goto LABEL_9;
    v6 = 1;
  }
  else
  {
    v7 = (*(_DWORD *)(a2 + 24))-- == 1;
    if ( v7 )
    {
LABEL_9:
      *(_BYTE *)(a2 + 32) = 0;
      goto LABEL_10;
    }
    v6 = 1;
  }
LABEL_10:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v18, retaddr);
    goto LABEL_13;
  }
  _m_prefetchw(&v18);
  v8 = v18;
  if ( v18 )
    goto LABEL_21;
  if ( (__int64 *)_InterlockedCompareExchange64(v19, 0LL, (signed __int64)&v18) != &v18 )
  {
    v8 = KxWaitForLockChainValid(&v18);
LABEL_21:
    v18 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v8 + 8), 1uLL);
  }
LABEL_13:
  v9 = KeGetCurrentPrcb();
  v10 = v9->SchedulerAssist;
  if ( v10 )
  {
    if ( v9->NestingLevel <= 1u )
    {
      v15 = v10[6] - 1;
      v10[6] = v15;
      if ( !v15 )
        KiRemoveSystemWorkPriorityKick(v9);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v12 = (unsigned __int8)v20;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v20 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
        v7 = ((unsigned int)result & v17[5]) == 0;
        v17[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(v12);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      return IoSetIoCompletionEx3(*(_QWORD *)(a2 + 8), 0, 0, 0, 0LL, 0, *(_QWORD *)(a2 + 16), 0, 0);
    }
    else
    {
      IoFreeMiniCompletionPacket(*(_QWORD *)(a2 + 16));
      return ExFreeHeapPool(a2);
    }
  }
  return result;
}
