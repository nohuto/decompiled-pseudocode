/*
 * XREFs of RtlWalkFrameChain @ 0x1402E7840
 * Callers:
 *     SepCreateTokenEx @ 0x14026E3A0 (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x1402E77B0 (RtlCaptureStackBackTrace.c)
 *     KiDpcWatchdogCaptureStack @ 0x14050CBC0 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x140590C40 (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A08C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x1405A1C64 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405A9818 (EtwpCovSampCaptureKernelStack.c)
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1406795C0 (SepDuplicateToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x14071103C (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x14093F498 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x140949874 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14029AE20 (RtlpGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 *     RtlpWalkFrameChain @ 0x1402E7990 (RtlpWalkFrameChain.c)
 *     KeGetCurrentStackPointer @ 0x1403F77B0 (KeGetCurrentStackPointer.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // edi
  ULONG v5; // ebx
  ULONG v6; // esi
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
    || (v8 = *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessorPadding[5])
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
  result = RtlpWalkFrameChain(Callers, v6, v4, v5);
  if ( result )
    result -= v10;
  return result;
}
