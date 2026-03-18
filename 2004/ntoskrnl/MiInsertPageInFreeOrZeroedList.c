/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x14023E080
 * Callers:
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiWriteCompletePfn @ 0x140234120 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140235440 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiWsleFree @ 0x1402B3AB0 (MiWsleFree.c)
 *     MiRelinkStandbyPage @ 0x1402D1FBC (MiRelinkStandbyPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiFreeSmallPageFromMdl @ 0x1403176EC (MiFreeSmallPageFromMdl.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     MiReturnPhysicalPoolPages @ 0x14032E1F4 (MiReturnPhysicalPoolPages.c)
 *     MiDrainZeroLookasides @ 0x140344FD0 (MiDrainZeroLookasides.c)
 *     MiPurgeZeroList @ 0x140381E8C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140382544 (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B450C (MiLockAndInsertPageInFreeList.c)
 *     MiReturnPfnList @ 0x1403B7500 (MiReturnPfnList.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EFF78 (MiConvertEntireLargePageToSmall.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F0884 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeSubsection @ 0x140524E00 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x140528B90 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x140529C28 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x14052F004 (MmFreeNonChargedSecurePages.c)
 *     MiDeleteEnclavePage @ 0x140544F70 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140545F50 (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x14054B934 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x14054EE54 (MiDeleteDirectMapFixupPfn.c)
 *     MiFreePageFileHashPfn @ 0x1405580DC (MiFreePageFileHashPfn.c)
 *     MiTransferPartitionPageRun @ 0x14055D970 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x14055EBAC (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140A3E10C (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x140A52C20 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x140A53250 (MiCreateEnclaveRegions.c)
 *     MxSwapPages @ 0x140A5547C (MxSwapPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertPageInList @ 0x140235AB0 (MiInsertPageInList.c)
 *     MiCoalesceFreePages @ 0x14023EE10 (MiCoalesceFreePages.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiPageToChannel @ 0x140317238 (MiPageToChannel.c)
 *     MiWakeZeroingThreads @ 0x140317500 (MiWakeZeroingThreads.c)
 *     MiNodeLargeFreeZeroPages @ 0x14031E340 (MiNodeLargeFreeZeroPages.c)
 *     MiFreeSlabPage @ 0x14037A0DC (MiFreeSlabPage.c)
 *     MiUpdateAvailableEvents @ 0x1403B2A94 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x14050DA08 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x14053A80C (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x1405496F8 (MiArePageContentsZero.c)
 */

void __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  ULONG_PTR v3; // r13
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // r12
  unsigned int v8; // r15d
  __int64 v9; // rax
  int PagePrivilege; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  char v14; // al
  bool v15; // zf
  int v16; // edx
  char *v17; // rax
  int v18; // r8d
  int v19; // ecx
  int v20; // edi
  int v21; // r8d
  unsigned int v22; // r8d
  char v23; // al
  unsigned __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r15
  unsigned __int16 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r10
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 *v38; // rdi
  __int64 v39; // r14
  __int64 *v40; // r11
  _QWORD *v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // r8
  unsigned __int16 **v45; // r10
  __int64 v46; // r11
  unsigned __int16 *v47; // rcx
  unsigned int v48; // edx
  char v49; // cl
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // r14
  __int64 v54; // rax
  struct _KEVENT *v55; // rdi
  unsigned __int64 v56; // r14
  unsigned __int64 v57; // r8
  __int64 v58; // r12
  unsigned __int64 v59; // r15
  __int64 v60; // rcx
  __int64 v61; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v64; // eax
  __int64 v65; // rax
  __int64 v66; // r11
  __int64 v67; // rdx
  signed __int64 v68; // r8
  signed __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  int v74; // eax
  __int64 v75; // r13
  unsigned __int64 v76; // r8
  unsigned __int16 **v77; // r11
  __int64 v78; // r10
  unsigned __int16 *v79; // rcx
  unsigned int v80; // edx
  unsigned __int64 v81; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v83; // rdi
  unsigned __int64 v84; // r15
  _BYTE *i; // rdi
  _DWORD *v86; // r9
  __int64 v87; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  _DWORD *v91; // r9
  int v92; // eax
  unsigned __int8 v93; // al
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  signed __int32 v97[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v98; // [rsp+30h] [rbp-89h]
  __int128 v99; // [rsp+38h] [rbp-81h] BYREF
  __int64 v100; // [rsp+48h] [rbp-71h]
  int v101; // [rsp+50h] [rbp-69h]
  unsigned __int64 v102; // [rsp+58h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v103; // [rsp+60h] [rbp-59h] BYREF
  __int64 v104; // [rsp+78h] [rbp-41h]
  unsigned __int64 v105; // [rsp+80h] [rbp-39h]
  __int64 v106; // [rsp+88h] [rbp-31h]
  __int64 v107; // [rsp+90h] [rbp-29h]
  __int64 v108; // [rsp+98h] [rbp-21h]
  __int64 v109; // [rsp+A0h] [rbp-19h]
  _QWORD *v110; // [rsp+A8h] [rbp-11h]
  volatile signed __int64 *v111; // [rsp+B0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v113; // [rsp+D0h] [rbp+17h] BYREF
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+5Fh]
  unsigned int v116; // [rsp+130h] [rbp+77h]
  unsigned int v117; // [rsp+138h] [rbp+7Fh]

  v100 = 0LL;
  v3 = BugCheckParameter2;
  v99 = 0LL;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x2000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x58000000000LL, 12LL);
    MiClearFileOnlyPfn(v4);
    return;
  }
  v6 = 0;
  v7 = *(_QWORD *)(qword_140C4E448 + 8 * ((v5 >> 39) & 0x3FF));
  v98 = v7;
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E5CC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v4 + 40);
    }
    v8 = 0;
    v116 = 0;
    v9 = 2240LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
      *(_BYTE *)(v4 + 35) |= 0x10u;
      MiInsertPageInList(v4, 0x100u);
      return;
    }
    v8 = 1;
    v9 = 2304LL;
    v116 = 1;
  }
  v111 = (volatile signed __int64 *)(v9 + v7);
  v113 = 0LL;
  if ( ((v5 >> 60) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v4);
    if ( PagePrivilege )
    {
      v11 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v11 = 16LL;
      if ( (int)KeSetPagePrivilege(v3, &v113, v11) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, v3, 0LL, 0LL);
    }
    *(_QWORD *)(v4 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  }
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v97, 0);
  v12 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  v13 = (*(_QWORD *)(v4 + 24) ^ (v12 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v4 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v14 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) ^= v13;
  *(_BYTE *)(v4 + 34) = v14 & 0xC7;
  v15 = byte_140C51E5E == 0;
  *(_BYTE *)(v4 + 35) &= ~0x20u;
  if ( !v15 && _bittest64((const signed __int64 *)qword_140C52388, v3 >> 9) )
  {
    if ( (a2 & 0x800) == 0 )
      MiFreeSlabPage(v4);
    return;
  }
  if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
  {
    MiInsertPageInList(v4, 0x20u);
    return;
  }
  v16 = dword_140C4DC88;
  if ( dword_140C4DC84 <= (unsigned int)dword_140C4DC88 )
  {
    v17 = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84;
    if ( v3 >= *(_QWORD *)v17 && (dword_140C4DC84 == dword_140C4DC88 || v3 < *((_QWORD *)v17 + 2)) )
      goto LABEL_37;
  }
  v18 = 0;
  if ( dword_140C4DC88 < 0 )
LABEL_183:
    KeBugCheckEx(0x1Au, 0x6201uLL, v3, 0LL, 0LL);
  while ( 1 )
  {
    v19 = (v18 + v16) >> 1;
    v17 = (char *)qword_140C4DCC8 + 16 * v19;
    if ( v3 < *(_QWORD *)v17 )
    {
      if ( !v19 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v3, (ULONG_PTR)qword_140C4DCC8, 0LL);
      v16 = v19 - 1;
      goto LABEL_34;
    }
    if ( v19 == dword_140C4DC88 || v3 < *((_QWORD *)v17 + 2) )
      break;
    v18 = v19 + 1;
LABEL_34:
    if ( v16 < v18 )
      goto LABEL_183;
  }
  dword_140C4DC84 = (v18 + v16) >> 1;
LABEL_37:
  v20 = *((_DWORD *)v17 + 2);
  if ( qword_140C4DCD0 )
    v21 = MiPageToChannel(v3);
  else
    v21 = 0;
  v22 = dword_140C4DCF8 & v3 | (v20 << byte_140C4DC8C) | (v21 << byte_140C4DC8D);
  v23 = v8 | *(_BYTE *)(v4 + 34) & 0xF8;
  v105 = *(_QWORD *)(v7 + 16) + 4544 * ((unsigned __int64)v22 >> byte_140C4DC8C);
  *(_BYTE *)(v4 + 34) = v23;
  v24 = v22;
  v117 = v22;
  v102 = v22;
  v101 = a2 & 0x400;
  v25 = *(_QWORD *)(v4 + 16);
  if ( v25 )
  {
    if ( qword_140C4DD40 )
    {
      if ( (v25 & 0x10) != 0 )
        LODWORD(v25) = v25 & 0xFFFFFFEF;
      else
        LODWORD(v25) = ~(_DWORD)qword_140C4DD40 & v25;
    }
  }
  else
  {
    LODWORD(v25) = 0;
  }
  v26 = -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL | (unsigned int)v25;
  if ( qword_140C4DD40 )
  {
    if ( (v26 & qword_140C4DD40) != 0 )
      v26 |= 0x10uLL;
    else
      v26 |= qword_140C4DD40;
  }
  *(_QWORD *)(v4 + 16) = v26;
  if ( (a2 & 0x40) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
    {
      if ( (unsigned int)MiCoalesceFreePages(v3) != 1 )
      {
        v22 = v117;
        v24 = v102;
        goto LABEL_54;
      }
      return;
    }
LABEL_54:
    if ( (a2 & 0x400) == 0 && (*(_DWORD *)(v7 + 4) & 0x20) == 0 )
    {
      v27 = *(_QWORD *)(v7 + 16) + 4544 * (v24 >> byte_140C4DC8C);
      v28 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v22 >> byte_140C4DC8D);
      v29 = v116 + 525LL;
      v30 = *(_QWORD *)(v98 + 8 * v29);
      v110 = (_QWORD *)(v98 + 8 * v29);
      v106 = 16 * v24;
      if ( *(unsigned __int16 *)(v30 + 16 * v24) >= *(int *)(v98 + 6300) )
      {
        v7 = v98;
      }
      else
      {
        v31 = 0LL;
        v32 = 0LL;
        v109 = (~(2 * (v116 ^ 1) + 4096) >> 1) & 1;
        do
        {
          v33 = v28;
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v34 = *(_QWORD *)(v27 + 8 * v32 + 4128);
          else
            v34 = *(_QWORD *)(v27 + 8 * (v32 + 2LL * v28) + 4216);
          v35 = v31 + v34;
          v36 = 0LL;
          v37 = 3LL;
          v108 = v35;
          v104 = 3LL;
          v38 = MiLargePageSizes;
          v39 = 0LL;
          v40 = (__int64 *)(v27 + 8 * v32);
          v41 = (_QWORD *)v27;
          do
          {
            v107 = *v38;
            if ( v28 == 4 )
            {
              if ( v32 == 2 )
                v42 = *v41 + v41[1];
              else
                v42 = *v40;
              v33 = 4LL;
            }
            else
            {
              v43 = v39 + 4 * (v33 + 4 * v32);
              v42 = *(_QWORD *)(v27 + 8 * v43 + 48)
                  + *(_QWORD *)(v27 + 8 * v43 + 56)
                  + *(_QWORD *)(v27 + 8 * v43 + 72)
                  + *(_QWORD *)(v27 + 8 * v43 + 304)
                  + *(_QWORD *)(v27 + 8 * v43 + 312)
                  + *(_QWORD *)(v27 + 8 * v43 + 328)
                  + *(_QWORD *)(v27 + 8 * v43 + 64)
                  + *(_QWORD *)(v27 + 8 * v43 + 320);
              v37 = v104;
            }
            ++v38;
            v41 += 134;
            v36 += v107 * v42;
            v39 += 134LL;
            v40 += 134;
            v104 = --v37;
          }
          while ( v37 );
          ++v32;
          v31 = v36 + v108;
        }
        while ( v32 <= v109 );
        v7 = v98;
        if ( v31 > 0x40 )
        {
          v44 = *(_QWORD *)(v98 + 7104);
          if ( v44 < 0x420 )
          {
            v45 = (unsigned __int16 **)(v98 + 4200);
            v46 = 0LL;
            while ( 1 )
            {
              v47 = *v45;
              v48 = 0;
              if ( dword_140C4DCFC )
                break;
LABEL_76:
              ++v46;
              ++v45;
              if ( v46 > 1 )
                goto LABEL_77;
            }
            while ( 1 )
            {
              v44 += *v47;
              if ( v44 >= 0x420 )
                break;
              ++v48;
              v47 += 8;
              if ( v48 >= dword_140C4DCFC )
                goto LABEL_76;
            }
          }
          v49 = *(_BYTE *)(v4 + 34);
          if ( (v49 & 7) != 5 )
            *(_BYTE *)(v4 + 34) = v49 & 0xF8 | 5;
          v50 = ((unsigned __int64)v116 << 12) | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v50 )
          {
            v6 = (v116 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FFF;
            if ( qword_140C4DD40 )
            {
              if ( (*(_BYTE *)(v4 + 16) & 0x10) != 0 )
                v6 = (v116 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FEF;
              else
                v6 = v50 & ~(_DWORD)qword_140C4DD40;
            }
          }
          v51 = v6 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DD40 )
          {
            if ( (qword_140C4DD40 & v51) != 0 )
              v51 = v6 | 0xFFFFFFFE00000010uLL;
            else
              v51 |= qword_140C4DD40;
          }
          v52 = v106;
          *(_QWORD *)(v4 + 16) = v51;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v110 + v52), (PSLIST_ENTRY)v4);
          return;
        }
LABEL_77:
        v3 = BugCheckParameter2;
      }
      v8 = v116;
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  v53 = _InterlockedIncrement64((volatile signed __int64 *)(v7 + 7104));
  if ( v53 <= 0x420 )
  {
    switch ( v53 )
    {
      case 0xA0uLL:
        v54 = 4968LL;
        goto LABEL_100;
      case 0x420uLL:
        v54 = 5000LL;
        goto LABEL_100;
      case 0x22uLL:
        v54 = 4936LL;
LABEL_100:
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v7 + 4928);
        v55 = (struct _KEVENT *)(v54 + v7);
        KxAcquireQueuedSpinLock(&LockHandle);
        KeSetEvent(v55, 0, 0);
        ++v55[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
    }
  }
  v56 = v53 - 1;
  if ( v56 == *(_QWORD *)(v7 + 5168) || v56 == *(_QWORD *)(v7 + 5176) )
    MiUpdateAvailableEvents(v7);
  v57 = v105;
  v58 = v8;
  v59 = _InterlockedIncrement64((volatile signed __int64 *)(v105 + 8LL * v8 + 4128));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v57
                                                      + 8
                                                      * (v58
                                                       + 2LL
                                                       * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v117 >> byte_140C4DC8D)))
                                                      + 4216));
  v60 = *(_QWORD *)(v98 + 8 * v58 + 2176);
  *(_QWORD *)&v99 = 0LL;
  v61 = v60 + 40 * v102;
  *((_QWORD *)&v99 + 1) = v61 + 32;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v64 = SchedulerAssist[6];
      SchedulerAssist[6] = v64 + 1;
      if ( v64 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v99, v61 + 32);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)(v61 + 32), (__int64)&v99) )
  {
    KxWaitForLockOwnerShip(&v99);
  }
  v65 = *(_QWORD *)(v61 + 16);
  if ( v65 == 0xFFFFFFFFFLL )
  {
    _InterlockedOr(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v98 + 16)
                                            + 4544 * (v102 >> byte_140C4DC8C)
                                            + 16 * (v58 + 252)
                                            + 8)
                                + 4 * ((unsigned __int64)(v117 & dword_140C4DCF8) >> 5)),
      1 << (v117 & dword_140C4DCF8 & 0x1F));
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v61 + 16) = v3;
    *(_QWORD *)(v61 + 24) = v3;
  }
  else if ( v116 == 1 || v101 )
  {
    v70 = 48LL * *(_QWORD *)(v61 + 24);
    *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (v70 / 48)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v70 - 0x58000000000LL) ^= (v3 ^ *(_QWORD *)(v70 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v61 + 24) = v3;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
  }
  else
  {
    v66 = 48 * v65;
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    v67 = *(_QWORD *)(48 * v65 - 0x58000000000LL + 24);
    v68 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v66 - 0x58000000000LL + 24),
            v3 & 0xFFFFFFFFFLL | v67 & 0xFFFFFFF000000000uLL,
            *(_QWORD *)(v66 - 0x58000000000LL + 24));
    if ( v67 != v68 )
    {
      do
      {
        v69 = v68;
        v68 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v66 - 0x58000000000LL + 24),
                v3 & 0xFFFFFFFFFLL | v68 & 0xFFFFFFF000000000uLL,
                v68);
      }
      while ( v69 != v68 );
    }
    *(_QWORD *)(v61 + 16) = v3;
    *(_QWORD *)v4 ^= (*(_QWORD *)v4 ^ (v66 / 48)) & 0xFFFFFFFFFLL;
  }
  ++*(_QWORD *)v61;
  _InterlockedIncrement64(v111);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v99, retaddr);
    goto LABEL_128;
  }
  _m_prefetchw(&v99);
  v71 = v99;
  if ( (_QWORD)v99 )
  {
LABEL_127:
    *(_QWORD *)&v99 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v71 + 8), 1uLL);
  }
  else if ( (__int128 *)_InterlockedCompareExchange64(
                          *((volatile signed __int64 **)&v99 + 1),
                          0LL,
                          (signed __int64)&v99) != &v99 )
  {
    v71 = KxWaitForLockChainValid(&v99);
    goto LABEL_127;
  }
LABEL_128:
  v72 = KeGetCurrentPrcb();
  v73 = v72->SchedulerAssist;
  if ( v73 )
  {
    if ( v72->NestingLevel <= 1u )
    {
      v74 = v73[6] - 1;
      v73[6] = v74;
      if ( !v74 )
        KiRemoveSystemWorkPriorityKick(v72);
    }
  }
  if ( v116 == 1 && v59 >= 0x40 )
  {
    v75 = v98;
    v76 = *(_QWORD *)(v98 + 7104);
    if ( v76 < 0xA0 )
    {
      v77 = (unsigned __int16 **)(v98 + 4200);
      v78 = 0LL;
      while ( 1 )
      {
        v79 = *v77;
        v80 = 0;
        if ( dword_140C4DCFC )
          break;
LABEL_139:
        ++v78;
        ++v77;
        if ( v78 > 1 )
          return;
      }
      while ( 1 )
      {
        v76 += *v79;
        if ( v76 >= 0xA0 )
          break;
        ++v80;
        v79 += 8;
        if ( v80 >= dword_140C4DCFC )
          goto LABEL_139;
      }
    }
    v81 = v105;
    CurrentIrql = 17;
    memset(&v103, 0, sizeof(v103));
    if ( v105 )
    {
      if ( (*(_DWORD *)(v98 + 4) & 0x40) != 0 )
        return;
      v83 = v105;
      v84 = v105 + 4544;
    }
    else
    {
      v83 = *(_QWORD *)(v98 + 16);
      v84 = v83 + 4544LL * (unsigned __int16)KeNumberNodes;
    }
    if ( !*(_DWORD *)(v98 + 6340) && v83 < v84 )
    {
      for ( i = (_BYTE *)(v83 + 4490); (unsigned __int64)(i - 4490) < v84; i += 4544 )
      {
        if ( !*i )
        {
          if ( !v81 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v86 = KeGetCurrentPrcb()->SchedulerAssist;
              v86[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
LABEL_157:
            if ( *(_BYTE *)(v75 + 6297) )
            {
              v87 = *(_QWORD *)(i - 58);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v87 + 24), &v103);
              if ( !*i )
              {
                *i = 1;
                MiWakeZeroingThreads(v87, 2LL);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v103);
              OldIrql = v103.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v89 = KeGetCurrentIrql();
                  if ( v89 <= 0xFu && v103.OldIrql <= 0xFu && v89 >= 2u )
                  {
                    v90 = KeGetCurrentPrcb();
                    v91 = v90->SchedulerAssist;
                    v92 = ~(unsigned __int16)(-1LL << (v103.OldIrql + 1));
                    v15 = (v92 & v91[5]) == 0;
                    v91[5] &= v92;
                    if ( v15 )
                      KiRemoveSystemWorkPriorityKick(v90);
                  }
                }
              }
              __writecr8(OldIrql);
            }
            else
            {
              v103.LockQueue.Next = 0LL;
              v103.LockQueue.Lock = (unsigned __int64 *volatile)(v75 + 4928);
              KxAcquireQueuedSpinLock(&v103);
              if ( !*i )
              {
                *i = 1;
                KeSetEvent((PRKEVENT)(v75 + 6272), 0, 0);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v103);
            }
            if ( !v81 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v93 = KeGetCurrentIrql();
                  if ( v93 <= 0xFu && CurrentIrql <= 0xFu && v93 >= 2u )
                  {
                    v94 = KeGetCurrentPrcb();
                    v95 = v94->SchedulerAssist;
                    v96 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v15 = (v96 & v95[5]) == 0;
                    v95[5] &= v96;
                    if ( v15 )
                      KiRemoveSystemWorkPriorityKick(v94);
                  }
                }
              }
              __writecr8(CurrentIrql);
            }
            continue;
          }
          if ( (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 1LL) >= 0x400
            && (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 0LL) < 0x100000 )
          {
            goto LABEL_157;
          }
        }
      }
    }
  }
}
