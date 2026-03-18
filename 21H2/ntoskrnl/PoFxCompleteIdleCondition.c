/*
 * XREFs of PoFxCompleteIdleCondition @ 0x14024E680
 * Callers:
 *     HalpTimerPowerComponentIdleCallback @ 0x1403DED10 (HalpTimerPowerComponentIdleCallback.c)
 *     HalpInterruptPowerComponentIdleCallback @ 0x14051DFE0 (HalpInterruptPowerComponentIdleCallback.c)
 *     DifPoFxCompleteIdleConditionWrapper @ 0x1406191B0 (DifPoFxCompleteIdleConditionWrapper.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x140355058 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x140355534 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2
                                                                                                 + 832)
                                                                                     + 8LL
                                                                                     * (unsigned int)BugCheckParameter3)
                                                                         + 136LL));
  if ( (_DWORD)result )
  {
    if ( (int)result < 0 )
      PopFxBugCheck(0x613uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  }
  else
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), (unsigned int)BugCheckParameter3, 13LL);
    return PopFxIdleWorkerTail(BugCheckParameter2);
  }
  return result;
}
