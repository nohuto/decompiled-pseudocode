/*
 * XREFs of KiRestoreDebugRegisterState @ 0x1403FE3C0
 * Callers:
 *     NtContinueEx @ 0x1403FE630 (NtContinueEx.c)
 *     NtRaiseException @ 0x1403FEA60 (NtRaiseException.c)
 *     KiRestoreSetContextState @ 0x1403FF120 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1403FF5C0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1403FFF40 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x140400330 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x140400720 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x140400B10 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x140400F00 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x140401B40 (KxIsrLinkage.c)
 *     KiCallUserMode @ 0x1404022D0 (KiCallUserMode.c)
 *     KiApcInterrupt @ 0x140402EF0 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1404044B0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1404048B0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x140404F60 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x140405690 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x140405CF0 (KiIpiInterrupt.c)
 *     KxStartUserThread @ 0x1404071F0 (KxStartUserThread.c)
 *     NtCallEnclave @ 0x140408680 (NtCallEnclave.c)
 *     KiNmiInterruptStart @ 0x14040AE40 (KiNmiInterruptStart.c)
 *     KiBoundFault @ 0x14040B9C0 (KiBoundFault.c)
 *     KiInvalidOpcodeFault @ 0x14040C040 (KiInvalidOpcodeFault.c)
 *     KiPageFault @ 0x14040DD00 (KiPageFault.c)
 *     KiMcheckAbort @ 0x14040EBC0 (KiMcheckAbort.c)
 *     KxMcheckAlternateReturn @ 0x14040F200 (KxMcheckAlternateReturn.c)
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 *     KiControlProtectionFault @ 0x140410280 (KiControlProtectionFault.c)
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 *     KiExceptionDispatch @ 0x1404127C0 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140412C80 (KiFastFailDispatch.c)
 *     KiUmsFastReturnToUser @ 0x140413100 (KiUmsFastReturnToUser.c)
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
