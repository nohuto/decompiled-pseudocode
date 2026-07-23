/*
 * XREFs of CcQueueLazyWriteScanThread @ 0x1403B9510
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcSetLazyWriteScanQueued @ 0x140242624 (CcSetLazyWriteScanQueued.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     CcPostWorkQueue @ 0x140300E80 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140301520 (CcAllocateWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140341080 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     CcNotifyExternalCaches @ 0x140392674 (CcNotifyExternalCaches.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcQueueLazyWriteScanThread(_QWORD *StartContext)
{
  char *v1; // r12
  unsigned int v3; // edi
  char v4; // r15
  char v5; // si
  NTSTATUS v6; // eax
  int v7; // eax
  int v8; // eax
  signed __int64 v9; // rax
  unsigned __int64 i; // rcx
  signed __int64 v11; // rtt
  unsigned __int64 v12; // rsi
  PSLIST_ENTRY v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  unsigned __int64 OldIrql; // rsi
  int v17; // eax
  int v18; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  int v27; // eax
  struct _KLOCK_QUEUE_HANDLE WaitBlockArray_8; // [rsp+48h] [rbp-C0h] BYREF
  PSLIST_ENTRY v29; // [rsp+60h] [rbp-A8h] BYREF
  PVOID Object[6]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-70h] BYREF

  v1 = (char *)(StartContext + 125);
  v29 = 0LL;
  Object[5] = StartContext + 125;
  Object[0] = StartContext + 47;
  v3 = 0;
  Object[1] = StartContext + 50;
  v4 = 0;
  Object[2] = StartContext + 53;
  Object[3] = StartContext + 56;
  Object[4] = StartContext + 59;
  memset(&WaitBlockArray_8, 0, sizeof(WaitBlockArray_8));
LABEL_2:
  v5 = 0;
  if ( v4 )
    CcDereferencePartition((__int64)StartContext);
  v6 = KeWaitForMultipleObjects(6u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  if ( !v6 )
  {
    v3 = 1;
    v5 = 1;
    goto LABEL_42;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
    {
      v3 = 4;
      goto LABEL_8;
    }
    v17 = v8 - 1;
    if ( !v17 )
    {
      v3 = 8;
      goto LABEL_25;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v3 = 16;
      goto LABEL_25;
    }
    if ( v18 == 1 )
      return;
LABEL_42:
    if ( !v3 )
      return;
    goto LABEL_8;
  }
  v3 = 2;
LABEL_25:
  v5 = 1;
LABEL_8:
  _m_prefetchw(StartContext + 121);
  v9 = StartContext[121];
  for ( i = v9 + 1; i > 1; i = v9 + 1 )
  {
    v11 = v9;
    v9 = _InterlockedCompareExchange64(StartContext + 121, i, v9);
    if ( v11 == v9 )
    {
      v4 = 1;
      if ( CcNumberOfExternalCaches
        && (__int64 *)CcExternalCacheList != &CcExternalCacheList
        && StartContext == *((_QWORD **)PspSystemPartition + 1) )
      {
        CcNotifyExternalCaches(v3);
      }
      CcAdjustWriteBehindThreadPoolIfNeeded((__int64)StartContext, v5);
      KeAcquireInStackQueuedSpinLock(StartContext + 16, &WaitBlockArray_8);
      if ( v3 <= 2 )
        goto LABEL_28;
      if ( v3 == 4 )
      {
        if ( !*((_BYTE *)StartContext + 635) && !*((_BYTE *)StartContext + 634) )
          goto LABEL_16;
LABEL_33:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&WaitBlockArray_8);
        OldIrql = WaitBlockArray_8.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
              v23 = (v22 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(OldIrql);
        goto LABEL_2;
      }
      if ( v3 == 8 )
      {
        v15 = *((_BYTE *)StartContext + 634);
      }
      else
      {
LABEL_28:
        if ( !*((_BYTE *)StartContext + 636) && !*((_BYTE *)StartContext + 637) && !*((_BYTE *)StartContext + 638) )
        {
LABEL_16:
          CcSetLazyWriteScanQueued(StartContext, v3, 1);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&WaitBlockArray_8);
          v12 = WaitBlockArray_8.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v24 = KeGetCurrentIrql();
              if ( v24 <= 0xFu && WaitBlockArray_8.OldIrql <= 0xFu && v24 >= 2u )
              {
                v25 = KeGetCurrentPrcb();
                v26 = v25->SchedulerAssist;
                v27 = ~(unsigned __int16)(-1LL << (WaitBlockArray_8.OldIrql + 1));
                v23 = (v27 & v26[5]) == 0;
                v26[5] &= v27;
                if ( v23 )
                  KiRemoveSystemWorkPriorityKick(v25);
              }
            }
          }
          __writecr8(v12);
          if ( (int)CcAllocateWorkQueueEntry((__int64)StartContext, &v29) >= 0 )
          {
            v13 = v29;
            v14 = 28LL;
            *((_BYTE *)&v29[7].Next + 8) = 3;
            if ( v3 != 8 )
              v14 = 32LL;
            LODWORD(v13[1].Next) = v3;
            CcPostWorkQueue((__int64)v13, (__int64)&StartContext[v14]);
            goto LABEL_2;
          }
          ++CcDbgNumberOfFailedWorkQueueEntryAllocations;
          KeAcquireInStackQueuedSpinLock(StartContext + 16, &WaitBlockArray_8);
          *((_BYTE *)StartContext + 632) = 0;
          CcSetLazyWriteScanQueued(StartContext, v3, 0);
          goto LABEL_33;
        }
        v15 = 1;
      }
      if ( !v15 )
        goto LABEL_16;
      goto LABEL_33;
    }
  }
  if ( i != 1 )
    __fastfail(0xEu);
  KeWaitForSingleObject(v1, Executive, 0, 0, 0LL);
}
