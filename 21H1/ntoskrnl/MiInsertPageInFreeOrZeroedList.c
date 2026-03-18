/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x1402970B0
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiRelinkStandbyPage @ 0x14023F234 (MiRelinkStandbyPage.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x14028E490 (MiPfnShareCountIsZero.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiReturnPhysicalPoolPages @ 0x1402F2454 (MiReturnPhysicalPoolPages.c)
 *     MiDrainZeroLookasides @ 0x1403071D0 (MiDrainZeroLookasides.c)
 *     MiFreeSmallPageFromMdl @ 0x140346A2C (MiFreeSmallPageFromMdl.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiPurgeZeroList @ 0x14038164C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140381D04 (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B270C (MiLockAndInsertPageInFreeList.c)
 *     MiReturnPfnList @ 0x1403B66D0 (MiReturnPfnList.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     MiDeleteSubsectionLargePages @ 0x1403EF524 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x140528540 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x1405295D8 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x14052E9B4 (MmFreeNonChargedSecurePages.c)
 *     MiDeleteEnclavePage @ 0x140544920 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140545900 (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x14054B2E4 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x14054E804 (MiDeleteDirectMapFixupPfn.c)
 *     MiFreePageFileHashPfn @ 0x140557A8C (MiFreePageFileHashPfn.c)
 *     MiTransferPartitionPageRun @ 0x14055D320 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x14055E55C (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140A44ED4 (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x140A4CF20 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x140A4D550 (MiCreateEnclaveRegions.c)
 *     MxSwapPages @ 0x140A4F77C (MxSwapPages.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiCoalesceFreePages @ 0x140297E40 (MiCoalesceFreePages.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiNodeLargeFreeZeroPages @ 0x1402EAAF0 (MiNodeLargeFreeZeroPages.c)
 *     MiPageToChannel @ 0x140346578 (MiPageToChannel.c)
 *     MiWakeZeroingThreads @ 0x140346840 (MiWakeZeroingThreads.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     MiFreeSlabPage @ 0x140379234 (MiFreeSlabPage.c)
 *     MiUpdateAvailableEvents @ 0x1403ACE14 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x14050D3B8 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x14053A1BC (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x1405490A8 (MiArePageContentsZero.c)
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
  __int64 v67; // rdx
  __int64 v68; // r11
  __int64 v69; // rdx
  signed __int64 v70; // r8
  signed __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  struct _KPRCB *v74; // rcx
  _DWORD *v75; // rdx
  int v76; // eax
  __int64 v77; // r13
  unsigned __int64 v78; // r8
  unsigned __int16 **v79; // r11
  __int64 v80; // r10
  unsigned __int16 *v81; // rcx
  unsigned int v82; // edx
  unsigned __int64 v83; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v85; // rdi
  unsigned __int64 v86; // r15
  _BYTE *i; // rdi
  _DWORD *v88; // r9
  __int64 v89; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  _DWORD *v93; // r9
  int v94; // eax
  unsigned __int8 v95; // al
  struct _KPRCB *v96; // r10
  _DWORD *v97; // r9
  int v98; // eax
  signed __int32 v99[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v100; // [rsp+30h] [rbp-89h]
  __int128 v101; // [rsp+38h] [rbp-81h] BYREF
  __int64 v102; // [rsp+48h] [rbp-71h]
  int v103; // [rsp+50h] [rbp-69h]
  unsigned __int64 v104; // [rsp+58h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v105; // [rsp+60h] [rbp-59h] BYREF
  __int64 v106; // [rsp+78h] [rbp-41h]
  unsigned __int64 v107; // [rsp+80h] [rbp-39h]
  __int64 v108; // [rsp+88h] [rbp-31h]
  __int64 v109; // [rsp+90h] [rbp-29h]
  __int64 v110; // [rsp+98h] [rbp-21h]
  __int64 v111; // [rsp+A0h] [rbp-19h]
  _QWORD *v112; // [rsp+A8h] [rbp-11h]
  volatile signed __int64 *v113; // [rsp+B0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v115; // [rsp+D0h] [rbp+17h] BYREF
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+5Fh]
  unsigned int v118; // [rsp+130h] [rbp+77h]
  unsigned int v119; // [rsp+138h] [rbp+7Fh]

  v102 = 0LL;
  v3 = BugCheckParameter2;
  v101 = 0LL;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x2000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x58000000000LL, 12LL);
    MiClearFileOnlyPfn(v4);
    return;
  }
  v6 = 0;
  v7 = *(_QWORD *)(qword_140C4E588 + 8 * ((v5 >> 39) & 0x3FF));
  v100 = v7;
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E70C & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v4 + 40);
    }
    v8 = 0;
    v118 = 0;
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
    v118 = 1;
  }
  v113 = (volatile signed __int64 *)(v9 + v7);
  v115 = 0LL;
  if ( ((v5 >> 60) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v4, 1, (unsigned __int64 *)&v115);
    if ( PagePrivilege )
    {
      v11 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v11 = 16LL;
      if ( (int)KeSetPagePrivilege(v3, &v115, v11) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, v3, 0LL, 0LL);
    }
    *(_QWORD *)(v4 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  }
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v99, 0);
  v12 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  v13 = (*(_QWORD *)(v4 + 24) ^ (v12 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v4 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v14 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) ^= v13;
  *(_BYTE *)(v4 + 34) = v14 & 0xC7;
  v15 = byte_140C51F5E == 0;
  *(_BYTE *)(v4 + 35) &= ~0x20u;
  if ( !v15 && _bittest64((const signed __int64 *)qword_140C52488, v3 >> 9) )
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
  v16 = dword_140C4DDC8;
  if ( dword_140C4DDC4 <= (unsigned int)dword_140C4DDC8 )
  {
    v17 = (char *)qword_140C4DE08 + 16 * dword_140C4DDC4;
    if ( v3 >= *(_QWORD *)v17 && (dword_140C4DDC4 == dword_140C4DDC8 || v3 < *((_QWORD *)v17 + 2)) )
      goto LABEL_37;
  }
  v18 = 0;
  if ( dword_140C4DDC8 < 0 )
LABEL_183:
    KeBugCheckEx(0x1Au, 0x6201uLL, v3, 0LL, 0LL);
  while ( 1 )
  {
    v19 = (v18 + v16) >> 1;
    v17 = (char *)qword_140C4DE08 + 16 * v19;
    if ( v3 < *(_QWORD *)v17 )
    {
      if ( !v19 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v3, (ULONG_PTR)qword_140C4DE08, 0LL);
      v16 = v19 - 1;
      goto LABEL_34;
    }
    if ( v19 == dword_140C4DDC8 || v3 < *((_QWORD *)v17 + 2) )
      break;
    v18 = v19 + 1;
LABEL_34:
    if ( v16 < v18 )
      goto LABEL_183;
  }
  dword_140C4DDC4 = (v18 + v16) >> 1;
LABEL_37:
  v20 = *((_DWORD *)v17 + 2);
  if ( qword_140C4DE10 )
    v21 = MiPageToChannel(v3);
  else
    v21 = 0;
  v22 = dword_140C4DE38 & v3 | (v20 << byte_140C4DDCC) | (v21 << byte_140C4DDCD);
  v23 = v8 | *(_BYTE *)(v4 + 34) & 0xF8;
  v107 = *(_QWORD *)(v7 + 16) + 4544 * ((unsigned __int64)v22 >> byte_140C4DDCC);
  *(_BYTE *)(v4 + 34) = v23;
  v24 = v22;
  v119 = v22;
  v104 = v22;
  v103 = a2 & 0x400;
  v25 = *(_QWORD *)(v4 + 16);
  if ( v25 )
  {
    if ( qword_140C4DE80 )
    {
      if ( (v25 & 0x10) != 0 )
        LODWORD(v25) = v25 & 0xFFFFFFEF;
      else
        LODWORD(v25) = ~(_DWORD)qword_140C4DE80 & v25;
    }
  }
  else
  {
    LODWORD(v25) = 0;
  }
  v26 = -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL | (unsigned int)v25;
  if ( qword_140C4DE80 )
  {
    if ( (v26 & qword_140C4DE80) != 0 )
      v26 |= 0x10uLL;
    else
      v26 |= qword_140C4DE80;
  }
  *(_QWORD *)(v4 + 16) = v26;
  if ( (a2 & 0x40) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
    {
      if ( (unsigned int)MiCoalesceFreePages(v3) != 1 )
      {
        v22 = v119;
        v24 = v104;
        goto LABEL_54;
      }
      return;
    }
LABEL_54:
    if ( (a2 & 0x400) == 0 && (*(_DWORD *)(v7 + 4) & 0x20) == 0 )
    {
      v27 = *(_QWORD *)(v7 + 16) + 4544 * (v24 >> byte_140C4DDCC);
      v28 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v22 >> byte_140C4DDCD);
      v29 = v118 + 525LL;
      v30 = *(_QWORD *)(v100 + 8 * v29);
      v112 = (_QWORD *)(v100 + 8 * v29);
      v108 = 16 * v24;
      if ( *(unsigned __int16 *)(v30 + 16 * v24) >= *(int *)(v100 + 6300) )
      {
        v7 = v100;
      }
      else
      {
        v31 = 0LL;
        v32 = 0LL;
        v111 = (~(2 * (v118 ^ 1) + 4096) >> 1) & 1;
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
          v110 = v35;
          v106 = 3LL;
          v38 = MiLargePageSizes;
          v39 = 0LL;
          v40 = (__int64 *)(v27 + 8 * v32);
          v41 = (_QWORD *)v27;
          do
          {
            v109 = *v38;
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
              v37 = v106;
            }
            ++v38;
            v41 += 134;
            v36 += v109 * v42;
            v39 += 134LL;
            v40 += 134;
            v106 = --v37;
          }
          while ( v37 );
          ++v32;
          v31 = v36 + v110;
        }
        while ( v32 <= v111 );
        v7 = v100;
        if ( v31 > 0x40 )
        {
          v44 = *(_QWORD *)(v100 + 7104);
          if ( v44 < 0x420 )
          {
            v45 = (unsigned __int16 **)(v100 + 4200);
            v46 = 0LL;
            while ( 1 )
            {
              v47 = *v45;
              v48 = 0;
              if ( dword_140C4DE3C )
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
              if ( v48 >= dword_140C4DE3C )
                goto LABEL_76;
            }
          }
          v49 = *(_BYTE *)(v4 + 34);
          if ( (v49 & 7) != 5 )
            *(_BYTE *)(v4 + 34) = v49 & 0xF8 | 5;
          v50 = ((unsigned __int64)v118 << 12) | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v50 )
          {
            v6 = (v118 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FFF;
            if ( qword_140C4DE80 )
            {
              if ( (*(_BYTE *)(v4 + 16) & 0x10) != 0 )
                v6 = (v118 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FEF;
              else
                v6 = v50 & ~(_DWORD)qword_140C4DE80;
            }
          }
          v51 = v6 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DE80 )
          {
            if ( (qword_140C4DE80 & v51) != 0 )
              v51 = v6 | 0xFFFFFFFE00000010uLL;
            else
              v51 |= qword_140C4DE80;
          }
          v52 = v108;
          *(_QWORD *)(v4 + 16) = v51;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v112 + v52), (PSLIST_ENTRY)v4);
          return;
        }
LABEL_77:
        v3 = BugCheckParameter2;
      }
      v8 = v118;
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
  v57 = v107;
  v58 = v8;
  v59 = _InterlockedIncrement64((volatile signed __int64 *)(v107 + 8LL * v8 + 4128));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v57
                                                      + 8
                                                      * (v58
                                                       + 2LL
                                                       * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v119 >> byte_140C4DDCD)))
                                                      + 4216));
  v60 = *(_QWORD *)(v100 + 8 * v58 + 2176);
  *(_QWORD *)&v101 = 0LL;
  v61 = v60 + 40 * v104;
  *((_QWORD *)&v101 + 1) = v61 + 32;
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
    KiAcquireQueuedSpinLockInstrumented(&v101, v61 + 32);
  }
  else
  {
    v65 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v61 + 32), (__int64)&v101);
    if ( v65 )
      KxWaitForLockOwnerShip((__int64)&v101, v65);
  }
  v66 = *(_QWORD *)(v61 + 16);
  if ( v66 == 0xFFFFFFFFFLL )
  {
    LODWORD(v67) = 1 << (v119 & dword_140C4DE38 & 0x1F);
    _InterlockedOr(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v100 + 16)
                                            + 4544 * (v104 >> byte_140C4DDCC)
                                            + 16 * (v58 + 252)
                                            + 8)
                                + 4 * ((unsigned __int64)(v119 & dword_140C4DE38) >> 5)),
      v67);
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v61 + 16) = v3;
    *(_QWORD *)(v61 + 24) = v3;
  }
  else if ( v118 == 1 || v103 )
  {
    v72 = 48LL * *(_QWORD *)(v61 + 24);
    v67 = (*(_QWORD *)(v4 + 24) ^ (v72 / 48)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v4 + 24) ^= v67;
    *(_QWORD *)(v72 - 0x58000000000LL) ^= (v3 ^ *(_QWORD *)(v72 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v61 + 24) = v3;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
  }
  else
  {
    v68 = 48 * v66;
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    v69 = *(_QWORD *)(48 * v66 - 0x58000000000LL + 24);
    v70 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v68 - 0x58000000000LL + 24),
            v3 & 0xFFFFFFFFFLL | v69 & 0xFFFFFFF000000000uLL,
            *(_QWORD *)(v68 - 0x58000000000LL + 24));
    if ( v69 != v70 )
    {
      do
      {
        v71 = v70;
        v70 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v68 - 0x58000000000LL + 24),
                v3 & 0xFFFFFFFFFLL | v70 & 0xFFFFFFF000000000uLL,
                v70);
      }
      while ( v71 != v70 );
    }
    *(_QWORD *)(v61 + 16) = v3;
    v67 = (*(_QWORD *)v4 ^ (v68 / 48)) & 0xFFFFFFFFFLL;
    *(_QWORD *)v4 ^= v67;
  }
  ++*(_QWORD *)v61;
  _InterlockedIncrement64(v113);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v101, retaddr);
    goto LABEL_128;
  }
  _m_prefetchw(&v101);
  v73 = v101;
  if ( (_QWORD)v101 )
  {
LABEL_127:
    *(_QWORD *)&v101 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v73 + 8), 1uLL);
  }
  else if ( (__int128 *)_InterlockedCompareExchange64(
                          *((volatile signed __int64 **)&v101 + 1),
                          0LL,
                          (signed __int64)&v101) != &v101 )
  {
    v73 = KxWaitForLockChainValid(&v101, v67);
    goto LABEL_127;
  }
LABEL_128:
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
  if ( v118 == 1 && v59 >= 0x40 )
  {
    v77 = v100;
    v78 = *(_QWORD *)(v100 + 7104);
    if ( v78 < 0xA0 )
    {
      v79 = (unsigned __int16 **)(v100 + 4200);
      v80 = 0LL;
      while ( 1 )
      {
        v81 = *v79;
        v82 = 0;
        if ( dword_140C4DE3C )
          break;
LABEL_139:
        ++v80;
        ++v79;
        if ( v80 > 1 )
          return;
      }
      while ( 1 )
      {
        v78 += *v81;
        if ( v78 >= 0xA0 )
          break;
        ++v82;
        v81 += 8;
        if ( v82 >= dword_140C4DE3C )
          goto LABEL_139;
      }
    }
    v83 = v107;
    CurrentIrql = 17;
    memset(&v105, 0, sizeof(v105));
    if ( v107 )
    {
      if ( (*(_DWORD *)(v100 + 4) & 0x40) != 0 )
        return;
      v85 = v107;
      v86 = v107 + 4544;
    }
    else
    {
      v85 = *(_QWORD *)(v100 + 16);
      v86 = v85 + 4544LL * (unsigned __int16)KeNumberNodes;
    }
    if ( !*(_DWORD *)(v100 + 6340) && v85 < v86 )
    {
      for ( i = (_BYTE *)(v85 + 4490); (unsigned __int64)(i - 4490) < v86; i += 4544 )
      {
        if ( !*i )
        {
          if ( !v83 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v88 = KeGetCurrentPrcb()->SchedulerAssist;
              v88[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
LABEL_157:
            if ( *(_BYTE *)(v77 + 6297) )
            {
              v89 = *(_QWORD *)(i - 58);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v89 + 24), &v105);
              if ( !*i )
              {
                *i = 1;
                MiWakeZeroingThreads(v89, 2LL);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v105);
              OldIrql = v105.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v91 = KeGetCurrentIrql();
                  if ( v91 <= 0xFu && v105.OldIrql <= 0xFu && v91 >= 2u )
                  {
                    v92 = KeGetCurrentPrcb();
                    v93 = v92->SchedulerAssist;
                    v94 = ~(unsigned __int16)(-1LL << (v105.OldIrql + 1));
                    v15 = (v94 & v93[5]) == 0;
                    v93[5] &= v94;
                    if ( v15 )
                      KiRemoveSystemWorkPriorityKick(v92);
                  }
                }
              }
              __writecr8(OldIrql);
            }
            else
            {
              v105.LockQueue.Next = 0LL;
              v105.LockQueue.Lock = (unsigned __int64 *volatile)(v77 + 4928);
              KxAcquireQueuedSpinLock((__int64)&v105, (volatile __int64 *)(v77 + 4928));
              if ( !*i )
              {
                *i = 1;
                KeSetEvent((PRKEVENT)(v77 + 6272), 0, 0);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v105);
            }
            if ( !v83 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v95 = KeGetCurrentIrql();
                  if ( v95 <= 0xFu && CurrentIrql <= 0xFu && v95 >= 2u )
                  {
                    v96 = KeGetCurrentPrcb();
                    v97 = v96->SchedulerAssist;
                    v98 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v15 = (v98 & v97[5]) == 0;
                    v97[5] &= v98;
                    if ( v15 )
                      KiRemoveSystemWorkPriorityKick(v96);
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
