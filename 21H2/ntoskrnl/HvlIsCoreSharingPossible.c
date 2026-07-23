/*
 * XREFs of HvlIsCoreSharingPossible @ 0x1404F1A90
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1403C79E0 (KeOptimizeSpecCtrlSettings.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

bool HvlIsCoreSharingPossible()
{
  unsigned __int64 CoreProcessorSet; // rcx
  bool result; // al

  result = 1;
  if ( (HvlpFlags & 0x400000) != 0 )
  {
    if ( (HvlpFlags & 2) == 0 )
      return 0;
    if ( HvlpSchedulerType != 2 )
    {
      if ( HvlpSchedulerType != 4 )
        return 0;
      CoreProcessorSet = KeGetCurrentPrcb()->CoreProcessorSet;
      if ( ((CoreProcessorSet - 1) & CoreProcessorSet) == 0 )
        return 0;
    }
  }
  return result;
}
