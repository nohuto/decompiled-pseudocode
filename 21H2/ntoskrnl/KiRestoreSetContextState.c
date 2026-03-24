/*
 * XREFs of KiRestoreSetContextState @ 0x1403FF120
 * Callers:
 *     NtContinueEx @ 0x1403FE630 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FEA60 (NtRaiseException.c)
 *     KiChainedDispatch @ 0x1403FF5C0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FFF40 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400330 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400720 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400B10 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400F00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x140402EF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1404044B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404048B0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405690 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1404071F0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140408680 (NtCallEnclave.c)
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C040 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KxMcheckAlternateReturn @ 0x14040F200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413100 (KiUmsFastReturnToUser.c)
 * Callees:
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KeContextToKframes @ 0x1403FE020 (KeContextToKframes.c)
 *     KiRestoreDebugRegisterState @ 0x1403FE3C0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiUmsExit @ 0x140413A00 (KiUmsExit.c)
 *     KiCopyCounters @ 0x14051BE60 (KiCopyCounters.c)
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KiRestoreSetContextState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rbp
  struct _KTHREAD *Thread; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned __int16 BpbUserSpecCtrl; // ax
  unsigned __int8 v11; // cf
  _QWORD v15[87]; // [rsp-298h] [rbp-3D0h] BYREF

  __writecr8(1uLL);
  _enable();
  Thread = KeGetCurrentThread()[1].WaitBlock[3].Thread;
  KeContextToKframes(v5 - 128, (__int64)v15, (__int64)Thread, (int)Thread->StackLimit, 1LL);
  _disable();
  __writecr8(0LL);
  _interlockedbittestandreset(&KeGetCurrentThread()->Header.Lock, 0x1Bu);
  if ( (*((_BYTE *)&KeGetPcr()->Prcb.2 + 20) & 2) != 0 )
    ((void (__fastcall *)(_QWORD))KiUpdateStibpPairing)(0LL);
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
      ((void (__fastcall *)(struct _KTHREAD *))KiUmsExit)(CurrentThread);
    }
  }
  _mm_setcsr(*(_DWORD *)(v5 - 84));
  if ( *(_WORD *)(v5 + 128) )
    KiRestoreDebugRegisterState();
  v8 = *(_QWORD *)(v5 - 48);
  v9 = *(_QWORD *)(v5 - 56);
  __writegsbyte(0x856u, 0);
  BpbUserSpecCtrl = KeGetPcr()->Prcb.BpbUserSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbUserSpecCtrl )
  {
    __writegsword(0x864u, BpbUserSpecCtrl);
    __writemsr(0x48u, BpbUserSpecCtrl);
  }
  v11 = _bittestandreset16(MK_FP(__GS__, 2144LL), 2u);
  if ( v11 )
    __writemsr(0x49u, 1uLL);
  v11 = _bittestandreset16(MK_FP(__GS__, 2144LL), 5u);
  if ( v11 )
  {
    v15[21] = 0x1403FF321LL;
    v15[52] = 0x1403FF438LL;
    v15[51] = 0x1403FF42FLL;
    v15[50] = 0x1403FF426LL;
    v15[49] = 0x1403FF41DLL;
    v15[48] = 0x1403FF414LL;
    v15[47] = 0x1403FF40BLL;
    v15[46] = 0x1403FF402LL;
    v15[45] = 0x1403FF3F9LL;
    v15[44] = 0x1403FF3F0LL;
    v15[43] = 0x1403FF3E7LL;
    v15[42] = 0x1403FF3DELL;
    v15[41] = 0x1403FF3D5LL;
    v15[40] = 0x1403FF3CCLL;
    v15[39] = 0x1403FF3C3LL;
    v15[38] = 0x1403FF3BALL;
    v15[37] = 0x1403FF3B1LL;
    v15[36] = 0x1403FF3A8LL;
    v15[35] = 0x1403FF39FLL;
    v15[34] = 0x1403FF396LL;
    v15[33] = 0x1403FF38DLL;
    v15[32] = 0x1403FF384LL;
    v15[31] = 0x1403FF37BLL;
    v15[30] = 0x1403FF372LL;
    v15[29] = 0x1403FF369LL;
    v15[28] = 0x1403FF360LL;
    v15[27] = 0x1403FF357LL;
    v15[26] = 0x1403FF34ELL;
    v15[25] = 0x1403FF345LL;
    v15[24] = 0x1403FF33CLL;
    v15[23] = 0x1403FF333LL;
    v15[22] = 0x1403FF32ALL;
  }
  if ( (KiKvaShadow & 1) == 0 )
  {
    if ( (KeGetPcr()->Prcb.BpbState & 0x100) != 0 )
      __asm { verw    [rsp-298h+arg_2B0] }
    __asm
    {
      swapgs
      iretq
    }
  }
  return KiKernelExit(*(_QWORD *)(v5 - 72), *(_QWORD *)(v5 - 64), v9, v8, a5);
}
