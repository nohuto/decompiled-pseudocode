/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x14038E73C
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14038E6C0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1405B4550 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KeAbCrossThreadRelease @ 0x14038E970 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14038EC98 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x14038ED88 (ExpPrepareToWakeResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // r13
  __int64 *v6; // rcx
  __int64 **v7; // rax
  LONG_PTR result; // rax
  _QWORD *v9; // r14
  volatile __int64 *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  int v29; // [rsp+98h] [rbp+48h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+58h] BYREF

  v31 = 0LL;
  v30 = 0LL;
  v29 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  memset(&v27, 0, sizeof(v27));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v5 = a2[4];
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v5 + 1592);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v5 + 1592));
  if ( !*((_BYTE *)a2 + 18) )
  {
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v7 == a2 )
    {
LABEL_5:
      *v7 = v6;
      v6[1] = (__int64)v7;
      *a2 = 0LL;
      a2[1] = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v20 = CurrentPrcb->SchedulerAssist;
            v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v22 = (v21 & v20[5]) == 0;
            v20[5] &= v21;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_7;
    }
LABEL_19:
    __fastfail(3u);
  }
  v9 = a2 + 5;
  v27.LockQueue.Next = 0LL;
  v10 = (volatile __int64 *)(a1 + 96);
  v27.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v9 != v9 )
  {
    KxAcquireQueuedSpinLock((__int64)&v27, v10);
    LOBYTE(v16) = 1;
    ExpRotateFastOwnerEntrySublistHead(a1, a2, v16);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
    v6 = (__int64 *)*a2;
    v7 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v7 == a2 )
      goto LABEL_5;
    goto LABEL_19;
  }
  KxAcquireQueuedSpinLock((__int64)&v27, v10);
  ExpPrepareToWakeResourceShared(a1, &v31, &v30, &v29, v27.LockQueue.Next, v27.LockQueue.Lock, *(_QWORD *)&v27.OldIrql);
  v11 = a2 + 7;
  v12 = a2[7];
  v13 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v12 + 8) != a2 + 7 )
    goto LABEL_19;
  if ( (_QWORD *)*v13 != v11 )
    goto LABEL_19;
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  a2[8] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
  *((_BYTE *)a2 + 18) = 0;
  v14 = (__int64 *)*a2;
  v15 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v15 != a2 )
    goto LABEL_19;
  *v15 = v14;
  v14[1] = (__int64)v15;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v9 = 0LL;
  a2[6] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  KeWakeWaitChain(&v31, 0, 2 * (v30 != 0) + 1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( *((_BYTE *)a2 + 16) )
    KeAbCrossThreadRelease(a1, *((unsigned __int8 *)a2 + 16), v5);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_7:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
