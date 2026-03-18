/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x1402C3730
 * Callers:
 *     MiRelinkStandbyPage @ 0x140265740 (MiRelinkStandbyPage.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiWriteCompletePfn @ 0x1402A93D0 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x1402A98E0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402AB620 (MiWsleFree.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiReturnPhysicalPoolPages @ 0x140301A34 (MiReturnPhysicalPoolPages.c)
 *     MiDrainZeroLookasides @ 0x140315D30 (MiDrainZeroLookasides.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiFreeSmallPageFromMdl @ 0x14034E0A4 (MiFreeSmallPageFromMdl.c)
 *     MiPurgeZeroList @ 0x140383B6C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140384224 (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B5ECC (MiLockAndInsertPageInFreeList.c)
 *     MiReturnPfnList @ 0x1403B9FA0 (MiReturnPfnList.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F448C (MiConvertEntireLargePageToSmall.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F4D98 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x14052C560 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x14052D5F8 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1405329D4 (MmFreeNonChargedSecurePages.c)
 *     MiDeleteEnclavePage @ 0x140548940 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140549920 (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x14054F304 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140552824 (MiDeleteDirectMapFixupPfn.c)
 *     MiFreePageFileHashPfn @ 0x14055BAAC (MiFreePageFileHashPfn.c)
 *     MiTransferPartitionPageRun @ 0x140561340 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x14056257C (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140A443AC (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x140A532A0 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x140A538D0 (MiCreateEnclaveRegions.c)
 *     MxSwapPages @ 0x140A55AFC (MxSwapPages.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiNodeLargeFreeZeroPages @ 0x1402311E0 (MiNodeLargeFreeZeroPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     MiInsertPageInList @ 0x1402A9F50 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiCoalesceFreePages @ 0x1402C44C0 (MiCoalesceFreePages.c)
 *     MiPageToChannel @ 0x1402F2478 (MiPageToChannel.c)
 *     MiWakeZeroingThreads @ 0x1402F2740 (MiWakeZeroingThreads.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     MiFreeSlabPage @ 0x14037BE0C (MiFreeSlabPage.c)
 *     MiUpdateAvailableEvents @ 0x1403B5404 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x140511338 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x14053E1DC (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x14054D0C8 (MiArePageContentsZero.c)
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
  _QWORD *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r11
  __int64 v68; // rdx
  signed __int64 v69; // r8
  signed __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rax
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  int v75; // eax
  __int64 v76; // r13
  unsigned __int64 v77; // r8
  unsigned __int16 **v78; // r11
  __int64 v79; // r10
  unsigned __int16 *v80; // rcx
  unsigned int v81; // edx
  unsigned __int64 v82; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // r15
  _BYTE *i; // rdi
  _DWORD *v87; // r9
  __int64 v88; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  signed __int32 v98[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v99; // [rsp+30h] [rbp-89h]
  __int128 v100; // [rsp+38h] [rbp-81h] BYREF
  __int64 v101; // [rsp+48h] [rbp-71h]
  int v102; // [rsp+50h] [rbp-69h]
  unsigned __int64 v103; // [rsp+58h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v104; // [rsp+60h] [rbp-59h] BYREF
  __int64 v105; // [rsp+78h] [rbp-41h]
  unsigned __int64 v106; // [rsp+80h] [rbp-39h]
  __int64 v107; // [rsp+88h] [rbp-31h]
  __int64 v108; // [rsp+90h] [rbp-29h]
  __int64 v109; // [rsp+98h] [rbp-21h]
  __int64 v110; // [rsp+A0h] [rbp-19h]
  _QWORD *v111; // [rsp+A8h] [rbp-11h]
  volatile signed __int64 *v112; // [rsp+B0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v114; // [rsp+D0h] [rbp+17h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  unsigned int v117; // [rsp+130h] [rbp+77h]
  unsigned int v118; // [rsp+138h] [rbp+7Fh]

  v101 = 0LL;
  v3 = BugCheckParameter2;
  v100 = 0LL;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x2000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x58000000000LL, 12LL);
    MiClearFileOnlyPfn(v4);
    return;
  }
  v6 = 0;
  v7 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v5 >> 39) & 0x3FF));
  v99 = v7;
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E64C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v4 + 40);
    }
    v8 = 0;
    v117 = 0;
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
    v117 = 1;
  }
  v112 = (volatile signed __int64 *)(v9 + v7);
  v114 = 0LL;
  if ( ((v5 >> 60) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v4, 1, (unsigned __int64 *)&v114);
    if ( PagePrivilege )
    {
      v11 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v11 = 16LL;
      if ( (int)KeSetPagePrivilege(v3, &v114, v11) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, v3, 0LL, 0LL);
    }
    *(_QWORD *)(v4 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  }
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v98, 0);
  v12 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  v13 = (*(_QWORD *)(v4 + 24) ^ (v12 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v4 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v14 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) ^= v13;
  *(_BYTE *)(v4 + 34) = v14 & 0xC7;
  v15 = byte_140C51EDE == 0;
  *(_BYTE *)(v4 + 35) &= ~0x20u;
  if ( !v15 && _bittest64((const signed __int64 *)qword_140C52408, v3 >> 9) )
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
  v16 = dword_140C4DD08;
  if ( dword_140C4DD04 <= (unsigned int)dword_140C4DD08 )
  {
    v17 = (char *)qword_140C4DD48 + 16 * dword_140C4DD04;
    if ( v3 >= *(_QWORD *)v17 && (dword_140C4DD04 == dword_140C4DD08 || v3 < *((_QWORD *)v17 + 2)) )
      goto LABEL_37;
  }
  v18 = 0;
  if ( dword_140C4DD08 < 0 )
LABEL_183:
    KeBugCheckEx(0x1Au, 0x6201uLL, v3, 0LL, 0LL);
  while ( 1 )
  {
    v19 = (v18 + v16) >> 1;
    v17 = (char *)qword_140C4DD48 + 16 * v19;
    if ( v3 < *(_QWORD *)v17 )
    {
      if ( !v19 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v3, (ULONG_PTR)qword_140C4DD48, 0LL);
      v16 = v19 - 1;
      goto LABEL_34;
    }
    if ( v19 == dword_140C4DD08 || v3 < *((_QWORD *)v17 + 2) )
      break;
    v18 = v19 + 1;
LABEL_34:
    if ( v16 < v18 )
      goto LABEL_183;
  }
  dword_140C4DD04 = (v18 + v16) >> 1;
LABEL_37:
  v20 = *((_DWORD *)v17 + 2);
  if ( qword_140C4DD50 )
    v21 = MiPageToChannel(v3);
  else
    v21 = 0;
  v22 = dword_140C4DD78 & v3 | (v20 << byte_140C4DD0C) | (v21 << byte_140C4DD0D);
  v23 = v8 | *(_BYTE *)(v4 + 34) & 0xF8;
  v106 = *(_QWORD *)(v7 + 16) + 4544 * ((unsigned __int64)v22 >> byte_140C4DD0C);
  *(_BYTE *)(v4 + 34) = v23;
  v24 = v22;
  v118 = v22;
  v103 = v22;
  v102 = a2 & 0x400;
  v25 = *(_QWORD *)(v4 + 16);
  if ( v25 )
  {
    if ( qword_140C4DDC0 )
    {
      if ( (v25 & 0x10) != 0 )
        LODWORD(v25) = v25 & 0xFFFFFFEF;
      else
        LODWORD(v25) = ~(_DWORD)qword_140C4DDC0 & v25;
    }
  }
  else
  {
    LODWORD(v25) = 0;
  }
  v26 = -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL | (unsigned int)v25;
  if ( qword_140C4DDC0 )
  {
    if ( (v26 & qword_140C4DDC0) != 0 )
      v26 |= 0x10uLL;
    else
      v26 |= qword_140C4DDC0;
  }
  *(_QWORD *)(v4 + 16) = v26;
  if ( (a2 & 0x40) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
    {
      if ( (unsigned int)MiCoalesceFreePages(v3) != 1 )
      {
        v22 = v118;
        v24 = v103;
        goto LABEL_54;
      }
      return;
    }
LABEL_54:
    if ( (a2 & 0x400) == 0 && (*(_DWORD *)(v7 + 4) & 0x20) == 0 )
    {
      v27 = *(_QWORD *)(v7 + 16) + 4544 * (v24 >> byte_140C4DD0C);
      v28 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v22 >> byte_140C4DD0D);
      v29 = v117 + 525LL;
      v30 = *(_QWORD *)(v99 + 8 * v29);
      v111 = (_QWORD *)(v99 + 8 * v29);
      v107 = 16 * v24;
      if ( *(unsigned __int16 *)(v30 + 16 * v24) >= *(int *)(v99 + 6300) )
      {
        v7 = v99;
      }
      else
      {
        v31 = 0LL;
        v32 = 0LL;
        v110 = (~(2 * (v117 ^ 1) + 4096) >> 1) & 1;
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
          v109 = v35;
          v105 = 3LL;
          v38 = MiLargePageSizes;
          v39 = 0LL;
          v40 = (__int64 *)(v27 + 8 * v32);
          v41 = (_QWORD *)v27;
          do
          {
            v108 = *v38;
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
              v37 = v105;
            }
            ++v38;
            v41 += 134;
            v36 += v108 * v42;
            v39 += 134LL;
            v40 += 134;
            v105 = --v37;
          }
          while ( v37 );
          ++v32;
          v31 = v36 + v109;
        }
        while ( v32 <= v110 );
        v7 = v99;
        if ( v31 > 0x40 )
        {
          v44 = *(_QWORD *)(v99 + 7104);
          if ( v44 < 0x420 )
          {
            v45 = (unsigned __int16 **)(v99 + 4200);
            v46 = 0LL;
            while ( 1 )
            {
              v47 = *v45;
              v48 = 0;
              if ( dword_140C4DD7C )
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
              if ( v48 >= dword_140C4DD7C )
                goto LABEL_76;
            }
          }
          v49 = *(_BYTE *)(v4 + 34);
          if ( (v49 & 7) != 5 )
            *(_BYTE *)(v4 + 34) = v49 & 0xF8 | 5;
          v50 = ((unsigned __int64)v117 << 12) | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v50 )
          {
            v6 = (v117 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FFF;
            if ( qword_140C4DDC0 )
            {
              if ( (*(_BYTE *)(v4 + 16) & 0x10) != 0 )
                v6 = (v117 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FEF;
              else
                v6 = v50 & ~(_DWORD)qword_140C4DDC0;
            }
          }
          v51 = v6 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DDC0 )
          {
            if ( (qword_140C4DDC0 & v51) != 0 )
              v51 = v6 | 0xFFFFFFFE00000010uLL;
            else
              v51 |= qword_140C4DDC0;
          }
          v52 = v107;
          *(_QWORD *)(v4 + 16) = v51;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v111 + v52), (PSLIST_ENTRY)v4);
          return;
        }
LABEL_77:
        v3 = BugCheckParameter2;
      }
      v8 = v117;
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
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v7 + 4928));
        KeSetEvent(v55, 0, 0);
        ++v55[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
    }
  }
  v56 = v53 - 1;
  if ( v56 == *(_QWORD *)(v7 + 5168) || v56 == *(_QWORD *)(v7 + 5176) )
    MiUpdateAvailableEvents(v7);
  v57 = v106;
  v58 = v8;
  v59 = _InterlockedIncrement64((volatile signed __int64 *)(v106 + 8LL * v8 + 4128));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v57
                                                      + 8
                                                      * (v58
                                                       + 2LL
                                                       * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v118 >> byte_140C4DD0D)))
                                                      + 4216));
  v60 = *(_QWORD *)(v99 + 8 * v58 + 2176);
  *(_QWORD *)&v100 = 0LL;
  v61 = v60 + 40 * v103;
  *((_QWORD *)&v100 + 1) = v61 + 32;
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
    KiAcquireQueuedSpinLockInstrumented(&v100, v61 + 32);
  }
  else
  {
    v65 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v61 + 32), (__int64)&v100);
    if ( v65 )
      KxWaitForLockOwnerShip((__int64)&v100, v65);
  }
  v66 = *(_QWORD *)(v61 + 16);
  if ( v66 == 0xFFFFFFFFFLL )
  {
    _InterlockedOr(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v99 + 16)
                                            + 4544 * (v103 >> byte_140C4DD0C)
                                            + 16 * (v58 + 252)
                                            + 8)
                                + 4 * ((unsigned __int64)(v118 & dword_140C4DD78) >> 5)),
      1 << (v118 & dword_140C4DD78 & 0x1F));
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v61 + 16) = v3;
    *(_QWORD *)(v61 + 24) = v3;
  }
  else if ( v117 == 1 || v102 )
  {
    v71 = 48LL * *(_QWORD *)(v61 + 24);
    *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (v71 / 48)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v71 - 0x58000000000LL) ^= (v3 ^ *(_QWORD *)(v71 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v61 + 24) = v3;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
  }
  else
  {
    v67 = 48 * v66;
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    v68 = *(_QWORD *)(48 * v66 - 0x58000000000LL + 24);
    v69 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v67 - 0x58000000000LL + 24),
            v3 & 0xFFFFFFFFFLL | v68 & 0xFFFFFFF000000000uLL,
            *(_QWORD *)(v67 - 0x58000000000LL + 24));
    if ( v68 != v69 )
    {
      do
      {
        v70 = v69;
        v69 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v67 - 0x58000000000LL + 24),
                v3 & 0xFFFFFFFFFLL | v69 & 0xFFFFFFF000000000uLL,
                v69);
      }
      while ( v70 != v69 );
    }
    *(_QWORD *)(v61 + 16) = v3;
    *(_QWORD *)v4 ^= (*(_QWORD *)v4 ^ (v67 / 48)) & 0xFFFFFFFFFLL;
  }
  ++*(_QWORD *)v61;
  _InterlockedIncrement64(v112);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v100, retaddr);
    goto LABEL_128;
  }
  _m_prefetchw(&v100);
  v72 = v100;
  if ( (_QWORD)v100 )
  {
LABEL_127:
    *(_QWORD *)&v100 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v72 + 8), 1uLL);
  }
  else if ( (__int128 *)_InterlockedCompareExchange64(
                          *((volatile signed __int64 **)&v100 + 1),
                          0LL,
                          (signed __int64)&v100) != &v100 )
  {
    v72 = KxWaitForLockChainValid(&v100);
    goto LABEL_127;
  }
LABEL_128:
  v73 = KeGetCurrentPrcb();
  v74 = v73->SchedulerAssist;
  if ( v74 )
  {
    if ( v73->NestingLevel <= 1u )
    {
      v75 = v74[6] - 1;
      v74[6] = v75;
      if ( !v75 )
        KiRemoveSystemWorkPriorityKick(v73);
    }
  }
  if ( v117 == 1 && v59 >= 0x40 )
  {
    v76 = v99;
    v77 = *(_QWORD *)(v99 + 7104);
    if ( v77 < 0xA0 )
    {
      v78 = (unsigned __int16 **)(v99 + 4200);
      v79 = 0LL;
      while ( 1 )
      {
        v80 = *v78;
        v81 = 0;
        if ( dword_140C4DD7C )
          break;
LABEL_139:
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
        if ( v81 >= dword_140C4DD7C )
          goto LABEL_139;
      }
    }
    v82 = v106;
    CurrentIrql = 17;
    memset(&v104, 0, sizeof(v104));
    if ( v106 )
    {
      if ( (*(_DWORD *)(v99 + 4) & 0x40) != 0 )
        return;
      v84 = v106;
      v85 = v106 + 4544;
    }
    else
    {
      v84 = *(_QWORD *)(v99 + 16);
      v85 = v84 + 4544LL * (unsigned __int16)KeNumberNodes;
    }
    if ( !*(_DWORD *)(v99 + 6340) && v84 < v85 )
    {
      for ( i = (_BYTE *)(v84 + 4490); (unsigned __int64)(i - 4490) < v85; i += 4544 )
      {
        if ( !*i )
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
LABEL_157:
            if ( *(_BYTE *)(v76 + 6297) )
            {
              v88 = *(_QWORD *)(i - 58);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v88 + 24), &v104);
              if ( !*i )
              {
                *i = 1;
                MiWakeZeroingThreads(v88, 2LL);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v104);
              OldIrql = v104.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v90 = KeGetCurrentIrql();
                  if ( v90 <= 0xFu && v104.OldIrql <= 0xFu && v90 >= 2u )
                  {
                    v91 = KeGetCurrentPrcb();
                    v92 = v91->SchedulerAssist;
                    v93 = ~(unsigned __int16)(-1LL << (v104.OldIrql + 1));
                    v15 = (v93 & v92[5]) == 0;
                    v92[5] &= v93;
                    if ( v15 )
                      KiRemoveSystemWorkPriorityKick(v91);
                  }
                }
              }
              __writecr8(OldIrql);
            }
            else
            {
              v104.LockQueue.Next = 0LL;
              v104.LockQueue.Lock = (unsigned __int64 *volatile)(v76 + 4928);
              KxAcquireQueuedSpinLock((__int64)&v104, (volatile __int64 *)(v76 + 4928));
              if ( !*i )
              {
                *i = 1;
                KeSetEvent((PRKEVENT)(v76 + 6272), 0, 0);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v104);
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
          if ( (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4u, 1) >= 0x400
            && (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4u, 0) < 0x100000 )
          {
            goto LABEL_157;
          }
        }
      }
    }
  }
}
