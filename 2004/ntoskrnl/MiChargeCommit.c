/*
 * XREFs of MiChargeCommit @ 0x1402ACF70
 * Callers:
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x14024DD50 (MiProbeLockFrame.c)
 *     MiInitializePoolCommitPacket @ 0x140258BC8 (MiInitializePoolCommitPacket.c)
 *     MiInsertInSystemSpace @ 0x140264130 (MiInsertInSystemSpace.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiMakePartitionActive @ 0x1402E20B8 (MiMakePartitionActive.c)
 *     MiAcquireNonPagedResources @ 0x1402E25C4 (MiAcquireNonPagedResources.c)
 *     MiObtainSystemCharges @ 0x1402E2E8C (MiObtainSystemCharges.c)
 *     MmCreateKernelStack @ 0x1402F8A30 (MmCreateKernelStack.c)
 *     MiChargeForWriteInProgressPage @ 0x1402F9038 (MiChargeForWriteInProgressPage.c)
 *     MmChargeResources @ 0x140305F50 (MmChargeResources.c)
 *     MiSessionInsertImage @ 0x14039FBE4 (MiSessionInsertImage.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 *     MiInitializeCommitment @ 0x1403BC954 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140526E98 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x14053D600 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x14054FA28 (MiGetSubsectionCharges.c)
 *     MiBuildForkPte @ 0x140552E1C (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1405560F8 (MiReferenceCloneProto.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1406ABD7C (MmCreateProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x14070A848 (MiAllocatePerSessionProtos.c)
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x14024AB40 (MiFreeExcessSegments.c)
 *     MiReplenishLocalCommit @ 0x1403463F0 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x1403BCC54 (MiSyncCommitSignals.c)
 *     MiIssuePageExtendRequest @ 0x14053E474 (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x14054AD90 (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x14054AF50 (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x14054AFBC (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x14054B0B4 (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
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
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+60h] [rbp+8h]
  int v31; // [rsp+70h] [rbp+18h]

  while ( 2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
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
          if ( v8 == CachedCommit )
            return 1LL;
          CachedCommit = v8;
        }
        while ( a2 <= v8 );
      }
    }
    v31 = 0;
    v10 = a3 | 2;
    if ( (a3 & 4) == 0 )
      v10 = a3;
    if ( (v10 & 8) == 0 )
    {
      if ( (v10 & 7) != 0 )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(a1 + 6256);
      goto LABEL_11;
    }
    v10 |= 2u;
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
      && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
    {
      v10 |= 4u;
      v11 = 0LL;
LABEL_11:
      v30 = v11;
      goto LABEL_12;
    }
    v11 = 64LL;
    v30 = 64LL;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 6928) >> 6 < 0x40uLL )
    {
      v11 = *(_QWORD *)(a1 + 6928) >> 6;
      v30 = v11;
    }
    while ( 1 )
    {
LABEL_12:
      while ( 1 )
      {
        v12 = *(_QWORD *)(a1 + 7464);
        v13 = v12 + a2;
        if ( v12 + a2 <= v12 || v11 + v13 < v13 )
          break;
        v14 = *(_QWORD *)(a1 + 7592);
        if ( v11 + v13 <= v14 )
        {
          if ( !v31 && v13 >= 95 * (v14 / 0x64) )
          {
            MiApplyCommitDelay(a1, v10, *(_QWORD *)(a1 + 7592));
            v11 = v30;
            v31 = 1;
          }
          goto LABEL_18;
        }
        v24 = *(_QWORD *)(a1 + 6240);
        if ( v13 >= v24 && v12 < v24 )
        {
          MiPulseCommitSignal(a1);
          v11 = v30;
        }
        if ( (v10 & 4) != 0 )
        {
          if ( !v11 )
            ++dword_140C4E5BC;
          goto LABEL_60;
        }
        if ( (v10 & 2) != 0 )
          return 0LL;
        if ( v14 == *(_QWORD *)(a1 + 6216) )
        {
          ++*(_DWORD *)(a1 + 7644);
          if ( (ULONG_PTR *)a1 != &MiSystemPartition )
            return 0LL;
          v25 = MiIssuePageExtendRequest(a1, a2, 2 * (v10 & 1) + 8);
          if ( (v10 & 1) != 0 )
            return 0LL;
          if ( !v25 )
          {
            MiCauseOverCommitPopup(a1);
            return 0LL;
          }
          v11 = v30;
          goto LABEL_18;
        }
        if ( (v10 & 1) != 0 )
        {
          ++*(_DWORD *)(a1 + 7648);
          MiIssuePageExtendRequest(a1, 4096LL, 2LL);
          return 0LL;
        }
        if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL) )
        {
          ++*(_DWORD *)(a1 + 7640);
          MiCauseOverCommitPopup(a1);
          return 0LL;
        }
        v11 = v30;
      }
      if ( (v10 & 4) == 0 )
      {
        if ( (v10 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 7652);
          if ( (v10 & 1) == 0 )
            MiCauseOverCommitPopup(a1);
          MiPulseCommitSignal(a1);
        }
        return 0LL;
      }
      if ( !v11 )
        ++dword_140C4E5C0;
LABEL_60:
      if ( a2 )
        break;
LABEL_18:
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 7464), v13, v12);
      if ( v12 == v15 )
      {
        v16 = *(_QWORD *)(a1 + 6240);
        v17 = a2 + v15;
        if ( v17 >= v16 && v12 < v16 || (v18 = *(_QWORD *)(a1 + 6232), v17 >= v18) && v12 < v18 )
        {
          MiSyncCommitSignals(a1, 0LL);
          v11 = v30;
        }
        if ( v17 > *(_QWORD *)(a1 + 6208) )
          *(_QWORD *)(a1 + 6208) = v17;
        if ( (v10 & 2) != 0 )
          return 1LL;
        v19 = *(_QWORD *)(a1 + 7592);
        v20 = v19 / 0xA;
        if ( v17 < 9 * (v19 / 0xA) )
        {
LABEL_25:
          if ( (ULONG_PTR *)a1 == &MiSystemPartition )
          {
            if ( (v10 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 6240) && v19 == *(_QWORD *)(a1 + 6216) )
            {
              MiFreeExcessSegments();
              v11 = v30;
            }
            v21 = CurrentPrcb->CachedCommit;
            if ( v21 < 0x80 )
            {
              v22 = v17;
              v23 = 256 - v21 + v17;
              if ( v23 > v22 && v11 + v23 > v22 && v11 + v23 <= v19 )
                MiReplenishLocalCommit(a1, CurrentPrcb);
            }
          }
          return 1LL;
        }
        v26 = v17 <= v19;
        if ( v17 < v19 )
        {
          if ( v19 - v17 >= 0x400000 )
            goto LABEL_25;
          v26 = v17 <= v19;
        }
        if ( v26 )
        {
          v27 = *(_QWORD *)(a1 + 6216);
          if ( v19 < v27 && v17 < v27 )
          {
            if ( v20 > 0x40000 )
              v20 = 0x40000LL;
            v28 = v27 - v19;
            v29 = v20 - v17;
            if ( v29 + v19 <= v28 )
              v28 = v29 + v19;
            MiIssuePageExtendRequest(a1, v28, 2LL);
            v11 = v30;
          }
        }
        goto LABEL_25;
      }
    }
    if ( !(unsigned int)MiConsumeOverCommit(a1, a2, v11) )
      continue;
    return 1LL;
  }
}
