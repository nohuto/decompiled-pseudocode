/*
 * XREFs of MiProbeAndLockPages @ 0x14024D8E0
 * Callers:
 *     IopProbeAndLockPages @ 0x14024D840 (IopProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     CcZeroDataInCache @ 0x140267B0C (CcZeroDataInCache.c)
 *     MiGetWorkingSetInfoList @ 0x1403186FC (MiGetWorkingSetInfoList.c)
 *     MmProbeAndLockPagesPrivate @ 0x14032F040 (MmProbeAndLockPagesPrivate.c)
 *     IopProbeAndLockPages_0 @ 0x14033D3E0 (IopProbeAndLockPages_0.c)
 *     CcPrepareMdlWrite @ 0x14035A640 (CcPrepareMdlWrite.c)
 *     VslpLockPagesForTransfer @ 0x140391798 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14039191C (VslpLockMdlForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x1404E5388 (CcLockSystemCacheBuffer.c)
 *     VslFinalizeSecureImageHash @ 0x1404F91C0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404F9860 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_1 @ 0x1405032E0 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x140503340 (IopProbeAndLockPages_2.c)
 *     KiOpPatchCode @ 0x14051F284 (KiOpPatchCode.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiGetWorkingSetInfo @ 0x140541768 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x14057E2B4 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059A8D8 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x14059D5A0 (VmProbeAndLockPages.c)
 *     MiLockRetpolineStubs @ 0x140A8F9E0 (MiLockRetpolineStubs.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiProbeLockFrame @ 0x14024DD50 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x14024E460 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MiProbeAndLockPrepare @ 0x14024EE20 (MiProbeAndLockPrepare.c)
 *     MiProbePacketContended @ 0x14024FEC8 (MiProbePacketContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiSetProbePagesAhead @ 0x140318160 (MiSetProbePagesAhead.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140327CB8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     MiFaultInProbeAddress @ 0x140345B30 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x140345C60 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140345CA8 (MiUnlockProbePacketWorkingSet.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiAddMdlTracker @ 0x14052B384 (MiAddMdlTracker.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A2C4C (EtwTraceShouldYieldProcessor.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(_DWORD *a1, char a2, int a3)
{
  char v6; // r14
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 DpcRequestSummary; // rdx
  bool v12; // zf
  __int64 v13; // rdi
  LONG *v14; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  int v18; // r8d
  _KTHREAD *NextThread; // rax
  __int64 v20; // rdx
  int v21; // eax
  unsigned __int64 v22; // rbx
  _QWORD *v23; // rcx
  __int64 v24; // rdi
  struct _MDL *v25; // rdi
  _BYTE *v26; // rdi
  __int64 v27; // r15
  unsigned __int64 v28; // rbx
  unsigned int v29; // esi
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // rdx
  int v33; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  struct _LIST_ENTRY *v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  struct _LIST_ENTRY *v40; // rax
  __int64 v41; // rax
  _QWORD v42[26]; // [rsp+40h] [rbp-79h] BYREF
  int v43; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v44; // [rsp+138h] [rbp+7Fh] BYREF

  memset(v42, 0, 0xA8uLL);
  v6 = 0;
  v7 = MiProbeAndLockPrepare((unsigned int)v42, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
  v8 = v7;
  if ( v7 < 0 )
    RtlRaiseStatus(v7);
  v9 = (unsigned __int64 *)v42[2];
  v10 = v42[0];
  DpcRequestSummary = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    v12 = (v42[8] & 0x20) == 0;
    *(_QWORD *)v42[6] = -1LL;
    if ( v12 )
      break;
    v27 = v42[18];
    if ( v10 > v42[19] || v10 < v42[18] )
      break;
    if ( (v6 & 0x3F) != 0 || !(unsigned int)MiProbePacketContended(v42, 0xFFFFF6FB7DBED7F8uLL) )
    {
      if ( v42[20] == -1LL )
      {
        v28 = *v9;
        if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v35 = *((_QWORD *)&Flink->Flink + ((v42[2] >> 3) & 0x1FFLL));
            v36 = v28 | 0x20;
            if ( (v35 & 0x20) == 0 )
              v36 = *v9;
            v28 = v36;
            if ( (v35 & 0x42) != 0 )
              v28 = v36 | 0x42;
          }
        }
        v44 = v28;
        if ( MiPteInShadowRange((unsigned __int64)&v44)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          v37 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v37 )
          {
            v38 = *((_QWORD *)&v37->Flink + (((unsigned __int64)&v44 >> 3) & 0x1FF));
            v39 = v28 | 0x20;
            if ( (v38 & 0x20) == 0 )
              v39 = v28;
            v28 = v39;
            if ( (v38 & 0x42) != 0 )
              v28 = v39 | 0x42;
          }
        }
        v42[16] = (v28 >> 12) & 0xFFFFFFFFFLL;
      }
      else
      {
        v42[16] = v42[20] + ((v10 - v27) >> 12);
      }
LABEL_19:
      v8 = MiProbeLockFrame(v42);
      if ( v8 < 0 )
        goto LABEL_22;
      v23 = (_QWORD *)v42[6];
      v10 = v42[0] + 4096LL;
      v42[6] += 8LL;
      v9 = (unsigned __int64 *)(v42[2] + 8LL);
      v42[2] += 8LL;
      *v23 = v42[16];
      v42[0] = v10;
      goto LABEL_21;
    }
LABEL_50:
    MiUnlockProbePacketWorkingSet(v42);
    MiLockProbePacketWorkingSet(v42);
    v9 = (unsigned __int64 *)v42[2];
    v10 = v42[0];
LABEL_21:
    ++v6;
    DpcRequestSummary = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v9 > v42[3] )
      goto LABEL_22;
  }
  if ( (v6 & 0xF) != 0 )
    goto LABEL_14;
  v13 = v42[12];
  if ( v42[4] && (unsigned int)MiPageTableLockIsContended(v42[12], v42[4]) )
    goto LABEL_50;
  v14 = (*(_BYTE *)(v13 + 184) & 7) == 2 ? &dword_140C4F580 : (LONG *)(v13 + 192);
  if ( (*v14 & 0x40000000) != 0 )
    goto LABEL_50;
  CurrentPrcb = KeGetCurrentPrcb();
  DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v18 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_13;
    if ( !CurrentPrcb->QuantumEnd )
      goto LABEL_90;
    v29 = 1;
  }
  else
  {
    v18 = 0;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v29 = 2;
      goto LABEL_47;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v29 = 3;
      goto LABEL_47;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v29 = 4;
      goto LABEL_47;
    }
LABEL_13:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_14;
    if ( !v18 )
    {
LABEL_56:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
      _enable();
      v29 = 0;
      goto LABEL_47;
    }
LABEL_90:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v29 = 5;
    }
    else
    {
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
        goto LABEL_56;
      v29 = 6;
    }
  }
LABEL_47:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v29, DpcWatchdogCount, DpcTimeCount);
  if ( v29 )
    goto LABEL_50;
LABEL_14:
  v43 = 0;
  for ( LODWORD(v20) = MiLockPageLeafPageTable(v42, DpcRequestSummary);
        v42[5] != ZeroPte;
        LODWORD(v20) = MiLockPageLeafPageTable(v42, v20) )
  {
    v21 = MiProbeLeafPteAccess(v42, &v43);
    v20 = (unsigned int)v21;
    if ( v21 < 0 )
      break;
    if ( !v43 )
    {
      v22 = v42[5];
      if ( MiPteInShadowRange((unsigned __int64)&v42[5])
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v40 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v40 )
        {
          v41 = *((_QWORD *)&v40->Flink + (((unsigned __int64)&v42[5] >> 3) & 0x1FF));
          if ( (v41 & 0x20) != 0 )
            v22 = v42[5] | 0x20LL;
          if ( (v41 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v22 = v42[5];
        }
      }
      v42[16] = (v22 >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead(v42);
      goto LABEL_19;
    }
    if ( v43 != 1 )
    {
      v33 = MiFaultInProbeAddress(v42, (unsigned int)v21);
      v20 = (unsigned int)v33;
      if ( v33 < 0 )
      {
        ++dword_140C4E57C;
        break;
      }
    }
  }
  v8 = v20;
  if ( (int)v20 >= 0 )
    goto LABEL_19;
LABEL_22:
  v24 = v42[12];
  if ( v42[4] )
    MiUnlockPageTableInternal(v42[12], v42[4]);
  MiUnlockWorkingSetShared(v24, BYTE4(v42[8]));
  v25 = (struct _MDL *)v42[7];
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(v42[7]);
  if ( v8 < 0 )
  {
    MmUnlockPages(v25);
    ++dword_140C4E5A0;
  }
  v26 = (_BYTE *)v42[15];
  if ( v42[15] )
  {
    v30 = *(unsigned int *)(v42[15] + 52LL);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    v31 = (v42[13] + (v30 | ((unsigned __int64)*(unsigned __int8 *)(v42[15] + 34LL) << 31))) >> 31;
    v32 = v42[14];
    *(_DWORD *)(v42[15] + 52LL) ^= (*(_DWORD *)(v42[15] + 52LL) ^ (LODWORD(v42[13])
                                                                 + (v30 | (*(unsigned __int8 *)(v42[15] + 34LL) << 31)))) & 0x7FFFFFFF;
    v26[34] = v31;
    if ( v32 != v42[13] )
      MiReturnFullProcessCommitment(v42[10]);
    MiUnlockAndDereferenceVad(v26);
  }
  if ( v8 < 0 )
    RtlRaiseStatus(v8);
}
