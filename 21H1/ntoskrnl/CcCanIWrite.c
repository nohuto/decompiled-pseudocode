/*
 * XREFs of CcCanIWrite @ 0x14022E140
 * Callers:
 *     FsRtlCopyWrite @ 0x140886480 (FsRtlCopyWrite.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140886EA0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     CcCanIWriteStreamEx @ 0x14022E440 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14027BB40 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     ExInterlockedInsertHeadList @ 0x1402F3E90 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1402F3F10 (ExInterlockedInsertTailList.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CcPostDeferredWrites @ 0x1404E4C20 (CcPostDeferredWrites.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  char v5; // r12
  __int64 v6; // r8
  int v7; // r13d
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // r8
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
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // rdx
  KSPIN_LOCK *v39; // r8
  _LIST_ENTRY *v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  __int64 v47; // rdx
  unsigned __int8 v48; // al
  _DWORD *v49; // r9
  int v50; // eax
  char v51; // [rsp+38h] [rbp-D0h] BYREF
  UCHAR v52; // [rsp+39h] [rbp-CFh]
  BOOLEAN v53; // [rsp+3Ah] [rbp-CEh]
  ULONG v54; // [rsp+3Ch] [rbp-CCh]
  __int128 v55; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B8h]
  __int64 Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+80h] [rbp-88h]
  LARGE_INTEGER Interval; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v62[12]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+108h] [rbp+0h]
  _QWORD v65[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v66[3]; // [rsp+120h] [rbp+18h] BYREF
  int v67; // [rsp+138h] [rbp+30h]
  int v68; // [rsp+13Ch] [rbp+34h]
  _UNKNOWN *retaddr; // [rsp+180h] [rbp+78h]

  v53 = Wait;
  v56 = 0LL;
  v60 = 0LL;
  v55 = 0LL;
  v52 = Retrying;
  v54 = BytesToWrite;
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
    *(_QWORD *)&v55 = 0LL;
    *((_QWORD *)&v55 + 1) = &CcMasterLock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LOBYTE(v56) = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v30 = v11[6];
        v11[6] = v30 + 1;
        if ( v30 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v55, &CcMasterLock);
    }
    else
    {
      v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v55);
      if ( v12 )
        KxWaitForLockOwnerShip((__int64)&v55, v12);
    }
    SectionObjectPointer = FileObject->SectionObjectPointer;
    if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
      Partition = CcGetPartition(SharedCacheMap);
    else
      Partition = *((_QWORD *)PspSystemPartition + 1);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
      __fastfail(0xEu);
    v16 = 0;
    v64 = 0LL;
    v17 = FileObject->SectionObjectPointer;
    v5 = 1;
    v63 = 0LL;
    if ( v17 )
    {
      v18 = v17->SharedCacheMap;
      if ( v18 )
        v16 = (v18[38] & 0x40000000) != 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v55, retaddr);
      goto LABEL_20;
    }
    _m_prefetchw(&v55);
    v19 = v55;
    if ( !(_QWORD)v55 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v55 + 1), 0LL, (signed __int64)&v55) == &v55 )
      {
LABEL_20:
        v20 = KeGetCurrentPrcb();
        *(_QWORD *)&BytesToWrite = v20->SchedulerAssist;
        if ( *(_QWORD *)&BytesToWrite )
        {
          if ( v20->NestingLevel <= 1u )
          {
            v31 = *(_DWORD *)(*(_QWORD *)&BytesToWrite + 24LL) - 1;
            *(_DWORD *)(*(_QWORD *)&BytesToWrite + 24LL) = v31;
            if ( !v31 )
              KiRemoveSystemWorkPriorityKick(v20);
          }
        }
        v21 = (unsigned __int8)v56;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && (unsigned __int8)v56 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = v33->SchedulerAssist;
              *(_QWORD *)&BytesToWrite = -1LL << ((unsigned __int8)v56 + 1);
              v35 = ~(unsigned __int16)BytesToWrite;
              v36 = (v35 & v34[5]) == 0;
              v34[5] &= v35;
              if ( v36 )
                KiRemoveSystemWorkPriorityKick(v33);
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
            v6 = v54;
            Retrying = v52;
LABEL_24:
            v22 = 0;
            ++v7;
            v23 = 0;
            v51 = 0;
            if ( Retrying
              || *(_QWORD *)(Partition + 784) == Partition + 784
              || CcAzure_LargeWriteSize && (_DWORD)v6 && (unsigned int)v6 >= CcAzure_LargeWriteSize )
            {
              CanIWriteStream = CcCanIWriteStreamEx(Partition, (_DWORD)FileObject, v6, 0, 0, (__int64)&v51);
              v22 = v51;
              v23 = CanIWriteStream;
              if ( CanIWriteStream && !v51 || v7 == 2 && CanIWriteStream )
                goto LABEL_28;
              v6 = v54;
            }
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
            {
              v37 = *(_QWORD *)(Partition + 664);
              v38 = *(_QWORD *)(Partition + 640);
              v68 = 0;
              if ( FileObject )
                v66[0] = FileObject->FsContext;
              else
                v66[0] = 0LL;
              v67 = v6;
              v66[1] = v38;
              v66[2] = v37;
              v65[0] = v66;
              v65[1] = 32LL;
              EtwTraceKernelEvent((unsigned int)v65, 1, -2147352576, 5638, 4200706);
            }
            LOBYTE(BytesToWrite) = 1;
            CcAdjustWriteBehindThreadPoolIfNeeded(Partition, *(_QWORD *)&BytesToWrite, v6);
            if ( v53 )
            {
              Object = 393216LL;
              memset(v62, 0, sizeof(v62));
              v62[9] = Partition;
              LockHandle.LockQueue.Next = (_KSPIN_LOCK_QUEUE *volatile)&v58;
              v58 = (__int64)&v58;
              LODWORD(v62[2]) = v54;
              v62[5] = &Object;
              LODWORD(v62[0]) = 6292220;
              v62[1] = FileObject;
              v62[11] = MEMORY[0xFFFFF78000000320];
              if ( !v23 || (LOBYTE(v62[10]) = 1, !v51) )
                LOBYTE(v62[10]) = 0;
              v39 = (KSPIN_LOCK *)(Partition + 832);
              v40 = (_LIST_ENTRY *)(Partition + 784);
              if ( v52 )
                ExInterlockedInsertHeadList(v40, (PLIST_ENTRY)&v62[3], v39);
              else
                ExInterlockedInsertTailList(v40, (PLIST_ENTRY)&v62[3], v39);
              KeAcquireInStackQueuedSpinLock(
                (PKSPIN_LOCK)(Partition + 128),
                (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
              LOBYTE(v41) = 1;
              CcScheduleLazyWriteScan(Partition, v41, 0LL);
              KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
              v42 = (unsigned __int8)v60;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v43 = KeGetCurrentIrql();
                  if ( v43 <= 0xFu && (unsigned __int8)v60 <= 0xFu && v43 >= 2u )
                  {
                    v44 = KeGetCurrentPrcb();
                    v45 = v44->SchedulerAssist;
                    v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                    v36 = (v46 & v45[5]) == 0;
                    v45[5] &= v46;
                    if ( v36 )
LABEL_87:
                      KiRemoveSystemWorkPriorityKick(v44);
                  }
                }
              }
LABEL_88:
              __writecr8(v42);
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
                  LOBYTE(v47) = 1;
                  CcScheduleLazyWriteScan(Partition, v47, 0LL);
                  if ( *(_BYTE *)(Partition + 140) )
                    *(_BYTE *)(Partition + 140) = 0;
                  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
                  v42 = (unsigned __int8)v60;
                  if ( !KiIrqlFlags )
                    goto LABEL_88;
                  if ( (KiIrqlFlags & 1) == 0 )
                    goto LABEL_88;
                  v48 = KeGetCurrentIrql();
                  if ( v48 > 0xFu )
                    goto LABEL_88;
                  if ( (unsigned __int8)v60 > 0xFu )
                    goto LABEL_88;
                  if ( v48 < 2u )
                    goto LABEL_88;
                  v44 = KeGetCurrentPrcb();
                  v49 = v44->SchedulerAssist;
                  v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v60 + 1));
                  v36 = (v50 & v49[5]) == 0;
                  v49[5] &= v50;
                  if ( !v36 )
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
      v19 = KxWaitForLockChainValid(&v55, (_BYTE)v12);
    }
    *(_QWORD *)&v55 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
    goto LABEL_20;
  }
  return 1;
}
