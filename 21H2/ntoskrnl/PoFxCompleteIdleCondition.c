/*
 * XREFs of PoFxCompleteIdleCondition @ 0x1402C42D0
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x1403CFA00 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x1404D1A30 (HalpInterruptPowerComponentIdleCallback.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140260CB4 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140260EC0 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x1405693EC (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(_QWORD *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  int v5; // ebx

  result = BugCheckParameter2[104];
  v4 = (unsigned int)BugCheckParameter3;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(result + 8LL * (unsigned int)BugCheckParameter3)
                                                       + 136LL));
  if ( !v5 )
  {
    PopFxAddLogEntry(BugCheckParameter2[6], BugCheckParameter3, 13, 1LL);
    result = PopFxIdleWorkerTail(BugCheckParameter2, v4, 0LL);
  }
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, (ULONG_PTR)BugCheckParameter2, v4, 2uLL);
  return result;
}
