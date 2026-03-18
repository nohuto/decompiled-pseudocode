/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x1402287C8 (MiReturnPhysicalPoolPages.c)
 *     MiRelinkStandbyPage @ 0x1402323E8 (MiRelinkStandbyPage.c)
 *     MiDrainZeroLookasides @ 0x1402416A4 (MiDrainZeroLookasides.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x140276E5C (MiDeleteClusterSection.c)
 *     MiWriteCompletePfn @ 0x14028C82C (MiWriteCompletePfn.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiWsleFree @ 0x1402C2AD0 (MiWsleFree.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiFreeMdlPageRun @ 0x1402C3410 (MiFreeMdlPageRun.c)
 *     MiDeletePteList @ 0x1402C3BA0 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402C4E50 (MiZeroPage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiPurgeZeroList @ 0x14038E01C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x14038E4BC (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     MiReturnPfnList @ 0x1403C2A5C (MiReturnPfnList.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403CC0F0 (MiLockAndInsertPageInFreeList.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiEnableNewPfns @ 0x1405827E0 (MiEnableNewPfns.c)
 *     MiFreeSmallPageFromMdl @ 0x1405898DC (MiFreeSmallPageFromMdl.c)
 *     MmFreeNonChargedSecurePages @ 0x14058A2D8 (MmFreeNonChargedSecurePages.c)
 *     MiPurgeSubsection @ 0x14058BA98 (MiPurgeSubsection.c)
 *     MiUnlinkBadPages @ 0x14058EB84 (MiUnlinkBadPages.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiDeleteEnclavePage @ 0x1405A931C (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1405A9F00 (MiReturnEnclavePage.c)
 *     MiDeleteSubsectionLargePages @ 0x1405AED7C (MiDeleteSubsectionLargePages.c)
 *     MiFreePageFileHashPfn @ 0x1405BC4A4 (MiFreePageFileHashPfn.c)
 *     MiTransferPartitionPageRun @ 0x1405BF718 (MiTransferPartitionPageRun.c)
 *     MiMakePageBad @ 0x1405C4E28 (MiMakePageBad.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 *     MxCreateFreePfns @ 0x140AF5478 (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x140B088E4 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140220C30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiFreeSlabPage @ 0x14023B354 (MiFreeSlabPage.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiWakeZeroingThreads @ 0x140267A5C (MiWakeZeroingThreads.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiInsertPageInList @ 0x1402BF9C0 (MiInsertPageInList.c)
 *     MiCoalesceFreePages @ 0x1402C7DF0 (MiCoalesceFreePages.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     MiPageToChannel @ 0x1403B76EC (MiPageToChannel.c)
 *     MiUpdateAvailableEvents @ 0x1403C3E64 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x14059DA64 (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x1405AD468 (MiArePageContentsZero.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14063D8B0 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  signed __int64 v2; // rsi
  unsigned __int64 v5; // r8
  ULONG_PTR v6; // r14
  unsigned int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // rax
  int PagePrivilege; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  signed __int64 v13; // rax
  signed __int64 v14; // rax
  bool v15; // zf
  int v16; // edx
  ULONG_PTR v17; // rsi
  ULONG_PTR *v18; // rax
  char *v19; // rdi
  int v20; // edi
  int v21; // r8d
  int v22; // r8d
  int v23; // eax
  ULONG_PTR *v24; // rcx
  unsigned int v25; // r10d
  unsigned int v26; // r8d
  char v27; // al
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rsi
  unsigned __int16 v33; // r12
  __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  __int64 v36; // r10
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  __int64 *v39; // rdi
  __int64 v40; // rcx
  __int64 *v41; // r11
  __int64 v42; // r13
  __int64 v43; // r15
  _QWORD *v44; // r9
  __int64 v45; // rax
  unsigned __int64 v46; // r8
  unsigned __int16 **v47; // r10
  __int64 v48; // r11
  unsigned __int16 *v49; // rcx
  unsigned __int64 v50; // rsi
  __int64 v51; // rax
  char v52; // cl
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  struct _KEVENT *v56; // rdi
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r12
  __int64 v60; // rsi
  __int64 v61; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v64; // eax
  _DWORD *v65; // rcx
  int v66; // eax
  int i; // ecx
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 v70; // rdx
  signed __int64 v71; // r8
  signed __int64 v72; // rcx
  __int64 v73; // rcx
  struct _KPRCB *v74; // rcx
  _DWORD *v75; // rdx
  int v76; // eax
  unsigned __int64 v77; // r8
  unsigned __int16 **v78; // r11
  __int64 v79; // r10
  unsigned __int16 *v80; // rcx
  unsigned int v81; // edx
  unsigned __int64 v82; // r15
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // r14
  unsigned __int64 j; // rbx
  _DWORD *v87; // r9
  __int64 v88; // rsi
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  signed __int32 v98[8]; // [rsp+0h] [rbp-168h] BYREF
  __int64 v99; // [rsp+30h] [rbp-138h]
  int v100; // [rsp+38h] [rbp-130h] BYREF
  int v101; // [rsp+3Ch] [rbp-12Ch]
  unsigned __int64 v102; // [rsp+40h] [rbp-128h]
  __int64 v103; // [rsp+48h] [rbp-120h]
  unsigned __int64 v104; // [rsp+50h] [rbp-118h]
  unsigned __int64 v105; // [rsp+58h] [rbp-110h]
  __int64 v106; // [rsp+60h] [rbp-108h]
  __int64 v107; // [rsp+68h] [rbp-100h]
  __int64 v108; // [rsp+70h] [rbp-F8h]
  __int64 *v109; // [rsp+78h] [rbp-F0h]
  volatile signed __int64 *v110; // [rsp+80h] [rbp-E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE v112; // [rsp+A0h] [rbp-C8h] BYREF
  _OWORD v113[3]; // [rsp+B8h] [rbp-B0h] BYREF
  __int64 v114; // [rsp+E8h] [rbp-80h]
  signed __int64 v115; // [rsp+F0h] [rbp-78h]
  __int128 v116; // [rsp+F8h] [rbp-70h]
  __int128 v117; // [rsp+108h] [rbp-60h]
  __int128 v118; // [rsp+118h] [rbp-50h]
  void *retaddr; // [rsp+168h] [rbp+0h]
  unsigned int v121; // [rsp+180h] [rbp+18h]
  unsigned int v122; // [rsp+188h] [rbp+20h]

  v2 = 48 * BugCheckParameter2;
  v5 = *(_QWORD *)(48 * BugCheckParameter2 - 0x220000000000LL + 40);
  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( (v5 & 0x20000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x220000000000LL, 12);
    MiClearFileOnlyPfn(v6);
    return;
  }
  v7 = 0;
  v8 = *(_QWORD *)(qword_140C51F48 + 8 * ((v5 >> 43) & 0x3FF));
  v99 = v8;
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C52AE0 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v6 + 40);
    }
    v121 = 0;
    v9 = 2496LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v6 + 34) = *(_BYTE *)(v6 + 34) & 0xF8 | 5;
      *(_BYTE *)(v6 + 35) |= 0x10u;
      MiInsertPageInList(v6, 0x100u);
      return;
    }
    v9 = 2624LL;
    v121 = 1;
  }
  v110 = (volatile signed __int64 *)(v9 + v8);
  v113[0] = 0LL;
  if ( ((v5 >> 60) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v6);
    if ( PagePrivilege )
    {
      v11 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v11 = 16LL;
      if ( (int)KeSetPagePrivilege(0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), v113, v11) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4), 0LL, 0LL);
    }
    MiSetPfnIdentity(v6, 0LL);
  }
  *(_QWORD *)(v6 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v98, 0);
  v12 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v6 + 35) &= 0xF8u;
  *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (v12 << 59)) & 0x3800000000000000LL;
  *(_QWORD *)(v6 + 8) |= 0x8000000000000000uLL;
  v13 = *(_QWORD *)(v6 + 40);
  v114 = 0LL;
  v115 = v13;
  memset(&v113[1], 0, 32);
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v13 & 0x8FFFFFFFFFFFFFFFuLL, v13);
  for ( *((_QWORD *)&v118 + 1) = v14; v115 != v14; *((_QWORD *)&v118 + 1) = v14 )
  {
    v115 = v14;
    v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 40), v14 & 0x8FFFFFFFFFFFFFFFuLL, v14);
  }
  *(_QWORD *)(v6 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(v6 + 34) &= 0xC7u;
  v15 = byte_140C58C66 == 0;
  *(_BYTE *)(v6 + 35) &= ~0x20u;
  if ( !v15 && _bittest64((const signed __int64 *)qword_140C58DE0, (0xAAAAAAAAAAAAAAABuLL * (v2 >> 4)) >> 9) )
  {
    if ( (a2 & 0x800) == 0 )
      MiFreeSlabPage(v6);
    return;
  }
  if ( (*(_BYTE *)(v6 + 35) & 0x40) != 0 )
  {
    MiInsertPageInList(v6, 0x20u);
    return;
  }
  v16 = dword_140C506C8;
  v17 = 0xAAAAAAAAAAAAAAABuLL * (v2 >> 4);
  if ( dword_140C506C4 <= (unsigned int)dword_140C506C8 )
  {
    v18 = (ULONG_PTR *)((char *)qword_140C50708 + 16 * dword_140C506C4);
    if ( v17 >= *v18 && (dword_140C506C4 == dword_140C506C8 || v17 < v18[2]) )
    {
      v19 = (char *)qword_140C50708 + 16 * dword_140C506C4;
      goto LABEL_30;
    }
  }
  v22 = 0;
  if ( dword_140C506C8 < 0 )
LABEL_187:
    KeBugCheckEx(0x1Au, 0x6201uLL, v17, 0LL, 0LL);
  while ( 1 )
  {
    v23 = (v22 + v16) >> 1;
    v24 = (ULONG_PTR *)((char *)qword_140C50708 + 16 * v23);
    if ( v17 < *v24 )
    {
      if ( !v23 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v17, (ULONG_PTR)v24, 0LL);
      v16 = v23 - 1;
      goto LABEL_39;
    }
    if ( v23 == dword_140C506C8 || v17 < v24[2] )
      break;
    v22 = v23 + 1;
LABEL_39:
    if ( v16 < v22 )
      goto LABEL_187;
  }
  dword_140C506C4 = (v22 + v16) >> 1;
  v19 = (char *)qword_140C50708 + 16 * v23;
LABEL_30:
  v20 = *((_DWORD *)v19 + 2);
  if ( qword_140C50710 )
    v21 = MiPageToChannel(v17);
  else
    v21 = 0;
  v25 = v121;
  v26 = dword_140C50738 & BugCheckParameter2 | (v20 << byte_140C506CC) | (v21 << byte_140C506CD);
  v27 = v121 | *(_BYTE *)(v6 + 34) & 0xF8;
  v105 = *(_QWORD *)(v8 + 16) + 24512 * ((unsigned __int64)v26 >> byte_140C506CC);
  *(_BYTE *)(v6 + 34) = v27;
  v28 = v26;
  v122 = v26;
  v102 = v26;
  v101 = a2 & 0x400;
  v29 = *(_QWORD *)(v6 + 16);
  if ( v29 )
  {
    if ( qword_140C50780 )
    {
      if ( (v29 & 0x10) != 0 )
        LODWORD(v29) = v29 & 0xFFFFFFEF;
      else
        LODWORD(v29) = ~(_DWORD)qword_140C50780 & v29;
    }
  }
  else
  {
    LODWORD(v29) = 0;
  }
  v30 = -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL | (unsigned int)v29;
  v31 = qword_140C50780;
  if ( qword_140C50780 )
  {
    if ( (v30 & qword_140C50780) != 0 )
      v30 |= 0x10uLL;
    else
      v30 |= qword_140C50780;
  }
  *(_QWORD *)(v6 + 16) = v30;
  if ( (a2 & 0x40) != 0 )
    goto LABEL_80;
  if ( (a2 & 0x200) != 0 )
    goto LABEL_57;
  if ( !(unsigned int)MiCoalesceFreePages(BugCheckParameter2) )
  {
    v26 = v122;
    v28 = v102;
    v25 = v121;
LABEL_57:
    if ( (a2 & 0x400) == 0 && (*(_DWORD *)(v8 + 4) & 0x20) == 0 )
    {
      v32 = *(_QWORD *)(v8 + 16) + 24512 * (v28 >> byte_140C506CC);
      v33 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v26 >> byte_140C506CD);
      v109 = (__int64 *)(v8 + 8LL * v25 + 6616);
      v34 = *v109;
      v31 = 2 * (v25 ^ 1) + 4096;
      v106 = 16 * v28;
      if ( *(unsigned __int16 *)(16 * v28 + v34) < *(int *)(v8 + 16188) )
      {
        v35 = 0LL;
        v36 = 0LL;
        v108 = ((unsigned int)~(_DWORD)v31 >> 1) & 1;
        do
        {
          v37 = v33;
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v38 = *(_QWORD *)(v32 + 8 * v36 + 22560) + v35;
          else
            v38 = *(_QWORD *)(v32 + 8 * (v36 + 2LL * v33) + 22720) + v35;
          v104 = v38;
          v39 = MiLargePageSizes;
          v40 = 3LL;
          v41 = (__int64 *)(v32 + 8 * v36);
          v103 = 3LL;
          v42 = 0LL;
          v43 = 0LL;
          v44 = (_QWORD *)v32;
          do
          {
            v107 = *v39;
            if ( v33 == 4 )
            {
              if ( v36 == 2 )
                v45 = *v44 + v44[1];
              else
                v45 = *v41;
              v37 = 4LL;
            }
            else
            {
              v31 = v43 + 4 * (v37 + 4 * v36);
              v45 = *(_QWORD *)(v32 + 8 * v31 + 48)
                  + *(_QWORD *)(v32 + 8 * v31 + 56)
                  + *(_QWORD *)(v32 + 8 * v31 + 72)
                  + *(_QWORD *)(v32 + 8 * v31 + 304)
                  + *(_QWORD *)(v32 + 8 * v31 + 312)
                  + *(_QWORD *)(v32 + 8 * v31 + 328)
                  + *(_QWORD *)(v32 + 8 * v31 + 64)
                  + *(_QWORD *)(v32 + 8 * v31 + 320);
              v40 = v103;
            }
            ++v39;
            v44 += 134;
            v42 += v107 * v45;
            v43 += 134LL;
            v41 += 134;
            v103 = --v40;
          }
          while ( v40 );
          ++v36;
          v35 = v42 + v104;
        }
        while ( v36 <= v108 );
        v8 = v99;
        if ( v35 > 0x40 )
        {
          v46 = *(_QWORD *)(v99 + 16896);
          if ( v46 < 0x420 )
          {
            v47 = (unsigned __int16 **)(v99 + 6616);
            v48 = 0LL;
            while ( 1 )
            {
              v49 = *v47;
              v31 = 0LL;
              if ( dword_140C5073C )
                break;
LABEL_79:
              ++v48;
              ++v47;
              if ( v48 > 1 )
                goto LABEL_80;
            }
            while ( 1 )
            {
              v46 += *v49;
              if ( v46 >= 0x420 )
                break;
              v31 = (unsigned int)(v31 + 1);
              v49 += 8;
              if ( (unsigned int)v31 >= dword_140C5073C )
                goto LABEL_79;
            }
          }
          v52 = *(_BYTE *)(v6 + 34);
          if ( (v52 & 7) != 5 )
            *(_BYTE *)(v6 + 34) = v52 & 0xF8 | 5;
          v53 = ((unsigned __int64)v121 << 12) | *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v53 )
          {
            v7 = (v121 << 12) | *(_DWORD *)(v6 + 16) & 0xFFFF0FFF;
            if ( qword_140C50780 )
            {
              if ( (*(_BYTE *)(v6 + 16) & 0x10) != 0 )
                v7 = (v121 << 12) | *(_DWORD *)(v6 + 16) & 0xFFFF0FEF;
              else
                v7 = v53 & ~(_DWORD)qword_140C50780;
            }
          }
          v54 = v7 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C50780 )
          {
            if ( (qword_140C50780 & v54) != 0 )
              v54 = v7 | 0xFFFFFFFE00000010uLL;
            else
              v54 |= qword_140C50780;
          }
          v55 = v106;
          *(_QWORD *)(v6 + 16) = v54;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v109 + v55), (PSLIST_ENTRY)v6);
          return;
        }
      }
    }
LABEL_80:
    memset(&LockHandle, 0, sizeof(LockHandle));
    v50 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16896));
    if ( v50 <= 0x420 )
    {
      switch ( v50 )
      {
        case 0xA0uLL:
          v51 = 15720LL;
          goto LABEL_99;
        case 0x420uLL:
          v51 = 15752LL;
          goto LABEL_99;
        case 0x22uLL:
          v51 = 15688LL;
LABEL_99:
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 15680);
          v56 = (struct _KEVENT *)(v51 + v8);
          KxAcquireQueuedSpinLock(&LockHandle);
          KeSetEvent(v56, 0, 0);
          ++v56[1].Header.LockNV;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          break;
      }
    }
    v57 = v50 - 1;
    if ( v57 == *(_QWORD *)(v8 + 15944) || v57 == *(_QWORD *)(v8 + 15952) )
      MiUpdateAvailableEvents(v8);
    v58 = v105;
    v59 = _InterlockedIncrement64((volatile signed __int64 *)(v105 + 8LL * v121 + 22560));
    if ( (unsigned int)MmNumberOfChannels > 1 )
    {
      v31 = v122 >> byte_140C506CD;
      LOWORD(v31) = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & v31);
      _InterlockedIncrement64((volatile signed __int64 *)(v58 + 8 * (v121 + 2LL * (unsigned __int16)v31) + 22720));
    }
    v60 = v99;
    v61 = *(_QWORD *)(v99 + 8LL * v121 + 2432) + 88 * v102;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      LOBYTE(v31) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v61 + 32, v31);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v100 = 0;
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
      if ( _interlockedbittestandset((volatile signed __int32 *)(v61 + 32), 0x1Fu) )
      {
        v65 = CurrentPrcb->SchedulerAssist;
        if ( v65 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v66 = v65[6] - 1;
            v65[6] = v66;
            if ( !v66 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v100 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v61 + 32), 0xFFu);
      }
      for ( i = *(_DWORD *)(v61 + 32); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(v61 + 32) )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr((volatile signed __int32 *)(v61 + 32), 0x40000000u);
        KeYieldProcessorEx(&v100);
      }
      v60 = v99;
    }
    v68 = *(_QWORD *)(v61 + 16);
    if ( v68 == 0x3FFFFFFFFFLL )
    {
      _InterlockedOr(
        (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v60 + 16)
                                              + 24512 * (v102 >> byte_140C506CC)
                                              + 16 * (v121 + 1404LL)
                                              + 8)
                                  + 4 * ((unsigned __int64)(v122 & dword_140C50738) >> 5)),
        1 << (v122 & dword_140C50738 & 0x1F));
      *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
      *(_QWORD *)v6 = *(_QWORD *)v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
      *(_QWORD *)(v61 + 16) = BugCheckParameter2;
      *(_QWORD *)(v61 + 24) = BugCheckParameter2;
    }
    else
    {
      if ( v121 == 1 || v101 )
      {
        v73 = 48LL * *(_QWORD *)(v61 + 24);
        *(_QWORD *)(v6 + 24) ^= (*(_QWORD *)(v6 + 24) ^ (0xAAAAAAAAAAAAAAABuLL * (v73 >> 4))) & 0xFFFFFFFFFFLL;
        *(_QWORD *)(v73 - 0x220000000000LL) ^= (BugCheckParameter2 ^ *(_QWORD *)(v73 - 0x220000000000LL)) & 0xFFFFFFFFFFLL;
        *(_QWORD *)(v61 + 24) = BugCheckParameter2;
        *(_QWORD *)v6 = *(_QWORD *)v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
      }
      else
      {
        v69 = 48 * v68;
        *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL;
        v70 = *(_QWORD *)(48 * v68 - 0x220000000000LL + 24);
        v71 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v69 - 0x220000000000LL + 24),
                BugCheckParameter2 & 0xFFFFFFFFFFLL | v70 & 0xFFFFFF0000000000uLL,
                *(_QWORD *)(v69 - 0x220000000000LL + 24));
        if ( v70 != v71 )
        {
          do
          {
            v72 = v71;
            v71 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v69 - 0x220000000000LL + 24),
                    BugCheckParameter2 & 0xFFFFFFFFFFLL | v71 & 0xFFFFFF0000000000uLL,
                    v71);
          }
          while ( v72 != v71 );
        }
        *(_QWORD *)(v61 + 16) = BugCheckParameter2;
        *(_QWORD *)v6 ^= (*(_QWORD *)v6 ^ (0xAAAAAAAAAAAAAAABuLL * (v69 >> 4))) & 0xFFFFFFFFFFLL;
      }
      v60 = v99;
    }
    ++*(_QWORD *)v61;
    _InterlockedIncrement64(v110);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v61 + 32, retaddr);
    else
      *(_DWORD *)(v61 + 32) = 0;
    v74 = KeGetCurrentPrcb();
    v75 = v74->SchedulerAssist;
    if ( v75 )
    {
      if ( v74->NestingLevel <= 1u )
      {
        v76 = v75[6] - 1;
        v75[6] = v76;
        if ( !v76 )
          KiRemoveSystemWorkPriorityKick(v74);
      }
    }
    if ( v121 == 1 && v59 >= 0x40 )
    {
      v77 = *(_QWORD *)(v60 + 16896);
      if ( v77 < 0xA0 )
      {
        v78 = (unsigned __int16 **)(v60 + 6616);
        v79 = 0LL;
        while ( 1 )
        {
          v80 = *v78;
          v81 = 0;
          if ( dword_140C5073C )
            break;
LABEL_145:
          ++v79;
          ++v78;
          if ( v79 > 1 )
            return;
        }
        while ( 1 )
        {
          v77 += *v80;
          if ( v77 >= 0xA0 )
            break;
          ++v81;
          v80 += 8;
          if ( v81 >= dword_140C5073C )
            goto LABEL_145;
        }
      }
      v82 = v105;
      CurrentIrql = 17;
      memset(&v112, 0, sizeof(v112));
      if ( v105 )
      {
        if ( (*(_DWORD *)(v60 + 4) & 0x40) != 0 )
          return;
        v84 = v105;
        v85 = v105 + 24512;
      }
      else
      {
        v84 = *(_QWORD *)(v60 + 16);
        v85 = v84 + 24512LL * (unsigned __int16)KeNumberNodes;
      }
      if ( !*(_DWORD *)(v60 + 16100) && v84 < v85 )
      {
        for ( j = v84 + 2152; j - 2152 < v85; j += 24512LL )
        {
          if ( *(_BYTE *)(j + 20813) && !*(_BYTE *)(j + 20812) )
          {
            if ( !v82 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
              {
                v87 = KeGetCurrentPrcb()->SchedulerAssist;
                v87[5] |= (-1 << (CurrentIrql + 1)) & 4;
              }
LABEL_164:
              v88 = *(_QWORD *)(j + 20792);
              if ( v88 )
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v88 + 24), &v112);
                if ( !*(_BYTE *)(j + 20812) )
                {
                  *(_BYTE *)(j + 20812) = 1;
                  MiWakeZeroingThreads(v88, 2);
                }
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&v112);
                OldIrql = v112.OldIrql;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v90 = KeGetCurrentIrql();
                    if ( v90 <= 0xFu && v112.OldIrql <= 0xFu && v90 >= 2u )
                    {
                      v91 = KeGetCurrentPrcb();
                      v92 = v91->SchedulerAssist;
                      v93 = ~(unsigned __int16)(-1LL << (v112.OldIrql + 1));
                      v15 = (v93 & v92[5]) == 0;
                      v92[5] &= v93;
                      if ( v15 )
                        KiRemoveSystemWorkPriorityKick(v91);
                    }
                  }
                }
                __writecr8(OldIrql);
              }
              if ( !v82 )
              {
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v94 = KeGetCurrentIrql();
                    if ( v94 <= 0xFu && CurrentIrql <= 0xFu && v94 >= 2u )
                    {
                      v95 = KeGetCurrentPrcb();
                      v96 = v95->SchedulerAssist;
                      v97 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v15 = (v97 & v96[5]) == 0;
                      v96[5] &= v97;
                      if ( v15 )
                        KiRemoveSystemWorkPriorityKick(v95);
                    }
                  }
                }
                __writecr8(CurrentIrql);
              }
              continue;
            }
            if ( (unsigned __int64)(16LL * *(_QWORD *)j + (*(_QWORD *)(j - 1072) << 9) + (*(_QWORD *)(j - 2144) << 18)) >= 0x400
              && (unsigned __int64)(16LL * *(_QWORD *)(j - 8)
                                  + (*(_QWORD *)(j - 1080) << 9)
                                  + (*(_QWORD *)(j - 2152) << 18)) < 0x100000 )
            {
              goto LABEL_164;
            }
          }
        }
      }
    }
  }
}
