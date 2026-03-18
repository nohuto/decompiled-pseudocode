/*
 * XREFs of KdEnterDebugger @ 0x140A6F7A0
 * Callers:
 *     KdpReport @ 0x140299E94 (KdpReport.c)
 *     KdRefreshDebuggerNotPresent @ 0x1403DC750 (KdRefreshDebuggerNotPresent.c)
 *     KiTpWriteMemory @ 0x140573408 (KiTpWriteMemory.c)
 *     KdpCreateRemoteFile @ 0x140A6F444 (KdpCreateRemoteFile.c)
 *     KdpSymbol @ 0x140A6F61C (KdpSymbol.c)
 *     KdSendTraceData @ 0x140A702DC (KdSendTraceData.c)
 *     KdpCloseRemoteFile @ 0x140A7294C (KdpCloseRemoteFile.c)
 *     KdpReadRemoteFile @ 0x140A72BB0 (KdpReadRemoteFile.c)
 *     KdpCommandString @ 0x140A74270 (KdpCommandString.c)
 *     KdpPrint @ 0x140A7434C (KdpPrint.c)
 *     KdpPrompt @ 0x140A744CC (KdpPrompt.c)
 *     KdpSetOwedBreakpoints @ 0x140A74B64 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KeSaveSupervisorState @ 0x14029B8E8 (KeSaveSupervisorState.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     VfIsVerifierEnabled @ 0x1402DA4B0 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 */

char __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  char v4; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rsi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  char result; // al

  v2 = 0;
  if ( (unsigned int)VfIsVerifierEnabled() )
    VfNotifyVerifierOfEvent(3LL);
  if ( a1 )
  {
    KdTimerStop = __rdtsc();
    KdTimerDifference = KdTimerStop - KdTimerStart;
  }
  else
  {
    KdTimerStop = 0LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  v4 = KeFreezeExecution();
  off_140C01F18[0]();
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
    qword_140C4ECA0 = ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100);
    KeSaveSupervisorState(
      ExtendedSupervisorState,
      ~KdIgnoredSavingSupervisorXStateFeatures & (KeEnabledSupervisorXStateFeatures | 0x100));
  }
  if ( (KiBugCheckActive & 3) == 0 || (unsigned int)KiBugCheckActive >> 4 != (_DWORD)Number )
    CurrentPrcb->DebuggerSavedIRQL = CurrentIrql;
  v8 = (unsigned int *)KdLogBuffer[Number];
  if ( v8 )
  {
    v9 = (unsigned __int64 *)&v8[4 * *v8 + 4];
    v10 = __rdtsc();
    *v9 = ((unsigned __int64)HIDWORD(v10) << 32) | (unsigned int)v10;
    v9[1] = (4 * ((unsigned __int8)KdDebuggerNotPresent & 1)) | 1u;
  }
  ++KdDebuggerEnteredCount;
  result = v4;
  LOBYTE(v2) = KdPortLocked == 0;
  KdDebuggerEnteredWithoutLock += v2;
  KdEnteredDebugger = 1;
  return result;
}
