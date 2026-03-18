/*
 * XREFs of CcScheduleReadAheadNuma @ 0x14029CC2C
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14029C970 (CcAsyncReadPrefetch.c)
 *     CcScheduleReadAheadEx @ 0x14029CC10 (CcScheduleReadAheadEx.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcCopyReadEx @ 0x14032A8C0 (CcCopyReadEx.c)
 *     CcScheduleReadAhead @ 0x14053A6A0 (CcScheduleReadAhead.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     CcPostWorkQueue @ 0x140275F94 (CcPostWorkQueue.c)
 *     CcAllocateWorkQueueEntry @ 0x1402768E4 (CcAllocateWorkQueueEntry.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcCanIWriteStreamEx @ 0x1402844A0 (CcCanIWriteStreamEx.c)
 *     CcDetermineReadPattern @ 0x14029D204 (CcDetermineReadPattern.c)
 *     CcChargeThreadForReadAhead @ 0x14029D2AC (CcChargeThreadForReadAhead.c)
 *     CcGetCurrentNumaNode @ 0x14029E3A0 (CcGetCurrentNumaNode.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoReferenceIoAttributionFromThread @ 0x1402F5EA0 (IoReferenceIoAttributionFromThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetPagePriorityThread @ 0x14033D720 (PsGetPagePriorityThread.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     CcPerfLogScheduleReadAhead @ 0x1403ADB38 (CcPerfLogScheduleReadAhead.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall CcScheduleReadAheadNuma(
        _SLIST_ENTRY *Object,
        _QWORD *a2,
        unsigned int a3,
        struct _KTHREAD *CurrentThread,
        __int64 a5)
{
  __int64 CurrentNumaNode; // rbx
  _SLIST_ENTRY *Next; // rdi
  __int64 v7; // rax
  __int64 v9; // r14
  __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r11
  int IoPriorityThread; // eax
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // ecx
  __int64 v18; // rbx
  int v19; // r14d
  unsigned __int64 v20; // r15
  int Pattern; // eax
  int v22; // r12d
  int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // r8d
  signed __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // ecx
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // edx
  int PagePriorityThread; // eax
  int v33; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  int v39; // edx
  int v40; // r8d
  PSLIST_ENTRY v41; // r15
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  KIRQL v49; // al
  unsigned __int64 v50; // rsi
  struct _KPRCB *v51; // r9
  _DWORD *v52; // r8
  int v53; // ecx
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  __int64 v57; // [rsp+48h] [rbp-41h]
  __int64 v58; // [rsp+48h] [rbp-41h]
  _SLIST_ENTRY *v59; // [rsp+48h] [rbp-41h]
  PSLIST_ENTRY v60; // [rsp+50h] [rbp-39h] BYREF
  __int64 v61; // [rsp+58h] [rbp-31h]
  int v62; // [rsp+60h] [rbp-29h]
  __int64 v63; // [rsp+68h] [rbp-21h]
  __int64 v64; // [rsp+70h] [rbp-19h]
  PKSPIN_LOCK SpinLock; // [rsp+78h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v68; // [rsp+F8h] [rbp+6Fh]
  __int64 v69; // [rsp+100h] [rbp+77h]

  v69 = (__int64)CurrentThread;
  v68 = a3;
  CurrentNumaNode = a5;
  Next = Object[3].Next;
  v7 = *((_QWORD *)&Object[2].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a3;
  v60 = 0LL;
  v11 = *(_QWORD *)(v7 + 8);
  v63 = 0LL;
  v64 = 0LL;
  v61 = a5;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 528);
    v13 = *(_QWORD *)(v11 + 592);
    v63 = v12;
    v64 = v13;
    if ( !a5 )
    {
      CurrentNumaNode = CcGetCurrentNumaNode(v12, v11);
      v61 = CurrentNumaNode;
    }
  }
  if ( !CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v69 = (__int64)CurrentThread;
  }
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( Next )
  {
    if ( v11 )
    {
      v17 = *(_DWORD *)(v11 + 152);
      if ( (v17 & 1) == 0 && (v17 & 0x2000) == 0 && ((__int64)Object[5].Next & 0x100000) == 0 && IoPriorityThread >= 2 )
      {
        LOBYTE(IoPriorityThread) = CcCanIWriteStreamEx(v15, v16, (__int64)Object, 0x1000000u, 0, 4, 0LL);
        if ( (_BYTE)IoPriorityThread )
        {
          if ( !*(_BYTE *)(CurrentNumaNode + 196) )
          {
            v18 = v9 + *a2;
            v57 = v9;
            v19 = ~HIDWORD(Next->Next) & (HIDWORD(Next->Next) + v9);
            v62 = v19;
            SpinLock = (PKSPIN_LOCK)&Next[5];
            v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
            if ( ((__int64)Next->Next & 0x20000) == 0 )
              LODWORD(Next->Next) |= 0x20000u;
            Pattern = CcDetermineReadPattern(Next, a2);
            v22 = Pattern;
            if ( Pattern )
            {
              if ( Pattern > 0 )
              {
                if ( Pattern > 2 )
                {
                  v23 = (int)a2;
                  if ( Pattern != 3 || (v58 = 2LL * *a2 - (unsigned __int64)Next[2].Next, v58 < 0) )
                  {
                    v53 = 0;
                    goto LABEL_69;
                  }
                  v24 = (v58 & 0xFFF) + v68;
                  LODWORD(v58) = v58 & 0xFFFFF000;
                  v68 = v24;
                  *((_QWORD *)&Next[3].Next + 1) = v58;
                  v25 = (v24 + 4095) & 0xFFFFF000;
                  goto LABEL_34;
                }
                v26 = (signed __int64)Next[4].Next;
                if ( v18 + v57 + (unsigned int)(2 * v19) >= v26 )
                {
                  v59 = Next[4].Next;
                  *((_QWORD *)&Next[3].Next + 1) = v18 & 0xFFFFFFFFFFFFF000uLL;
                  if ( (__int64)(v18 & 0xFFFFFFFFFFFFF000uLL) >= v26 )
                    LODWORD(v59) = ~(v19 - 1) & (v19 + v18 - 1);
                  ++LODWORD(Next[3].Next);
                  v27 = v19;
                  v28 = (unsigned int)Next[3].Next;
                  if ( Pattern == 1 || v28 >= 3 )
                    v27 = 2 * v19;
                  v25 = (_DWORD)v59 - *((_DWORD *)&Next[3].Next + 2) + v27;
                  if ( v28 >= 3 )
                  {
                    v29 = *((unsigned int *)&Next[5].Next + 3);
                    if ( (_DWORD)v29 )
                    {
                      v30 = v29 * (unsigned __int64)(v68 * v28) / 0x64;
                      if ( v30 > 0xFFFFFFFF )
                        v30 = 0xFFFFFFFFLL;
                      if ( v30 > v25 )
                        v25 = v30;
                    }
                  }
LABEL_34:
                  HIDWORD(Next[3].Next) = v25;
                  v31 = (int)Next->Next;
                  if ( ((__int64)Next->Next & 0x10000) == 0 )
                  {
                    LODWORD(Next->Next) = v31 | 0x10000;
                    PagePriorityThread = PsGetPagePriorityThread(KeGetCurrentThread());
                    LODWORD(Next->Next) = v33 ^ (v33 ^ (PagePriorityThread << 18)) & 0x1C0000;
                    KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu && (unsigned __int8)v20 <= 0xFu && CurrentIrql >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          SchedulerAssist = CurrentPrcb->SchedulerAssist;
                          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                          v38 = (v37 & SchedulerAssist[5]) == 0;
                          SchedulerAssist[5] &= v37;
                          if ( v38 )
                            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                      }
                    }
                    __writecr8(v20);
                    if ( (int)CcAllocateWorkQueueEntry(v63, v64, v61, &v60) < 0 )
                    {
                      v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Next[5]);
                      LODWORD(Next->Next) &= ~0x10000u;
                      v50 = v49;
                      KxReleaseSpinLock((PKSPIN_LOCK)&Next[5]);
                      LOBYTE(IoPriorityThread) = KiIrqlFlags;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          LOBYTE(IoPriorityThread) = KeGetCurrentIrql();
                          if ( (unsigned __int8)IoPriorityThread <= 0xFu
                            && (unsigned __int8)v50 <= 0xFu
                            && (unsigned __int8)IoPriorityThread >= 2u )
                          {
                            v51 = KeGetCurrentPrcb();
                            IoPriorityThread = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
                            v52 = v51->SchedulerAssist;
                            v38 = (IoPriorityThread & v52[5]) == 0;
                            v52[5] &= IoPriorityThread;
                            if ( v38 )
                              LOBYTE(IoPriorityThread) = KiRemoveSystemWorkPriorityKick(v51);
                          }
                        }
                      }
                      __writecr8(v50);
                    }
                    else
                    {
                      v41 = v60;
                      if ( (xmmword_140D06910 & 0x20000) != 0 )
                        CcPerfLogScheduleReadAhead((_DWORD)v60, (_DWORD)Object, (_DWORD)a2, v68, v62, v22, 1);
                      if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                        CcChargeThreadForReadAhead((_DWORD)Object, v39, v40, v22, v69);
                      ObfReferenceObjectWithTag(Object, 0x746C6644u);
                      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v63 + 704), &LockHandle);
                      ++*(_DWORD *)(v11 + 4);
                      ++*(_DWORD *)(v11 + 536);
                      *(_DWORD *)(v11 + 152) |= 0x4000u;
                      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                      OldIrql = LockHandle.OldIrql;
                      if ( KiIrqlFlags )
                      {
                        if ( (KiIrqlFlags & 1) != 0 )
                        {
                          v43 = KeGetCurrentIrql();
                          if ( v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
                          {
                            v44 = KeGetCurrentPrcb();
                            v45 = v44->SchedulerAssist;
                            v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                            v38 = (v46 & v45[5]) == 0;
                            v45[5] &= v46;
                            if ( v38 )
                              KiRemoveSystemWorkPriorityKick(v44);
                            v41 = v60;
                          }
                        }
                      }
                      __writecr8(OldIrql);
                      Next[7].Next = v41;
                      LOBYTE(v41[8].Next) = 1;
                      v41[1].Next = Object;
                      *((_QWORD *)&v41[1].Next + 1) = 0LL;
                      IoReferenceIoAttributionFromThread(v69, &v41[1].Next + 1);
                      LOBYTE(IoPriorityThread) = CcPostWorkQueue(v41, v61 + 88, v47, v48);
                    }
                    return IoPriorityThread;
                  }
                  v53 = 1;
                  if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
                  {
                    CcChargeThreadForReadAhead((_DWORD)Object, v31, v25, v22, v69);
                    v53 = 1;
                  }
                  goto LABEL_68;
                }
              }
            }
            else
            {
              LODWORD(Next[3].Next) = 0;
              Next[4].Next = 0LL;
              *((_QWORD *)&Next[4].Next + 1) = 0LL;
            }
            v53 = 0;
LABEL_68:
            v23 = (int)a2;
LABEL_69:
            if ( (xmmword_140D06910 & 0x20000) != 0 )
              CcPerfLogScheduleReadAhead(0, (_DWORD)Object, v23, v68, v19, v22, v53);
            KxReleaseSpinLock(SpinLock);
            LOBYTE(IoPriorityThread) = KiIrqlFlags;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                LOBYTE(IoPriorityThread) = KeGetCurrentIrql();
                if ( (unsigned __int8)IoPriorityThread <= 0xFu
                  && (unsigned __int8)v20 <= 0xFu
                  && (unsigned __int8)IoPriorityThread >= 2u )
                {
                  v54 = KeGetCurrentPrcb();
                  v55 = v54->SchedulerAssist;
                  IoPriorityThread = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                  v38 = (IoPriorityThread & v55[5]) == 0;
                  v55[5] &= IoPriorityThread;
                  if ( v38 )
                    LOBYTE(IoPriorityThread) = KiRemoveSystemWorkPriorityKick(v54);
                }
              }
            }
            __writecr8(v20);
          }
        }
      }
    }
  }
  return IoPriorityThread;
}
