/*
 * XREFs of MiProbeAndLockPages @ 0x14020A860
 * Callers:
 *     IopProbeAndLockPages @ 0x1402081F0 (IopProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x140209710 (MmProbeAndLockPages.c)
 *     MiGetWorkingSetInfoList @ 0x14026E89C (MiGetWorkingSetInfoList.c)
 *     MmProbeAndLockPagesPrivate @ 0x14029E4C8 (MmProbeAndLockPagesPrivate.c)
 *     IopProbeAndLockPages_0 @ 0x1402C1DC4 (IopProbeAndLockPages_0.c)
 *     CcPrepareMdlWrite @ 0x1402CC660 (CcPrepareMdlWrite.c)
 *     IopProbeAndLockPages_1 @ 0x1402E7A50 (IopProbeAndLockPages_1.c)
 *     CcZeroDataInCache @ 0x1402E86F8 (CcZeroDataInCache.c)
 *     VslpLockPagesForTransfer @ 0x1403940C8 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14039424C (VslpLockMdlForTransfer.c)
 *     CcLockSystemCacheBuffer @ 0x1404EA4A8 (CcLockSystemCacheBuffer.c)
 *     VslFinalizeSecureImageHash @ 0x1404FE5F0 (VslFinalizeSecureImageHash.c)
 *     VslValidateDynamicCodePages @ 0x1404FEC90 (VslValidateDynamicCodePages.c)
 *     IopProbeAndLockPages_2 @ 0x140508820 (IopProbeAndLockPages_2.c)
 *     IopProbeAndLockPages_3 @ 0x140508880 (IopProbeAndLockPages_3.c)
 *     KiOpPatchCode @ 0x140524734 (KiOpPatchCode.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 *     MiGetWorkingSetInfo @ 0x140546C38 (MiGetWorkingSetInfo.c)
 *     PspIumAllocatePartitionState @ 0x1405836F4 (PspIumAllocatePartitionState.c)
 *     SmPrepareForFatalPageError @ 0x14059FDA8 (SmPrepareForFatalPageError.c)
 *     VmProbeAndLockPages @ 0x1405A2A70 (VmProbeAndLockPages.c)
 *     MiLockRetpolineStubs @ 0x140A92540 (MiLockRetpolineStubs.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x14020A2F0 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x14020ACD0 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x14020B3E0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF80 (MiUnlockAndDereferenceVad.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402940C8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     MiFaultInProbeAddress @ 0x1402B7988 (MiFaultInProbeAddress.c)
 *     MiLockProbePacketWorkingSet @ 0x1402B7AB8 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402B7B00 (MiUnlockProbePacketWorkingSet.c)
 *     MiSetProbePagesAhead @ 0x1402FF9B8 (MiSetProbePagesAhead.c)
 *     MiProbePacketContended @ 0x140308408 (MiProbePacketContended.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiAddMdlTracker @ 0x140530854 (MiAddMdlTracker.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A811C (EtwTraceShouldYieldProcessor.c)
 *     MiReturnFullProcessCommitment @ 0x1406EE838 (MiReturnFullProcessCommitment.c)
 */

void __fastcall MiProbeAndLockPages(__int64 a1, char a2, unsigned int a3)
{
  char v6; // r14
  int v7; // eax
  int v8; // ebx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 Flink; // rdx
  bool v12; // zf
  __int64 v13; // rdi
  LONG *v14; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  int v18; // r8d
  _KTHREAD *NextThread; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
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
  __int64 v34; // rax
  struct _LIST_ENTRY *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _LIST_ENTRY *v38; // rax
  __int64 v39; // rax
  _QWORD v40[26]; // [rsp+40h] [rbp-79h] BYREF
  int v41; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v42; // [rsp+138h] [rbp+7Fh] BYREF

  memset(v40, 0, 0xA8uLL);
  v6 = 0;
  v7 = MiProbeAndLockPrepare(
         (__int64)v40,
         a1,
         *(_QWORD *)(a1 + 32) + *(unsigned int *)(a1 + 44),
         *(_DWORD *)(a1 + 40),
         a2,
         a3,
         1);
  v8 = v7;
  if ( v7 < 0 )
    RtlRaiseStatus((unsigned int)v7);
  v9 = (unsigned __int64 *)v40[2];
  v10 = v40[0];
  Flink = 0xFFFFF6FB7DBED7F8uLL;
  while ( 1 )
  {
    v12 = (v40[8] & 0x20) == 0;
    *(_QWORD *)v40[6] = -1LL;
    if ( v12 )
      break;
    v27 = v40[18];
    if ( v10 > v40[19] || v10 < v40[18] )
      break;
    if ( (v6 & 0x3F) != 0 )
      goto LABEL_34;
    if ( !(unsigned int)MiProbePacketContended(v40, 0xFFFFF6FB7DBED7F8uLL) )
    {
      Flink = 0xFFFFF6FB7DBED7F8uLL;
LABEL_34:
      if ( v40[20] == -1LL )
      {
        v28 = *v9;
        if ( (unsigned __int64)v9 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v9 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v34 = *(_QWORD *)(Flink + 8 * ((v40[2] >> 3) & 0x1FFLL));
            Flink = v28 | 0x20;
            if ( (v34 & 0x20) == 0 )
              Flink = *v9;
            v28 = Flink;
            if ( (v34 & 0x42) != 0 )
              v28 = Flink | 0x42;
          }
        }
        v42 = v28;
        if ( (unsigned int)MiPteInShadowRange(&v42, Flink)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v28 & 1) != 0
          && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
        {
          v35 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v35 )
          {
            v36 = *((_QWORD *)&v35->Flink + (((unsigned __int64)&v42 >> 3) & 0x1FF));
            v37 = v28 | 0x20;
            if ( (v36 & 0x20) == 0 )
              v37 = v28;
            v28 = v37;
            if ( (v36 & 0x42) != 0 )
              v28 = v37 | 0x42;
          }
        }
        v40[16] = (v28 >> 12) & 0xFFFFFFFFFLL;
      }
      else
      {
        v40[16] = v40[20] + ((v10 - v27) >> 12);
      }
LABEL_19:
      v8 = MiProbeLockFrame(v40);
      if ( v8 < 0 )
        goto LABEL_22;
      v23 = (_QWORD *)v40[6];
      v10 = v40[0] + 4096LL;
      v40[6] += 8LL;
      v9 = (unsigned __int64 *)(v40[2] + 8LL);
      v40[2] += 8LL;
      *v23 = v40[16];
      v40[0] = v10;
      goto LABEL_21;
    }
LABEL_50:
    MiUnlockProbePacketWorkingSet(v40);
    MiLockProbePacketWorkingSet(v40);
    v9 = (unsigned __int64 *)v40[2];
    v10 = v40[0];
LABEL_21:
    ++v6;
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v9 > v40[3] )
      goto LABEL_22;
  }
  if ( (v6 & 0xF) != 0 )
    goto LABEL_14;
  v13 = v40[12];
  if ( v40[4] && (unsigned int)MiPageTableLockIsContended(v40[12]) )
    goto LABEL_50;
  v14 = (*(_BYTE *)(v13 + 184) & 7) == 2 ? &dword_140C4F780 : (LONG *)(v13 + 192);
  if ( (*v14 & 0x40000000) != 0 )
    goto LABEL_50;
  CurrentPrcb = KeGetCurrentPrcb();
  Flink = (unsigned int)CurrentPrcb->DpcRequestSummary;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (Flink & 1) != 0 )
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
    if ( (Flink & 0x1E) != 0 )
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
    if ( (Flink & 0x1E) != 0 )
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
  v41 = 0;
  for ( LODWORD(v20) = MiLockPageLeafPageTable(v40, Flink);
        v40[5] != ZeroPte;
        LODWORD(v20) = MiLockPageLeafPageTable(v40, v20) )
  {
    v21 = MiProbeLeafPteAccess(v40, &v41);
    v20 = v21;
    if ( (v21 & 0x80000000) != 0 )
      break;
    if ( !v41 )
    {
      v22 = v40[5];
      if ( (unsigned int)MiPteInShadowRange(&v40[5], v21)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v38 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v38 )
        {
          v39 = *((_QWORD *)&v38->Flink + (((unsigned __int64)&v40[5] >> 3) & 0x1FF));
          if ( (v39 & 0x20) != 0 )
            v22 = v40[5] | 0x20LL;
          if ( (v39 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
        else
        {
          v22 = v40[5];
        }
      }
      v40[16] = (v22 >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead(v40);
      goto LABEL_19;
    }
    if ( v41 != 1 )
    {
      v33 = MiFaultInProbeAddress(v40, v21);
      v20 = (unsigned int)v33;
      if ( v33 < 0 )
      {
        ++dword_140C4E77C;
        break;
      }
    }
  }
  v8 = v20;
  if ( (int)v20 >= 0 )
    goto LABEL_19;
LABEL_22:
  v24 = v40[12];
  if ( v40[4] )
    MiUnlockPageTableInternal(v40[12], v40[4]);
  MiUnlockWorkingSetShared(v24, BYTE4(v40[8]));
  v25 = (struct _MDL *)v40[7];
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(v40[7]);
  if ( v8 < 0 )
  {
    MmUnlockPages(v25);
    ++dword_140C4E7A0;
  }
  v26 = (_BYTE *)v40[15];
  if ( v40[15] )
  {
    v30 = *(unsigned int *)(v40[15] + 52LL);
    LODWORD(v30) = v30 & 0x7FFFFFFF;
    v31 = (v40[13] + (v30 | ((unsigned __int64)*(unsigned __int8 *)(v40[15] + 34LL) << 31))) >> 31;
    v32 = v40[14];
    *(_DWORD *)(v40[15] + 52LL) ^= (*(_DWORD *)(v40[15] + 52LL) ^ (LODWORD(v40[13])
                                                                 + (v30 | (*(unsigned __int8 *)(v40[15] + 34LL) << 31)))) & 0x7FFFFFFF;
    v26[34] = v31;
    if ( v32 != v40[13] )
      MiReturnFullProcessCommitment(v40[10]);
    MiUnlockAndDereferenceVad(v26);
  }
  if ( v8 < 0 )
    RtlRaiseStatus((unsigned int)v8);
}
