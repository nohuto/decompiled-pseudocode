/*
 * XREFs of MiZeroPage @ 0x1402C1B30
 * Callers:
 *     MiZeroLargePages @ 0x1402C0D40 (MiZeroLargePages.c)
 *     MiZeroPageThread @ 0x1403CA200 (MiZeroPageThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402BF7C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402C4BE0 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCompressTbFlushList @ 0x140306530 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiInsertLargeTbFlushEntry @ 0x140319B24 (MiInsertLargeTbFlushEntry.c)
 *     MiLargePageFreeToZero @ 0x14034DC00 (MiLargePageFreeToZero.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiFreeZeroPageSlistSufficient @ 0x140365548 (MiFreeZeroPageSlistSufficient.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeUltraMapping @ 0x14039A58C (MiFreeUltraMapping.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageHeatImmediate @ 0x1403F6514 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F65BC (MiColdPageSizeSupported.c)
 *     KeZeroPages @ 0x140400950 (KeZeroPages.c)
 *     MiFreeListPageContentsChanged @ 0x14054D34C (MiFreeListPageContentsChanged.c)
 *     MiSetZeroPageThreadPriority @ 0x14054E3E4 (MiSetZeroPageThreadPriority.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  signed __int32 v51; // edx
  bool v52; // zf
  signed __int32 v53; // eax
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
  __int64 v66; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r9
  _DWORD *v70; // r8
  int v71; // eax
  __int64 v72; // rsi
  char v73; // [rsp+20h] [rbp-188h]
  unsigned int v74; // [rsp+24h] [rbp-184h]
  unsigned int v75; // [rsp+28h] [rbp-180h]
  BOOL v76; // [rsp+2Ch] [rbp-17Ch]
  _BYTE *v77; // [rsp+30h] [rbp-178h]
  int v78; // [rsp+38h] [rbp-170h]
  unsigned int v79; // [rsp+3Ch] [rbp-16Ch]
  __int64 v80; // [rsp+40h] [rbp-168h]
  unsigned __int8 v82; // [rsp+50h] [rbp-158h]
  unsigned int v83; // [rsp+58h] [rbp-150h]
  BOOL v84; // [rsp+5Ch] [rbp-14Ch]
  int v85; // [rsp+60h] [rbp-148h]
  int v86; // [rsp+64h] [rbp-144h] BYREF
  __int64 v87; // [rsp+68h] [rbp-140h]
  PVOID P; // [rsp+70h] [rbp-138h]
  struct _KTHREAD *v89; // [rsp+78h] [rbp-130h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-128h]
  __int64 v91; // [rsp+88h] [rbp-120h]
  __int64 v92; // [rsp+90h] [rbp-118h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-110h] BYREF
  __int64 v94; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v95; // [rsp+B8h] [rbp-F0h]
  __int64 v96; // [rsp+C0h] [rbp-E8h]
  __int64 Base; // [rsp+C8h] [rbp-E0h] BYREF
  __int128 v98; // [rsp+D0h] [rbp-D8h]
  __int128 v99; // [rsp+E0h] [rbp-C8h]
  __int128 v100; // [rsp+F0h] [rbp-B8h]
  __int128 v101; // [rsp+100h] [rbp-A8h]
  __int128 v102; // [rsp+110h] [rbp-98h]
  __int128 v103; // [rsp+120h] [rbp-88h]
  __int128 v104; // [rsp+130h] [rbp-78h]
  __int128 v105; // [rsp+140h] [rbp-68h]
  __int128 v106; // [rsp+150h] [rbp-58h]
  __int64 v107; // [rsp+160h] [rbp-48h]
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v87 = a2;
  P = (PVOID)a1;
  v91 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(struct _KTHREAD **)(a1 + 72);
  v89 = v3;
  CurrentThread = v3;
  v4 = a1;
  v77 = (_BYTE *)a1;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(unsigned int *)(v4 + 64);
  v80 = HIDWORD(v6);
  v75 = v6;
  v92 = v6;
  if ( (unsigned int)v6 >= 3 )
  {
    v7 = 1LL;
  }
  else
  {
    v7 = MiLargePageSizes[v6];
    if ( *(_BYTE *)(v4 + 80) && !(_DWORD)v6 )
    {
      v80 = *(_QWORD *)(v4 + 224);
      v5 = *(_QWORD *)(v80 + 176) + ((unsigned __int64)*(unsigned __int16 *)(v4 + 216) << 21);
      v4 = v80;
      v77 = (_BYTE *)v80;
      v7 = 512LL;
    }
  }
  if ( v4 == a1 )
    ++dword_140C2A178[v6];
  v8 = v7 << 12;
  if ( (unsigned int)v6 <= 1 )
    ++dword_140C2A138[v6];
  KeZeroPages(v5, v8);
  v9 = v87;
  v74 = 1;
  v10 = 1;
  v85 = 1;
  v11 = 0;
  v76 = 0;
  v78 = 0;
  v79 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiColdPageSizeSupported(v75)
    && !*((_BYTE *)SchedulerAssist + 195)
    && !*(_BYTE *)(v4 + 70)
    && !*(_BYTE *)(v4 + 69) )
  {
    v78 = 1;
    v79 = MiSetZeroPageThreadPriority(v87, SchedulerAssist, 1LL);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v9 + 192, 0LL);
  }
  P = 0LL;
  if ( v80 )
  {
    v11 = 1;
    v3 = *(struct _KTHREAD **)(v80 + 168);
    v89 = v3;
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_140C50C10 + 4544LL * *(unsigned int *)(v80 + 184) + 4304),
      &LockHandle);
  }
  CurrentIrql = KeGetCurrentIrql();
  v82 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64 *)KeGetCurrentPrcb()->SchedulerAssist;
    CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
    v12 = (-1LL << CurrentIrql) & 4;
    v13 = (unsigned int)v12 | *((_DWORD *)SchedulerAssist + 5);
    *((_DWORD *)SchedulerAssist + 5) = v13;
  }
  v83 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v3->SListFaultAddress, 0x3FuLL) )
  {
    do
    {
      v16 = v83 + 1;
      v83 = v16;
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
  if ( v80 )
  {
    v74 = 0;
    v10 = 0;
    if ( v77[69] != 1 )
    {
      if ( ++*(_DWORD *)(v80 + 192) != 512 )
      {
        v85 = 0;
        goto LABEL_41;
      }
      v10 = 1;
    }
    v74 = v10;
    v17 = *(_DWORD *)(v80 + 188);
    if ( v17 == 1 )
    {
      v18 = *(_QWORD *)(v80 + 72);
      v19 = *(_QWORD **)(v80 + 80);
      if ( *(_QWORD *)(v18 + 8) != v80 + 72 || *v19 != v80 + 72 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v10 = 1;
      P = (PVOID)v80;
    }
    else
    {
      *(_DWORD *)(v80 + 188) = v17 - 1;
      v74 = v10;
    }
  }
LABEL_41:
  v20 = v77;
  v21 = v77[69];
  v73 = v21;
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
    v94 = 0LL;
    v98 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v107 = 0LL;
    v25 = 0LL;
    v13 = 0LL;
    v95 = 20LL;
    v26 = 0;
    v27 = 0;
    v28 = 0LL;
    v96 = 0LL;
    Base = 0LL;
    if ( (unsigned int)v23 <= 1 )
    {
      MiInsertLargeTbFlushEntry(&v94, (unsigned int)(2 - v23), v24);
      v25 = 1LL;
      v28 = v96;
      v13 = HIDWORD(v95);
      v27 = BYTE4(v94);
      v26 = v94;
    }
    v29 = v24;
    for ( SchedulerAssist = (__int64 *)0xFFFFF6FFFFFFFFFFLL; v29 >= 0xFFFFF68000000000uLL; v29 = (__int64)(v29 << 25) >> 16 )
    {
      if ( v29 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v30 = qword_140C4EA78;
    v84 = (!qword_140C4EA78 || v29 < qword_140C4EA78 || v29 >= qword_140C4EA78 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v23 <= 1;
    if ( v25 )
      goto LABEL_91;
    v31 = (__int64)(v24 << 25) >> 16;
    if ( (_DWORD)v23 != 3 )
    {
      if ( (_DWORD)v23 == 2 )
      {
        v25 = 16LL;
        MiInsertTbFlushEntry((__int64)&v94, v31, 16LL, 0);
      }
      else
      {
        v38 = MiLargePageSizes[v23];
        if ( (unsigned int)v23 <= 1 )
        {
          v39 = (unsigned int)(2 - v23);
          do
          {
            MiInsertTbFlushEntry((__int64)&v94, v31, v38, 0);
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
      BYTE4(v94) = v27;
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
              v96 = v28 + 1;
              *v33 = v29 ^ v34;
LABEL_91:
              for ( i = v24 + 8 * v25; v24 < i; v24 += 8LL )
              {
                v30 = 0LL;
                if ( v24 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
                  v30 = (unsigned int)MiPteHasShadow(v29, 0LL, v13, SchedulerAssist) != 0;
                *(_QWORD *)v24 = 0LL;
                if ( (_DWORD)v30 )
                  MiWritePteShadow(v24, 0LL);
              }
              if ( v84 )
                MiFlushTbList((unsigned int *)&v94, (_KPROCESS *)v30);
              v20 = v77;
              v21 = v73;
              v3 = v89;
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
              v96 = v28 + 1;
              *SchedulerAssist = v29 ^ v36;
              goto LABEL_91;
            }
          }
        }
      }
    }
    if ( (unsigned int)v13 < (unsigned int)v95 )
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
        v13 = (unsigned int)(HIDWORD(v95) + 1);
        HIDWORD(v95) = v13;
        v96 += v30;
        if ( (_DWORD)v13 == (_DWORD)v95 && (v94 & 0x400000000LL) == 0 )
        {
          qsort(&Base, (unsigned int)v13, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(&v94);
          v13 = HIDWORD(v95);
          if ( HIDWORD(v95) == (_DWORD)v95 )
          {
            if ( v32 )
              break;
          }
        }
        if ( !v32 )
          goto LABEL_91;
      }
      BYTE5(v94) = 1;
      v96 = HIDWORD(v95);
    }
    else
    {
      BYTE5(v94) = 1;
    }
    goto LABEL_91;
  }
  v22 = a1;
  MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  v20 = v77;
LABEL_102:
  v41 = v80;
  if ( v80 && v85 == 1 )
    *(_QWORD *)(v22 + 224) = 0LL;
  v42 = v74;
  if ( v74 == 1 || P )
  {
    v43 = v20[71];
    v44 = &dword_140C4E3F0;
    if ( v43 )
      v44 = &dword_140C4E3E0;
    v45 = &qword_140C4E3F8;
    if ( v43 )
      v45 = &qword_140C4E3E8;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v44, -1);
    }
    else
    {
      v86 = 0;
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
        v86 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v44, v42, v13, SchedulerAssist);
      }
      v51 = *v44;
      while ( (v51 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v51 & 0x40000000) == 0 )
        {
          v53 = _InterlockedCompareExchange(v44, v51 | 0x40000000, v51);
          v52 = v51 == v53;
          v51 = v53;
          if ( !v52 )
            continue;
        }
        KeYieldProcessorEx(&v86);
        v51 = *v44;
      }
    }
    RtlAvlRemoveNode(v45);
    v77[68] = 0;
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
    LODWORD(v42) = v74;
    v41 = v80;
  }
  v57 = *(_BYTE *)(v91 + 80);
  if ( v21 == 1 )
  {
    if ( v57 )
      ++dword_140C2A158[(unsigned int)v92];
    else
      ++dword_140C2A198[(unsigned int)v92];
    ++dword_140C2A134;
LABEL_141:
    v58 = 0LL;
LABEL_142:
    v59 = v75;
    goto LABEL_143;
  }
  if ( v57 )
  {
    ++dword_140C2A148[(unsigned int)v92];
  }
  else if ( v77[70] )
  {
    ++dword_140C2A168[(unsigned int)v92];
  }
  else
  {
    ++dword_140C2A188[(unsigned int)v92];
  }
  ++dword_140C2A128;
  if ( (_DWORD)v42 != 1 )
    goto LABEL_141;
  v58 = (__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48;
  v59 = v75;
  if ( v75 == 3 )
  {
    ++dword_140C2A12C;
    *(_QWORD *)(a1 + 24) = 0LL;
    BYTE2(v3->QuantumTarget) &= ~8u;
    v64 = 128LL;
    if ( qword_140C4DDC0 )
    {
      if ( (qword_140C4DDC0 & 0x80) != 0 )
        v64 = 144LL;
      else
        v64 = qword_140C4DDC0 | 0x80;
    }
    v3->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v64;
    if ( v77[70] )
    {
      MiFreeListPageContentsChanged((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
    }
    else
    {
      if ( v78 )
      {
        v65 = *((_DWORD *)MiSearchNumaNodeTable((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48) + 2);
        v66 = ((unsigned int)MiGetPfnChannel(v3) << byte_140C4DD0D) | dword_140C4DD78 & (unsigned int)v58 | (v65 << byte_140C4DD0C);
        if ( (unsigned int)MiFreeZeroPageSlistSufficient(v87, (unsigned int)v66, 0LL) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v87 + 2176) + 40 * v66) >= (unsigned __int64)(unsigned int)(4
                                                                                                 * *(_DWORD *)(v87 + 6300)) )
            v76 = 1;
        }
      }
      MiUnlinkFreeOrZeroedPage((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
      MiInsertPageInFreeOrZeroedList((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
    }
    goto LABEL_142;
  }
  if ( v78 )
    v76 = v77[70] == 0;
  MiLargePageFreeToZero((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
LABEL_143:
  _InterlockedAnd64((volatile signed __int64 *)&v3->SListFaultAddress, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v60 = KeGetCurrentIrql();
      if ( v60 <= 0xFu && v82 <= 0xFu && v60 >= 2u )
      {
        v61 = KeGetCurrentPrcb();
        v62 = v61->SchedulerAssist;
        v63 = ~(unsigned __int16)(-1LL << (v82 + 1));
        v52 = (v63 & v62[5]) == 0;
        v62[5] &= v63;
        if ( v52 )
          KiRemoveSystemWorkPriorityKick(v61);
      }
    }
  }
  __writecr8(v82);
  if ( v41 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v68 = KeGetCurrentIrql();
        if ( v68 <= 0xFu && LockHandle.OldIrql <= 0xFu && v68 >= 2u )
        {
          v69 = KeGetCurrentPrcb();
          v70 = v69->SchedulerAssist;
          v71 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v52 = (v71 & v70[5]) == 0;
          v70[5] &= v71;
          if ( v52 )
            KiRemoveSystemWorkPriorityKick(v69);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v76 )
    MiChangePageHeatImmediate(v58, v59, 0LL);
  if ( v78 )
  {
    v72 = v87;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v87 + 192), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v72 + 192));
    KeAbPostRelease(v72 + 192);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiSetZeroPageThreadPriority(v72, CurrentThread, v79);
  }
}
