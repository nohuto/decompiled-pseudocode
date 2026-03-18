/*
 * XREFs of _ProcessDelayedSdc@4 @ 0xD3896
 * Callers:
 *     _PowerOnGdi@12 @ 0xD37F0 (_PowerOnGdi@12.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall ProcessDelayedSdc(int a1)
{
  int result; // eax

  if ( _gulDelayedSwitchAction && !_gProtocolType )
    xxxUserSetDisplayConfig(0, 0, _gulDelayedSwitchAction, 0, _grpdeskRitInput, 0, 0, 0, 0, a1);
  result = _gulDelayedSwitchAction;
  _gulDelayedSwitchAction = 0;
  return result;
}
