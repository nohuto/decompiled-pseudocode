/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x140227CC8
 * Callers:
 *     IopDeleteIoCompletion @ 0x1405EF870 (IopDeleteIoCompletion.c)
 *     IopCloseIoCompletion @ 0x1405EF890 (IopCloseIoCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeRundownQueueEx @ 0x140227E38 (KeRundownQueueEx.c)
 *     IopFreeWaitCompletionPacket @ 0x140228390 (IopFreeWaitCompletionPacket.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     IopFreeCompletionListPackets @ 0x1406AC280 (IopFreeCompletionListPackets.c)
 */

__int64 __fastcall IopDeleteIoCompletionInternal(KSPIN_LOCK *a1, __int64 a2)
{
  char v2; // si
  __int64 result; // rax
  PVOID **v5; // rbx
  unsigned __int64 OldIrql; // rdi
  PVOID *v7; // rax
  PVOID **v8; // rcx
  PVOID *v9; // rax
  PVOID *v10; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  PVOID Object[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = a2;
  *(_OWORD *)Object = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 8, &LockHandle);
    LOBYTE(a2) = 0;
    *((_BYTE *)a1 + 72) = 1;
  }
  else
  {
    LOBYTE(a2) = 1;
  }
  result = KeRundownQueueEx(a1, a2);
  v5 = (PVOID **)result;
  if ( result )
  {
    v7 = *(PVOID **)result;
    if ( v7[1] == v5 )
    {
      Object[0] = v7;
      Object[1] = v5;
      v7[1] = Object;
      *v5 = Object;
      v5 = (PVOID **)Object[0];
      if ( Object[0] != Object )
      {
        do
        {
          v8 = v5;
          v5 = (PVOID **)*v5;
          if ( *((_BYTE *)v8 + 16) == 2 )
          {
            v10 = v8[1];
            if ( v5[1] != (PVOID *)v8 || *v10 != v8 )
              goto LABEL_24;
            *v10 = v5;
            v5[1] = v10;
            IopFreeWaitCompletionPacket(v8, a1);
          }
        }
        while ( v5 != (PVOID **)Object );
        v5 = (PVOID **)Object[0];
      }
      result = (__int64)Object;
      if ( v5 == (PVOID **)Object )
      {
        v5 = 0LL;
        goto LABEL_4;
      }
      v9 = (PVOID *)Object[1];
      if ( v5[1] == Object && *(PVOID **)Object[1] == Object )
      {
        *(_QWORD *)Object[1] = v5;
        v5[1] = v9;
        Object[1] = Object;
        result = (__int64)Object;
        Object[0] = Object;
        goto LABEL_4;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_4:
  if ( v2 )
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
          v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v13 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( v5 )
  {
    *v5[1] = 0LL;
    return IopFreeCompletionListPackets(v5);
  }
  return result;
}
