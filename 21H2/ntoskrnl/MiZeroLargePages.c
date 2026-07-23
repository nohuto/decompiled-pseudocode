/*
 * XREFs of MiZeroLargePages @ 0x1402D6D70
 * Callers:
 *     MiZeroLargePageThread @ 0x1403B3E80 (MiZeroLargePageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReassessZeroThreads @ 0x1402397D4 (MiReassessZeroThreads.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiGetHugePageToZero @ 0x1402D4500 (MiGetHugePageToZero.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiMapPagesToZero @ 0x1402D88C0 (MiMapPagesToZero.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     RtlpTreeDoubleRotateNodes @ 0x1403231A0 (RtlpTreeDoubleRotateNodes.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlinkNodeLargePages @ 0x1403F70E8 (MiUnlinkNodeLargePages.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiZeroLargePages(unsigned __int64 a1)
{
  __int64 v1; // r12
  struct _KTHREAD *v2; // rcx
  int v3; // eax
  __int64 v4; // r11
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile __int32 *v9; // rsi
  unsigned __int64 v10; // rax
  LARGE_INTEGER *SchedulerAssist; // r9
  __int64 v12; // r8
  __int64 v13; // r13
  int v14; // r14d
  __int64 v15; // r15
  bool v16; // zf
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  int v20; // eax
  __int64 v21; // rdi
  unsigned __int8 CurrentIrql; // r10
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v24; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  struct _KTHREAD *v33; // rbx
  __int64 result; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rbx
  int HugePageToZero; // eax
  unsigned __int64 v39; // r9
  __int64 v40; // r15
  int v41; // r12d
  int v42; // r14d
  unsigned int v43; // r13d
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  ULONG_PTR v47; // rsi
  int v48; // ebx
  unsigned int v49; // ebx
  char v50; // cl
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  int v56; // eax
  volatile signed __int32 *v57; // r14
  struct _KTHREAD *v58; // rdi
  char v59; // al
  struct _KPRCB *v60; // rbx
  _DWORD *v61; // rcx
  int v62; // eax
  _DWORD *v63; // rcx
  int v64; // eax
  signed __int32 v65; // edx
  signed __int32 v66; // eax
  unsigned __int64 v67; // rdx
  bool v68; // r10
  __int64 v69; // rdi
  _BYTE *v70; // r9
  char v71; // r8
  char v72; // cl
  char i; // bl
  unsigned int v74; // r9d
  __int64 v75; // r10
  _QWORD *v76; // r9
  unsigned __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  char v82; // r9
  _QWORD *v83; // rdx
  struct _KPRCB *v84; // rcx
  _DWORD *v85; // rdx
  int v86; // eax
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  volatile signed __int32 *v94; // roff
  signed __int32 v95[8]; // [rsp+0h] [rbp-E8h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  __int64 v97; // [rsp+50h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-90h] BYREF
  volatile signed __int32 *v99; // [rsp+70h] [rbp-78h]
  __int64 v100; // [rsp+78h] [rbp-70h]
  unsigned __int64 v101; // [rsp+80h] [rbp-68h]
  __int64 v102; // [rsp+88h] [rbp-60h]
  __int64 v103; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  _GROUP_AFFINITY Affinity; // [rsp+A0h] [rbp-48h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v108; // [rsp+F8h] [rbp+10h]
  int v109; // [rsp+100h] [rbp+18h] BYREF
  int v110; // [rsp+108h] [rbp+20h]

  v1 = a1;
  CurrentThread = KeGetCurrentThread();
  v2 = CurrentThread;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x400u;
  v3 = KeSetActualBasePriorityThread((__int64)v2, 0);
  v5 = 0;
  v6 = *(_QWORD *)(v1 + 232);
  v110 = v3;
  v108 = 0;
  v103 = v6;
  v7 = *(_QWORD *)(v6 + 72);
  *(_QWORD *)(v1 + 272) = KeGetCurrentThread();
  v8 = *(unsigned int *)(v1 + 264);
  v100 = v7;
  *(_QWORD *)(*(_QWORD *)(v6 + 144) + 40 * v8 + 8) = v1;
  v9 = (volatile __int32 *)(*(_QWORD *)(v6 + 144) + 40LL * *(unsigned int *)(v1 + 264));
  _InterlockedExchange(v9, 0);
  v99 = v9;
  v10 = __rdtsc();
  _InterlockedOr(v95, 0);
  while ( 2 )
  {
    v101 = v10;
LABEL_3:
    SchedulerAssist = (LARGE_INTEGER *)&MiFiveSeconds;
    v12 = 2LL;
LABEL_4:
    v13 = *(_QWORD *)(v1 + 232);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v14 = 0;
    v15 = *(_QWORD *)(v13 + 72);
    if ( *(_DWORD *)(v13 + 136) )
    {
      v21 = *(_QWORD *)(v13 + 144) + 40LL * *(unsigned int *)(v1 + 264);
      if ( (*(_BYTE *)(v21 + 4) & 1) != 0 )
      {
        while ( 1 )
        {
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v13 + 24);
          LockHandle.LockQueue.Next = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = (LARGE_INTEGER *)KeGetCurrentPrcb()->SchedulerAssist;
            v12 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[2].HighPart;
            SchedulerAssist[2].HighPart = v12;
          }
          LockHandle.OldIrql = CurrentIrql;
          KxAcquireQueuedSpinLock(&LockHandle, v13 + 24, v12, SchedulerAssist);
          if ( (*(_BYTE *)(v21 + 4) & 2) != 0 || (*(_BYTE *)(v21 + 4) & 1) == 0 )
            break;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v24 = KeGetCurrentIrql();
              if ( v24 <= 0xFu && LockHandle.OldIrql <= 0xFu && v24 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v26 = CurrentPrcb->SchedulerAssist;
                v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v16 = (v27 & v26[5]) == 0;
                v26[5] &= v27;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          v14 = 1;
          KeWaitForSingleObject((PVOID)(v21 + 16), Executive, 0, 0, 0LL);
          v12 = 2LL;
          if ( (*(_BYTE *)(v21 + 4) & 1) == 0 )
            goto LABEL_40;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        v28 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v16 = (v32 & v31[5]) == 0;
              v12 = (unsigned int)v32 & v31[5];
              v31[5] = v12;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
        }
        __writecr8(v28);
LABEL_40:
        v9 = v99;
        goto LABEL_41;
      }
      while ( *(_DWORD *)(v15 + 6340) || dword_140C4EF18 )
      {
        if ( !KeWaitForSingleObject((PVOID)(v15 + 104), WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
        {
          KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 12);
          goto LABEL_46;
        }
LABEL_41:
        SchedulerAssist = (LARGE_INTEGER *)&MiFiveSeconds;
      }
      v5 = v108;
    }
    else if ( !*(_BYTE *)(v1 + 300) )
    {
      *(_BYTE *)(v1 + 300) = 1;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 24), &LockHandle);
      v16 = (*(_DWORD *)(v13 + 152))-- == 1;
      if ( v16 )
        *(_DWORD *)(v13 + 136) = 1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v17 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v18 = KeGetCurrentIrql();
          if ( v18 <= 0xFu && LockHandle.OldIrql <= 0xFu && v18 >= 2u )
          {
            v19 = KeGetCurrentPrcb();
            SchedulerAssist = (LARGE_INTEGER *)v19->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v16 = (v20 & SchedulerAssist[2].HighPart) == 0;
            v12 = (unsigned int)v20 & SchedulerAssist[2].HighPart;
            SchedulerAssist[2].HighPart = v12;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v19);
          }
        }
      }
      __writecr8(v17);
    }
    if ( !*(_QWORD *)(v1 + 240) )
    {
      v35 = MiReferencePageRuns(*(_QWORD *)(v13 + 72), 0, v12, SchedulerAssist);
      if ( !v35 )
      {
LABEL_46:
        ++dword_140C2A2A8;
        goto LABEL_47;
      }
      *(_QWORD *)(v1 + 240) = v35;
    }
    if ( v14 )
    {
      _InterlockedExchange(v9, 0);
      v101 = __rdtsc();
      _InterlockedOr(v95, 0);
    }
    v36 = v103;
    ++*(_DWORD *)(v103 + 288);
    if ( !v5 && *(_BYTE *)(v1 + 80) )
    {
      v37 = v100;
      HugePageToZero = MiGetHugePageToZero(v100, v1);
      goto LABEL_191;
    }
    v39 = (unsigned int)(*(_DWORD *)(v1 + 260) >> byte_140C4DECC);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_BYTE *)(v1 + 69) = 0;
    if ( v5 < 3 )
    {
      v37 = v100;
      v40 = MiUnlinkNodeLargePages(v100, v5, 1, v39, 4, 1, v1 + 248, 64, v1);
      goto LABEL_186;
    }
    v41 = 0;
    LOBYTE(v4) = 17;
    v42 = 0;
    v97 = v4;
    v43 = *(_DWORD *)(a1 + 260);
    v44 = v43;
    v45 = *(_QWORD *)(v100 + 2184);
    v102 = v45;
    while ( 1 )
    {
      v46 = 5LL * (unsigned int)v44;
      v47 = *(_QWORD *)(v45 + 40LL * (unsigned int)v44 + 16);
      if ( v47 == 0xFFFFFFFFFLL )
        goto LABEL_64;
      v40 = 48 * v47 - 0x58000000000LL;
      if ( !v42 )
      {
        v46 = 0x8000000000000000uLL;
        if ( *(__int64 *)(v40 + 24) < 0 )
        {
          v41 = 1;
LABEL_64:
          v40 = 0LL;
LABEL_65:
          v44 = dword_140C4DEC0 & (*(_DWORD *)(a1 + 260) + 1) | *(_DWORD *)(a1 + 260) & (unsigned int)~dword_140C4DEC0;
          *(_DWORD *)(a1 + 260) = v44;
          goto LABEL_66;
        }
      }
      if ( 48 * v47 == 0x58000000000LL )
        goto LABEL_65;
      v4 = KeGetCurrentIrql();
      v97 = v4;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v4 <= 0xFu )
      {
        v46 = (unsigned int)(unsigned __int8)v4 + 1;
        v39 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        v44 = (-1LL << ((unsigned __int8)v4 + 1)) & 4;
        v45 = (unsigned int)v44 | *(_DWORD *)(v39 + 20);
        *(_DWORD *)(v39 + 20) = v45;
      }
      v49 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v49 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v46, v44, v45, v39, Timeout) )
          {
            HvlNotifyLongSpinWait(v49);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(v40 + 24) < 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
        v4 = v97;
      }
      if ( v47 <= 0xFFFFFFFFFLL && (*(_QWORD *)(48 * v47 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v50 = *(_BYTE *)(v40 + 34);
        if ( (v50 & 7) == 1 )
        {
          v44 = 0x1000000000LL;
          if ( (*(_QWORD *)(v40 + 40) & 0x1000000000LL) == 0 )
          {
            if ( (v50 & 8) == 0 )
              break;
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v51 = KeGetCurrentIrql();
                if ( v51 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v51 >= 2u )
                {
                  v52 = KeGetCurrentPrcb();
                  v39 = (unsigned __int64)v52->SchedulerAssist;
                  v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
                  v16 = (v53 & *(_DWORD *)(v39 + 20)) == 0;
                  *(_DWORD *)(v39 + 20) &= v53;
                  if ( v16 )
                  {
                    KiRemoveSystemWorkPriorityKick(v52);
                    v4 = v97;
                  }
                }
              }
            }
            __writecr8((unsigned __int8)v4);
            goto LABEL_64;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v54 = KeGetCurrentIrql();
          if ( v54 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v54 >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            v39 = (unsigned __int64)v55->SchedulerAssist;
            v56 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v16 = (v56 & *(_DWORD *)(v39 + 20)) == 0;
            *(_DWORD *)(v39 + 20) &= v56;
            if ( v16 )
            {
              KiRemoveSystemWorkPriorityKick(v55);
              v4 = v97;
            }
          }
        }
      }
      __writecr8((unsigned __int8)v4);
      v40 = 0LL;
      v44 = *(unsigned int *)(a1 + 260);
LABEL_66:
      v45 = v102;
      if ( (_DWORD)v44 == v43 )
      {
        if ( !v41 )
          break;
        if ( (unsigned int)++v42 >= 2 )
          break;
      }
    }
    if ( v40 )
    {
      if ( *(_WORD *)(v40 + 32) )
        KeBugCheckEx(0x4Eu, 0x8DuLL, v47, *(unsigned int *)(v40 + 32), *(_QWORD *)(v40 + 8));
      v1 = a1;
      if ( (*(_BYTE *)(v40 + 34) & 8) != 0 )
      {
        v48 = 0;
        goto LABEL_177;
      }
      *(_QWORD *)(a1 + 24) = v40;
      v57 = &dword_140C4E5B0;
      v58 = KeGetCurrentThread();
      *(_QWORD *)(a1 + 56) = v58;
      v59 = *(_BYTE *)(v40 + 34) | 8;
      *(_QWORD *)(v40 + 16) = a1;
      *(_BYTE *)(v40 + 34) = v59;
      v16 = *(_BYTE *)(a1 + 71) == 0;
      *(_QWORD *)(a1 + 32) = 0LL;
      if ( !v16 )
        v57 = &dword_140C4E5A0;
      *(_WORD *)(a1 + 69) = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v44) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v57, v44);
      }
      else
      {
        v60 = KeGetCurrentPrcb();
        v109 = 0;
        v61 = v60->SchedulerAssist;
        if ( v61 )
        {
          if ( v60->NestingLevel <= 1u )
          {
            v62 = v61[6];
            v61[6] = v62 + 1;
            if ( v62 == -1 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
        if ( _interlockedbittestandset(v57, 0x1Fu) )
        {
          v63 = v60->SchedulerAssist;
          if ( v63 )
          {
            if ( v60->NestingLevel <= 1u )
            {
              v64 = v63[6] - 1;
              v63[6] = v64;
              if ( !v64 )
                KiRemoveSystemWorkPriorityKick(v60);
            }
          }
          LOBYTE(v44) = -1;
          v109 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v57, v44, v45, (_DWORD *)v39);
        }
        v65 = *v57;
        while ( (v65 & 0xBFFFFFFF) != 0x80000000 )
        {
          if ( (v65 & 0x40000000) == 0 )
          {
            v66 = _InterlockedCompareExchange(v57, v65 | 0x40000000, v65);
            v16 = v65 == v66;
            v65 = v66;
            if ( !v16 )
              continue;
          }
          KeYieldProcessorEx(&v109);
          v65 = *v57;
        }
      }
      if ( *(_BYTE *)(a1 + 71) )
      {
        v83 = (_QWORD *)qword_140C4E5A8;
        LOBYTE(v45) = 0;
        if ( qword_140C4E5A8 )
        {
          while ( 1 )
          {
            while ( (unsigned __int64)v58 < v83[7] )
            {
              if ( !*v83 )
                goto LABEL_168;
              v83 = (_QWORD *)*v83;
            }
            if ( !v83[1] )
              break;
            v83 = (_QWORD *)v83[1];
          }
          LOBYTE(v45) = 1;
        }
LABEL_168:
        RtlAvlInsertNodeEx(&qword_140C4E5A8, v83, v45, a1);
        goto LABEL_169;
      }
      v67 = qword_140C4E5B8;
      v68 = 0;
      if ( qword_140C4E5B8 )
      {
        while ( 1 )
        {
          while ( a1 < v67 )
          {
            if ( !*(_QWORD *)v67 )
              goto LABEL_135;
            v67 = *(_QWORD *)v67;
          }
          if ( !*(_QWORD *)(v67 + 8) )
            break;
          v67 = *(_QWORD *)(v67 + 8);
        }
        v68 = 1;
      }
LABEL_135:
      *(_QWORD *)a1 = 0LL;
      v69 = a1;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = v67;
      if ( v67 )
      {
        v70 = (_BYTE *)(v67 + 16);
        *(_QWORD *)(v67 + 8LL * v68) = a1;
        v71 = *(_BYTE *)(v67 + 16);
        v72 = (-1 - 2 * v68) & 3;
        for ( i = v71 & 3; (v71 & 3) == 0; i = v71 & 3 )
        {
          v69 = v67;
          *v70 = v72 | v71 & 0xFC;
          v67 = *(_QWORD *)v70 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v67 )
            goto LABEL_169;
          v70 = (_BYTE *)(v67 + 16);
          v71 = *(_BYTE *)(v67 + 16);
          v68 = *(_QWORD *)v67 != v69;
          v72 = (-1 - 2 * v68) & 3;
        }
        if ( i != v72 )
        {
          *(_BYTE *)(v67 + 16) &= 0xFCu;
          goto LABEL_169;
        }
        if ( (*(_BYTE *)(v69 + 16) & 3) != i )
        {
          v80 = RtlpTreeDoubleRotateNodes(&qword_140C4E5B8, v67, v69, v68);
          *(_BYTE *)(v81 + 16) &= 0xFCu;
          v82 = *(_BYTE *)(v69 + 16) & 0xFC;
          *(_BYTE *)(v69 + 16) = v82;
          if ( i == (*(_BYTE *)(v80 + 16) & 3) )
          {
            *(_BYTE *)(v81 + 16) ^= (*(_BYTE *)(v81 + 16) ^ i ^ 0xFE) & 3;
            *(_BYTE *)(v80 + 16) &= 0xFCu;
          }
          else
          {
            if ( i == ((*(_BYTE *)(v80 + 16) ^ 0xFE) & 3) )
              *(_BYTE *)(v69 + 16) = v82 | i;
            *(_BYTE *)(v80 + 16) &= 0xFCu;
          }
          goto LABEL_169;
        }
        v74 = !v68;
        if ( (*(_QWORD *)(v69 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v67 )
        {
          v75 = v74;
          v76 = (_QWORD *)(v67 + 8 * (v74 ^ 1LL));
          if ( *v76 == v69 )
          {
            v77 = *(_QWORD *)(v67 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v77 )
            {
              if ( *(_QWORD *)(v77 + 8) == v67 )
              {
                *(_QWORD *)(v77 + 8) = v69;
              }
              else
              {
                if ( *(_QWORD *)v77 != v67 )
                  goto LABEL_202;
                *(_QWORD *)v77 = v69;
              }
LABEL_152:
              *(_QWORD *)(v69 + 16) = v77 | *(_DWORD *)(v69 + 16) & 3;
              v78 = *(_QWORD *)(v69 + 8 * v75);
              if ( v78 )
              {
                v79 = *(_QWORD *)(v78 + 16);
                if ( (v79 & 0xFFFFFFFFFFFFFFFCuLL) != v69 )
                  goto LABEL_202;
                *(_QWORD *)(v78 + 16) = v67 | v79 & 3;
              }
              *v76 = v78;
              *(_QWORD *)(v69 + 8 * v75) = v67;
              *(_QWORD *)(v67 + 16) = v69 | *(_DWORD *)(v67 + 16) & 3;
              *(_BYTE *)(v69 + 16) &= 0xFCu;
              *(_BYTE *)(v67 + 16) &= 0xFCu;
              goto LABEL_169;
            }
            if ( qword_140C4E5B8 == v67 )
            {
              qword_140C4E5B8 = v69;
              goto LABEL_152;
            }
          }
        }
LABEL_202:
        __fastfail(0x1Du);
      }
      qword_140C4E5B8 = a1;
LABEL_169:
      *(_BYTE *)(a1 + 68) = 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v57, retaddr);
      else
        *v57 = 0;
      v84 = KeGetCurrentPrcb();
      v85 = v84->SchedulerAssist;
      if ( v85 )
      {
        if ( v84->NestingLevel <= 1u )
        {
          v86 = v85[6] - 1;
          v85[6] = v86;
          if ( !v86 )
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
      v4 = v97;
      v48 = 1;
LABEL_177:
      _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v87 = KeGetCurrentIrql();
          if ( v87 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v87 >= 2u )
          {
            v88 = KeGetCurrentPrcb();
            v89 = v88->SchedulerAssist;
            v90 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v16 = (v90 & v89[5]) == 0;
            v89[5] &= v90;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v88);
          }
        }
      }
      __writecr8((unsigned __int8)v97);
      v5 = v108;
      if ( !v48 )
        goto LABEL_200;
      v37 = v100;
      v36 = v103;
LABEL_186:
      if ( !v40 )
        goto LABEL_200;
      if ( !*(_BYTE *)(v1 + 80) )
      {
        v91 = *(unsigned int *)(MiSearchNumaNodeTable((v40 + 0x58000000000LL) / 48) + 8);
        if ( *(_DWORD *)(v1 + 268) != (_DWORD)v91 )
        {
          *(_DWORD *)(v1 + 268) = v91;
          Affinity = *(_GROUP_AFFINITY *)(4544 * v91 + *(_QWORD *)(v37 + 16) + 4472);
          MiSetIdealProcessorThread(&Affinity);
        }
      }
      HugePageToZero = MiMapPagesToZero(v1, v40, v5);
LABEL_191:
      if ( !HugePageToZero )
        goto LABEL_200;
      MiZeroPage(v1, v37);
      if ( v5 == 3 )
      {
        v92 = 1LL;
      }
      else
      {
        v93 = v5;
        if ( !v5 )
          v93 = 1LL;
        v92 = MiLargePageSizes[v93];
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v36 + 40), v92);
      v9 = v99;
      v94 = v99;
      _InterlockedExchangeAdd(v99, v92);
      SchedulerAssist = (LARGE_INTEGER *)&MiFiveSeconds;
      v12 = 2LL;
      if ( *v94 >= 0x1000u )
      {
        _InterlockedOr(v95, 0);
        MiReassessZeroThreads(v1, __rdtsc() - v101);
        _InterlockedExchange(v9, 0);
        v10 = __rdtsc();
        _InterlockedOr(v95, 0);
        continue;
      }
      goto LABEL_4;
    }
    break;
  }
  v5 = v108;
LABEL_200:
  if ( v5 < 3 )
  {
    v1 = a1;
    ++v5;
    v9 = v99;
    v108 = v5;
    goto LABEL_3;
  }
LABEL_47:
  v33 = CurrentThread;
  result = KeSetActualBasePriorityThread((__int64)CurrentThread, v110);
  *((_DWORD *)&v33[1].SwapListEntry + 3) &= ~0x400u;
  return result;
}
