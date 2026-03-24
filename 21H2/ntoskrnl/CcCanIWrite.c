/*
 * XREFs of CcCanIWrite @ 0x1403131D0
 * Callers:
 *     FsRtlCopyWrite @ 0x14088A890 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14088B2B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     ExInterlockedInsertHeadList @ 0x1402A0300 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1402A0380 (ExInterlockedInsertTailList.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     CcCanIWriteStreamEx @ 0x1403134D0 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140336330 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x14037F820 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     CcPostDeferredWrites @ 0x1404EA2F0 (CcPostDeferredWrites.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char v5; // r12
  ULONG v6; // r8d
  int v7; // r13d
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // r8
  _QWORD *v12; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PVOID SharedCacheMap; // rcx
  __int64 Partition; // rdi
  bool v16; // r15
  PSECTION_OBJECT_POINTERS v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  struct _KPRCB *v20; // rcx
  unsigned __int64 v21; // rsi
  char v22; // r15
  BOOLEAN v23; // si
  BOOLEAN CanIWriteStream; // al
  signed __int64 v25; // rbx
  bool v26; // cc
  signed __int64 v27; // rbx
  int v29; // eax
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  __int64 v36; // rcx
  __int64 v37; // rdx
  KSPIN_LOCK *v38; // r8
  struct _LIST_ENTRY *v39; // rcx
  unsigned __int64 v40; // rsi
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  _DWORD *v46; // r9
  int v47; // eax
  char v48; // [rsp+38h] [rbp-D0h] BYREF
  UCHAR v49; // [rsp+39h] [rbp-CFh]
  BOOLEAN v50; // [rsp+3Ah] [rbp-CEh]
  ULONG v51; // [rsp+3Ch] [rbp-CCh]
  __int128 v52; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B8h]
  __int64 Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+80h] [rbp-88h]
  LARGE_INTEGER Interval; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v59[12]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v60; // [rsp+F8h] [rbp-10h]
  __int64 v61; // [rsp+108h] [rbp+0h]
  _QWORD v62[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v63[3]; // [rsp+120h] [rbp+18h] BYREF
  ULONG v64; // [rsp+138h] [rbp+30h]
  int v65; // [rsp+13Ch] [rbp+34h]
  void *retaddr; // [rsp+180h] [rbp+78h]

  v50 = Wait;
  v53 = 0LL;
  v57 = 0LL;
  v52 = 0LL;
  v49 = Retrying;
  v51 = BytesToWrite;
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v5 = 0;
  v6 = BytesToWrite;
  v7 = 0;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  if ( !FileObject )
  {
    Partition = *((_QWORD *)PspSystemPartition + 1);
    goto LABEL_24;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) == 0 && (Flags & 0x1000000) == 0 )
  {
    *(_QWORD *)&v52 = 0LL;
    *((_QWORD *)&v52 + 1) = &CcMasterLock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      *(_QWORD *)&Retrying = KeGetCurrentPrcb()->SchedulerAssist;
      *(_DWORD *)(Retrying + 20LL) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LOBYTE(v53) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v29 = *(_DWORD *)(SchedulerAssist + 24);
        *(_DWORD *)(SchedulerAssist + 24) = v29 + 1;
        if ( v29 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v52, &CcMasterLock);
    }
    else
    {
      v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v52);
      if ( v12 )
        KxWaitForLockOwnerShip((__int64)&v52, v12);
    }
    SectionObjectPointer = FileObject->SectionObjectPointer;
    if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
      Partition = CcGetPartition(SharedCacheMap);
    else
      Partition = *((_QWORD *)PspSystemPartition + 1);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
      __fastfail(0xEu);
    v16 = 0;
    v61 = 0LL;
    v17 = FileObject->SectionObjectPointer;
    v5 = 1;
    v60 = 0LL;
    if ( v17 )
    {
      v18 = v17->SharedCacheMap;
      if ( v18 )
        v16 = (v18[38] & 0x40000000) != 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v52, retaddr);
      goto LABEL_20;
    }
    _m_prefetchw(&v52);
    v19 = v52;
    if ( !(_QWORD)v52 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v52 + 1), 0LL, (signed __int64)&v52) == &v52 )
      {
LABEL_20:
        v20 = KeGetCurrentPrcb();
        *(_QWORD *)&BytesToWrite = v20->SchedulerAssist;
        if ( *(_QWORD *)&BytesToWrite )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v30 = *(_DWORD *)(*(_QWORD *)&BytesToWrite + 24LL) - 1;
            *(_DWORD *)(*(_QWORD *)&BytesToWrite + 24LL) = v30;
            if ( !v30 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        v21 = (unsigned __int8)v53;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v31 = KeGetCurrentIrql();
            if ( v31 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v31 >= 2u )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              *(_QWORD *)&BytesToWrite = -1LL << ((unsigned __int8)v53 + 1);
              v34 = ~(unsigned __int16)BytesToWrite;
              v35 = (v34 & v33[5]) == 0;
              v33[5] &= v34;
              if ( v35 )
                KiRemoveSystemWorkPriorityKick(v32);
            }
          }
        }
        __writecr8(v21);
        if ( v16 )
        {
          v23 = 1;
        }
        else
        {
          while ( 1 )
          {
            v6 = v51;
            Retrying = v49;
LABEL_24:
            v22 = 0;
            ++v7;
            v23 = 0;
            v48 = 0;
            if ( Retrying
              || *(_QWORD *)(Partition + 784) == Partition + 784
              || CcAzure_LargeWriteSize && v6 && v6 >= CcAzure_LargeWriteSize )
            {
              CanIWriteStream = CcCanIWriteStreamEx(Partition, (_DWORD)FileObject, v6, 0, 0, (__int64)&v48);
              v22 = v48;
              v23 = CanIWriteStream;
              if ( CanIWriteStream && !v48 || v7 == 2 && CanIWriteStream )
                goto LABEL_28;
              v6 = v51;
            }
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
            {
              v36 = *(_QWORD *)(Partition + 664);
              v37 = *(_QWORD *)(Partition + 640);
              v65 = 0;
              if ( FileObject )
                v63[0] = FileObject->FsContext;
              else
                v63[0] = 0LL;
              v64 = v6;
              v63[1] = v37;
              v63[2] = v36;
              v62[0] = v63;
              v62[1] = 32LL;
              EtwTraceKernelEvent((int)v62, 1, 0x80020000, 5638, 4200706);
            }
            LOBYTE(BytesToWrite) = 1;
            CcAdjustWriteBehindThreadPoolIfNeeded(Partition, *(_QWORD *)&BytesToWrite);
            if ( v50 )
            {
              Object = 393216LL;
              memset(v59, 0, sizeof(v59));
              v59[9] = Partition;
              LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)&v55;
              v55 = (__int64)&v55;
              LODWORD(v59[2]) = v51;
              v59[5] = &Object;
              LODWORD(v59[0]) = 6292220;
              v59[1] = FileObject;
              v59[11] = MEMORY[0xFFFFF78000000320];
              if ( !v23 || (LOBYTE(v59[10]) = 1, !v48) )
                LOBYTE(v59[10]) = 0;
              v38 = (KSPIN_LOCK *)(Partition + 832);
              v39 = (struct _LIST_ENTRY *)(Partition + 784);
              if ( v49 )
                ExInterlockedInsertHeadList(v39, (PLIST_ENTRY)&v59[3], v38);
              else
                ExInterlockedInsertTailList(v39, (PLIST_ENTRY)&v59[3], v38);
              KeAcquireInStackQueuedSpinLock(
                (PKSPIN_LOCK)(Partition + 128),
                (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
              CcScheduleLazyWriteScan(Partition, 1, 0);
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
              v40 = (unsigned __int8)v57;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v41 = KeGetCurrentIrql();
                  if ( v41 <= 0xFu && (unsigned __int8)v57 <= 0xFu && v41 >= 2u )
                  {
                    v42 = KeGetCurrentPrcb();
                    v43 = v42->SchedulerAssist;
                    v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v57 + 1));
                    v35 = (v44 & v43[5]) == 0;
                    v43[5] &= v44;
                    if ( v35 )
LABEL_87:
                      KiRemoveSystemWorkPriorityKick(v42);
                  }
                }
              }
LABEL_88:
              __writecr8(v40);
              while ( 1 )
              {
                CcPostDeferredWrites(Partition);
                if ( !KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
                  break;
                if ( *(_BYTE *)(Partition + 964) || *(_BYTE *)(Partition + 140) )
                {
                  KeAcquireInStackQueuedSpinLock(
                    (PKSPIN_LOCK)(Partition + 128),
                    (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
                  CcScheduleLazyWriteScan(Partition, 1, 0);
                  if ( *(_BYTE *)(Partition + 140) )
                    *(_BYTE *)(Partition + 140) = 0;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
                  v40 = (unsigned __int8)v57;
                  if ( !KiIrqlFlags )
                    goto LABEL_88;
                  if ( (KiIrqlFlags & 1) == 0 )
                    goto LABEL_88;
                  v45 = KeGetCurrentIrql();
                  if ( v45 > 0xFu )
                    goto LABEL_88;
                  if ( (unsigned __int8)v57 > 0xFu )
                    goto LABEL_88;
                  if ( v45 < 2u )
                    goto LABEL_88;
                  v42 = KeGetCurrentPrcb();
                  v46 = v42->SchedulerAssist;
                  v47 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v57 + 1));
                  v35 = (v47 & v46[5]) == 0;
                  v46[5] &= v47;
                  if ( !v35 )
                    goto LABEL_88;
                  goto LABEL_87;
                }
              }
LABEL_28:
              v23 = 1;
              goto LABEL_29;
            }
            if ( v7 != 1 )
              goto LABEL_29;
            if ( !v23 )
              break;
            if ( !v22 )
              goto LABEL_28;
            Interval.HighPart = -1;
            Interval.LowPart = -10000 * CcSoftThrottleDelay;
            DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", CcSoftThrottleDelay);
            KeDelayExecutionThread(0, 0, &Interval);
          }
          v23 = 0;
LABEL_29:
          if ( !v5 )
            return v23;
        }
        v25 = _InterlockedExchangeAdd64((volatile signed __int64 *)(Partition + 968), 0xFFFFFFFFFFFFFFFFuLL);
        v26 = v25 <= 1;
        v27 = v25 - 1;
        if ( v26 )
        {
          if ( v27 )
            __fastfail(0xEu);
          KeSetEvent((PRKEVENT)(Partition + 1000), 0, 0);
        }
        return v23;
      }
      v19 = KxWaitForLockChainValid((__int64 *)&v52, (__int64)v12, SchedulerAssist, Retrying);
    }
    *(_QWORD *)&v52 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
    goto LABEL_20;
  }
  return 1;
}
