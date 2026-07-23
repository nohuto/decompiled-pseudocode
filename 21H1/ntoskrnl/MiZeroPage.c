/*
 * XREFs of MiZeroPage @ 0x1402954B0
 * Callers:
 *     MiZeroLargePages @ 0x1402946C0 (MiZeroLargePages.c)
 *     MiZeroPageThread @ 0x1403C67B0 (MiZeroPageThread.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402970B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140298560 (MiUnlinkFreeOrZeroedPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x1402F66E0 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402FB584 (MiInsertLargeTbFlushEntry.c)
 *     MiLargePageFreeToZero @ 0x1403493F0 (MiLargePageFreeToZero.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     MiFreeZeroPageSlistSufficient @ 0x140362BA8 (MiFreeZeroPageSlistSufficient.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeUltraMapping @ 0x1403974FC (MiFreeUltraMapping.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageHeatImmediate @ 0x1403F0CA0 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F0D48 (MiColdPageSizeSupported.c)
 *     KeZeroPages @ 0x1403F9D70 (KeZeroPages.c)
 *     MiFreeListPageContentsChanged @ 0x14054932C (MiFreeListPageContentsChanged.c)
 *     MiSetZeroPageThreadPriority @ 0x14054A3C4 (MiSetZeroPageThreadPriority.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPage(__int64 a1, __int64 a2)
{
  struct _KTHREAD *v3; // r15
  __int64 v4; // r13
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *SchedulerAssist; // r9
  __int64 CurrentIrql; // rcx
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _BYTE *v20; // rax
  char v21; // r13
  __int64 v22; // rdi
  __int64 v23; // r15
  unsigned __int64 v24; // rsi
  __int64 v25; // r12
  int v26; // r10d
  char v27; // r11
  __int64 v28; // r13
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdi
  __int64 v32; // r14
  unsigned __int64 *v33; // r10
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  unsigned __int64 i; // r11
  __int64 v41; // r14
  __int64 v42; // rdx
  char v43; // al
  volatile signed __int32 *v44; // rdi
  __int64 *v45; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v47; // rcx
  int v48; // eax
  _DWORD *v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  bool v52; // zf
  unsigned __int32 v53; // eax
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  int v56; // eax
  char v57; // cl
  __int64 v58; // r13
  unsigned int v59; // esi
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  __int64 v64; // rax
  int v65; // edi
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  char v78; // [rsp+20h] [rbp-188h]
  unsigned int v79; // [rsp+24h] [rbp-184h]
  unsigned int v80; // [rsp+28h] [rbp-180h]
  BOOL v81; // [rsp+2Ch] [rbp-17Ch]
  _BYTE *v82; // [rsp+30h] [rbp-178h]
  int v83; // [rsp+38h] [rbp-170h]
  unsigned int v84; // [rsp+3Ch] [rbp-16Ch]
  __int64 v85; // [rsp+40h] [rbp-168h]
  unsigned __int8 v87; // [rsp+50h] [rbp-158h]
  unsigned int v88; // [rsp+58h] [rbp-150h]
  BOOL v89; // [rsp+5Ch] [rbp-14Ch]
  int v90; // [rsp+60h] [rbp-148h]
  int v91; // [rsp+64h] [rbp-144h] BYREF
  __int64 v92; // [rsp+68h] [rbp-140h]
  PVOID P; // [rsp+70h] [rbp-138h]
  struct _KTHREAD *v94; // [rsp+78h] [rbp-130h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-128h]
  __int64 v96; // [rsp+88h] [rbp-120h]
  __int64 v97; // [rsp+90h] [rbp-118h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-110h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v100; // [rsp+B8h] [rbp-F0h]
  __int64 v101; // [rsp+C0h] [rbp-E8h]
  __int64 Base; // [rsp+C8h] [rbp-E0h] BYREF
  __int128 v103; // [rsp+D0h] [rbp-D8h]
  __int128 v104; // [rsp+E0h] [rbp-C8h]
  __int128 v105; // [rsp+F0h] [rbp-B8h]
  __int128 v106; // [rsp+100h] [rbp-A8h]
  __int128 v107; // [rsp+110h] [rbp-98h]
  __int128 v108; // [rsp+120h] [rbp-88h]
  __int128 v109; // [rsp+130h] [rbp-78h]
  __int128 v110; // [rsp+140h] [rbp-68h]
  __int128 v111; // [rsp+150h] [rbp-58h]
  __int64 v112; // [rsp+160h] [rbp-48h]
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v92 = a2;
  P = (PVOID)a1;
  v96 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(struct _KTHREAD **)(a1 + 72);
  v94 = v3;
  CurrentThread = v3;
  v4 = a1;
  v82 = (_BYTE *)a1;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(unsigned int *)(v4 + 64);
  v85 = HIDWORD(v6);
  v80 = v6;
  v97 = v6;
  if ( (unsigned int)v6 >= 3 )
  {
    v7 = 1LL;
  }
  else
  {
    v7 = MiLargePageSizes[v6];
    if ( *(_BYTE *)(v4 + 80) && !(_DWORD)v6 )
    {
      v85 = *(_QWORD *)(v4 + 224);
      v5 = *(_QWORD *)(v85 + 176) + ((unsigned __int64)*(unsigned __int16 *)(v4 + 216) << 21);
      v4 = v85;
      v82 = (_BYTE *)v85;
      v7 = 512LL;
    }
  }
  if ( v4 == a1 )
    ++dword_140C2A298[v6];
  v8 = v7 << 12;
  if ( (unsigned int)v6 <= 1 )
    ++dword_140C2A258[v6];
  KeZeroPages(v5, v8);
  v9 = v92;
  v79 = 1;
  v10 = 1;
  v90 = 1;
  v11 = 0;
  v81 = 0;
  v83 = 0;
  v84 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiColdPageSizeSupported(v80)
    && !*((_BYTE *)SchedulerAssist + 195)
    && !*(_BYTE *)(v4 + 70)
    && !*(_BYTE *)(v4 + 69) )
  {
    v83 = 1;
    v84 = MiSetZeroPageThreadPriority(v92, SchedulerAssist, 1LL);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v9 + 192, 0LL);
  }
  P = 0LL;
  if ( v85 )
  {
    v11 = 1;
    v3 = *(struct _KTHREAD **)(v85 + 168);
    v94 = v3;
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_140C50C90 + 4544LL * *(unsigned int *)(v85 + 184) + 4304),
      &LockHandle);
  }
  CurrentIrql = KeGetCurrentIrql();
  v87 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64 *)KeGetCurrentPrcb()->SchedulerAssist;
    CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
    v12 = (-1LL << CurrentIrql) & 4;
    v13 = (unsigned int)v12 | *((_DWORD *)SchedulerAssist + 5);
    *((_DWORD *)SchedulerAssist + 5) = v13;
  }
  v88 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v3->SListFaultAddress, 0x3FuLL) )
  {
    do
    {
      v16 = v88 + 1;
      v88 = v16;
      if ( (v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, v12, v13, SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (__int64)v3->SListFaultAddress < 0
         || _interlockedbittestandset64((volatile signed __int32 *)&v3->SListFaultAddress, 0x3FuLL) );
  }
  if ( v85 )
  {
    v79 = 0;
    v10 = 0;
    if ( v82[69] != 1 )
    {
      if ( ++*(_DWORD *)(v85 + 192) != 512 )
      {
        v90 = 0;
        goto LABEL_41;
      }
      v10 = 1;
    }
    v79 = v10;
    v17 = *(_DWORD *)(v85 + 188);
    if ( v17 == 1 )
    {
      v18 = *(_QWORD *)(v85 + 72);
      v19 = *(_QWORD **)(v85 + 80);
      if ( *(_QWORD *)(v18 + 8) != v85 + 72 || *v19 != v85 + 72 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v10 = 1;
      P = (PVOID)v85;
    }
    else
    {
      *(_DWORD *)(v85 + 188) = v17 - 1;
      v79 = v10;
    }
  }
LABEL_41:
  v20 = v82;
  v21 = v82[69];
  v78 = v21;
  if ( v10 != 1 )
  {
LABEL_101:
    v22 = a1;
    goto LABEL_102;
  }
  if ( v11 != 1 )
  {
    v23 = *(unsigned int *)(a1 + 64);
    v24 = *(_QWORD *)(a1 + 32);
    v99 = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
    v109 = 0LL;
    v110 = 0LL;
    v111 = 0LL;
    v112 = 0LL;
    v25 = 0LL;
    v13 = 0LL;
    v100 = 20LL;
    v26 = 0;
    v27 = 0;
    v28 = 0LL;
    v101 = 0LL;
    Base = 0LL;
    if ( (unsigned int)v23 <= 1 )
    {
      MiInsertLargeTbFlushEntry(&v99, (unsigned int)(2 - v23), v24, SchedulerAssist);
      v25 = 1LL;
      v28 = v101;
      v13 = HIDWORD(v100);
      v27 = BYTE4(v99);
      v26 = v99;
    }
    v29 = v24;
    for ( SchedulerAssist = (__int64 *)0xFFFFF6FFFFFFFFFFLL; v29 >= 0xFFFFF68000000000uLL; v29 = (__int64)(v29 << 25) >> 16 )
    {
      if ( v29 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v30 = qword_140C4EB38;
    v89 = (!qword_140C4EB38 || v29 < qword_140C4EB38 || v29 >= qword_140C4EB38 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v23 <= 1;
    if ( v25 )
      goto LABEL_91;
    v31 = (__int64)(v24 << 25) >> 16;
    if ( (_DWORD)v23 != 3 )
    {
      if ( (_DWORD)v23 == 2 )
      {
        v25 = 16LL;
        MiInsertTbFlushEntry((__int64)&v99, v31, 16LL, 0);
      }
      else
      {
        v38 = MiLargePageSizes[v23];
        if ( (unsigned int)v23 <= 1 )
        {
          v39 = (unsigned int)(2 - v23);
          do
          {
            MiInsertTbFlushEntry((__int64)&v99, v31, v38, 0);
            v31 = (__int64)(v31 << 25) >> 16;
            v38 <<= 9;
            --v39;
          }
          while ( v39 );
        }
        v25 = 512LL;
      }
      goto LABEL_91;
    }
    v25 = 1LL;
    v32 = 1LL;
    if ( v26 != 1 && (v27 & 8) == 0 && v31 >= 0xFFFFF68000000000uLL && v31 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v27 |= 8u;
      BYTE4(v99) = v27;
    }
    if ( (_DWORD)v13 )
    {
      if ( (v27 & 4) == 0 )
      {
        v33 = (unsigned __int64 *)(&Base + (unsigned int)(v13 - 1));
        v34 = *v33;
        if ( (*v33 & 0xC00) == 0 )
        {
          SchedulerAssist = (__int64 *)(*v33 & 0x3FF);
          v29 = v34 & 0xFFFFFFFFFFFFF000uLL;
          v30 = (v34 & 0xFFFFFFFFFFFFF000uLL) + (((_QWORD)SchedulerAssist + 1) << 12);
          if ( v30 == v31 )
          {
            v29 = (unsigned __int64)SchedulerAssist + 1;
            if ( (__int64 *)((char *)SchedulerAssist + 1) >= SchedulerAssist && v29 <= 0x3FF )
            {
              v29 = ((unsigned __int16)v34 ^ (unsigned __int16)(v34 + 1)) & 0x3FF;
              v101 = v28 + 1;
              *v33 = v29 ^ v34;
LABEL_91:
              for ( i = v24 + 8 * v25; v24 < i; v24 += 8LL )
              {
                v30 = 0LL;
                if ( v24 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
                  v30 = (unsigned int)MiPteHasShadow(v29, 0LL) != 0;
                *(_QWORD *)v24 = 0LL;
                if ( (_DWORD)v30 )
                  MiWritePteShadow(v24, 0LL);
              }
              if ( v89 )
                MiFlushTbList((__int64)&v99, (_KPROCESS *)v30);
              v20 = v82;
              v21 = v78;
              v3 = v94;
              goto LABEL_101;
            }
          }
        }
      }
      if ( (v27 & 4) == 0 )
      {
        SchedulerAssist = &Base + (unsigned int)(v13 - 1);
        v35 = *SchedulerAssist;
        if ( (*SchedulerAssist & 0xC00) == 0 )
        {
          v30 = v35 & 0xFFFFFFFFFFFFF000uLL;
          v29 = v31 + 4096;
          if ( (v35 & 0xFFFFFFFFFFFFF000uLL) == v31 + 4096 )
          {
            v29 = *SchedulerAssist & 0x3FF;
            v30 = v29 + 1;
            if ( v29 + 1 >= v29 && v30 <= 0x3FF )
            {
              v36 = v35 - 4096;
              v29 = ((unsigned __int16)v36 ^ (unsigned __int16)(v36 + 1)) & 0x3FF;
              v101 = v28 + 1;
              *SchedulerAssist = v29 ^ v36;
              goto LABEL_91;
            }
          }
        }
      }
    }
    if ( (unsigned int)v13 < (unsigned int)v100 )
    {
      while ( 1 )
      {
        v30 = 1024LL;
        if ( (unsigned __int64)(v32 - 1) <= 0x3FF )
          v30 = v32;
        v32 -= v30;
        v37 = v31 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v30 - 1) & 0x3FF;
        v31 += v30 << 12;
        v29 = (unsigned int)v13;
        *(&Base + (unsigned int)v13) = v37;
        v13 = (unsigned int)(HIDWORD(v100) + 1);
        HIDWORD(v100) = v13;
        v101 += v30;
        if ( (_DWORD)v13 == (_DWORD)v100 && (v99 & 0x400000000LL) == 0 )
        {
          qsort(&Base, (unsigned int)v13, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(&v99);
          v13 = HIDWORD(v100);
          if ( HIDWORD(v100) == (_DWORD)v100 )
          {
            if ( v32 )
              break;
          }
        }
        if ( !v32 )
          goto LABEL_91;
      }
      BYTE5(v99) = 1;
      v101 = HIDWORD(v100);
    }
    else
    {
      BYTE5(v99) = 1;
    }
    goto LABEL_91;
  }
  v22 = a1;
  MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  v20 = v82;
LABEL_102:
  v41 = v85;
  if ( v85 && v90 == 1 )
    *(_QWORD *)(v22 + 224) = 0LL;
  v42 = v79;
  if ( v79 == 1 || P )
  {
    v43 = v20[71];
    v44 = &dword_140C4E4B0;
    if ( v43 )
      v44 = &dword_140C4E4A0;
    v45 = &qword_140C4E4B8;
    if ( v43 )
      v45 = &qword_140C4E4A8;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v42) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v44, v42);
    }
    else
    {
      v91 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v47 = CurrentPrcb->SchedulerAssist;
      if ( v47 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v48 = v47[6];
          v47[6] = v48 + 1;
          if ( v48 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v44, 0x1Fu) )
      {
        v49 = CurrentPrcb->SchedulerAssist;
        if ( v49 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v50 = v49[6] - 1;
            v49[6] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        LOBYTE(v42) = -1;
        v91 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v44, v42, v13, SchedulerAssist);
      }
      v51 = *(unsigned int *)v44;
      if ( (*v44 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v51 & 0x40000000) == 0 )
          {
            v53 = _InterlockedCompareExchange(v44, v51 | 0x40000000, v51);
            v52 = (_DWORD)v51 == v53;
            v51 = v53;
            if ( !v52 )
              continue;
          }
          KeYieldProcessorEx(&v91, v51, v13, (__int64)SchedulerAssist);
          v51 = *(unsigned int *)v44;
        }
        while ( (v51 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    RtlAvlRemoveNode(v45);
    v82[68] = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v44, retaddr);
    else
      *v44 = 0;
    v54 = KeGetCurrentPrcb();
    v55 = v54->SchedulerAssist;
    if ( v55 )
    {
      if ( v54->NestingLevel <= 1u )
      {
        v56 = v55[6] - 1;
        v55[6] = v56;
        if ( !v56 )
          KiRemoveSystemWorkPriorityKick(v54);
      }
    }
    LODWORD(v42) = v79;
    v41 = v85;
  }
  v57 = *(_BYTE *)(v96 + 80);
  if ( v21 == 1 )
  {
    if ( v57 )
      ++dword_140C2A278[(unsigned int)v97];
    else
      ++dword_140C2A2B8[(unsigned int)v97];
    ++dword_140C2A254;
LABEL_141:
    v58 = 0LL;
LABEL_142:
    v59 = v80;
    goto LABEL_143;
  }
  if ( v57 )
  {
    ++dword_140C2A268[(unsigned int)v97];
  }
  else if ( v82[70] )
  {
    ++dword_140C2A288[(unsigned int)v97];
  }
  else
  {
    ++dword_140C2A2A8[(unsigned int)v97];
  }
  ++dword_140C2A248;
  if ( (_DWORD)v42 != 1 )
    goto LABEL_141;
  v58 = (__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48;
  v59 = v80;
  if ( v80 == 3 )
  {
    ++dword_140C2A24C;
    *(_QWORD *)(a1 + 24) = 0LL;
    BYTE2(v3->QuantumTarget) &= ~8u;
    v64 = 128LL;
    if ( qword_140C4DE80 )
    {
      if ( (qword_140C4DE80 & 0x80) != 0 )
        v64 = 144LL;
      else
        v64 = qword_140C4DE80 | 0x80;
    }
    v3->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v64;
    if ( v82[70] )
    {
      MiFreeListPageContentsChanged((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
    }
    else
    {
      if ( v83 )
      {
        v65 = *((_DWORD *)MiSearchNumaNodeTable((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48) + 2);
        v68 = ((unsigned int)MiGetPfnChannel(v3, v66, v67) << byte_140C4DDCD) | dword_140C4DE38 & (unsigned int)v58 | (v65 << byte_140C4DDCC);
        if ( (unsigned int)MiFreeZeroPageSlistSufficient(v92, (unsigned int)v68, 0LL) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v92 + 2176) + 40 * v68) >= (unsigned __int64)(unsigned int)(4
                                                                                                 * *(_DWORD *)(v92 + 6300)) )
            v81 = 1;
        }
      }
      MiUnlinkFreeOrZeroedPage((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
      MiInsertPageInFreeOrZeroedList((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
    }
    goto LABEL_142;
  }
  if ( v83 )
    v81 = v82[70] == 0;
  MiLargePageFreeToZero((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
LABEL_143:
  _InterlockedAnd64((volatile signed __int64 *)&v3->SListFaultAddress, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v60 = KeGetCurrentIrql();
      if ( v60 <= 0xFu && v87 <= 0xFu && v60 >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        v63 = ~(unsigned __int16)(-1LL << (v87 + 1));
        v52 = (v63 & v62[5]) == 0;
        v62[5] &= v63;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
  }
  __writecr8(v87);
  if ( v41 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v70 = KeGetCurrentIrql();
        if ( v70 <= 0xFu && LockHandle.OldIrql <= 0xFu && v70 >= 2u )
        {
          v71 = KeGetCurrentPrcb();
          v72 = v71->SchedulerAssist;
          v73 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v52 = (v73 & v72[5]) == 0;
          v72[5] &= v73;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick(v71);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v81 )
    MiChangePageHeatImmediate(v58, v59, 0LL);
  if ( v83 )
  {
    v74 = v92;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v92 + 192), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v74 + 192);
    KeAbPostRelease(v74 + 192);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v75, v76, v77);
    MiSetZeroPageThreadPriority(v74, CurrentThread, v84);
  }
}
