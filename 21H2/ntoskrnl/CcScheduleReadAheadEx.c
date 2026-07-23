/*
 * XREFs of CcScheduleReadAheadEx @ 0x140303B50
 * Callers:
 *     CcAsyncCopyRead @ 0x140303190 (CcAsyncCopyRead.c)
 *     CcAsyncReadPrefetch @ 0x1403048C4 (CcAsyncReadPrefetch.c)
 *     CcCopyReadEx @ 0x14032B470 (CcCopyReadEx.c)
 *     CcScheduleReadAhead @ 0x1404EA930 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x1406AAE90 (CcMdlRead.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     CcPostWorkQueue @ 0x140300E80 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x140301520 (CcAllocateWorkQueueEntry.c)
 *     IoReferenceIoAttributionFromThread @ 0x140303638 (IoReferenceIoAttributionFromThread.c)
 *     CcDetermineReadPattern @ 0x140303FB8 (CcDetermineReadPattern.c)
 *     CcChargeThreadForReadAhead @ 0x140304638 (CcChargeThreadForReadAhead.c)
 *     CcCanIWriteStreamEx @ 0x14031E220 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcPerfLogScheduleReadAhead @ 0x1403BC3CC (CcPerfLogScheduleReadAhead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(_SLIST_ENTRY *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 Partition; // r14
  _SLIST_ENTRY *Next; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  __int64 v9; // rsi
  _DWORD *v11; // r15
  __int64 result; // rax
  int v13; // ecx
  __int64 v14; // rbx
  int v15; // esi
  int Pattern; // eax
  int v17; // r12d
  signed __int64 v18; // rdx
  int v19; // r8d
  unsigned int v20; // ecx
  unsigned int v21; // r8d
  int v22; // edx
  int PagePriorityThread; // eax
  int v24; // edx
  KIRQL v25; // r10
  int v26; // edx
  int v27; // r8d
  PSLIST_ENTRY v28; // r14
  __int64 v29; // r12
  unsigned __int64 OldIrql; // r15
  int v31; // ecx
  int v32; // edx
  __int64 v33; // rax
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v37; // r11
  _DWORD *v38; // r9
  int v39; // eax
  bool v40; // zf
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  KIRQL v45; // al
  unsigned __int64 v46; // r14
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  __int64 v53; // [rsp+50h] [rbp-21h]
  _SLIST_ENTRY *v54; // [rsp+50h] [rbp-21h]
  __int64 v55; // [rsp+50h] [rbp-21h]
  PSLIST_ENTRY v56; // [rsp+58h] [rbp-19h] BYREF
  __int64 v57; // [rsp+60h] [rbp-11h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  KIRQL v60; // [rsp+D8h] [rbp+67h]
  unsigned int v62; // [rsp+E8h] [rbp+77h]
  struct _KTHREAD *v63; // [rsp+F0h] [rbp+7Fh]

  v63 = a4;
  v62 = a3;
  v56 = 0LL;
  Partition = 0LL;
  Next = Object[3].Next;
  CurrentThread = a4;
  v7 = *((_QWORD *)&Object[2].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a3;
  v57 = 0LL;
  v11 = *(_DWORD **)(v7 + 8);
  if ( v11 )
  {
    Partition = CcGetPartition(*(_QWORD *)(v7 + 8), (_BYTE)a2, a3);
    v57 = Partition;
  }
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v63 = CurrentThread;
  }
  result = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( Next )
  {
    if ( v11 )
    {
      v13 = v11[38];
      if ( (v13 & 1) == 0 && (v13 & 0x2000) == 0 && ((__int64)Object[5].Next & 0x100000) == 0 && (int)result >= 2 )
      {
        result = CcCanIWriteStreamEx(Partition, (_DWORD)Object, 0x1000000, 0, 4, 0LL);
        if ( (_BYTE)result )
        {
          if ( !Partition || !*(_BYTE *)(Partition + 352) )
          {
            v14 = v9 + *a2;
            v53 = v9;
            v15 = ~HIDWORD(Next->Next) & (HIDWORD(Next->Next) + v9);
            SpinLock = (PKSPIN_LOCK)&Next[5];
            v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
            if ( ((__int64)Next->Next & 0x20000) == 0 )
              LODWORD(Next->Next) |= 0x20000u;
            Pattern = CcDetermineReadPattern(Next, a2);
            v17 = Pattern;
            if ( Pattern )
            {
              if ( Pattern > 0 )
              {
                if ( Pattern > 2 )
                {
                  v32 = (int)a2;
                  if ( Pattern != 3 || (v55 = 2LL * *a2 - (unsigned __int64)Next[2].Next, v55 < 0) )
                  {
                    v31 = 0;
                    goto LABEL_38;
                  }
                  v34 = (v55 & 0xFFF) + v62;
                  LODWORD(v55) = v55 & 0xFFFFF000;
                  v62 = v34;
                  *((_QWORD *)&Next[3].Next + 1) = v55;
                  v21 = (v34 + 4095) & 0xFFFFF000;
                  goto LABEL_25;
                }
                v18 = (signed __int64)Next[4].Next;
                if ( v14 + v53 + (unsigned int)(2 * v15) >= v18 )
                {
                  v54 = Next[4].Next;
                  *((_QWORD *)&Next[3].Next + 1) = v14 & 0xFFFFFFFFFFFFF000uLL;
                  if ( (__int64)(v14 & 0xFFFFFFFFFFFFF000uLL) >= v18 )
                    LODWORD(v54) = ~(v15 - 1) & (v15 + v14 - 1);
                  ++LODWORD(Next[3].Next);
                  v19 = v15;
                  v20 = (unsigned int)Next[3].Next;
                  if ( Pattern == 1 || v20 >= 3 )
                    v19 = 2 * v15;
                  v21 = (_DWORD)v54 - *((_DWORD *)&Next[3].Next + 2) + v19;
                  if ( v20 >= 3 )
                  {
                    v33 = *((unsigned int *)&Next[5].Next + 3);
                    if ( (_DWORD)v33 )
                    {
                      v35 = v33 * (unsigned __int64)(v62 * v20) / 0x64;
                      if ( v35 > 0xFFFFFFFF )
                        v35 = 0xFFFFFFFFLL;
                      if ( v35 > v21 )
                        v21 = v35;
                    }
                  }
LABEL_25:
                  HIDWORD(Next[3].Next) = v21;
                  v22 = (int)Next->Next;
                  if ( ((__int64)Next->Next & 0x10000) == 0 )
                  {
                    LODWORD(Next->Next) = v22 | 0x10000;
                    PagePriorityThread = PsGetPagePriorityThread((__int64)KeGetCurrentThread());
                    LODWORD(Next->Next) = v24 ^ (v24 ^ (PagePriorityThread << 18)) & 0x1C0000;
                    KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu )
                        {
                          v25 = v60;
                          if ( v60 > 0xFu
                            || CurrentIrql < 2u
                            || (v37 = KeGetCurrentPrcb(),
                                v38 = v37->SchedulerAssist,
                                v39 = ~(unsigned __int16)(-1LL << (v60 + 1)),
                                v40 = (v39 & v38[5]) == 0,
                                v38[5] &= v39,
                                !v40) )
                          {
LABEL_28:
                            __writecr8(v25);
                            if ( (int)CcAllocateWorkQueueEntry(Partition, &v56) < 0 )
                            {
                              v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
                              LODWORD(Next->Next) &= ~0x10000u;
                              v46 = v45;
                              KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                              result = (unsigned int)KiIrqlFlags;
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  result = KeGetCurrentIrql();
                                  if ( (unsigned __int8)result <= 0xFu
                                    && (unsigned __int8)v46 <= 0xFu
                                    && (unsigned __int8)result >= 2u )
                                  {
                                    CurrentPrcb = KeGetCurrentPrcb();
                                    result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
                                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                                    v40 = ((unsigned int)result & SchedulerAssist[5]) == 0;
                                    SchedulerAssist[5] &= result;
                                    if ( v40 )
                                      result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                                  }
                                }
                              }
                              __writecr8(v46);
                            }
                            else
                            {
                              v28 = v56;
                              if ( (xmmword_140CFC490 & 0x20000) != 0 )
                                CcPerfLogScheduleReadAhead((_DWORD)v56, (_DWORD)Object, (_DWORD)a2, v62, v15, v17, 1);
                              if ( (v11[38] & 0x10000000) != 0 )
                                CcChargeThreadForReadAhead((_DWORD)Object, v26, v27, v17, (__int64)v63);
                              ObfReferenceObjectWithTag(Object, 0x746C6644u);
                              v29 = v57;
                              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v57 + 128), &LockHandle);
                              ++v11[1];
                              ++v11[134];
                              v11[38] |= 0x4000u;
                              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                              OldIrql = LockHandle.OldIrql;
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v41 = KeGetCurrentIrql();
                                  if ( v41 <= 0xFu && LockHandle.OldIrql <= 0xFu && v41 >= 2u )
                                  {
                                    v42 = KeGetCurrentPrcb();
                                    v43 = v42->SchedulerAssist;
                                    v44 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                                    v40 = (v44 & v43[5]) == 0;
                                    v43[5] &= v44;
                                    if ( v40 )
                                      KiRemoveSystemWorkPriorityKick(v42);
                                    v28 = v56;
                                  }
                                }
                              }
                              __writecr8(OldIrql);
                              Next[7].Next = v28;
                              *((_BYTE *)&v28[7].Next + 8) = 1;
                              v28[1].Next = Object;
                              *((_QWORD *)&v28[1].Next + 1) = 0LL;
                              IoReferenceIoAttributionFromThread(v63, (__int64)(&v28[1].Next + 1));
                              return CcPostWorkQueue((__int64)v28, v29 + 240);
                            }
                            return result;
                          }
                          KiRemoveSystemWorkPriorityKick(v37);
                        }
                      }
                    }
                    v25 = v60;
                    goto LABEL_28;
                  }
                  v31 = 1;
                  if ( (v11[38] & 0x10000000) != 0 )
                  {
                    CcChargeThreadForReadAhead((_DWORD)Object, v22, v21, v17, (__int64)v63);
                    v31 = 1;
                  }
                  goto LABEL_37;
                }
              }
            }
            else
            {
              LODWORD(Next[3].Next) = 0;
              Next[4].Next = 0LL;
              *((_QWORD *)&Next[4].Next + 1) = 0LL;
            }
            v31 = 0;
LABEL_37:
            v32 = (int)a2;
LABEL_38:
            if ( (xmmword_140CFC490 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v32, v62, v15, v17, v31);
            KxReleaseSpinLock(SpinLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v49 = KeGetCurrentIrql();
                if ( v49 <= 0xFu && v60 <= 0xFu && v49 >= 2u )
                {
                  v50 = KeGetCurrentPrcb();
                  v51 = v50->SchedulerAssist;
                  v52 = ~(unsigned __int16)(-1LL << (v60 + 1));
                  v40 = (v52 & v51[5]) == 0;
                  v51[5] &= v52;
                  if ( v40 )
                    KiRemoveSystemWorkPriorityKick(v50);
                }
              }
            }
            result = v60;
            __writecr8(v60);
          }
        }
      }
    }
  }
  return result;
}
