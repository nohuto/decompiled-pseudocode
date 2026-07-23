/*
 * XREFs of MiZeroPage @ 0x1402D7B60
 * Callers:
 *     MiZeroLargePages @ 0x1402D6D70 (MiZeroLargePages.c)
 *     MiZeroPageThread @ 0x1403CAD40 (MiZeroPageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertLargeTbFlushEntry @ 0x1402199E0 (MiInsertLargeTbFlushEntry.c)
 *     MiCompressTbFlushList @ 0x140220720 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402DAC10 (MiUnlinkFreeOrZeroedPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     MiLargePageFreeToZero @ 0x14030EA90 (MiLargePageFreeToZero.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFreeZeroPageSlistSufficient @ 0x1403659A8 (MiFreeZeroPageSlistSufficient.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiFreeUltraMapping @ 0x14039AB4C (MiFreeUltraMapping.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 *     MiColdPageSizeSupported @ 0x1403F7D58 (MiColdPageSizeSupported.c)
 *     KeZeroPages @ 0x140402F90 (KeZeroPages.c)
 *     MiFreeListPageContentsChanged @ 0x14054F08C (MiFreeListPageContentsChanged.c)
 *     MiSetZeroPageThreadPriority @ 0x1405500F4 (MiSetZeroPageThreadPriority.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiZeroPage(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
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
  unsigned __int64 v30; // rdi
  __int64 v31; // r14
  unsigned __int64 *v32; // r10
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // r15
  unsigned __int64 i; // r11
  BOOL v41; // edx
  __int64 v42; // r14
  __int64 v43; // rdx
  char v44; // al
  volatile signed __int32 *v45; // rdi
  __int64 *v46; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  signed __int32 v52; // edx
  bool v53; // zf
  signed __int32 v54; // eax
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  int v57; // eax
  char v58; // cl
  __int64 v59; // r13
  unsigned int v60; // esi
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // r10
  _DWORD *v63; // r9
  int v64; // eax
  __int64 v65; // rax
  int v66; // edi
  __int64 v67; // rdi
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r9
  _DWORD *v71; // r8
  int v72; // eax
  __int64 v73; // rsi
  __int64 v74; // [rsp+20h] [rbp-188h]
  char v75; // [rsp+20h] [rbp-188h]
  unsigned int v76; // [rsp+28h] [rbp-180h]
  BOOL v77; // [rsp+2Ch] [rbp-17Ch]
  _BYTE *v78; // [rsp+30h] [rbp-178h]
  int v79; // [rsp+38h] [rbp-170h]
  unsigned int v80; // [rsp+3Ch] [rbp-16Ch]
  __int64 v81; // [rsp+40h] [rbp-168h]
  unsigned __int8 v83; // [rsp+50h] [rbp-158h]
  unsigned int v84; // [rsp+58h] [rbp-150h]
  BOOL v85; // [rsp+5Ch] [rbp-14Ch]
  int v86; // [rsp+60h] [rbp-148h]
  int v87; // [rsp+64h] [rbp-144h] BYREF
  __int64 v88; // [rsp+68h] [rbp-140h]
  PVOID P; // [rsp+70h] [rbp-138h]
  __int64 v90; // [rsp+78h] [rbp-130h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-128h]
  __int64 v92; // [rsp+88h] [rbp-120h]
  __int64 v93; // [rsp+90h] [rbp-118h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-110h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v96; // [rsp+B8h] [rbp-F0h]
  __int64 v97; // [rsp+C0h] [rbp-E8h]
  __int64 Base; // [rsp+C8h] [rbp-E0h] BYREF
  __int128 v99; // [rsp+D0h] [rbp-D8h]
  __int128 v100; // [rsp+E0h] [rbp-C8h]
  __int128 v101; // [rsp+F0h] [rbp-B8h]
  __int128 v102; // [rsp+100h] [rbp-A8h]
  __int128 v103; // [rsp+110h] [rbp-98h]
  __int128 v104; // [rsp+120h] [rbp-88h]
  __int128 v105; // [rsp+130h] [rbp-78h]
  __int128 v106; // [rsp+140h] [rbp-68h]
  __int128 v107; // [rsp+150h] [rbp-58h]
  __int64 v108; // [rsp+160h] [rbp-48h]
  void *retaddr; // [rsp+1A8h] [rbp+0h]

  v88 = a2;
  P = (PVOID)a1;
  v92 = a1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = *(_QWORD *)(a1 + 72);
  v90 = v3;
  CurrentThread = (struct _KTHREAD *)v3;
  v4 = a1;
  v78 = (_BYTE *)a1;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(unsigned int *)(v4 + 64);
  v81 = HIDWORD(v6);
  v76 = v6;
  v93 = v6;
  if ( (unsigned int)v6 >= 3 )
  {
    v7 = 1LL;
  }
  else
  {
    v7 = MiLargePageSizes[v6];
    if ( *(_BYTE *)(v4 + 80) && !(_DWORD)v6 )
    {
      v81 = *(_QWORD *)(v4 + 224);
      v5 = *(_QWORD *)(v81 + 176) + ((unsigned __int64)*(unsigned __int16 *)(v4 + 216) << 21);
      v4 = v81;
      v78 = (_BYTE *)v81;
      v7 = 512LL;
    }
  }
  if ( v4 == a1 )
    ++dword_140C2A318[v6];
  v8 = v7 << 12;
  if ( (unsigned int)v6 <= 1 )
    ++dword_140C2A2D8[v6];
  KeZeroPages(v5, v8);
  v9 = v88;
  HIDWORD(v74) = 1;
  v10 = 1;
  v86 = 1;
  v11 = 0;
  v77 = 0;
  v79 = 0;
  v80 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiColdPageSizeSupported(v76)
    && !*((_BYTE *)SchedulerAssist + 195)
    && !*(_BYTE *)(v4 + 70)
    && !*(_BYTE *)(v4 + 69) )
  {
    v79 = 1;
    v80 = MiSetZeroPageThreadPriority(v88, SchedulerAssist, 1LL);
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v9 + 192, 0LL);
  }
  P = 0LL;
  if ( v81 )
  {
    v11 = 1;
    v3 = *(_QWORD *)(v81 + 168);
    v90 = v3;
    KeAcquireInStackQueuedSpinLock(
      (PKSPIN_LOCK)(qword_140C50DD0 + 4544LL * *(unsigned int *)(v81 + 184) + 4304),
      &LockHandle);
  }
  CurrentIrql = KeGetCurrentIrql();
  v83 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64 *)KeGetCurrentPrcb()->SchedulerAssist;
    CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
    v12 = (-1LL << CurrentIrql) & 4;
    v13 = (unsigned int)v12 | *((_DWORD *)SchedulerAssist + 5);
    *((_DWORD *)SchedulerAssist + 5) = v13;
  }
  v84 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      v16 = v84 + 1;
      v84 = v16;
      if ( (v16 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, v12, v13, SchedulerAssist, v74) )
      {
        HvlNotifyLongSpinWait(v16);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v3 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
  }
  if ( v81 )
  {
    HIDWORD(v74) = 0;
    v10 = 0;
    if ( v78[69] != 1 )
    {
      if ( ++*(_DWORD *)(v81 + 192) != 512 )
      {
        v86 = 0;
        goto LABEL_41;
      }
      v10 = 1;
    }
    HIDWORD(v74) = v10;
    v17 = *(_DWORD *)(v81 + 188);
    if ( v17 == 1 )
    {
      v18 = *(_QWORD *)(v81 + 72);
      v19 = *(_QWORD **)(v81 + 80);
      if ( *(_QWORD *)(v18 + 8) != v81 + 72 || *v19 != v81 + 72 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      v10 = 1;
      P = (PVOID)v81;
    }
    else
    {
      *(_DWORD *)(v81 + 188) = v17 - 1;
      HIDWORD(v74) = v10;
    }
  }
LABEL_41:
  v20 = v78;
  v21 = v78[69];
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
    v95 = 0LL;
    v99 = 0LL;
    v100 = 0LL;
    v101 = 0LL;
    v102 = 0LL;
    v103 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v107 = 0LL;
    v108 = 0LL;
    v25 = 0LL;
    v13 = 0LL;
    v96 = 20LL;
    v26 = 0;
    v27 = 0;
    v28 = 0LL;
    v97 = 0LL;
    Base = 0LL;
    if ( (unsigned int)v23 <= 1 )
    {
      MiInsertLargeTbFlushEntry((__int64)&v95, 2 - v23, v24);
      v25 = 1LL;
      v28 = v97;
      v13 = HIDWORD(v96);
      v27 = BYTE4(v95);
      v26 = v95;
    }
    v29 = v24;
    for ( SchedulerAssist = (__int64 *)0xFFFFF6FFFFFFFFFFLL; v29 >= 0xFFFFF68000000000uLL; v29 = (__int64)(v29 << 25) >> 16 )
    {
      if ( v29 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    v85 = (!qword_140C4EC38 || v29 < qword_140C4EC38 || v29 >= qword_140C4EC38 + (BitMapHeader.SizeOfBitMap << 30))
       && (unsigned int)v23 <= 1;
    if ( v25 )
      goto LABEL_91;
    v30 = (__int64)(v24 << 25) >> 16;
    if ( (_DWORD)v23 != 3 )
    {
      if ( (_DWORD)v23 == 2 )
      {
        v25 = 16LL;
        MiInsertTbFlushEntry(&v95, v30, 16LL, 0LL);
      }
      else
      {
        v38 = MiLargePageSizes[v23];
        if ( (unsigned int)v23 <= 1 )
        {
          v39 = (unsigned int)(2 - v23);
          do
          {
            MiInsertTbFlushEntry(&v95, v30, v38, 0LL);
            v30 = (__int64)(v30 << 25) >> 16;
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
    v31 = 1LL;
    if ( v26 != 1 && (v27 & 8) == 0 && v30 >= 0xFFFFF68000000000uLL && v30 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v27 |= 8u;
      BYTE4(v95) = v27;
    }
    if ( (_DWORD)v13 )
    {
      if ( (v27 & 4) == 0 )
      {
        v32 = (unsigned __int64 *)(&Base + (unsigned int)(v13 - 1));
        v33 = *v32;
        if ( (*v32 & 0xC00) == 0 )
        {
          SchedulerAssist = (__int64 *)(*v32 & 0x3FF);
          if ( (v33 & 0xFFFFFFFFFFFFF000uLL) + (((_QWORD)SchedulerAssist + 1) << 12) == v30
            && (__int64 *)((char *)SchedulerAssist + 1) >= SchedulerAssist
            && (unsigned __int64)SchedulerAssist + 1 <= 0x3FF )
          {
            v97 = v28 + 1;
            *v32 = ((unsigned __int16)v33 ^ (unsigned __int16)(v33 + 1)) & 0x3FF ^ v33;
LABEL_91:
            for ( i = v24 + 8 * v25; v24 < i; v24 += 8LL )
            {
              v41 = 0;
              if ( v24 >= 0xFFFFF6FB7DBED000uLL && v24 <= 0xFFFFF6FB7DBED7F8uLL )
                v41 = MiPteHasShadow() != 0;
              *(_QWORD *)v24 = 0LL;
              if ( v41 )
                MiWritePteShadow(v24, 0LL);
            }
            if ( v85 )
              MiFlushTbList(&v95);
            v20 = v78;
            v21 = v75;
            v3 = v90;
            goto LABEL_101;
          }
        }
      }
      if ( (v27 & 4) == 0 )
      {
        SchedulerAssist = &Base + (unsigned int)(v13 - 1);
        v34 = *SchedulerAssist;
        if ( (*SchedulerAssist & 0xC00) == 0 && (v34 & 0xFFFFFFFFFFFFF000uLL) == v30 + 4096 )
        {
          v35 = *SchedulerAssist & 0x3FF;
          if ( v35 + 1 >= v35 && v35 + 1 <= 0x3FF )
          {
            v97 = v28 + 1;
            *SchedulerAssist = ((unsigned __int16)(v34 - 4096) ^ (unsigned __int16)(v34 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v34 - 4096);
            goto LABEL_91;
          }
        }
      }
    }
    if ( (unsigned int)v13 < (unsigned int)v96 )
    {
      while ( 1 )
      {
        v36 = 1024LL;
        if ( (unsigned __int64)(v31 - 1) <= 0x3FF )
          v36 = v31;
        v31 -= v36;
        v37 = v30 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v36 - 1) & 0x3FF;
        v30 += v36 << 12;
        *(&Base + (unsigned int)v13) = v37;
        v13 = (unsigned int)(HIDWORD(v96) + 1);
        HIDWORD(v96) = v13;
        v97 += v36;
        if ( (_DWORD)v13 == (_DWORD)v96 && (v95 & 0x400000000LL) == 0 )
        {
          qsort(&Base, (unsigned int)v13, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
          MiCompressTbFlushList((__int64)&v95);
          v13 = HIDWORD(v96);
          if ( HIDWORD(v96) == (_DWORD)v96 )
          {
            if ( v31 )
              break;
          }
        }
        if ( !v31 )
          goto LABEL_91;
      }
      BYTE5(v95) = 1;
      v97 = HIDWORD(v96);
    }
    else
    {
      BYTE5(v95) = 1;
    }
    goto LABEL_91;
  }
  v22 = a1;
  MiFreeUltraMapping(*(_QWORD *)(*(_QWORD *)(a1 + 224) + 176LL));
  v20 = v78;
LABEL_102:
  v42 = v81;
  if ( v81 && v86 == 1 )
    *(_QWORD *)(v22 + 224) = 0LL;
  v43 = HIDWORD(v74);
  if ( HIDWORD(v74) == 1 || P )
  {
    v44 = v20[71];
    v45 = &dword_140C4E5B0;
    if ( v44 )
      v45 = &dword_140C4E5A0;
    v46 = &qword_140C4E5B8;
    if ( v44 )
      v46 = &qword_140C4E5A8;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v43) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v45, v43);
    }
    else
    {
      v87 = 0;
      CurrentPrcb = KeGetCurrentPrcb();
      v48 = CurrentPrcb->SchedulerAssist;
      if ( v48 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v49 = v48[6];
          v48[6] = v49 + 1;
          if ( v49 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(v45, 0x1Fu) )
      {
        v50 = CurrentPrcb->SchedulerAssist;
        if ( v50 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v51 = v50[6] - 1;
            v50[6] = v51;
            if ( !v51 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        LOBYTE(v43) = -1;
        v87 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)v45, v43, v13, SchedulerAssist);
      }
      v52 = *v45;
      while ( (v52 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v52 & 0x40000000) == 0 )
        {
          v54 = _InterlockedCompareExchange(v45, v52 | 0x40000000, v52);
          v53 = v52 == v54;
          v52 = v54;
          if ( !v53 )
            continue;
        }
        KeYieldProcessorEx(&v87);
        v52 = *v45;
      }
    }
    RtlAvlRemoveNode(v46, v78);
    v78[68] = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v45, retaddr);
    else
      *v45 = 0;
    v55 = KeGetCurrentPrcb();
    v56 = v55->SchedulerAssist;
    if ( v56 )
    {
      if ( v55->NestingLevel <= 1u )
      {
        v57 = v56[6] - 1;
        v56[6] = v57;
        if ( !v57 )
          KiRemoveSystemWorkPriorityKick(v55);
      }
    }
    LODWORD(v43) = HIDWORD(v74);
    v42 = v81;
  }
  v58 = *(_BYTE *)(v92 + 80);
  if ( v21 == 1 )
  {
    if ( v58 )
      ++dword_140C2A2F8[(unsigned int)v93];
    else
      ++dword_140C2A338[(unsigned int)v93];
    ++dword_140C2A2D4;
LABEL_141:
    v59 = 0LL;
LABEL_142:
    v60 = v76;
    goto LABEL_143;
  }
  if ( v58 )
  {
    ++dword_140C2A2E8[(unsigned int)v93];
  }
  else if ( v78[70] )
  {
    ++dword_140C2A308[(unsigned int)v93];
  }
  else
  {
    ++dword_140C2A328[(unsigned int)v93];
  }
  ++dword_140C2A2C8;
  if ( (_DWORD)v43 != 1 )
    goto LABEL_141;
  v59 = (v3 + 0x58000000000LL) / 48;
  v60 = v76;
  if ( v76 == 3 )
  {
    ++dword_140C2A2CC;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_BYTE *)(v3 + 34) &= ~8u;
    v65 = 128LL;
    if ( qword_140C4DF80 )
    {
      if ( (qword_140C4DF80 & 0x80) != 0 )
        v65 = 144LL;
      else
        v65 = qword_140C4DF80 | 0x80;
    }
    *(_QWORD *)(v3 + 16) = v65;
    if ( v78[70] )
    {
      MiFreeListPageContentsChanged((v3 + 0x58000000000LL) / 48);
    }
    else
    {
      if ( v79 )
      {
        v66 = *(_DWORD *)(MiSearchNumaNodeTable((v3 + 0x58000000000LL) / 48) + 8);
        v67 = ((unsigned int)MiGetPfnChannel(v3) << byte_140C4DECD) | dword_140C4DF38 & (unsigned int)v59 | (v66 << byte_140C4DECC);
        if ( (unsigned int)MiFreeZeroPageSlistSufficient(v88, (unsigned int)v67, 0LL) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v88 + 2176) + 40 * v67) >= (unsigned __int64)(unsigned int)(4
                                                                                                 * *(_DWORD *)(v88 + 6300)) )
            v77 = 1;
        }
      }
      MiUnlinkFreeOrZeroedPage((v3 + 0x58000000000LL) / 48);
      MiInsertPageInFreeOrZeroedList((v3 + 0x58000000000LL) / 48);
    }
    goto LABEL_142;
  }
  if ( v79 )
    v77 = v78[70] == 0;
  MiLargePageFreeToZero((v3 + 0x58000000000LL) / 48);
LABEL_143:
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v61 = KeGetCurrentIrql();
      if ( v61 <= 0xFu && v83 <= 0xFu && v61 >= 2u )
      {
        v62 = KeGetCurrentPrcb();
        v63 = v62->SchedulerAssist;
        v64 = ~(unsigned __int16)(-1LL << (v83 + 1));
        v53 = (v64 & v63[5]) == 0;
        v63[5] &= v64;
        if ( v53 )
          KiRemoveSystemWorkPriorityKick(v62);
      }
    }
  }
  __writecr8(v83);
  if ( v42 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v69 = KeGetCurrentIrql();
        if ( v69 <= 0xFu && LockHandle.OldIrql <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v72 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v53 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v53 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
    }
    __writecr8(OldIrql);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v77 )
    MiChangePageHeatImmediate(v59, v60, 0LL);
  if ( v79 )
  {
    v73 = v88;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v88 + 192), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v73 + 192);
    KeAbPostRelease(v73 + 192);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    MiSetZeroPageThreadPriority(v73, CurrentThread, v80);
  }
}
