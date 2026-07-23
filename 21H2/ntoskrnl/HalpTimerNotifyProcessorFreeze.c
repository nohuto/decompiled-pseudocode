/*
 * XREFs of HalpTimerNotifyProcessorFreeze @ 0x1404B6C00
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerResetProfileAdjustment @ 0x1403963F0 (HalpTimerResetProfileAdjustment.c)
 */

char __fastcall HalpTimerNotifyProcessorFreeze(char a1, char a2)
{
  char result; // al

  result = a2;
  if ( a1 )
  {
    _InterlockedIncrement(&HalpTimerProcessorsFrozen);
    return HalpTimerResetProfileAdjustment();
  }
  else
  {
    _InterlockedAdd(&HalpTimerProcessorsFrozen, 0xFFFFFFFF);
    if ( a2 )
    {
      result = HalpSystemHardwareLock;
      if ( HalpSystemHardwareLock == KeGetPcr()->Prcb.Number )
        _InterlockedExchange(&HalpSystemHardwareLock, -1);
    }
  }
  return result;
}
