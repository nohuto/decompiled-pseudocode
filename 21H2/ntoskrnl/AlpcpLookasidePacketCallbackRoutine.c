/*
 * XREFs of AlpcpLookasidePacketCallbackRoutine @ 0x140202AA0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x140204CA4 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall AlpcpLookasidePacketCallbackRoutine(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // r14d
  int v6; // r15d
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  void *v15; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = 0;
  while ( 1 )
  {
    v6 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v2, &LockHandle);
    v7 = *(_DWORD *)(v2 + 16);
    if ( v7 )
    {
      *(_DWORD *)(v2 + 16) = v7 - 1;
    }
    else
    {
      v8 = *(_DWORD *)(v2 + 20);
      if ( v8 )
      {
        v6 = -1;
        *(_DWORD *)(v2 + 20) = v8 - 1;
      }
      else
      {
        v9 = *(_QWORD *)(v2 + 32);
        a1 = 0LL;
        --*(_DWORD *)(v2 + 12);
        *a2 = v9;
        *(_QWORD *)(v2 + 32) = a2;
        if ( !*(_DWORD *)(v2 + 12) && *(_DWORD *)(v2 + 24) )
          v3 = 1;
      }
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = (unsigned int)KiIrqlFlags;
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v14 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !a1 )
      break;
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(*(_QWORD *)(v2 + 40), 1953261124LL) )
    {
      v15 = *(void **)(v2 + 40);
      IoSetIoCompletionEx2(
        (_DWORD)v15,
        *(_QWORD *)(v2 + 48),
        v6,
        0,
        0LL,
        0,
        a1,
        0,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock);
      result = ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      break;
    }
  }
  if ( v3 )
    return AlpcpDeferredFreeCompletionPacketLookaside((PVOID)v2);
  return result;
}
