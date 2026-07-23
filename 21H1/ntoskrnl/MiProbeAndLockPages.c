/*
 * XREFs of MiProbeAndLockPages @ 0x1402A6910
 * Callers:
 *     IopProbeAndLockPages @ 0x1402A6870 (IopProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     CcPrepareMdlWrite @ 0x14031CA60 (CcPrepareMdlWrite.c)
 *     MmProbeAndLockPagesPrivate @ 0x140322010 (MmProbeAndLockPagesPrivate.c)
 *     IopProbeAndLockPages_0 @ 0x140340370 (IopProbeAndLockPages_0.c)
 *     MiGetWorkingSetInfoList @ 0x140347A3C (MiGetWorkingSetInfoList.c)
 *     VslpLockPagesForTransfer @ 0x140390C28 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x140390DAC (VslpLockMdlForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x1404E4DD8 (CcLockSystemCacheBuffer.c)
 *     VslFinalizeSecureImageHash @ 0x1404F8B70 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404F9210 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_1 @ 0x140502C90 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x140502CF0 (IopProbeAndLockPages_2.c)
 *     KiOpPatchCode @ 0x14051EC34 (KiOpPatchCode.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     MiGetWorkingSetInfo @ 0x140541118 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x14057DC74 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059A1E8 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x14059CEB0 (VmProbeAndLockPages.c)
 *     ExInitializeLeapSecondData @ 0x140A535D4 (ExInitializeLeapSecondData.c)
 *     MiLockRetpolineStubs @ 0x140A903F0 (MiLockRetpolineStubs.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiProbeLockFrame @ 0x1402A6D80 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x1402A7490 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiProbeAndLockPrepare @ 0x1402A7E50 (MiProbeAndLockPrepare.c)
 *     MiProbePacketContended @ 0x1402A8EF8 (MiProbePacketContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402EE388 (KiResetGlobalDpcWatchdogProfiler.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     MiFaultInProbeAddress @ 0x140307D30 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x140307E60 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiSetProbePagesAhead @ 0x1403474A0 (MiSetProbePagesAhead.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiAddMdlTracker @ 0x14052AD34 (MiAddMdlTracker.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A255C (EtwTraceShouldYieldProcessor.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
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
  char *v26; // rdi
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
  v7 = MiProbeAndLockPrepare((unsigned int)v43, (_DWORD)a1, a1[8] + a1[11], a1[10], a2, a3, 1);
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
  v14 = (*(_BYTE *)(v13 + 184) & 7) == 2 ? &dword_140C4F6C0 : (LONG *)(v13 + 192);
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
        ++dword_140C4E6BC;
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
    MiUnlockPageTableInternal(v43[12], v43[4]);
  MiUnlockWorkingSetShared(v24, BYTE4(v43[8]));
  v25 = (struct _MDL *)v43[7];
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(v43[7]);
  if ( v8 < 0 )
  {
    MmUnlockPages(v25);
    ++dword_140C4E6E0;
  }
  v26 = (char *)v43[15];
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
