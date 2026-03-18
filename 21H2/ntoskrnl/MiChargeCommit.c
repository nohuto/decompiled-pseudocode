/*
 * XREFs of MiChargeCommit @ 0x14032A4B0
 * Callers:
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiPurgeImageSection @ 0x14025AD28 (MiPurgeImageSection.c)
 *     MmChargeResources @ 0x140262F20 (MmChargeResources.c)
 *     MiAcquireNonPagedResources @ 0x14026A784 (MiAcquireNonPagedResources.c)
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiObtainSystemCharges @ 0x14027D190 (MiObtainSystemCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x140282160 (MiChargeForWriteInProgressPage.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiSessionInsertImage @ 0x1402D9A54 (MiSessionInsertImage.c)
 *     NtLockVirtualMemory @ 0x1402E5D90 (NtLockVirtualMemory.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiProbeLockFrame @ 0x14031BAB0 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiCheckProtoPtePageState @ 0x140337B00 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x140337F60 (MiChargeForLockedPage.c)
 *     MiInitializePoolCommitPacket @ 0x1403523C0 (MiInitializePoolCommitPacket.c)
 *     MiMakePartitionActive @ 0x14036C978 (MiMakePartitionActive.c)
 *     MiInitializeCommitment @ 0x1403CF398 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x14058D310 (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x14059B0B0 (MiAttemptPageFileReductionApc.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1405BBB54 (MiReferenceCloneProto.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x1405C4980 (MiGetSubsectionCharges.c)
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 *     MiAllocatePerSessionProtos @ 0x1406DDC90 (MiAllocatePerSessionProtos.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 *     MiChargeFullProcessCommitment @ 0x1407BE280 (MiChargeFullProcessCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     MiRotateToFrameBuffer @ 0x14096D3A4 (MiRotateToFrameBuffer.c)
 *     MiCreateFileOnlyImageFixupList @ 0x14097023C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x140240348 (MiReplenishLocalCommit.c)
 *     MiFreeExcessSegments @ 0x1402878F0 (MiFreeExcessSegments.c)
 *     MiSyncCommitSignals @ 0x1403CF698 (MiSyncCommitSignals.c)
 *     MiIssuePageExtendRequest @ 0x14059C99C (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x1405B2E5C (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x1405B301C (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x1405B3088 (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x1405B3180 (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 CachedCommit; // rdx
  signed __int32 v8; // eax
  unsigned int v10; // r15d
  __int64 v11; // rcx
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
  bool v25; // cc
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rdx
  __int64 v29; // [rsp+60h] [rbp+8h]
  int v30; // [rsp+70h] [rbp+18h]

LABEL_1:
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
  v30 = 0;
  v10 = a3 | 2;
  if ( (a3 & 4) == 0 )
    v10 = a3;
  if ( (v10 & 8) == 0 )
  {
    if ( (v10 & 7) != 0 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(a1 + 16048);
    goto LABEL_11;
  }
  v10 |= 2u;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    v10 |= 4u;
    v11 = 0LL;
LABEL_11:
    v29 = v11;
    goto LABEL_12;
  }
  v11 = 64LL;
  v29 = 64LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 16720) >> 6 < 0x40uLL )
  {
    v11 = *(_QWORD *)(a1 + 16720) >> 6;
    v29 = v11;
  }
  while ( 1 )
  {
LABEL_12:
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 17256);
      v13 = v12 + a2;
      if ( v12 + a2 > v12 && v11 + v13 >= v13 )
        break;
      if ( (v10 & 4) == 0 )
      {
        if ( (v10 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 17572);
          if ( (v10 & 1) == 0 )
            MiCauseOverCommitPopup(a1);
          MiPulseCommitSignal(a1);
        }
        return 0LL;
      }
      if ( !v11 )
        ++dword_140C52AB4;
LABEL_60:
      if ( a2 )
      {
        if ( (unsigned int)MiConsumeOverCommit(a1, a2, v11) )
          return 1LL;
        goto LABEL_1;
      }
LABEL_18:
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 17256), v13, v12);
      if ( v12 == v15 )
      {
        v16 = *(_QWORD *)(a1 + 16032);
        v17 = a2 + v15;
        if ( v17 >= v16 && v12 < v16 || (v18 = *(_QWORD *)(a1 + 16024), v17 >= v18) && v12 < v18 )
        {
          MiSyncCommitSignals(a1, 0LL);
          v11 = v29;
        }
        if ( v17 > *(_QWORD *)(a1 + 16000) )
          *(_QWORD *)(a1 + 16000) = v17;
        if ( (v10 & 2) != 0 )
          return 1LL;
        v19 = *(_QWORD *)(a1 + 17496);
        v20 = v19 / 0xA;
        if ( v17 < 9 * (v19 / 0xA) )
          goto LABEL_25;
        v25 = v17 <= v19;
        if ( v17 < v19 )
        {
          if ( v19 - v17 >= 0x400000 )
          {
LABEL_25:
            if ( (ULONG_PTR *)a1 == &MiSystemPartition )
            {
              if ( (v10 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 16032) && v19 == *(_QWORD *)(a1 + 16008) )
              {
                MiFreeExcessSegments();
                v11 = v29;
              }
              v21 = CurrentPrcb->CachedCommit;
              if ( v21 < 0x80 )
              {
                v22 = v17;
                v23 = 256 - v21 + v17;
                if ( v23 > v22 && v11 + v23 > v22 && v11 + v23 <= v19 )
                  MiReplenishLocalCommit(a1, (__int64)CurrentPrcb, v22, 256 - v21);
              }
            }
            return 1LL;
          }
          v25 = v17 <= v19;
        }
        if ( v25 )
        {
          v26 = *(_QWORD *)(a1 + 16008);
          if ( v19 < v26 && v17 < v26 )
          {
            if ( v20 > 0x40000 )
              v20 = 0x40000LL;
            v27 = v26 - v19;
            v28 = v20 - v17;
            if ( v28 + v19 <= v27 )
              v27 = v28 + v19;
            MiIssuePageExtendRequest(a1, v27, 2LL, 0LL);
            v11 = v29;
          }
        }
        goto LABEL_25;
      }
    }
    v14 = *(_QWORD *)(a1 + 17496);
    if ( v11 + v13 <= v14 )
    {
      if ( !v30 && v13 >= 95 * (v14 / 0x64) )
      {
        MiApplyCommitDelay(a1, v10, *(_QWORD *)(a1 + 17496));
        v11 = v29;
        v30 = 1;
      }
      goto LABEL_18;
    }
    v24 = *(_QWORD *)(a1 + 16032);
    if ( v13 >= v24 && v12 < v24 )
    {
      MiPulseCommitSignal(a1);
      v11 = v29;
    }
    if ( (v10 & 4) != 0 )
    {
      if ( !v11 )
        ++dword_140C52AB0;
      goto LABEL_60;
    }
    if ( (v10 & 2) != 0 )
      return 0LL;
    if ( v14 == *(_QWORD *)(a1 + 16008) )
    {
      ++*(_DWORD *)(a1 + 17564);
      if ( (ULONG_PTR *)a1 != &MiSystemPartition )
        return 0LL;
      if ( (v10 & 1) != 0 )
      {
        MiIssuePageExtendRequest(a1, a2, 10LL, 0LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 8LL, 0LL) )
        goto LABEL_64;
      v11 = v29;
      goto LABEL_18;
    }
    if ( (v10 & 1) != 0 )
    {
      ++*(_DWORD *)(a1 + 17568);
      MiIssuePageExtendRequest(a1, 4096LL, 2LL, 0LL);
      return 0LL;
    }
    if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL, 255LL) )
      break;
    v11 = v29;
  }
  ++*(_DWORD *)(a1 + 17560);
LABEL_64:
  MiCauseOverCommitPopup(a1);
  return 0LL;
}
