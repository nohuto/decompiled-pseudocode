/*
 * XREFs of ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C004BDB4
 * Callers:
 *     ForceResetMouseButtonsDownState @ 0x1C004BD90 (ForceResetMouseButtonsDownState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 */

void __fastcall CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(CMouseProcessor *this)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      17,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
  *((_DWORD *)this + 909) = 0;
}
