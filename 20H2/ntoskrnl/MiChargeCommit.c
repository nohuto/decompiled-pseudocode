/*
 * XREFs of MiChargeCommit @ 0x14027C2B0
 * Callers:
 *     MiInsertInSystemSpace @ 0x14024C1E0 (MiInsertInSystemSpace.c)
 *     MiProbeLockFrame @ 0x14026BFF0 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 *     MmCreateKernelStack @ 0x1402AD970 (MmCreateKernelStack.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiInitializePoolCommitPacket @ 0x1402CB7D8 (MiInitializePoolCommitPacket.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiObtainSystemCharges @ 0x14033699C (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x140336B70 (MiAcquireNonPagedResources.c)
 *     MiMakePartitionActive @ 0x140336C88 (MiMakePartitionActive.c)
 *     MiChargeForWriteInProgressPage @ 0x1403441A0 (MiChargeForWriteInProgressPage.c)
 *     MmChargeResources @ 0x14035751C (MmChargeResources.c)
 *     MiSessionInsertImage @ 0x1403A20B4 (MiSessionInsertImage.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MiInitializeCommitment @ 0x1403BEDD4 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14052A868 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x1405335B0 (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x140540FD0 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1405533F8 (MiGetSubsectionCharges.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x140559AC8 (MiReferenceCloneProto.c)
 *     MiCreateLargePfnList @ 0x14055C42C (MiCreateLargePfnList.c)
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MiAllocatePerSessionProtos @ 0x1406DCC38 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406ED8E8 (MmCreateProcessAddressSpace.c)
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x14029C0C0 (MiFreeExcessSegments.c)
 *     MiReplenishLocalCommit @ 0x1403176E0 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x1403BF0D4 (MiSyncCommitSignals.c)
 *     MiIssuePageExtendRequest @ 0x140541E44 (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x14054E760 (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x14054E920 (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x14054E98C (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x14054EA84 (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 CachedCommit; // rdx
  signed __int32 v8; // eax
  unsigned int v10; // r15d
  __int64 v11; // r10
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  signed __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  int v25; // eax
  bool v26; // cc
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // [rsp+60h] [rbp+8h]
  int v30; // [rsp+70h] [rbp+18h]

  v5 = a1;
  while ( 2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (ULONG_PTR *)v5 == &MiSystemPartition )
    {
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      CachedCommit = CurrentPrcb->CachedCommit;
      if ( a2 <= CachedCommit )
      {
        do
        {
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                 CachedCommit - a2,
                 CachedCommit);
          a1 = v8;
          if ( v8 == CachedCommit )
            return 1LL;
          CachedCommit = v8;
        }
        while ( a2 <= v8 );
      }
    }
    v30 = 0;
    v10 = a3 | 2;
    if ( (a3 & 4) == 0 )
      v10 = a3;
    if ( (v10 & 8) == 0 )
    {
      if ( (v10 & 7) != 0 )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(v5 + 6256);
      goto LABEL_12;
    }
    v10 |= 2u;
    a1 = *((unsigned int *)&KeGetCurrentThread()[1].SwapListEntry + 3);
    if ( (a1 & 2) != 0 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v10 |= 4u;
      v11 = 0LL;
LABEL_12:
      v29 = v11;
      goto LABEL_13;
    }
    v11 = 64LL;
    v29 = 64LL;
    if ( (ULONG_PTR *)v5 != &MiSystemPartition && *(_QWORD *)(v5 + 6928) >> 6 < 0x40uLL )
    {
      v11 = *(_QWORD *)(v5 + 6928) >> 6;
      v29 = v11;
    }
    while ( 1 )
    {
LABEL_13:
      while ( 1 )
      {
        v12 = *(_QWORD *)(v5 + 7464);
        v13 = v12 + a2;
        if ( v12 + a2 <= v12 || v11 + v13 < v13 )
          break;
        v14 = *(_QWORD *)(v5 + 7592);
        if ( v11 + v13 <= v14 )
        {
          if ( !v30 && v13 >= 95 * (v14 / 0x64) )
          {
            MiApplyCommitDelay(v5, v10, *(_QWORD *)(v5 + 7592));
            v11 = v29;
            v30 = 1;
          }
          goto LABEL_19;
        }
        v24 = *(_QWORD *)(v5 + 6240);
        if ( v13 >= v24 && v12 < v24 )
        {
          MiPulseCommitSignal(v5);
          v11 = v29;
        }
        if ( (v10 & 4) != 0 )
        {
          if ( !v11 )
            ++dword_140C4E63C;
          goto LABEL_61;
        }
        if ( (v10 & 2) != 0 )
          return 0LL;
        if ( v14 == *(_QWORD *)(v5 + 6216) )
        {
          ++*(_DWORD *)(v5 + 7644);
          if ( (ULONG_PTR *)v5 != &MiSystemPartition )
            return 0LL;
          v25 = MiIssuePageExtendRequest(v5, a2, 2 * (v10 & 1) + 8);
          if ( (v10 & 1) != 0 )
            return 0LL;
          if ( !v25 )
          {
            MiCauseOverCommitPopup(v5);
            return 0LL;
          }
          v11 = v29;
          goto LABEL_19;
        }
        if ( (v10 & 1) != 0 )
        {
          ++*(_DWORD *)(v5 + 7648);
          MiIssuePageExtendRequest(v5, 4096LL, 2LL);
          return 0LL;
        }
        if ( !(unsigned int)MiIssuePageExtendRequest(v5, a2, 0LL) )
        {
          ++*(_DWORD *)(v5 + 7640);
          MiCauseOverCommitPopup(v5);
          return 0LL;
        }
        v11 = v29;
      }
      if ( (v10 & 4) == 0 )
      {
        if ( (v10 & 2) == 0 )
        {
          ++*(_DWORD *)(v5 + 7652);
          if ( (v10 & 1) == 0 )
            MiCauseOverCommitPopup(v5);
          MiPulseCommitSignal(v5);
        }
        return 0LL;
      }
      if ( !v11 )
        ++dword_140C4E640;
LABEL_61:
      if ( a2 )
        break;
LABEL_19:
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 7464), v13, v12);
      if ( v12 == v15 )
      {
        v16 = *(_QWORD *)(v5 + 6240);
        v17 = a2 + v15;
        if ( v17 >= v16 && v12 < v16 || (v18 = *(_QWORD *)(v5 + 6232), v17 >= v18) && v12 < v18 )
        {
          MiSyncCommitSignals(v5, 0LL);
          v11 = v29;
        }
        if ( v17 > *(_QWORD *)(v5 + 6208) )
          *(_QWORD *)(v5 + 6208) = v17;
        if ( (v10 & 2) != 0 )
          return 1LL;
        v19 = *(_QWORD *)(v5 + 7592);
        v20 = v19 / 0xA;
        if ( v17 < 9 * (v19 / 0xA) )
        {
LABEL_26:
          if ( (ULONG_PTR *)v5 == &MiSystemPartition )
          {
            if ( (v10 & 1) == 0 && v17 >= *(_QWORD *)(v5 + 6240) && v19 == *(_QWORD *)(v5 + 6216) )
            {
              MiFreeExcessSegments(a1, v20);
              v11 = v29;
            }
            v21 = CurrentPrcb->CachedCommit;
            if ( v21 < 0x80 )
            {
              v22 = v17;
              v23 = 256 - v21 + v17;
              if ( v23 > v22 && v11 + v23 > v22 && v11 + v23 <= v19 )
                MiReplenishLocalCommit(v5, CurrentPrcb);
            }
          }
          return 1LL;
        }
        v26 = v17 <= v19;
        if ( v17 < v19 )
        {
          if ( v19 - v17 >= 0x400000 )
            goto LABEL_26;
          v26 = v17 <= v19;
        }
        if ( v26 )
        {
          a1 = *(_QWORD *)(v5 + 6216);
          if ( v19 < a1 && v17 < a1 )
          {
            if ( v20 > 0x40000 )
              v20 = 0x40000LL;
            v27 = a1 - v19;
            v28 = v20 - v17;
            if ( v28 + v19 <= v27 )
              v27 = v28 + v19;
            MiIssuePageExtendRequest(v5, v27, 2LL);
            v11 = v29;
          }
        }
        goto LABEL_26;
      }
    }
    if ( !(unsigned int)MiConsumeOverCommit(v5, a2, v11) )
      continue;
    return 1LL;
  }
}
