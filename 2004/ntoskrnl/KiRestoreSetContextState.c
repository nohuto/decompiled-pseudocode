/*
 * XREFs of KiRestoreSetContextState @ 0x1403F8030
 * Callers:
 *     NtContinueEx @ 0x1403F7810 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403F7AD0 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1403F8370 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403F8B90 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1403F8E20 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1403F9340 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1403F95C0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1403FA0A0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1403FB140 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1403FC540 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FC7E0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FCD20 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1403FD2E0 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FD7D0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1403FEA10 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1403FFD40 (NtCallEnclave.c)
 *     KiBoundFault @ 0x140402E80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404033C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140404F00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x140406280 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140406B00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140407000 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140409080 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404093C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1404096C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1403F7200 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1403F75A0 (KiRestoreDebugRegisterState.c)
 *     KiUmsExit @ 0x140409E40 (KiUmsExit.c)
 *     KiCopyCounters @ 0x1405169B0 (KiCopyCounters.c)
 */

__int64 __fastcall KiRestoreSetContextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  struct _KTHREAD *Thread; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int8 BpbUserSpecCtrl; // al
  __int64 v14; // [rsp+0h] [rbp-138h] BYREF

  __writecr8(1uLL);
  _enable();
  Thread = KeGetCurrentThread()[1].WaitBlock[3].Thread;
  KeContextToKframes(v5 - 128, (__int64)&v14, (__int64)Thread, (int)Thread->StackLimit, 1LL);
  _disable();
  __writecr8(0LL);
  _interlockedbittestandreset(&KeGetCurrentThread()->Header.Lock, 0x1Bu);
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 14) & 2) != 0 )
    KiUpdateStibpPairing(0LL);
  if ( (*(_BYTE *)(v5 + 240) & 1) == 0 )
  {
    _mm_setcsr(*(_DWORD *)(v5 - 84));
    __asm { iretq }
  }
  if ( (_BYTE)KeSmapEnabled )
    __asm { stac }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 )
  {
    if ( (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    if ( (CurrentThread->Header.Reserved1 & 0x40) != 0 )
    {
      LOBYTE(CurrentThread) = 1;
      KiUmsExit(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v8 = *(_QWORD *)(v5 - 48);
  v9 = *(_QWORD *)(v5 - 56);
  __writegsbyte(0x853u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsbyte(0x27Au, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  if ( _bittestandreset16(MK_FP(__GS__, 632LL), 2u) )
    __writemsr(0x49u, 1uLL);
  if ( (KiKvaShadow & 1) == 0 )
  {
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v9, v8, a5);
}
