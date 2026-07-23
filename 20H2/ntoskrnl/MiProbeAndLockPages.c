/*
 * XREFs of MiProbeAndLockPages @ 0x14026BB80
 * Callers:
 *     CcZeroDataInCache @ 0x140240E98 (CcZeroDataInCache.c)
 *     IopProbeAndLockPages @ 0x140269510 (IopProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x14026AA30 (MmProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x1403186D0 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x140320664 (IopProbeAndLockPages_1.c)
 *     CcPrepareMdlWrite @ 0x14032B1B0 (CcPrepareMdlWrite.c)
 *     MmProbeAndLockPagesPrivate @ 0x140330710 (MmProbeAndLockPagesPrivate.c)
 *     MiGetWorkingSetInfoList @ 0x14034F6A8 (MiGetWorkingSetInfoList.c)
 *     VslpLockPagesForTransfer @ 0x140393C58 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x140393DDC (VslpLockMdlForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x1404E8918 (CcLockSystemCacheBuffer.c)
 *     VslFinalizeSecureImageHash @ 0x1404FCA50 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404FD0F0 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_2 @ 0x140506CF0 (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x140506D50 (IopProbeAndLockPages_3.c)
 *     KiOpPatchCode @ 0x140522C54 (KiOpPatchCode.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     MiGetWorkingSetInfo @ 0x140545138 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x140581CE4 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059E378 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405A1040 (VmProbeAndLockPages.c)
 *     MiLockRetpolineStubs @ 0x140A956E0 (MiLockRetpolineStubs.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiProbeAndLockPrepare @ 0x14026B610 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x14026BFF0 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x14026C700 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     MiProbePacketContended @ 0x1402D138C (MiProbePacketContended.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     MiFaultInProbeAddress @ 0x140316E80 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x140316FB0 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140316FF8 (MiUnlockProbePacketWorkingSet.c)
 *     MiSetProbePagesAhead @ 0x14034E904 (MiSetProbePagesAhead.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiAddMdlTracker @ 0x14052ED54 (MiAddMdlTracker.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A66EC (EtwTraceShouldYieldProcessor.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(__int64 a1, char a2, int a3)
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
  __int64 v33; // rdx
  int v34; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _LIST_ENTRY *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  struct _LIST_ENTRY *v41; // rax
  __int64 v42; // rax
  _QWORD v43[26]; // [rsp+40h] [rbp-79h] BYREF
  int v44; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v45; // [rsp+138h] [rbp+7Fh] BYREF

  memset(v43, 0, 0xA8uLL);
  v6 = 0;
  v7 = MiProbeAndLockPrepare(
         (__int64)v43,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(_DWORD *)(a1 + 40),
         a2,
         a3,
         1);
  v8 = v7;
  if ( v7 < 0 )
    RtlRaiseStatus(v7);
  v9 = (unsigned __int64 *)v43[2];
  v10 = v43[0];
  DpcRequestSummary = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    v12 = (v43[8] & 0x20) == 0;
    *(_QWORD *)v43[6] = -1LL;
    if ( v12 )
      break;
    v27 = v43[18];
    if ( v10 > v43[19] || v10 < v43[18] )
      break;
    if ( (v6 & 0x3F) != 0 || !(unsigned int)MiProbePacketContended(v43, 0xFFFFF6FB7DBED7F8uLL) )
    {
      if ( v43[20] == -1LL )
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
            v36 = *((_QWORD *)&Flink->Flink + ((v43[2] >> 3) & 0x1FFLL));
            v37 = v28 | 0x20;
            if ( (v36 & 0x20) == 0 )
              v37 = *v9;
            v28 = v37;
            if ( (v36 & 0x42) != 0 )
              v28 = v37 | 0x42;
          }
        }
        v45 = v28;
        if ( MiPteInShadowRange((unsigned __int64)&v45)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v38 )
          {
            v39 = *((_QWORD *)&v38->Flink + (((unsigned __int64)&v45 >> 3) & 0x1FF));
            v40 = v28 | 0x20;
            if ( (v39 & 0x20) == 0 )
              v40 = v28;
            v28 = v40;
            if ( (v39 & 0x42) != 0 )
              v28 = v40 | 0x42;
          }
        }
        v43[16] = (v28 >> 12) & 0xFFFFFFFFFLL;
      }
      else
      {
        v43[16] = v43[20] + ((v10 - v27) >> 12);
      }
LABEL_19:
      v8 = MiProbeLockFrame(v43);
      if ( v8 < 0 )
        goto LABEL_22;
      v23 = (_QWORD *)v43[6];
      v10 = v43[0] + 4096LL;
      v43[6] += 8LL;
      v9 = (unsigned __int64 *)(v43[2] + 8LL);
      v43[2] += 8LL;
      *v23 = v43[16];
      v43[0] = v10;
      goto LABEL_21;
    }
LABEL_50:
    MiUnlockProbePacketWorkingSet(v43);
    MiLockProbePacketWorkingSet(v43);
    v9 = (unsigned __int64 *)v43[2];
    v10 = v43[0];
LABEL_21:
    ++v6;
    DpcRequestSummary = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v9 > v43[3] )
      goto LABEL_22;
  }
  if ( (v6 & 0xF) != 0 )
    goto LABEL_14;
  v13 = v43[12];
  if ( v43[4] && (unsigned int)MiPageTableLockIsContended(v43[12], v43[4]) )
    goto LABEL_50;
  v14 = (*(_BYTE *)(v13 + 184) & 7) == 2 ? &dword_140C4F600 : (LONG *)(v13 + 192);
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
      KiResetGlobalDpcWatchdogProfiler();
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
  v44 = 0;
  for ( LODWORD(v20) = MiLockPageLeafPageTable(v43, DpcRequestSummary);
        v43[5] != ZeroPte;
        LODWORD(v20) = MiLockPageLeafPageTable(v43, v20) )
  {
    v21 = MiProbeLeafPteAccess(v43, &v44);
    v20 = (unsigned int)v21;
    if ( v21 < 0 )
      break;
    if ( !v44 )
    {
      v22 = v43[5];
      if ( MiPteInShadowRange((unsigned __int64)&v43[5])
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v41 )
        {
          v42 = *((_QWORD *)&v41->Flink + (((unsigned __int64)&v43[5] >> 3) & 0x1FF));
          if ( (v42 & 0x20) != 0 )
            v22 = v43[5] | 0x20LL;
          if ( (v42 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v22 = v43[5];
        }
      }
      v43[16] = (v22 >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead(v43);
      goto LABEL_19;
    }
    if ( v44 != 1 )
    {
      v34 = MiFaultInProbeAddress(v43, (unsigned int)v21);
      v20 = (unsigned int)v34;
      if ( v34 < 0 )
      {
        ++dword_140C4E5FC;
        break;
      }
    }
  }
  v8 = v20;
  if ( (int)v20 >= 0 )
    goto LABEL_19;
LABEL_22:
  v24 = v43[12];
  if ( v43[4] )
    MiUnlockPageTableInternal(v43[12]);
  MiUnlockWorkingSetShared(v24, BYTE4(v43[8]));
  v25 = (struct _MDL *)v43[7];
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(v43[7]);
  if ( v8 < 0 )
  {
    MmUnlockPages(v25);
    ++dword_140C4E620;
  }
  v26 = (_BYTE *)v43[15];
  if ( v43[15] )
  {
    v30 = *(unsigned int *)(v43[15] + 52LL);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    v31 = (v43[13] + (v30 | ((unsigned __int64)*(unsigned __int8 *)(v43[15] + 34LL) << 31))) >> 31;
    v32 = v43[14];
    *(_DWORD *)(v43[15] + 52LL) ^= (*(_DWORD *)(v43[15] + 52LL) ^ (LODWORD(v43[13])
                                                                 + (v30 | (*(unsigned __int8 *)(v43[15] + 34LL) << 31)))) & 0x7FFFFFFF;
    v26[34] = v31;
    v33 = v32 - v43[13];
    if ( v33 )
      MiReturnFullProcessCommitment(v43[10], v33);
    MiUnlockAndDereferenceVad(v26);
  }
  if ( v8 < 0 )
    RtlRaiseStatus(v8);
}
