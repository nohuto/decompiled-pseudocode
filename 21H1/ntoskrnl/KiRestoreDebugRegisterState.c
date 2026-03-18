/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1403F6310
 * Callers:
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
 *     KiCallUserMode @ 0x1403F9430 (KiCallUserMode.c)
 *     KiApcInterrupt @ 0x1403F9EB0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1403FB2B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1403FB550 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1403FBA90 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1403FC050 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1403FC540 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1403FD780 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x1403FEAB0 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x140401040 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x140401B80 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x1404020C0 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x140403C00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x140404940 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x140404F80 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x140405800 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140405D00 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x1404072C0 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x140407D80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1404080C0 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x1404083C0 (KiUmsFastReturnToUser.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRestoreDebugRegisterState()
{
  unsigned __int64 *v0; // rbp
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  int v5; // r8d
  unsigned __int64 v6; // rax
  unsigned int v7; // edx

  __writedr(7u, 0LL);
  v1 = v0[12];
  __writedr(0, v0[11]);
  __writedr(1u, v1);
  v2 = v0[14];
  __writedr(2u, v0[13]);
  __writedr(3u, v2);
  v3 = v0[16];
  result = 0LL;
  __writedr(6u, 0LL);
  __writedr(7u, v3);
  if ( (__readgsbyte(0x8722u) & 2) != 0 && (v3 & 0x300) != 0 && (KiCpuTracingFlags & 2) == 0 )
  {
    if ( (v3 & 0x200) != 0 )
      LODWORD(result) = 2;
    if ( (v3 & 0x100) != 0 )
      LODWORD(result) = result | 1;
    v5 = result;
    v6 = __readmsr(0x1D9u);
    v7 = HIDWORD(v6);
    result = v5 | (unsigned int)v6 & 0xFFFFFFFC;
    __writemsr(0x1D9u, __PAIR64__(v7, result));
  }
  return result;
}
