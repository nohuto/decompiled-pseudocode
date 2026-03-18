/*
 * XREFs of KiUpdateStibpPairing @ 0x1402DDF20
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402DDBB0 (KiUpdateSpeculationControl.c)
 *     NtContinueEx @ 0x1403F6580 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403F6840 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403F6DA0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403F70E0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F7900 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F7B90 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F7E20 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F80B0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F8330 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403F8E10 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1403F9EB0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1403FB2B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FB550 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1403FC050 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1403FD780 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1403FEAB0 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140401B80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404020C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140403C00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140404F80 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140405800 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140405D00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1404072C0 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404080C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1404083C0 (KiUmsFastReturnToUser.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x1405159B0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiCopyCounters @ 0x140516360 (KiCopyCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateStibpPairing(_KPROCESS *Process)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v2; // r9d
  int v3; // r14d
  int v4; // ebp
  int Flink_high; // eax
  __int64 v6; // rbx
  _KPRCB *PairPrcb; // rdi
  int v8; // r15d
  signed __int16 PairRegister; // ax
  signed __int16 v10; // tt
  signed __int16 v11; // r10
  __int64 TrappedSecurityDomain; // rax
  int v13; // esi
  signed __int16 v14; // dx
  signed __int16 v15; // ax
  signed __int16 v16; // cx
  unsigned __int8 BpbKernelSpecCtrl; // dl
  __int64 result; // rax
  signed __int16 v19; // tt
  signed __int16 v20; // ax
  signed __int16 v21; // tt
  signed __int16 v22; // ax
  signed __int16 v23; // ax
  signed __int16 v24; // tt
  BOOL v25; // [rsp+38h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = 0;
  v4 = 1;
  if ( !Process )
  {
    v4 = 0;
    Process = KeGetCurrentThread()->Process;
  }
  Flink_high = HIDWORD(Process[2].Header.WaitListHead.Flink);
  v6 = *(_QWORD *)&Process[2].ActiveProcessors.Count;
  PairPrcb = CurrentPrcb->PairPrcb;
  v25 = (Flink_high & 0x800000) != 0;
  v8 = 0;
  if ( v4 )
  {
    if ( (Flink_high & 0x400000) != 0 && CurrentPrcb->TrappedSecurityDomain )
    {
      __writemsr(0x49u, 1uLL);
      CurrentPrcb->BpbState &= ~4u;
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v6;
      v3 = 1;
      CurrentPrcb->BpbRetpolineState |= 2u;
      v8 = 1;
      CurrentPrcb->BpbTrappedBpbState &= ~0x10u;
    }
  }
  else
  {
    if ( v6 != CurrentPrcb->TrappedSecurityDomain )
    {
      _InterlockedOr16(&PairPrcb->PairRegister, 0x20u);
      CurrentPrcb->TrappedSecurityDomain = v6;
      v3 = 1;
      CurrentPrcb->BpbState |= 4u;
    }
    if ( (CurrentPrcb->BpbState & 4) != 0 )
    {
      __writemsr(0x49u, 1uLL);
      CurrentPrcb->BpbState &= ~4u;
    }
  }
  if ( (Flink_high & 0xC00000) == 0x400000 )
  {
    _m_prefetchw((char *)&CurrentPrcb->2 + 14);
    PairRegister = CurrentPrcb->PairRegister;
    if ( v4 )
    {
      do
      {
        v10 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister & 0xFEFD, PairRegister);
      }
      while ( v10 != PairRegister );
    }
    else
    {
      do
      {
        v19 = PairRegister;
        PairRegister = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, PairRegister & 0xFEFD, PairRegister);
      }
      while ( v19 != PairRegister );
    }
    LOBYTE(v11) = PairRegister;
  }
  else
  {
    if ( (Flink_high & 0x800000) != 0 )
    {
      v11 = CurrentPrcb->PairRegister;
    }
    else
    {
      do
      {
        v22 = CurrentPrcb->PairRegister;
        v11 = v22 & 0xFEFD | 2;
      }
      while ( v22 != _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, v11, v22) );
    }
    v6 = 2LL;
  }
  TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
  v13 = 0;
  if ( !TrappedSecurityDomain && (v11 & 0x10) != 0 )
  {
    TrappedSecurityDomain = 1LL;
    _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
  }
  if ( v6 == TrappedSecurityDomain || (v11 & 8) != 0 )
  {
    do
    {
      v14 = PairPrcb->PairRegister;
      v15 = v14 & 0xFFEE | 1;
      if ( v6 )
        v15 = v14 & 0xFFEE | 0x11;
      v16 = v15 | 2;
      if ( (v11 & 1) != 0 )
        v16 = v15;
    }
    while ( (v16 & 0x100) == 0 && v16 != v14 && v14 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v16, v14) );
    if ( (v14 & 0x100) == 0 )
    {
      TrappedSecurityDomain = PairPrcb->TrappedSecurityDomain;
      if ( TrappedSecurityDomain || (v11 & 0x10) == 0 )
        goto LABEL_24;
      _InterlockedOr16(&CurrentPrcb->PairRegister, 2u);
    }
    TrappedSecurityDomain = 1LL;
  }
LABEL_24:
  if ( TrappedSecurityDomain != v6 && (v11 & 8) == 0 || v25 || TrappedSecurityDomain == 1 )
  {
    do
      v20 = PairPrcb->PairRegister;
    while ( (((unsigned __int8)v20 | (unsigned __int8)v11) & 1) != 0
         && v20 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v20 & 0xFFEC | 2, v20) );
    CurrentPrcb->BpbUserSpecCtrl |= 2u;
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl |= 2u;
  }
  else
  {
    CurrentPrcb->BpbUserSpecCtrl &= ~2u;
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
    v13 = 1;
  }
  if ( v3 )
  {
    do
      v21 = PairPrcb->PairRegister;
    while ( v21 != _InterlockedCompareExchange16(&PairPrcb->PairRegister, v21 & 0xFFDD | 2, v21) );
  }
  if ( !v13 )
  {
    if ( v25 )
    {
      _m_prefetchw((char *)&CurrentPrcb->2 + 14);
      v23 = CurrentPrcb->PairRegister;
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange16(&CurrentPrcb->PairRegister, v23 | 0x100, v23);
      }
      while ( v24 != v23 );
      if ( (v23 & 1) != 0 && v4 )
        v2 = 1;
    }
  }
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    BpbKernelSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  if ( v6 )
  {
    if ( (BpbKernelSpecCtrl & 3) != 0 )
      goto LABEL_39;
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFC | 1;
    CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      goto LABEL_39;
    goto LABEL_65;
  }
  if ( (v11 & 0x10) != 0 )
  {
    BpbKernelSpecCtrl = BpbKernelSpecCtrl & 0xFC | 2;
LABEL_65:
    CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
    goto LABEL_39;
  }
  BpbKernelSpecCtrl &= 0xFCu;
  CurrentPrcb->BpbRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    CurrentPrcb->BpbKernelSpecCtrl &= ~2u;
  else
    CurrentPrcb->BpbKernelSpecCtrl = BpbKernelSpecCtrl;
  CurrentPrcb->BpbUserSpecCtrl &= ~2u;
LABEL_39:
  result = v2;
  if ( v8 )
  {
    CurrentPrcb->BpbTrappedBpbState &= ~0x10u;
    CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbKernelSpecCtrl;
  }
  return result;
}
