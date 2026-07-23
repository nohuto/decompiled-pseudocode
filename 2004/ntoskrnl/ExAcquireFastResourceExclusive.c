/*
 * XREFs of ExAcquireFastResourceExclusive @ 0x14038C2A0
 * Callers:
 *     ExpFastResourceLegacyAcquireExclusive @ 0x14038BA34 (ExpFastResourceLegacyAcquireExclusive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpTryAcquireResourceExclusive @ 0x14020A8F0 (ExpTryAcquireResourceExclusive.c)
 *     ExpWaitForResource @ 0x14020E440 (ExpWaitForResource.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     ExpPrepareToWaitForResourceExclusive @ 0x140345D0C (ExpPrepareToWaitForResourceExclusive.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14038CCF8 (ExpFindFastOwnerEntryForThread.c)
 *     ExpAddFastOwnerEntryToThreadList @ 0x14038D07C (ExpAddFastOwnerEntryToThreadList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char __fastcall ExAcquireFastResourceExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, char a3)
{
  ULONG_PTR v6; // rdi
  unsigned __int8 v7; // r8
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // r9
  unsigned __int8 v13; // r15
  __int64 v14; // rax
  char v15; // r14
  _QWORD *v16; // r9
  _QWORD *v17; // r8
  __int64 v18; // rdx
  unsigned __int8 v19; // r11
  _QWORD *v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rdx
  __int64 FastOwnerEntryForThread; // rax
  ULONG_PTR *v25; // rcx
  __int64 v26; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v38[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+30h]

  v6 = 0LL;
  v7 = 2 - (a3 != 0);
  memset(v38, 0, sizeof(v38));
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v39 = (__int64)CurrentThread;
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v10 = KeGetCurrentThread();
  if ( CurrentIrql > v7 )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, v7, 0LL);
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
  *(_BYTE *)(a2 + 17) |= 4u;
  *(_QWORD *)(a2 + 24) = BugCheckParameter2;
  v13 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (v13 + 1)) & 4;
  }
  if ( *(char *)(BugCheckParameter2 + 26) < 0 )
  {
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter2, 0LL, 0LL);
    if ( FastOwnerEntryForThread )
    {
      v25 = *(ULONG_PTR **)(FastOwnerEntryForThread + 48);
      v26 = FastOwnerEntryForThread + 40;
      if ( *v25 == v26 )
      {
        *(_QWORD *)a2 = v26;
        v15 = 1;
        *(_QWORD *)(a2 + 8) = v25;
        *v25 = a2;
        *(_QWORD *)(v26 + 8) = a2;
LABEL_18:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && v13 <= 0xFu && v28 >= v19 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v30 = CurrentPrcb->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << (v13 + 1));
              v32 = (v31 & v30[5]) == 0;
              v30[5] &= v31;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
        goto LABEL_20;
      }
LABEL_54:
      __fastfail(3u);
    }
  }
  v14 = KeAbPreAcquire(BugCheckParameter2, 0LL, a3 == 0);
  v6 = v14;
  if ( v14 )
    *(_BYTE *)(a2 + 16) = (2 * ((v14 - *(_QWORD *)(v14 - 16LL * *(unsigned __int8 *)(v14 + 24) + 800)) / 96)) | 1;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(BugCheckParameter2 + 96));
  v15 = ExpTryAcquireResourceExclusive(BugCheckParameter2);
  if ( v15 )
  {
    v16 = *(_QWORD **)(BugCheckParameter2 + 56);
    v17 = (_QWORD *)(a2 + 56);
    if ( *v16 != BugCheckParameter2 + 48 )
      goto LABEL_54;
    *v17 = BugCheckParameter2 + 48;
    *(_QWORD *)(a2 + 64) = v16;
    *v16 = v17;
    *(_QWORD *)(BugCheckParameter2 + 56) = v17;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    ExpAddFastOwnerEntryToThreadList(v39, v18, 0LL, a2);
LABEL_17:
    v19 = 2;
    goto LABEL_18;
  }
  if ( !a3 )
  {
    *(_BYTE *)(a2 + 17) &= 0xFAu;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_BYTE *)(a2 + 16) = 0;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_17;
  }
  if ( v6 )
    KeAbPreWait(v6);
  v21 = *(_QWORD **)(BugCheckParameter2 + 56);
  v22 = (_QWORD *)(a2 + 56);
  if ( *v21 != BugCheckParameter2 + 48 )
    goto LABEL_54;
  *(_QWORD *)(a2 + 64) = v21;
  *v22 = BugCheckParameter2 + 48;
  *v21 = v22;
  *(_QWORD *)(BugCheckParameter2 + 56) = v22;
  *(_BYTE *)(a2 + 19) = 1;
  ExpPrepareToWaitForResourceExclusive(BugCheckParameter2, v39, (__int64)v38);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  ExpAddFastOwnerEntryToThreadList(v39, v23, 0LL, a2);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v33 = KeGetCurrentIrql();
      if ( v33 <= 0xFu && v13 <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << (v13 + 1));
        v32 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
  }
  __writecr8(v13);
  ExpWaitForResource((struct _LIST_ENTRY *)BugCheckParameter2, (__int64)v38, 0x10224u, 0LL);
  *(_BYTE *)(a2 + 19) = 0;
  if ( v6 )
    KeAbPreAcquire(BugCheckParameter2, v6, 0);
  v15 = 1;
LABEL_20:
  if ( v6 )
  {
    if ( v15 )
      *(_BYTE *)(v6 + 26) |= 1u;
    else
      KeAbPostReleaseEx(BugCheckParameter2, v6);
  }
  return v15;
}
