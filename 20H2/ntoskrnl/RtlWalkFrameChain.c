/*
 * XREFs of RtlWalkFrameChain @ 0x140228EA0
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x140228FF0 (RtlCaptureStackBackTrace.c)
 *     SepCreateTokenEx @ 0x1402FB674 (SepCreateTokenEx.c)
 *     KiDpcWatchdogCaptureStack @ 0x1405104F0 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x1405946E0 (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A4364 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x1405A5704 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405AD378 (EtwpCovSampCaptureKernelStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1405CE694 (EtwTimLogRedirectionTrustPolicy.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140601150 (SepDuplicateToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406F1614 (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x140945258 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x14094F634 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1402265A0 (RtlpGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 *     RtlpWalkFrameChain @ 0x1402273F0 (RtlpWalkFrameChain.c)
 *     KeGetCurrentStackPointer @ 0x1403FC380 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  char v4; // di
  unsigned int v5; // ebx
  unsigned int v6; // esi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v8; // rax
  ULONG result; // eax
  int v10; // ebp
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE || Count == -1 )
    return 0;
  v10 = (Flags & 2) == 0;
  v5 = v10 + (Flags >> 8);
  v6 = v10 + Count;
  if ( !KeAreInterruptsEnabled()
    || KeGetCurrentIrql() >= 2u
    || (CurrentThread = KeGetCurrentThread(), (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0)
    || (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink == KiExecuteDpc
    || !MmPhysicalMemoryBlock
    || (v8 = *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessorPadding[5])
                       + 6848LL)) == 0
    || CurrentThread == *(struct _KTHREAD **)(v8 + 88) )
  {
    if ( (v4 & 1) != 0 )
      return 0;
  }
  v11[0] = 0LL;
  v12 = 0LL;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v12, (__int64)v11)
    || (unsigned __int64)(KeGetCurrentStackPointer() - v12) < 0xE30 )
  {
    return 0;
  }
  result = RtlpWalkFrameChain((__int64)Callers, v6, v4, v5);
  if ( result )
    result -= v10;
  return result;
}
