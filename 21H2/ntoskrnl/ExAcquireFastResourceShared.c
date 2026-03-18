/*
 * XREFs of ExAcquireFastResourceShared @ 0x14039B6B0
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140220460 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140224140 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1402FB7E0 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 * Callees:
 *     ExpWaitForResource @ 0x140231990 (ExpWaitForResource.c)
 *     ExpPrepareToWaitForResourceShared @ 0x1402597A8 (ExpPrepareToWaitForResourceShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPreWait @ 0x14029F580 (KeAbPreWait.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExpTryAcquireResourceShared @ 0x14039BA04 (ExpTryAcquireResourceShared.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14039C474 (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExAcquireFastResourceShared(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  unsigned __int8 v5; // cl
  unsigned __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v10; // r8
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r14
  unsigned __int64 *SparePtr; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int8 v17; // bp
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 *p_Spare19; // rax
  _QWORD *v22; // rcx
  _DWORD *SchedulerAssist; // r9
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  ULONG_PTR *v28; // rax
  _QWORD *v29; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v40[6]; // [rsp+48h] [rbp-60h] BYREF

  memset(v40, 0, 48);
  v5 = (a3 == 0) + 1;
  v7 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v5 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v5, 0LL);
  if ( CurrentIrql >= 2u && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x1C6u, 5uLL, 0LL, 0LL, 0LL);
  if ( (v10->ApcState.InProgressFlags & 2) != 0 )
    KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
  if ( !CurrentIrql && (v10->MiscFlags & 0x400) == 0 && !v10->WaitBlock[3].SpareLong )
    KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  v11 = *(_QWORD *)(a2 + 32);
  if ( (struct _KTHREAD *)v11 != v10 )
    KeBugCheckEx(0x1C6u, 9uLL, a2, v11, 0LL);
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 )
    KeBugCheckEx(0x1C6u, 2uLL, a2, v12, 0LL);
  *(_BYTE *)(a2 + 17) &= ~4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v13 + 1)) & 4;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
  {
    SparePtr = (unsigned __int64 *)CurrentThread[1].WaitBlock[3].SparePtr;
    if ( SparePtr != &CurrentThread[1].Spare19 )
    {
      while ( SparePtr[3] != BugCheckParameter2 )
      {
        SparePtr = (unsigned __int64 *)*SparePtr;
        if ( SparePtr == &CurrentThread[1].Spare19 )
          goto LABEL_13;
      }
      if ( SparePtr )
      {
        v28 = (ULONG_PTR *)SparePtr[6];
        v29 = SparePtr + 5;
        if ( (_QWORD *)*v28 == v29 )
        {
          *(_QWORD *)a2 = v29;
          v17 = 1;
          *(_QWORD *)(a2 + 8) = v28;
          *v28 = a2;
          v29[1] = a2;
          goto LABEL_19;
        }
        goto LABEL_57;
      }
    }
  }
LABEL_13:
  v15 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v7 = v15;
  if ( v15 )
    *(_BYTE *)(a2 + 16) = (2 * *(_BYTE *)(v15 + 16)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v17 = ExpTryAcquireResourceShared(BugCheckParameter2);
  if ( v17 )
  {
    v19 = *(_QWORD **)(BugCheckParameter2 + 56);
    v20 = (_QWORD *)(a2 + 56);
    if ( *v19 == BugCheckParameter2 + 48 )
    {
      *v20 = BugCheckParameter2 + 48;
      *(_QWORD *)(a2 + 64) = v19;
      *v19 = v20;
      *(_QWORD *)(BugCheckParameter2 + 56) = v20;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      *(_BYTE *)(a2 + 18) = 1;
      *(_QWORD *)(a2 + 48) = a2 + 40;
      *(_QWORD *)(a2 + 40) = a2 + 40;
      p_Spare19 = &CurrentThread[1].Spare19;
      v22 = CurrentThread[1].WaitBlock[3].SparePtr;
      if ( (unsigned __int64 *)v22[1] == &CurrentThread[1].Spare19 )
      {
        *(_QWORD *)a2 = v22;
        *(_QWORD *)(a2 + 8) = p_Spare19;
        v22[1] = a2;
        *p_Spare19 = a2;
        goto LABEL_19;
      }
    }
    goto LABEL_57;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_BYTE *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0LL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_19:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && v13 <= 0xFu && v30 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v32 = CurrentPrcb->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (v13 + 1));
          v34 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    goto LABEL_21;
  }
  if ( v7 )
    KeAbPreWait((__int64 *)v7, v16, v18);
  v25 = *(_QWORD **)(BugCheckParameter2 + 56);
  v26 = (_QWORD *)(a2 + 56);
  if ( *v25 != BugCheckParameter2 + 48 )
LABEL_57:
    __fastfail(3u);
  *(_QWORD *)(a2 + 64) = v25;
  *v26 = BugCheckParameter2 + 48;
  *v25 = v26;
  *(_QWORD *)(BugCheckParameter2 + 56) = v26;
  ExpPrepareToWaitForResourceShared(BugCheckParameter2, (__int64)CurrentThread, (__int64)v40);
  *(_BYTE *)(a2 + 19) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(CurrentThread, v27, 0LL, a2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && v13 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v34 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v40, 0x10244u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v7 )
    KeAbPreAcquire(BugCheckParameter2, v7);
  v17 = 1;
LABEL_21:
  if ( v7 )
  {
    if ( v17 )
      *(_BYTE *)(v7 + 18) = 1;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v7);
  }
  return v17;
}
