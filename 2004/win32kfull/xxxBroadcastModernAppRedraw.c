/*
 * XREFs of xxxBroadcastModernAppRedraw @ 0x1C021F0C0
 * Callers:
 *     <none>
 * Callees:
 *     HandleDisplayChangeForInactiveDesktops @ 0x1C0056F80 (HandleDisplayChangeForInactiveDesktops.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C01055A0 (xxxBroadcastDisplaySettingsChange.c)
 */

__int64 xxxBroadcastModernAppRedraw()
{
  __int64 result; // rax

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(grpdeskRitInput, 0, 0);
    return HandleDisplayChangeForInactiveDesktops(grpdeskRitInput, 0);
  }
  return result;
}
