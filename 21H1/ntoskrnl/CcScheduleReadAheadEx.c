/*
 * XREFs of CcScheduleReadAheadEx @ 0x1402357D0
 * Callers:
 *     CcAsyncCopyRead @ 0x140235100 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x140287C10 (CcCopyReadEx.c)
 *     CcAsyncReadPrefetch @ 0x1402BE260 (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAhead @ 0x1404E5020 (CcScheduleReadAhead.c)
 *     CcMdlRead @ 0x140640770 (CcMdlRead.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1402261C0 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcCanIWriteStreamEx @ 0x14022E440 (CcCanIWriteStreamEx.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcAllocateWorkQueueEntry @ 0x140232D54 (CcAllocateWorkQueueEntry.c)
 *     CcPostWorkQueue @ 0x1402336C8 (CcPostWorkQueue.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402355A8 (IoReferenceIoAttributionFromThread.c)
 *     CcDetermineReadPattern @ 0x140235C38 (CcDetermineReadPattern.c)
 *     CcChargeThreadForReadAhead @ 0x140235E78 (CcChargeThreadForReadAhead.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcPerfLogScheduleReadAhead @ 0x1403B7F8C (CcPerfLogScheduleReadAhead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcScheduleReadAheadEx(_SLIST_ENTRY *Object, _QWORD *a2, unsigned int a3, struct _KTHREAD *a4)
{
  __int64 Partition; // r14
  _SLIST_ENTRY *Next; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // rax
  __int64 v9; // rsi
  _DWORD *v11; // r15
  int IoPriorityThread; // eax
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
  __int64 v54; // [rsp+50h] [rbp-21h]
  _SLIST_ENTRY *v55; // [rsp+50h] [rbp-21h]
  __int64 v56; // [rsp+50h] [rbp-21h]
  PSLIST_ENTRY v57; // [rsp+58h] [rbp-19h] BYREF
  __int64 v58; // [rsp+60h] [rbp-11h]
  PKSPIN_LOCK SpinLock; // [rsp+68h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-1h] BYREF
  KIRQL v61; // [rsp+D8h] [rbp+67h]
  unsigned int v63; // [rsp+E8h] [rbp+77h]
  __int64 v64; // [rsp+F0h] [rbp+7Fh]

  v64 = (__int64)a4;
  v63 = a3;
  v57 = 0LL;
  Partition = 0LL;
  Next = Object[3].Next;
  CurrentThread = a4;
  v7 = *((_QWORD *)&Object[2].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a3;
  v58 = 0LL;
  v11 = *(_DWORD **)(v7 + 8);
  if ( v11 )
  {
    Partition = CcGetPartition(*(_QWORD **)(v7 + 8));
    v58 = Partition;
  }
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v64 = (__int64)CurrentThread;
  }
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( Next )
  {
    if ( v11 )
    {
      v13 = v11[38];
      if ( (v13 & 1) == 0 && (v13 & 0x2000) == 0 && ((__int64)Object[5].Next & 0x100000) == 0 && IoPriorityThread >= 2 )
      {
        LOBYTE(IoPriorityThread) = CcCanIWriteStreamEx(
                                     (unsigned __int64 *)Partition,
                                     (__int64)Object,
                                     0x1000000u,
                                     0,
                                     4,
                                     0LL);
        if ( (_BYTE)IoPriorityThread )
        {
          if ( !Partition || !*(_BYTE *)(Partition + 352) )
          {
            v14 = v9 + *a2;
            v54 = v9;
            v15 = ~HIDWORD(Next->Next) & (HIDWORD(Next->Next) + v9);
            SpinLock = (PKSPIN_LOCK)&Next[5];
            v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
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
                  if ( Pattern != 3 || (v56 = 2LL * *a2 - (unsigned __int64)Next[2].Next, v56 < 0) )
                  {
                    v31 = 0;
                    goto LABEL_38;
                  }
                  v34 = (v56 & 0xFFF) + v63;
                  LODWORD(v56) = v56 & 0xFFFFF000;
                  v63 = v34;
                  *((_QWORD *)&Next[3].Next + 1) = v56;
                  v21 = (v34 + 4095) & 0xFFFFF000;
                  goto LABEL_25;
                }
                v18 = (signed __int64)Next[4].Next;
                if ( v14 + v54 + (unsigned int)(2 * v15) >= v18 )
                {
                  v55 = Next[4].Next;
                  *((_QWORD *)&Next[3].Next + 1) = v14 & 0xFFFFFFFFFFFFF000uLL;
                  if ( (__int64)(v14 & 0xFFFFFFFFFFFFF000uLL) >= v18 )
                    LODWORD(v55) = ~(v15 - 1) & (v15 + v14 - 1);
                  ++LODWORD(Next[3].Next);
                  v19 = v15;
                  v20 = (unsigned int)Next[3].Next;
                  if ( Pattern == 1 || v20 >= 3 )
                    v19 = 2 * v15;
                  v21 = (_DWORD)v55 - *((_DWORD *)&Next[3].Next + 2) + v19;
                  if ( v20 >= 3 )
                  {
                    v33 = *((unsigned int *)&Next[5].Next + 3);
                    if ( (_DWORD)v33 )
                    {
                      v35 = v33 * (unsigned __int64)(v63 * v20) / 0x64;
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
                          v25 = v61;
                          if ( v61 > 0xFu
                            || CurrentIrql < 2u
                            || (v37 = KeGetCurrentPrcb(),
                                v38 = v37->SchedulerAssist,
                                v39 = ~(unsigned __int16)(-1LL << (v61 + 1)),
                                v40 = (v39 & v38[5]) == 0,
                                v38[5] &= v39,
                                !v40) )
                          {
LABEL_28:
                            __writecr8(v25);
                            if ( (int)CcAllocateWorkQueueEntry(Partition, &v57) < 0 )
                            {
                              v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
                              LODWORD(Next->Next) &= ~0x10000u;
                              v46 = v45;
                              KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                              LOBYTE(IoPriorityThread) = KiIrqlFlags;
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  LOBYTE(IoPriorityThread) = KeGetCurrentIrql();
                                  if ( (unsigned __int8)IoPriorityThread <= 0xFu
                                    && (unsigned __int8)v46 <= 0xFu
                                    && (unsigned __int8)IoPriorityThread >= 2u )
                                  {
                                    CurrentPrcb = KeGetCurrentPrcb();
                                    IoPriorityThread = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
                                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                                    v40 = (IoPriorityThread & SchedulerAssist[5]) == 0;
                                    SchedulerAssist[5] &= IoPriorityThread;
                                    if ( v40 )
                                      LOBYTE(IoPriorityThread) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                                  }
                                }
                              }
                              __writecr8(v46);
                            }
                            else
                            {
                              v28 = v57;
                              if ( (xmmword_140CFC490 & 0x20000) != 0 )
                                CcPerfLogScheduleReadAhead((_DWORD)v57, (_DWORD)Object, (_DWORD)a2, v63, v15, v17, 1);
                              if ( (v11[38] & 0x10000000) != 0 )
                                CcChargeThreadForReadAhead((_DWORD)Object, v26, v27, v17, v64);
                              ObfReferenceObjectWithTag(Object, 0x746C6644u);
                              v29 = v58;
                              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v58 + 128), &LockHandle);
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
                                    v28 = v57;
                                  }
                                }
                              }
                              __writecr8(OldIrql);
                              Next[7].Next = v28;
                              *((_BYTE *)&v28[7].Next + 8) = 1;
                              v28[1].Next = Object;
                              *((_QWORD *)&v28[1].Next + 1) = 0LL;
                              IoReferenceIoAttributionFromThread(v64, (__int64)(&v28[1].Next + 1));
                              LOBYTE(IoPriorityThread) = CcPostWorkQueue((__int64)v28, v29 + 240);
                            }
                            return IoPriorityThread;
                          }
                          KiRemoveSystemWorkPriorityKick(v37);
                        }
                      }
                    }
                    v25 = v61;
                    goto LABEL_28;
                  }
                  v31 = 1;
                  if ( (v11[38] & 0x10000000) != 0 )
                  {
                    CcChargeThreadForReadAhead((_DWORD)Object, v22, v21, v17, v64);
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
              CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v32, v63, v15, v17, v31);
            KxReleaseSpinLock(SpinLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v49 = KeGetCurrentIrql();
                if ( v49 <= 0xFu && v61 <= 0xFu && v49 >= 2u )
                {
                  v50 = KeGetCurrentPrcb();
                  v51 = v50->SchedulerAssist;
                  v52 = ~(unsigned __int16)(-1LL << (v61 + 1));
                  v40 = (v52 & v51[5]) == 0;
                  v51[5] &= v52;
                  if ( v40 )
                    KiRemoveSystemWorkPriorityKick(v50);
                }
              }
            }
            LOBYTE(IoPriorityThread) = v61;
            __writecr8(v61);
          }
        }
      }
    }
  }
  return IoPriorityThread;
}
