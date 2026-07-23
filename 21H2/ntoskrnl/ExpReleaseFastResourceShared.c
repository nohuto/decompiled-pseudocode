/*
 * XREFs of ExpReleaseFastResourceShared @ 0x14038EAD0
 * Callers:
 *     ExReleaseFastResource @ 0x14038EA40 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceShared @ 0x1405B47A0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14038EC98 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x14038ED88 (ExpPrepareToWakeResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  volatile __int64 *v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 **v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+88h] [rbp+48h] BYREF
  __int64 v28; // [rsp+90h] [rbp+50h] BYREF
  __int64 v29; // [rsp+98h] [rbp+58h] BYREF

  v29 = 0LL;
  v28 = 0LL;
  v27 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !*((_BYTE *)a2 + 18) )
  {
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v9 == a2 )
      goto LABEL_6;
    goto LABEL_16;
  }
  v5 = a2 + 5;
  LockHandle.LockQueue.Next = 0LL;
  v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  if ( (_QWORD *)*v5 != v5 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    LOBYTE(v7) = 1;
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, v7);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v9 == a2 )
    {
LABEL_6:
      *v9 = v8;
      v8[1] = (__int64)v9;
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v19 = CurrentPrcb->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v21 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_8;
    }
LABEL_16:
    __fastfail(3u);
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
  ExpPrepareToWakeResourceShared(
    BugCheckParameter2,
    &v29,
    &v28,
    &v27,
    LockHandle.LockQueue.Next,
    LockHandle.LockQueue.Lock,
    *(_QWORD *)&LockHandle.OldIrql);
  v11 = a2 + 7;
  v12 = a2[7];
  v13 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v12 + 8) != a2 + 7 )
    goto LABEL_16;
  if ( (_QWORD *)*v13 != v11 )
    goto LABEL_16;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v29, 0, 2 * (v28 != 0) + 1);
  *((_BYTE *)a2 + 18) = 0;
  v14 = (__int64 *)*a2;
  v15 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v15 != a2 )
    goto LABEL_16;
  *v15 = v14;
  v14[1] = (__int64)v15;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v5 = 0LL;
  a2[6] = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  result = *((unsigned __int8 *)a2 + 16);
  if ( (_BYTE)result )
    result = KeAbPostReleaseEx(BugCheckParameter2, *((unsigned __int8 *)a2 + 16));
LABEL_8:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
