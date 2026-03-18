/*
 * XREFs of KdEnterDebugger @ 0x1409B4028
 * Callers:
 *     KdRefreshDebuggerNotPresent @ 0x1403CC910 (KdRefreshDebuggerNotPresent.c)
 *     KdpReport @ 0x14050C584 (KdpReport.c)
 *     KiTpWriteMemory @ 0x14051804C (KiTpWriteMemory.c)
 *     KdpCloseRemoteFile @ 0x1409B3970 (KdpCloseRemoteFile.c)
 *     KdpCreateRemoteFile @ 0x1409B3BD0 (KdpCreateRemoteFile.c)
 *     KdpReadRemoteFile @ 0x1409B3DFC (KdpReadRemoteFile.c)
 *     KdSendTraceData @ 0x1409B42D0 (KdSendTraceData.c)
 *     KdpCommandString @ 0x1409B6600 (KdpCommandString.c)
 *     KdpPrint @ 0x1409B66C8 (KdpPrint.c)
 *     KdpPrompt @ 0x1409B6848 (KdpPrompt.c)
 *     KdpSymbol @ 0x1409B69C0 (KdpSymbol.c)
 *     KdpSetOwedBreakpoints @ 0x1409B75E0 (KdpSetOwedBreakpoints.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140360D70 (VfIsVerifierEnabled.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     KeSaveSupervisorState @ 0x140514A88 (KeSaveSupervisorState.c)
 *     KeFreezeExecution @ 0x140518240 (KeFreezeExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3040 (VfNotifyVerifierOfEvent.c)
 */

bool __fastcall KdEnterDebugger(__int64 a1)
{
  int v2; // ebx
  unsigned __int8 CurrentIrql; // bp
  bool v4; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rsi
  __int64 ExtendedSupervisorState; // rcx
  unsigned int *v8; // rdx
  unsigned __int64 *v9; // rcx
  unsigned __int64 v10; // rax
  bool result; // al

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
  off_140C008C8[0]();
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( (KiBugCheckActive & 3) == 0 && !PoAllProcIntrDisabled )
  {
    ExtendedSupervisorState = (__int64)CurrentPrcb->ExtendedSupervisorState;
    qword_140CF6350 = ~KdIgnoredSavingSupervisorXStateFeatures & (MEMORY[0xFFFFF780000005F0] | 0x100LL);
    KeSaveSupervisorState(
      ExtendedSupervisorState,
      ~KdIgnoredSavingSupervisorXStateFeatures & (MEMORY[0xFFFFF780000005F0] | 0x100LL));
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
