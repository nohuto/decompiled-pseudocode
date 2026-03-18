/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x140234678
 * Callers:
 *     IopDeleteIoCompletion @ 0x1406ACB20 (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x1406ACB40 (IopCloseIoCompletion.c)
 * Callees:
 *     KeRundownQueueEx @ 0x140234764 (KeRundownQueueEx.c)
 *     IopFreeWaitCompletionPacket @ 0x140234E1C (IopFreeWaitCompletionPacket.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     IopFreeCompletionListPackets @ 0x1406ACB64 (IopFreeCompletionListPackets.c)
 */

__int64 __fastcall IopDeleteIoCompletionInternal(KSPIN_LOCK *a1, char a2)
{
  __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned __int64 OldIrql; // rdi
  _QWORD *v7; // rdi
  _BYTE *v8; // rcx
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( a2 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 8, &LockHandle);
    *((_BYTE *)a1 + 72) = 1;
  }
  result = KeRundownQueueEx(a1);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v7 = (_QWORD *)result;
    **(_QWORD **)(result + 8) = 0LL;
    do
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
      *(_QWORD *)v8 = 0LL;
      if ( v8[16] == 2 )
      {
        v9 = *((_QWORD *)v8 + 1);
        if ( v7 )
          v7[1] = v9;
        else
          v5[1] = v9;
        if ( v5 == (_QWORD *)v8 )
          v5 = v7;
        result = IopFreeWaitCompletionPacket(v8, a1);
      }
    }
    while ( v7 );
  }
  if ( a2 )
  {
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
          v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v12 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v5 )
    return IopFreeCompletionListPackets(v5);
  return result;
}
