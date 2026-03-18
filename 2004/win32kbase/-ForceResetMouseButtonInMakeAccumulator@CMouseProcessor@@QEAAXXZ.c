/*
 * XREFs of ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C0059B54
 * Callers:
 *     ForceResetMouseButtonsDownState @ 0x1C0059B30 (ForceResetMouseButtonsDownState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 */

void __fastcall CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(CMouseProcessor *this)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      17,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
  *((_DWORD *)this + 891) = 0;
}
