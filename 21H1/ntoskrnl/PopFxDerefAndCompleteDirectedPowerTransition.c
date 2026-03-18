/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x140564CD4
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x14039C760 (PoFxReportDevicePoweredOn.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1403A27F4 (PopFxNotifyPreDIrpCompletion.c)
 *     PoFxCompleteDirectedPowerDown @ 0x140563520 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x1405638EC (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140564A5C (PopFxCompleteDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDerefAndCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  LONG result; // eax
  int v4; // edi

  result = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 824), 0, 0);
  if ( (result & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  v4 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 1160));
  if ( !v4 )
    result = PopFxCompleteDirectedPowerTransition(BugCheckParameter3, a2);
  if ( v4 < 0 )
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}
