/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x1402D9760
 * Callers:
 *     MiReturnPhysicalPoolPages @ 0x14021B214 (MiReturnPhysicalPoolPages.c)
 *     MiDrainZeroLookasides @ 0x1402375D0 (MiDrainZeroLookasides.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRelinkStandbyPage @ 0x14025FF78 (MiRelinkStandbyPage.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiDeletePteRun @ 0x1402DB4B0 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiFreeSmallPageFromMdl @ 0x14030ABF4 (MiFreeSmallPageFromMdl.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiWriteCompletePfn @ 0x1403309D0 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x140330EE0 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x140332C20 (MiWsleFree.c)
 *     MiPurgeZeroList @ 0x140384A9C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140385154 (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B767C (MiLockAndInsertPageInFreeList.c)
 *     MiReturnPfnList @ 0x1403BAB10 (MiReturnPfnList.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x14052E2A0 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x14052F338 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140534714 (MmFreeNonChargedSecurePages.c)
 *     MiDeleteEnclavePage @ 0x14054A680 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x14054B660 (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140554534 (MiDeleteDirectMapFixupPfn.c)
 *     MiFreePageFileHashPfn @ 0x14055D7BC (MiFreePageFileHashPfn.c)
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x14056428C (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140A44ECC (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x140A558A8 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x140A55ED8 (MiCreateEnclaveRegions.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MiCoalesceFreePages @ 0x1402DA4F0 (MiCoalesceFreePages.c)
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 *     MiWakeZeroingThreads @ 0x14030A120 (MiWakeZeroingThreads.c)
 *     MiNodeLargeFreeZeroPages @ 0x140323B90 (MiNodeLargeFreeZeroPages.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiFreeSlabPage @ 0x14037BAC4 (MiFreeSlabPage.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407B50 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x14053FF1C (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x14054EE08 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  ULONG_PTR v3; // r13
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rax
  int PagePrivilege; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // al
  bool v16; // zf
  int v17; // edx
  char *v18; // rax
  int v19; // r8d
  int v20; // ecx
  int v21; // edi
  int v22; // r8d
  unsigned __int64 v23; // r8
  char v24; // al
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int16 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 *v38; // rdi
  __int64 v39; // r14
  __int64 *v40; // r11
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int16 **v43; // r10
  __int64 v44; // r11
  unsigned __int16 *v45; // rcx
  unsigned int v46; // edx
  char v47; // cl
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  struct _KEVENT *v53; // rdi
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // r8
  __int64 v56; // r12
  unsigned __int64 v57; // r15
  __int64 v58; // rcx
  __int64 v59; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v62; // eax
  _QWORD *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r11
  __int64 v66; // rdx
  signed __int64 v67; // r8
  signed __int64 v68; // rcx
  __int64 v69; // rcx
  struct _KPRCB *v70; // rcx
  _DWORD *v71; // rdx
  __int64 v72; // r13
  unsigned __int64 v73; // r8
  unsigned __int16 **v74; // r11
  __int64 v75; // r10
  unsigned __int16 *v76; // rcx
  unsigned int v77; // edx
  unsigned __int64 v78; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // r15
  _BYTE *i; // rdi
  __int64 v83; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v85; // al
  struct _KPRCB *v86; // r10
  int v87; // eax
  unsigned __int8 v88; // al
  struct _KPRCB *v89; // r10
  int v90; // eax
  signed __int32 v91[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v92; // [rsp+30h] [rbp-89h]
  __int128 v93; // [rsp+38h] [rbp-81h] BYREF
  __int64 v94; // [rsp+48h] [rbp-71h]
  int v95; // [rsp+50h] [rbp-69h]
  unsigned __int64 v96; // [rsp+58h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v97; // [rsp+60h] [rbp-59h] BYREF
  __int64 v98; // [rsp+78h] [rbp-41h]
  unsigned __int64 v99; // [rsp+80h] [rbp-39h]
  __int64 v100; // [rsp+88h] [rbp-31h]
  __int64 v101; // [rsp+90h] [rbp-29h]
  __int64 v102; // [rsp+98h] [rbp-21h]
  __int64 v103; // [rsp+A0h] [rbp-19h]
  _QWORD *v104; // [rsp+A8h] [rbp-11h]
  volatile signed __int64 *v105; // [rsp+B0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v107; // [rsp+D0h] [rbp+17h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  unsigned int v110; // [rsp+130h] [rbp+77h]
  unsigned int v111; // [rsp+138h] [rbp+7Fh]

  v94 = 0LL;
  v3 = BugCheckParameter2;
  v93 = 0LL;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x2000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x58000000000LL, 12);
    return MiClearFileOnlyPfn(v4);
  }
  v7 = 0;
  v8 = *(_QWORD *)(qword_140C4E688 + 8 * ((v5 >> 39) & 0x3FF));
  v92 = v8;
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E80C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v4 + 40);
    }
    v9 = 0;
    v110 = 0;
    v10 = 2240LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
      *(_BYTE *)(v4 + 35) |= 0x10u;
      return MiInsertPageInList(v4, 256LL);
    }
    v9 = 1;
    v10 = 2304LL;
    v110 = 1;
  }
  v105 = (volatile signed __int64 *)(v10 + v8);
  v107 = 0LL;
  if ( ((v5 >> 60) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v4);
    if ( PagePrivilege )
    {
      v12 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v12 = 16LL;
      if ( (int)KeSetPagePrivilege(v3, &v107, v12) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, v3, 0LL, 0LL);
    }
    *(_QWORD *)(v4 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  }
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v91, 0);
  v13 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  v14 = (*(_QWORD *)(v4 + 24) ^ (v13 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v4 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v15 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) ^= v14;
  *(_BYTE *)(v4 + 34) = v15 & 0xC7;
  v16 = byte_140C5209E == 0;
  *(_BYTE *)(v4 + 35) &= ~0x20u;
  if ( !v16 )
  {
    result = qword_140C525C8;
    if ( _bittest64((const signed __int64 *)qword_140C525C8, v3 >> 9) )
    {
      if ( (a2 & 0x800) == 0 )
        return MiFreeSlabPage(v4);
      return result;
    }
  }
  if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
    return MiInsertPageInList(v4, 32LL);
  v17 = dword_140C4DEC8;
  if ( dword_140C4DEC4 <= (unsigned int)dword_140C4DEC8 )
  {
    v18 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4;
    if ( v3 >= *(_QWORD *)v18 && (dword_140C4DEC4 == dword_140C4DEC8 || v3 < *((_QWORD *)v18 + 2)) )
      goto LABEL_37;
  }
  v19 = 0;
  if ( dword_140C4DEC8 < 0 )
LABEL_183:
    KeBugCheckEx(0x1Au, 0x6201uLL, v3, 0LL, 0LL);
  while ( 1 )
  {
    v20 = (v19 + v17) >> 1;
    v18 = (char *)qword_140C4DF08 + 16 * v20;
    if ( v3 < *(_QWORD *)v18 )
    {
      if ( !v20 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v3, (ULONG_PTR)qword_140C4DF08, 0LL);
      v17 = v20 - 1;
      goto LABEL_34;
    }
    if ( v20 == dword_140C4DEC8 || v3 < *((_QWORD *)v18 + 2) )
      break;
    v19 = v20 + 1;
LABEL_34:
    if ( v17 < v19 )
      goto LABEL_183;
  }
  dword_140C4DEC4 = (v19 + v17) >> 1;
LABEL_37:
  v21 = *((_DWORD *)v18 + 2);
  if ( qword_140C4DF10 )
    v22 = MiPageToChannel(v3);
  else
    v22 = 0;
  v23 = dword_140C4DF38 & (unsigned int)v3 | (v21 << byte_140C4DECC) | (v22 << byte_140C4DECD);
  v24 = v9 | *(_BYTE *)(v4 + 34) & 0xF8;
  v99 = *(_QWORD *)(v8 + 16) + 4544 * ((unsigned __int64)(unsigned int)v23 >> byte_140C4DECC);
  *(_BYTE *)(v4 + 34) = v24;
  v25 = (unsigned int)v23;
  v111 = v23;
  v96 = (unsigned int)v23;
  v95 = a2 & 0x400;
  v26 = *(_QWORD *)(v4 + 16);
  if ( v26 )
  {
    if ( qword_140C4DF80 )
    {
      if ( (v26 & 0x10) != 0 )
        LODWORD(v26) = v26 & 0xFFFFFFEF;
      else
        LODWORD(v26) = ~(_DWORD)qword_140C4DF80 & v26;
    }
  }
  else
  {
    LODWORD(v26) = 0;
  }
  v27 = -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL | (unsigned int)v26;
  if ( qword_140C4DF80 )
  {
    if ( (v27 & qword_140C4DF80) != 0 )
      v27 |= 0x10uLL;
    else
      v27 |= qword_140C4DF80;
  }
  *(_QWORD *)(v4 + 16) = v27;
  if ( (a2 & 0x40) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
    {
      result = MiCoalesceFreePages(v3);
      if ( (_DWORD)result != 1 )
      {
        v23 = v111;
        v25 = v96;
        goto LABEL_54;
      }
      return result;
    }
LABEL_54:
    if ( (a2 & 0x400) == 0 && (*(_DWORD *)(v8 + 4) & 0x20) == 0 )
    {
      v28 = *(_QWORD *)(v8 + 16) + 4544 * (v25 >> byte_140C4DECC);
      v29 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v23 >> byte_140C4DECD);
      v30 = v110 + 525LL;
      v31 = *(_QWORD *)(v92 + 8 * v30);
      v104 = (_QWORD *)(v92 + 8 * v30);
      v23 = 2 * (v110 ^ 1) + 4096;
      v100 = 16 * v25;
      if ( *(unsigned __int16 *)(v31 + 16 * v25) >= *(int *)(v92 + 6300) )
      {
        v8 = v92;
      }
      else
      {
        v32 = 0LL;
        v33 = 0LL;
        v103 = ((unsigned int)~(_DWORD)v23 >> 1) & 1;
        do
        {
          v23 = v29;
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v34 = *(_QWORD *)(v28 + 8 * v33 + 4128);
          else
            v34 = *(_QWORD *)(v28 + 8 * (v33 + 2LL * v29) + 4216);
          v35 = v32 + v34;
          v36 = 0LL;
          v37 = 3LL;
          v102 = v35;
          v98 = 3LL;
          v38 = MiLargePageSizes;
          v39 = 0LL;
          v40 = (__int64 *)(v28 + 8 * v33);
          v25 = v28;
          do
          {
            v101 = *v38;
            if ( v29 == 4 )
            {
              if ( v33 == 2 )
                v41 = *(_QWORD *)v25 + *(_QWORD *)(v25 + 8);
              else
                v41 = *v40;
              v23 = 4LL;
            }
            else
            {
              v42 = v39 + 4 * (v23 + 4 * v33);
              v41 = *(_QWORD *)(v28 + 8 * v42 + 48)
                  + *(_QWORD *)(v28 + 8 * v42 + 56)
                  + *(_QWORD *)(v28 + 8 * v42 + 72)
                  + *(_QWORD *)(v28 + 8 * v42 + 304)
                  + *(_QWORD *)(v28 + 8 * v42 + 312)
                  + *(_QWORD *)(v28 + 8 * v42 + 328)
                  + *(_QWORD *)(v28 + 8 * v42 + 64)
                  + *(_QWORD *)(v28 + 8 * v42 + 320);
              v37 = v98;
            }
            ++v38;
            v25 += 1072LL;
            v36 += v101 * v41;
            v39 += 134LL;
            v40 += 134;
            v98 = --v37;
          }
          while ( v37 );
          ++v33;
          v32 = v36 + v102;
        }
        while ( v33 <= v103 );
        v8 = v92;
        if ( v32 > 0x40 )
        {
          v23 = *(_QWORD *)(v92 + 7104);
          if ( v23 < 0x420 )
          {
            v25 = (unsigned int)dword_140C4DF3C;
            v43 = (unsigned __int16 **)(v92 + 4200);
            v44 = 0LL;
            while ( 1 )
            {
              v45 = *v43;
              v46 = 0;
              if ( dword_140C4DF3C )
                break;
LABEL_76:
              ++v44;
              ++v43;
              if ( v44 > 1 )
                goto LABEL_77;
            }
            while ( 1 )
            {
              v23 += *v45;
              if ( v23 >= 0x420 )
                break;
              ++v46;
              v45 += 8;
              if ( v46 >= dword_140C4DF3C )
                goto LABEL_76;
            }
          }
          v47 = *(_BYTE *)(v4 + 34);
          if ( (v47 & 7) != 5 )
            *(_BYTE *)(v4 + 34) = v47 & 0xF8 | 5;
          v48 = ((unsigned __int64)v110 << 12) | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v48 )
          {
            v7 = (v110 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FFF;
            if ( qword_140C4DF80 )
            {
              if ( (*(_BYTE *)(v4 + 16) & 0x10) != 0 )
                v7 = (v110 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FEF;
              else
                v7 = v48 & ~(_DWORD)qword_140C4DF80;
            }
          }
          v49 = v7 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DF80 )
          {
            if ( (qword_140C4DF80 & v49) != 0 )
              v49 = v7 | 0xFFFFFFFE00000010uLL;
            else
              v49 |= qword_140C4DF80;
          }
          v50 = v100;
          *(_QWORD *)(v4 + 16) = v49;
          return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v104 + v50), (PSLIST_ENTRY)v4);
        }
LABEL_77:
        v3 = BugCheckParameter2;
      }
      v9 = v110;
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  v51 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 7104));
  if ( v51 <= 0x420 )
  {
    switch ( v51 )
    {
      case 0xA0uLL:
        v52 = 4968LL;
        goto LABEL_100;
      case 0x420uLL:
        v52 = 5000LL;
        goto LABEL_100;
      case 0x22uLL:
        v52 = 4936LL;
LABEL_100:
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4928);
        v53 = (struct _KEVENT *)(v52 + v8);
        KxAcquireQueuedSpinLock(&LockHandle, v8 + 4928, v23, v25);
        KeSetEvent(v53, 0, 0);
        ++v53[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
    }
  }
  v54 = v51 - 1;
  if ( v54 == *(_QWORD *)(v8 + 5168) || v54 == *(_QWORD *)(v8 + 5176) )
    MiUpdateAvailableEvents(v8);
  v55 = v99;
  v56 = v9;
  v57 = _InterlockedIncrement64((volatile signed __int64 *)(v99 + 8LL * v9 + 4128));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v55
                                                      + 8
                                                      * (v56
                                                       + 2LL
                                                       * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v111 >> byte_140C4DECD)))
                                                      + 4216));
  v58 = *(_QWORD *)(v92 + 8 * v56 + 2176);
  *(_QWORD *)&v93 = 0LL;
  v59 = v58 + 40 * v96;
  *((_QWORD *)&v93 + 1) = v59 + 32;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v62 = SchedulerAssist[6];
      SchedulerAssist[6] = v62 + 1;
      if ( v62 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v93, v59 + 32);
  }
  else
  {
    v63 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v59 + 32), (__int64)&v93);
    if ( v63 )
      KxWaitForLockOwnerShip((__int64)&v93, v63);
  }
  v64 = *(_QWORD *)(v59 + 16);
  if ( v64 == 0xFFFFFFFFFLL )
  {
    v25 = *(_QWORD *)(v92 + 16) + 4544 * (v96 >> byte_140C4DECC) + 16 * (v56 + 252);
    _InterlockedOr(
      (volatile signed __int32 *)(*(_QWORD *)(v25 + 8) + 4 * ((unsigned __int64)(v111 & dword_140C4DF38) >> 5)),
      1 << (v111 & dword_140C4DF38 & 0x1F));
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v59 + 16) = v3;
    *(_QWORD *)(v59 + 24) = v3;
  }
  else if ( v110 == 1 || v95 )
  {
    v69 = 48LL * *(_QWORD *)(v59 + 24);
    *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (v69 / 48)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v69 - 0x58000000000LL) ^= (v3 ^ *(_QWORD *)(v69 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v59 + 24) = v3;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
  }
  else
  {
    v65 = 48 * v64;
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    v25 = v65 - 0x58000000000LL;
    v66 = *(_QWORD *)(48 * v64 - 0x58000000000LL + 24);
    v67 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v65 - 0x58000000000LL + 24),
            v3 & 0xFFFFFFFFFLL | v66 & 0xFFFFFFF000000000uLL,
            *(_QWORD *)(v65 - 0x58000000000LL + 24));
    if ( v66 != v67 )
    {
      do
      {
        v68 = v67;
        v67 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v25 + 24),
                v3 & 0xFFFFFFFFFLL | v67 & 0xFFFFFFF000000000uLL,
                v67);
      }
      while ( v68 != v67 );
    }
    *(_QWORD *)(v59 + 16) = v3;
    *(_QWORD *)v4 ^= (*(_QWORD *)v4 ^ (v65 / 48)) & 0xFFFFFFFFFLL;
  }
  ++*(_QWORD *)v59;
  _InterlockedIncrement64(v105);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v93, retaddr);
    goto LABEL_128;
  }
  _m_prefetchw(&v93);
  result = v93;
  if ( (_QWORD)v93 )
  {
LABEL_127:
    *(_QWORD *)&v93 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
  else
  {
    result = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v93 + 1), 0LL, (signed __int64)&v93);
    if ( (__int128 *)result != &v93 )
    {
      result = KxWaitForLockChainValid((__int64 *)&v93);
      goto LABEL_127;
    }
  }
LABEL_128:
  v70 = KeGetCurrentPrcb();
  v71 = v70->SchedulerAssist;
  if ( v71 )
  {
    if ( v70->NestingLevel <= 1u )
    {
      result = (unsigned int)(v71[6] - 1);
      v71[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v70);
    }
  }
  if ( v110 == 1 && v57 >= 0x40 )
  {
    v72 = v92;
    v73 = *(_QWORD *)(v92 + 7104);
    if ( v73 < 0xA0 )
    {
      v25 = (unsigned int)dword_140C4DF3C;
      v74 = (unsigned __int16 **)(v92 + 4200);
      v75 = 0LL;
      while ( 1 )
      {
        v76 = *v74;
        v77 = 0;
        if ( dword_140C4DF3C )
          break;
LABEL_139:
        ++v75;
        ++v74;
        if ( v75 > 1 )
          return result;
      }
      while ( 1 )
      {
        result = *v76;
        v73 += result;
        if ( v73 >= 0xA0 )
          break;
        ++v77;
        v76 += 8;
        if ( v77 >= dword_140C4DF3C )
          goto LABEL_139;
      }
    }
    v78 = v99;
    CurrentIrql = 17;
    memset(&v97, 0, sizeof(v97));
    if ( v99 )
    {
      result = *(unsigned int *)(v92 + 4);
      if ( (result & 0x40) != 0 )
        return result;
      v80 = v99;
      v81 = v99 + 4544;
    }
    else
    {
      v80 = *(_QWORD *)(v92 + 16);
      v81 = v80 + 4544LL * (unsigned __int16)KeNumberNodes;
    }
    result = *(unsigned int *)(v92 + 6340);
    if ( !(_DWORD)result && v80 < v81 )
    {
      for ( i = (_BYTE *)(v80 + 4490); (unsigned __int64)(i - 4490) < v81; i += 4544 )
      {
        if ( !*i )
        {
          if ( !v78 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v25 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
              v73 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v25 + 20);
              *(_DWORD *)(v25 + 20) = v73;
            }
LABEL_157:
            if ( *(_BYTE *)(v72 + 6297) )
            {
              v83 = *(_QWORD *)(i - 58);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v83 + 24), &v97);
              if ( !*i )
              {
                *i = 1;
                MiWakeZeroingThreads(v83, 2LL);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v97);
              OldIrql = v97.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v85 = KeGetCurrentIrql();
                  if ( v85 <= 0xFu && v97.OldIrql <= 0xFu && v85 >= 2u )
                  {
                    v86 = KeGetCurrentPrcb();
                    v25 = (unsigned __int64)v86->SchedulerAssist;
                    v87 = ~(unsigned __int16)(-1LL << (v97.OldIrql + 1));
                    v16 = (v87 & *(_DWORD *)(v25 + 20)) == 0;
                    v73 = (unsigned int)v87 & *(_DWORD *)(v25 + 20);
                    *(_DWORD *)(v25 + 20) = v73;
                    if ( v16 )
                      KiRemoveSystemWorkPriorityKick(v86);
                  }
                }
              }
              __writecr8(OldIrql);
            }
            else
            {
              v97.LockQueue.Next = 0LL;
              v97.LockQueue.Lock = (unsigned __int64 *volatile)(v72 + 4928);
              KxAcquireQueuedSpinLock(&v97, v72 + 4928, v73, v25);
              if ( !*i )
              {
                *i = 1;
                KeSetEvent((PRKEVENT)(v72 + 6272), 0, 0);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v97);
            }
            if ( !v78 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v88 = KeGetCurrentIrql();
                  if ( v88 <= 0xFu && CurrentIrql <= 0xFu && v88 >= 2u )
                  {
                    v89 = KeGetCurrentPrcb();
                    v25 = (unsigned __int64)v89->SchedulerAssist;
                    v90 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v16 = (v90 & *(_DWORD *)(v25 + 20)) == 0;
                    v73 = (unsigned int)v90 & *(_DWORD *)(v25 + 20);
                    *(_DWORD *)(v25 + 20) = v73;
                    if ( v16 )
                      KiRemoveSystemWorkPriorityKick(v89);
                  }
                }
              }
              __writecr8(CurrentIrql);
            }
            goto LABEL_180;
          }
          if ( (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 1LL) >= 0x400
            && (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 0LL) < 0x100000 )
          {
            goto LABEL_157;
          }
        }
LABEL_180:
        result = 2LL;
      }
    }
  }
  return result;
}
