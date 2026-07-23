/*
 * XREFs of MiZeroLargePages @ 0x14023B690
 * Callers:
 *     MiZeroLargePageThread @ 0x1403AB420 (MiZeroLargePageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x14023D1E0 (MiMapPagesToZero.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     RtlpTreeDoubleRotateNodes @ 0x14024AC40 (RtlpTreeDoubleRotateNodes.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiSetIdealProcessorThread @ 0x1402DF534 (MiSetIdealProcessorThread.c)
 *     MiReferencePageRuns @ 0x14032BE40 (MiReferencePageRuns.c)
 *     MiGetHugePageToZero @ 0x140331E40 (MiGetHugePageToZero.c)
 *     MiReassessZeroThreads @ 0x140352B6C (MiReassessZeroThreads.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkNodeLargePages @ 0x1403F1438 (MiUnlinkNodeLargePages.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiZeroLargePages(unsigned __int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r12
  struct _KTHREAD *v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // r11
  unsigned int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  volatile __int32 *v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r13
  int v17; // r14d
  __int64 v18; // r15
  bool v19; // zf
  unsigned __int64 v20; // rbx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  int v23; // eax
  __int64 v24; // rdi
  unsigned __int8 CurrentIrql; // r10
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int64 v32; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  _DWORD *v37; // r9
  struct _KTHREAD *v38; // rbx
  __int64 result; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rbx
  int HugePageToZero; // eax
  __int64 v44; // r15
  int v45; // r12d
  int v46; // r14d
  unsigned int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // rcx
  ULONG_PTR v50; // rsi
  int v51; // ebx
  unsigned int v52; // ebx
  char v53; // cl
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r10
  int v59; // eax
  volatile signed __int32 *v60; // r14
  struct _KTHREAD *v61; // rdi
  char v62; // al
  struct _KPRCB *v63; // rbx
  _DWORD *v64; // rcx
  int v65; // eax
  _DWORD *v66; // rcx
  int v67; // eax
  __int64 v68; // rdx
  unsigned __int32 v69; // eax
  unsigned __int64 v70; // rdx
  bool v71; // r10
  __int64 v72; // rdi
  char v73; // cl
  unsigned __int8 i; // bl
  unsigned int v75; // r9d
  __int64 v76; // r10
  unsigned __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rdx
  struct _KPRCB *v82; // rcx
  _DWORD *v83; // rdx
  int v84; // eax
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  volatile signed __int32 *v91; // roff
  signed __int32 v92[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v93; // [rsp+50h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-90h] BYREF
  volatile signed __int32 *v95; // [rsp+70h] [rbp-78h]
  __int64 v96; // [rsp+78h] [rbp-70h]
  unsigned __int64 v97; // [rsp+80h] [rbp-68h]
  __int64 v98; // [rsp+88h] [rbp-60h]
  __int64 v99; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  _GROUP_AFFINITY Affinity; // [rsp+A0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v104; // [rsp+F8h] [rbp+10h]
  int v105; // [rsp+100h] [rbp+18h] BYREF
  unsigned int v106; // [rsp+108h] [rbp+20h]

  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v6 = KeSetActualBasePriorityThread((__int64)v5, 0LL, a3, a4);
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 232);
  v106 = v6;
  v104 = 0;
  v99 = v9;
  v10 = *(_QWORD *)(v9 + 72);
  *(_QWORD *)(v4 + 272) = KeGetCurrentThread();
  v11 = *(unsigned int *)(v4 + 264);
  v96 = v10;
  *(_QWORD *)(*(_QWORD *)(v9 + 144) + 40 * v11 + 8) = v4;
  v12 = (volatile __int32 *)(*(_QWORD *)(v9 + 144) + 40LL * *(unsigned int *)(v4 + 264));
  _InterlockedExchange(v12, 0);
  v95 = v12;
  v13 = __rdtsc();
  _InterlockedOr(v92, 0);
  while ( 2 )
  {
    v97 = v13;
LABEL_3:
    v14 = (unsigned __int64)&MiFiveSeconds;
    v15 = 2LL;
LABEL_4:
    v16 = *(_QWORD *)(v4 + 232);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v17 = 0;
    v18 = *(_QWORD *)(v16 + 72);
    if ( *(_DWORD *)(v16 + 136) )
    {
      v24 = *(_QWORD *)(v16 + 144) + 40LL * *(unsigned int *)(v4 + 264);
      if ( (*(_BYTE *)(v24 + 4) & 1) != 0 )
      {
        while ( 1 )
        {
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v16 + 24);
          LockHandle.LockQueue.Next = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
          }
          LockHandle.OldIrql = CurrentIrql;
          KxAcquireQueuedSpinLock(&LockHandle);
          if ( (*(_BYTE *)(v24 + 4) & 2) != 0 || (*(_BYTE *)(v24 + 4) & 1) == 0 )
            break;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v28 = KeGetCurrentIrql();
              if ( v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v30 = CurrentPrcb->SchedulerAssist;
                v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v19 = (v31 & v30[5]) == 0;
                v30[5] &= v31;
                if ( v19 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          v17 = 1;
          KeWaitForSingleObject((PVOID)(v24 + 16), Executive, 0, 0, 0LL);
          v15 = 2LL;
          if ( (*(_BYTE *)(v24 + 4) & 1) == 0 )
            goto LABEL_40;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v32 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && LockHandle.OldIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v19 = (v36 & v35[5]) == 0;
              v15 = (unsigned int)v36 & v35[5];
              v35[5] = v15;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
        }
        __writecr8(v32);
LABEL_40:
        v12 = v95;
        goto LABEL_41;
      }
      while ( *(_DWORD *)(v18 + 6340) || dword_140C4ECD8 )
      {
        if ( !KeWaitForSingleObject((PVOID)(v18 + 104), WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
        {
          KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12LL, v15, v37);
          goto LABEL_46;
        }
LABEL_41:
        v14 = (unsigned __int64)&MiFiveSeconds;
      }
      v8 = v104;
    }
    else if ( !*(_BYTE *)(v4 + 300) )
    {
      *(_BYTE *)(v4 + 300) = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 24), &LockHandle);
      v19 = (*(_DWORD *)(v16 + 152))-- == 1;
      if ( v19 )
        *(_DWORD *)(v16 + 136) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v20 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && LockHandle.OldIrql <= 0xFu && v21 >= 2u )
          {
            v22 = KeGetCurrentPrcb();
            v14 = (unsigned __int64)v22->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v19 = (v23 & *(_DWORD *)(v14 + 20)) == 0;
            v15 = (unsigned int)v23 & *(_DWORD *)(v14 + 20);
            *(_DWORD *)(v14 + 20) = v15;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v22);
          }
        }
      }
      __writecr8(v20);
    }
    if ( !*(_QWORD *)(v4 + 240) )
    {
      v40 = MiReferencePageRuns(*(_QWORD *)(v16 + 72), 0LL);
      if ( !v40 )
      {
LABEL_46:
        ++dword_140C2A008;
        goto LABEL_47;
      }
      *(_QWORD *)(v4 + 240) = v40;
    }
    if ( v17 )
    {
      _InterlockedExchange(v12, 0);
      v97 = __rdtsc();
      _InterlockedOr(v92, 0);
    }
    v41 = v99;
    ++*(_DWORD *)(v99 + 288);
    if ( !v8 && *(_BYTE *)(v4 + 80) )
    {
      v42 = v96;
      HugePageToZero = MiGetHugePageToZero(v96, v4, v15, v14);
      goto LABEL_191;
    }
    v14 = (unsigned int)(*(_DWORD *)(v4 + 260) >> byte_140C4DC8C);
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_BYTE *)(v4 + 69) = 0;
    if ( v8 < 3 )
    {
      v42 = v96;
      v44 = MiUnlinkNodeLargePages(v96, v8, 1, v14, 4, 1, v4 + 248, 64, v4);
      goto LABEL_186;
    }
    v45 = 0;
    LOBYTE(v7) = 17;
    v46 = 0;
    v93 = v7;
    v47 = *(_DWORD *)(a1 + 260);
    v48 = v47;
    v15 = *(_QWORD *)(v96 + 2184);
    v98 = v15;
    while ( 1 )
    {
      v49 = 5LL * (unsigned int)v48;
      v50 = *(_QWORD *)(v15 + 40LL * (unsigned int)v48 + 16);
      if ( v50 == 0xFFFFFFFFFLL )
        goto LABEL_64;
      v44 = 48 * v50 - 0x58000000000LL;
      if ( !v46 )
      {
        v49 = 0x8000000000000000uLL;
        if ( *(__int64 *)(v44 + 24) < 0 )
        {
          v45 = 1;
LABEL_64:
          v44 = 0LL;
LABEL_65:
          v48 = dword_140C4DC80 & (*(_DWORD *)(a1 + 260) + 1) | *(_DWORD *)(a1 + 260) & (unsigned int)~dword_140C4DC80;
          *(_DWORD *)(a1 + 260) = v48;
          goto LABEL_66;
        }
      }
      if ( 48 * v50 == 0x58000000000LL )
        goto LABEL_65;
      v7 = KeGetCurrentIrql();
      v93 = v7;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v7 <= 0xFu )
      {
        v49 = (unsigned int)(unsigned __int8)v7 + 1;
        v14 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        v48 = (-1LL << ((unsigned __int8)v7 + 1)) & 4;
        v15 = (unsigned int)v48 | *(_DWORD *)(v14 + 20);
        *(_DWORD *)(v14 + 20) = v15;
      }
      v52 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v52 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v49, v48, v15, v14) )
          {
            HvlNotifyLongSpinWait(v52);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v44 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) );
        v7 = v93;
      }
      if ( v50 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v50 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v53 = *(_BYTE *)(v44 + 34);
        if ( (v53 & 7) == 1 )
        {
          v48 = 0x1000000000LL;
          if ( (*(_QWORD *)(v44 + 40) & 0x1000000000LL) == 0 )
          {
            if ( (v53 & 8) == 0 )
              break;
            _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v54 = KeGetCurrentIrql();
                if ( v54 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v54 >= 2u )
                {
                  v55 = KeGetCurrentPrcb();
                  v14 = (unsigned __int64)v55->SchedulerAssist;
                  v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
                  v19 = (v56 & *(_DWORD *)(v14 + 20)) == 0;
                  *(_DWORD *)(v14 + 20) &= v56;
                  if ( v19 )
                  {
                    KiRemoveSystemWorkPriorityKick(v55);
                    v7 = v93;
                  }
                }
              }
            }
            __writecr8((unsigned __int8)v7);
            goto LABEL_64;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v57 = KeGetCurrentIrql();
          if ( v57 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v57 >= 2u )
          {
            v58 = KeGetCurrentPrcb();
            v14 = (unsigned __int64)v58->SchedulerAssist;
            v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v19 = (v59 & *(_DWORD *)(v14 + 20)) == 0;
            *(_DWORD *)(v14 + 20) &= v59;
            if ( v19 )
            {
              KiRemoveSystemWorkPriorityKick(v58);
              v7 = v93;
            }
          }
        }
      }
      __writecr8((unsigned __int8)v7);
      v44 = 0LL;
      v48 = *(unsigned int *)(a1 + 260);
LABEL_66:
      v15 = v98;
      if ( (_DWORD)v48 == v47 )
      {
        if ( !v45 )
          break;
        if ( (unsigned int)++v46 >= 2 )
          break;
      }
    }
    if ( v44 )
    {
      if ( *(_WORD *)(v44 + 32) )
        KeBugCheckEx(0x4Eu, 0x8DuLL, v50, *(unsigned int *)(v44 + 32), *(_QWORD *)(v44 + 8));
      v4 = a1;
      if ( (*(_BYTE *)(v44 + 34) & 8) != 0 )
      {
        v51 = 0;
        goto LABEL_177;
      }
      *(_QWORD *)(a1 + 24) = v44;
      v60 = &dword_140C4E370;
      v61 = KeGetCurrentThread();
      *(_QWORD *)(a1 + 56) = v61;
      v62 = *(_BYTE *)(v44 + 34) | 8;
      *(_QWORD *)(v44 + 16) = a1;
      *(_BYTE *)(v44 + 34) = v62;
      v19 = *(_BYTE *)(a1 + 71) == 0;
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( !v19 )
        v60 = &dword_140C4E360;
      *(_WORD *)(a1 + 69) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v48) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v60, v48);
      }
      else
      {
        v63 = KeGetCurrentPrcb();
        v105 = 0;
        v64 = v63->SchedulerAssist;
        if ( v64 )
        {
          if ( v63->NestingLevel <= 1u )
          {
            v65 = v64[6];
            v64[6] = v65 + 1;
            if ( v65 == -1 )
              KiRemoveSystemWorkPriorityKick(v63);
          }
        }
        if ( _interlockedbittestandset(v60, 0x1Fu) )
        {
          v66 = v63->SchedulerAssist;
          if ( v66 )
          {
            if ( v63->NestingLevel <= 1u )
            {
              v67 = v66[6] - 1;
              v66[6] = v67;
              if ( !v67 )
                KiRemoveSystemWorkPriorityKick(v63);
            }
          }
          LOBYTE(v48) = -1;
          v105 = ExpWaitForSpinLockExclusiveAndAcquire(v60, v48);
        }
        v68 = *(unsigned int *)v60;
        if ( (*v60 & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v68 & 0x40000000) == 0 )
            {
              v69 = _InterlockedCompareExchange(v60, v68 | 0x40000000, v68);
              v19 = (_DWORD)v68 == v69;
              v68 = v69;
              if ( !v19 )
                continue;
            }
            KeYieldProcessorEx(&v105, v68);
            v68 = *(unsigned int *)v60;
          }
          while ( (v68 & 0xBFFFFFFF) != 0x80000000 );
        }
      }
      if ( *(_BYTE *)(a1 + 71) )
      {
        v81 = (_QWORD *)qword_140C4E368;
        LOBYTE(v15) = 0;
        if ( qword_140C4E368 )
        {
          while ( 1 )
          {
            while ( (unsigned __int64)v61 < v81[7] )
            {
              if ( !*v81 )
                goto LABEL_168;
              v81 = (_QWORD *)*v81;
            }
            if ( !v81[1] )
              break;
            v81 = (_QWORD *)v81[1];
          }
          LOBYTE(v15) = 1;
        }
LABEL_168:
        RtlAvlInsertNodeEx(&qword_140C4E368, v81, v15, a1);
        goto LABEL_169;
      }
      v70 = qword_140C4E378;
      v71 = 0;
      if ( qword_140C4E378 )
      {
        while ( 1 )
        {
          while ( a1 < v70 )
          {
            if ( !*(_QWORD *)v70 )
              goto LABEL_135;
            v70 = *(_QWORD *)v70;
          }
          if ( !*(_QWORD *)(v70 + 8) )
            break;
          v70 = *(_QWORD *)(v70 + 8);
        }
        v71 = 1;
      }
LABEL_135:
      *(_QWORD *)a1 = 0LL;
      v72 = a1;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = v70;
      if ( v70 )
      {
        v14 = v70 + 16;
        *(_QWORD *)(v70 + 8LL * v71) = a1;
        v15 = *(unsigned __int8 *)(v70 + 16);
        v73 = (-1 - 2 * v71) & 3;
        for ( i = v15 & 3; (v15 & 3) == 0; i = v15 & 3 )
        {
          v72 = v70;
          LOBYTE(v15) = v73 | v15 & 0xFC;
          *(_BYTE *)v14 = v15;
          v70 = *(_QWORD *)v14 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v70 )
            goto LABEL_169;
          v14 = v70 + 16;
          v15 = *(unsigned __int8 *)(v70 + 16);
          v71 = *(_QWORD *)v70 != v72;
          v73 = (-1 - 2 * v71) & 3;
        }
        if ( i != v73 )
        {
          *(_BYTE *)(v70 + 16) &= 0xFCu;
          goto LABEL_169;
        }
        if ( (*(_BYTE *)(v72 + 16) & 3) != i )
        {
          v79 = RtlpTreeDoubleRotateNodes(&qword_140C4E378, v70, v72, v71);
          *(_BYTE *)(v80 + 16) &= 0xFCu;
          v14 = *(unsigned __int8 *)(v72 + 16);
          LOBYTE(v14) = v14 & 0xFC;
          *(_BYTE *)(v72 + 16) = v14;
          v15 = *(unsigned __int8 *)(v79 + 16);
          if ( i == (*(_BYTE *)(v79 + 16) & 3) )
          {
            *(_BYTE *)(v80 + 16) ^= (*(_BYTE *)(v80 + 16) ^ i ^ 0xFE) & 3;
            *(_BYTE *)(v79 + 16) &= 0xFCu;
          }
          else
          {
            v15 = ((unsigned __int8)v15 ^ 0xFE) & 3;
            if ( i == (_DWORD)v15 )
              *(_BYTE *)(v72 + 16) = v14 | i;
            *(_BYTE *)(v79 + 16) &= 0xFCu;
          }
          goto LABEL_169;
        }
        v75 = !v71;
        if ( (*(_QWORD *)(v72 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v70 )
        {
          v76 = v75;
          v14 = v70 + 8 * (v75 ^ 1LL);
          if ( *(_QWORD *)v14 == v72 )
          {
            v77 = *(_QWORD *)(v70 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v77 )
            {
              if ( *(_QWORD *)(v77 + 8) == v70 )
              {
                *(_QWORD *)(v77 + 8) = v72;
              }
              else
              {
                if ( *(_QWORD *)v77 != v70 )
                  goto LABEL_202;
                *(_QWORD *)v77 = v72;
              }
LABEL_152:
              *(_QWORD *)(v72 + 16) = v77 | *(_DWORD *)(v72 + 16) & 3;
              v15 = *(_QWORD *)(v72 + 8 * v76);
              if ( v15 )
              {
                v78 = *(_QWORD *)(v15 + 16);
                if ( (v78 & 0xFFFFFFFFFFFFFFFCuLL) != v72 )
                  goto LABEL_202;
                *(_QWORD *)(v15 + 16) = v70 | v78 & 3;
              }
              *(_QWORD *)v14 = v15;
              *(_QWORD *)(v72 + 8 * v76) = v70;
              *(_QWORD *)(v70 + 16) = v72 | *(_DWORD *)(v70 + 16) & 3;
              *(_BYTE *)(v72 + 16) &= 0xFCu;
              *(_BYTE *)(v70 + 16) &= 0xFCu;
              goto LABEL_169;
            }
            if ( qword_140C4E378 == v70 )
            {
              qword_140C4E378 = v72;
              goto LABEL_152;
            }
          }
        }
LABEL_202:
        __fastfail(0x1Du);
      }
      qword_140C4E378 = a1;
LABEL_169:
      *(_BYTE *)(a1 + 68) = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v60, retaddr);
      else
        *v60 = 0;
      v82 = KeGetCurrentPrcb();
      v83 = v82->SchedulerAssist;
      if ( v83 )
      {
        if ( v82->NestingLevel <= 1u )
        {
          v84 = v83[6] - 1;
          v83[6] = v84;
          if ( !v84 )
            KiRemoveSystemWorkPriorityKick(v82);
        }
      }
      v7 = v93;
      v51 = 1;
LABEL_177:
      _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v85 = KeGetCurrentIrql();
          if ( v85 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v85 >= 2u )
          {
            v86 = KeGetCurrentPrcb();
            v14 = (unsigned __int64)v86->SchedulerAssist;
            v87 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v19 = (v87 & *(_DWORD *)(v14 + 20)) == 0;
            v15 = (unsigned int)v87 & *(_DWORD *)(v14 + 20);
            *(_DWORD *)(v14 + 20) = v15;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v86);
          }
        }
      }
      __writecr8((unsigned __int8)v93);
      v8 = v104;
      if ( !v51 )
        goto LABEL_200;
      v42 = v96;
      v41 = v99;
LABEL_186:
      if ( !v44 )
        goto LABEL_200;
      if ( !*(_BYTE *)(v4 + 80) )
      {
        v88 = *((unsigned int *)MiSearchNumaNodeTable((v44 + 0x58000000000LL) / 48) + 2);
        if ( *(_DWORD *)(v4 + 268) != (_DWORD)v88 )
        {
          *(_DWORD *)(v4 + 268) = v88;
          Affinity = *(_GROUP_AFFINITY *)(4544 * v88 + *(_QWORD *)(v42 + 16) + 4472);
          MiSetIdealProcessorThread(&Affinity);
        }
      }
      HugePageToZero = MiMapPagesToZero(v4, v44, v8);
LABEL_191:
      if ( !HugePageToZero )
        goto LABEL_200;
      MiZeroPage(v4, v42);
      if ( v8 == 3 )
      {
        v89 = 1LL;
      }
      else
      {
        v90 = v8;
        if ( !v8 )
          v90 = 1LL;
        v89 = MiLargePageSizes[v90];
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 40), v89);
      v12 = v95;
      v91 = v95;
      _InterlockedExchangeAdd(v95, v89);
      v14 = (unsigned __int64)&MiFiveSeconds;
      v15 = 2LL;
      if ( *v91 >= 0x1000u )
      {
        _InterlockedOr(v92, 0);
        MiReassessZeroThreads(v4, __rdtsc() - v97, 2LL, &MiFiveSeconds);
        _InterlockedExchange(v12, 0);
        v13 = __rdtsc();
        _InterlockedOr(v92, 0);
        continue;
      }
      goto LABEL_4;
    }
    break;
  }
  v8 = v104;
LABEL_200:
  if ( v8 < 3 )
  {
    v4 = a1;
    ++v8;
    v12 = v95;
    v104 = v8;
    goto LABEL_3;
  }
LABEL_47:
  v38 = CurrentThread;
  result = KeSetActualBasePriorityThread((__int64)CurrentThread, v106, v15, (_DWORD *)v14);
  *((_DWORD *)&v38[1].SwapListEntry + 3) &= ~0x400u;
  return result;
}
