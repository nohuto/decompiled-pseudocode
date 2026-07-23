/*
 * XREFs of MiZeroPage @ 0x14023C480
 * Callers:
 *     MiZeroLargePages @ 0x14023B690 (MiZeroLargePages.c)
 *     MiZeroPageThread @ 0x1403C75C0 (MiZeroPageThread.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14023E080 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14023F530 (MiUnlinkFreeOrZeroedPage.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402CF620 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLargePageFreeToZero @ 0x14031A0B0 (MiLargePageFreeToZero.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCompressTbFlushList @ 0x140333580 (MiCompressTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403385B4 (MiInsertLargeTbFlushEntry.c)
 *     MiFreeZeroPageSlistSufficient @ 0x140363568 (MiFreeZeroPageSlistSufficient.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeUltraMapping @ 0x14039810C (MiFreeUltraMapping.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageHeatImmediate @ 0x1403F2000 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F20A8 (MiColdPageSizeSupported.c)
 *     KeZeroPages @ 0x1403FB000 (KeZeroPages.c)
 *     MiFreeListPageContentsChanged @ 0x14054997C (MiFreeListPageContentsChanged.c)
 *     MiSetZeroPageThreadPriority @ 0x14054AA14 (MiSetZeroPageThreadPriority.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  _BYTE *SchedulerAssist; // r9
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
  __int64 v26; // r8
  int v27; // r10d
  char v28; // r11
  __int64 v29; // r13
  unsigned __int64 v30; // rcx
  __int64 *i; // r9
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  __int64 v34; // r14
  unsigned __int64 *v35; // r10
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // r15
  unsigned __int64 j; // r11
  __int64 v43; // r14
  __int64 v44; // rdx
  char v45; // al
  volatile signed __int32 *v46; // rdi
  __int64 *v47; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v49; // rcx
  int v50; // eax
  _DWORD *v51; // rcx
  int v52; // eax
  __int64 v53; // rdx
  bool v54; // zf
  unsigned __int32 v55; // eax
  struct _KPRCB *v56; // rcx
  _DWORD *v57; // rdx
  int v58; // eax
  char v59; // cl
  __int64 v60; // r13
  unsigned int v61; // esi
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  __int64 v66; // rax
  int v67; // edi
  __int64 v68; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r9
  _DWORD *v72; // r8
  int v73; // eax
  __int64 v74; // rsi
  char v75; // [rsp+20h] [rbp-188h]
  unsigned int v76; // [rsp+24h] [rbp-184h]
  unsigned int v77; // [rsp+28h] [rbp-180h]
  BOOL v78; // [rsp+2Ch] [rbp-17Ch]
  _BYTE *v79; // [rsp+30h] [rbp-178h]
  int v80; // [rsp+38h] [rbp-170h]
  unsigned int v81; // [rsp+3Ch] [rbp-16Ch]
  __int64 v82; // [rsp+40h] [rbp-168h]
  unsigned __int8 v84; // [rsp+50h] [rbp-158h]
  unsigned int v85; // [rsp+58h] [rbp-150h]
  BOOL v86; // [rsp+5Ch] [rbp-14Ch]
  int v87; // [rsp+60h] [rbp-148h]
  int v88; // [rsp+64h] [rbp-144h] BYREF
  __int64 v89; // [rsp+68h] [rbp-140h]
  PVOID P; // [rsp+70h] [rbp-138h]
  struct _KTHREAD *v91; // [rsp+78h] [rbp-130h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-128h]
  __int64 v93; // [rsp+88h] [rbp-120h]
  __int64 v94; // [rsp+90h] [rbp-118h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-110h] BYREF
  __int64 v96; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v97; // [rsp+B8h] [rbp-F0h]
  __int64 v98; // [rsp+C0h] [rbp-E8h]
  __int64 Base; // [rsp+C8h] [rbp-E0h] BYREF
  __int128 v100; // [rsp+D0h] [rbp-D8h]
  __int128 v101; // [rsp+E0h] [rbp-C8h]
  __int128 v102; // [rsp+F0h] [rbp-B8h]
  __int128 v103; // [rsp+100h] [rbp-A8h]
  __int128 v104; // [rsp+110h] [rbp-98h]
  __int128 v105; // [rsp+120h] [rbp-88h]
  __int128 v106; // [rsp+130h] [rbp-78h]
  __int128 v107; // [rsp+140h] [rbp-68h]
  __int128 v108; // [rsp+150h] [rbp-58h]
  __int64 v109; // [rsp+160h] [rbp-48h]
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v89 = a2;
  P = (PVOID)a1;
  v93 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(struct _KTHREAD **)(a1 + 72);
  v91 = v3;
  CurrentThread = v3;
  v4 = a1;
  v79 = (_BYTE *)a1;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(unsigned int *)(v4 + 64);
  v82 = HIDWORD(v6);
  v77 = v6;
  v94 = v6;
  if ( (unsigned int)v6 >= 3 )
  {
    v7 = 1LL;
  }
  else
  {
    v7 = MiLargePageSizes[v6];
    if ( *(_BYTE *)(v4 + 80) && !(_DWORD)v6 )
    {
      v82 = *(_QWORD *)(v4 + 224);
      v5 = *(_QWORD *)(v82 + 176) + ((unsigned __int64)*(unsigned __int16 *)(v4 + 216) << 21);
      v4 = v82;
      v79 = (_BYTE *)v82;
      v7 = 512LL;
    }
  }
  if ( v4 == a1 )
    ++dword_140C2A078[v6];
  v8 = v7 << 12;
  if ( (unsigned int)v6 <= 1 )
    ++dword_140C2A038[v6];
  KeZeroPages(v5, v8, 0x140000000uLL);
  v9 = v89;
  v76 = 1;
  v10 = 1;
  v87 = 1;
  v11 = 0;
  v78 = 0;
  v80 = 0;
  v81 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiColdPageSizeSupported(v77)
    && !SchedulerAssist[195]
    && !*(_BYTE *)(v4 + 70)
    && !*(_BYTE *)(v4 + 69) )
  {
    v80 = 1;
    v81 = MiSetZeroPageThreadPriority(v89, SchedulerAssist, 1LL);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v9 + 192, 0LL);
  }
  P = 0LL;
  if ( v82 )
  {
    v11 = 1;
    v3 = *(struct _KTHREAD **)(v82 + 168);
    v91 = v3;
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_140C50B90 + 4544LL * *(unsigned int *)(v82 + 184) + 4304),
      &LockHandle);
  }
  CurrentIrql = KeGetCurrentIrql();
  v84 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
    v12 = (-1LL << CurrentIrql) & 4;
    v13 = (unsigned int)v12 | *((_DWORD *)SchedulerAssist + 5);
    *((_DWORD *)SchedulerAssist + 5) = v13;
  }
  v85 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v3->SListFaultAddress, 0x3FuLL) )
  {
    do
    {
      v16 = v85 + 1;
      v85 = v16;
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
  if ( v82 )
  {
    v76 = 0;
    v10 = 0;
    if ( v79[69] != 1 )
    {
      if ( ++*(_DWORD *)(v82 + 192) != 512 )
      {
        v87 = 0;
        goto LABEL_41;
      }
      v10 = 1;
    }
    v76 = v10;
    v17 = *(_DWORD *)(v82 + 188);
    if ( v17 == 1 )
    {
      v18 = *(_QWORD *)(v82 + 72);
      v19 = *(_QWORD **)(v82 + 80);
      if ( *(_QWORD *)(v18 + 8) != v82 + 72 || *v19 != v82 + 72 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v10 = 1;
      P = (PVOID)v82;
    }
    else
    {
      *(_DWORD *)(v82 + 188) = v17 - 1;
      v76 = v10;
    }
  }
LABEL_41:
  v20 = v79;
  v21 = v79[69];
  v75 = v21;
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
    v96 = 0LL;
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
    v109 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v97 = 20LL;
    v27 = 0;
    v28 = 0;
    v29 = 0LL;
    v98 = 0LL;
    Base = 0LL;
    if ( (unsigned int)v23 <= 1 )
    {
      MiInsertLargeTbFlushEntry(&v96, (unsigned int)(2 - v23), v24);
      v25 = 1LL;
      v29 = v98;
      v26 = HIDWORD(v97);
      v28 = BYTE4(v96);
      v27 = v96;
    }
    v30 = v24;
    for ( i = (__int64 *)0xFFFFF6FFFFFFFFFFLL; v30 >= 0xFFFFF68000000000uLL; v30 = (__int64)(v30 << 25) >> 16 )
    {
      if ( v30 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v32 = qword_140C4E9F8;
    v86 = (!qword_140C4E9F8 || v30 < qword_140C4E9F8 || v30 >= qword_140C4E9F8 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v23 <= 1;
    if ( v25 )
      goto LABEL_91;
    v33 = (__int64)(v24 << 25) >> 16;
    if ( (_DWORD)v23 != 3 )
    {
      if ( (_DWORD)v23 == 2 )
      {
        v25 = 16LL;
        MiInsertTbFlushEntry(&v96, v33, 16LL, 0LL);
      }
      else
      {
        v40 = MiLargePageSizes[v23];
        if ( (unsigned int)v23 <= 1 )
        {
          v41 = (unsigned int)(2 - v23);
          do
          {
            MiInsertTbFlushEntry(&v96, v33, v40, 0LL);
            v33 = (__int64)(v33 << 25) >> 16;
            v40 <<= 9;
            --v41;
          }
          while ( v41 );
        }
        v25 = 512LL;
      }
      goto LABEL_91;
    }
    v25 = 1LL;
    v34 = 1LL;
    if ( v27 != 1 && (v28 & 8) == 0 && v33 >= 0xFFFFF68000000000uLL && v33 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v28 |= 8u;
      BYTE4(v96) = v28;
    }
    if ( (_DWORD)v26 )
    {
      if ( (v28 & 4) == 0 )
      {
        v35 = (unsigned __int64 *)(&Base + (unsigned int)(v26 - 1));
        v36 = *v35;
        if ( (*v35 & 0xC00) == 0 )
        {
          i = (__int64 *)(*v35 & 0x3FF);
          v30 = v36 & 0xFFFFFFFFFFFFF000uLL;
          v32 = (v36 & 0xFFFFFFFFFFFFF000uLL) + (((_QWORD)i + 1) << 12);
          if ( v32 == v33 )
          {
            v30 = (unsigned __int64)i + 1;
            if ( (__int64 *)((char *)i + 1) >= i && v30 <= 0x3FF )
            {
              v30 = ((unsigned __int16)v36 ^ (unsigned __int16)(v36 + 1)) & 0x3FF;
              v98 = v29 + 1;
              *v35 = v30 ^ v36;
LABEL_91:
              for ( j = v24 + 8 * v25; v24 < j; v24 += 8LL )
              {
                v32 = 0LL;
                if ( v24 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
                  v32 = (unsigned int)MiPteHasShadow(v30, 0LL, v26, i) != 0;
                *(_QWORD *)v24 = 0LL;
                if ( (_DWORD)v32 )
                  MiWritePteShadow(v24, 0LL);
              }
              if ( v86 )
                MiFlushTbList((__int64)&v96, (_KPROCESS *)v32);
              v20 = v79;
              v21 = v75;
              v3 = v91;
              goto LABEL_101;
            }
          }
        }
      }
      if ( (v28 & 4) == 0 )
      {
        i = &Base + (unsigned int)(v26 - 1);
        v37 = *i;
        if ( (*i & 0xC00) == 0 )
        {
          v32 = v37 & 0xFFFFFFFFFFFFF000uLL;
          v30 = v33 + 4096;
          if ( (v37 & 0xFFFFFFFFFFFFF000uLL) == v33 + 4096 )
          {
            v30 = *i & 0x3FF;
            v32 = v30 + 1;
            if ( v30 + 1 >= v30 && v32 <= 0x3FF )
            {
              v38 = v37 - 4096;
              v30 = ((unsigned __int16)v38 ^ (unsigned __int16)(v38 + 1)) & 0x3FF;
              v98 = v29 + 1;
              *i = v30 ^ v38;
              goto LABEL_91;
            }
          }
        }
      }
    }
    if ( (unsigned int)v26 < (unsigned int)v97 )
    {
      while ( 1 )
      {
        v32 = 1024LL;
        if ( (unsigned __int64)(v34 - 1) <= 0x3FF )
          v32 = v34;
        v34 -= v32;
        v39 = v33 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v32 - 1) & 0x3FF;
        v33 += v32 << 12;
        v30 = (unsigned int)v26;
        *(&Base + (unsigned int)v26) = v39;
        v26 = (unsigned int)(HIDWORD(v97) + 1);
        HIDWORD(v97) = v26;
        v98 += v32;
        if ( (_DWORD)v26 == (_DWORD)v97 && (v96 & 0x400000000LL) == 0 )
        {
          qsort(&Base, (unsigned int)v26, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(&v96);
          v26 = HIDWORD(v97);
          if ( HIDWORD(v97) == (_DWORD)v97 )
          {
            if ( v34 )
              break;
          }
        }
        if ( !v34 )
          goto LABEL_91;
      }
      BYTE5(v96) = 1;
      v98 = HIDWORD(v97);
    }
    else
    {
      BYTE5(v96) = 1;
    }
    goto LABEL_91;
  }
  v22 = a1;
  MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  v20 = v79;
LABEL_102:
  v43 = v82;
  if ( v82 && v87 == 1 )
    *(_QWORD *)(v22 + 224) = 0LL;
  v44 = v76;
  if ( v76 == 1 || P )
  {
    v45 = v20[71];
    v46 = &dword_140C4E370;
    if ( v45 )
      v46 = &dword_140C4E360;
    v47 = &qword_140C4E378;
    if ( v45 )
      v47 = &qword_140C4E368;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v44) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v46, v44);
    }
    else
    {
      v88 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v49 = CurrentPrcb->SchedulerAssist;
      if ( v49 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v50 = v49[6];
          v49[6] = v50 + 1;
          if ( v50 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v46, 0x1Fu) )
      {
        v51 = CurrentPrcb->SchedulerAssist;
        if ( v51 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v52 = v51[6] - 1;
            v51[6] = v52;
            if ( !v52 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        LOBYTE(v44) = -1;
        v88 = ExpWaitForSpinLockExclusiveAndAcquire(v46, v44);
      }
      v53 = *(unsigned int *)v46;
      if ( (*v46 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v53 & 0x40000000) == 0 )
          {
            v55 = _InterlockedCompareExchange(v46, v53 | 0x40000000, v53);
            v54 = (_DWORD)v53 == v55;
            v53 = v55;
            if ( !v54 )
              continue;
          }
          KeYieldProcessorEx(&v88, v53);
          v53 = *(unsigned int *)v46;
        }
        while ( (v53 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    RtlAvlRemoveNode(v47, v79);
    v79[68] = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v46, retaddr);
    else
      *v46 = 0;
    v56 = KeGetCurrentPrcb();
    v57 = v56->SchedulerAssist;
    if ( v57 )
    {
      if ( v56->NestingLevel <= 1u )
      {
        v58 = v57[6] - 1;
        v57[6] = v58;
        if ( !v58 )
          KiRemoveSystemWorkPriorityKick(v56);
      }
    }
    LODWORD(v44) = v76;
    v43 = v82;
  }
  v59 = *(_BYTE *)(v93 + 80);
  if ( v21 == 1 )
  {
    if ( v59 )
      ++dword_140C2A058[(unsigned int)v94];
    else
      ++dword_140C2A098[(unsigned int)v94];
    ++dword_140C2A034;
LABEL_141:
    v60 = 0LL;
LABEL_142:
    v61 = v77;
    goto LABEL_143;
  }
  if ( v59 )
  {
    ++dword_140C2A048[(unsigned int)v94];
  }
  else if ( v79[70] )
  {
    ++dword_140C2A068[(unsigned int)v94];
  }
  else
  {
    ++dword_140C2A088[(unsigned int)v94];
  }
  ++dword_140C2A028;
  if ( (_DWORD)v44 != 1 )
    goto LABEL_141;
  v60 = (__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48;
  v61 = v77;
  if ( v77 == 3 )
  {
    ++dword_140C2A02C;
    *(_QWORD *)(a1 + 24) = 0LL;
    BYTE2(v3->QuantumTarget) &= ~8u;
    v66 = 128LL;
    if ( qword_140C4DD40 )
    {
      if ( (qword_140C4DD40 & 0x80) != 0 )
        v66 = 144LL;
      else
        v66 = qword_140C4DD40 | 0x80;
    }
    v3->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v66;
    if ( v79[70] )
    {
      MiFreeListPageContentsChanged((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
    }
    else
    {
      if ( v80 )
      {
        v67 = *((_DWORD *)MiSearchNumaNodeTable((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48) + 2);
        v68 = ((unsigned int)MiGetPfnChannel(v3) << byte_140C4DC8D) | dword_140C4DCF8 & (unsigned int)v60 | (v67 << byte_140C4DC8C);
        if ( (unsigned int)MiFreeZeroPageSlistSufficient(v89, (unsigned int)v68, 0LL) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v89 + 2176) + 40 * v68) >= (unsigned __int64)(unsigned int)(4
                                                                                                 * *(_DWORD *)(v89 + 6300)) )
            v78 = 1;
        }
      }
      MiUnlinkFreeOrZeroedPage((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
      MiInsertPageInFreeOrZeroedList((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
    }
    goto LABEL_142;
  }
  if ( v80 )
    v78 = v79[70] == 0;
  MiLargePageFreeToZero((__int64)&v3[0x1503D2263LL].WaitBlock[1] / 48);
LABEL_143:
  _InterlockedAnd64((volatile signed __int64 *)&v3->SListFaultAddress, 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v62 = KeGetCurrentIrql();
      if ( v62 <= 0xFu && v84 <= 0xFu && v62 >= 2u )
      {
        v63 = KeGetCurrentPrcb();
        v64 = v63->SchedulerAssist;
        v65 = ~(unsigned __int16)(-1LL << (v84 + 1));
        v54 = (v65 & v64[5]) == 0;
        v64[5] &= v65;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick(v63);
      }
    }
  }
  __writecr8(v84);
  if ( v43 )
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
          v54 = (v73 & v72[5]) == 0;
          v72[5] &= v73;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick(v71);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v78 )
    MiChangePageHeatImmediate(v60, v61, 0LL);
  if ( v80 )
  {
    v74 = v89;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v89 + 192), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v74 + 192);
    KeAbPostRelease(v74 + 192);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    MiSetZeroPageThreadPriority(v74, CurrentThread, v81);
  }
}
