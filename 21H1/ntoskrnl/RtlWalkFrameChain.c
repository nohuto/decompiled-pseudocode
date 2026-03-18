/*
 * XREFs of RtlWalkFrameChain @ 0x14032C980
 * Callers:
 *     SepCreateTokenEx @ 0x1402D874C (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x14032C8F0 (RtlCaptureStackBackTrace.c)
 *     KiDpcWatchdogCaptureStack @ 0x14050C570 (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x140590550 (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A01D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x1405A1574 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405A9128 (EtwpCovSampCaptureKernelStack.c)
 *     PoDiagCaptureUsermodeStack @ 0x1405CEF18 (PoDiagCaptureUsermodeStack.c)
 *     SepDuplicateToken @ 0x1406014E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     EtwpCovSampCaptureUserStack @ 0x14093E218 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x1409484D4 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140208310 (RtlpGetStackLimits.c)
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 *     RtlpWalkFrameChain @ 0x14032CAD0 (RtlpWalkFrameChain.c)
 *     KeGetCurrentStackPointer @ 0x1403F6520 (KeGetCurrentStackPointer.c)
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
    || (v8 = *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessorPadding[5])
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
