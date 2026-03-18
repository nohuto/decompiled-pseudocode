/*
 * XREFs of _xxxBroadcastModernAppRedraw@0 @ 0x181592
 * Callers:
 *     <none>
 * Callees:
 *     _HandleDisplayChangeForInactiveDesktops@8 @ 0x9ABB2 (_HandleDisplayChangeForInactiveDesktops@8.c)
 *     _xxxBroadcastDisplaySettingsChange@12 @ 0xB2668 (_xxxBroadcastDisplaySettingsChange@12.c)
 */

int __stdcall xxxBroadcastModernAppRedraw()
{
  int result; // eax

  result = _grpdeskRitInput;
  if ( _grpdeskRitInput )
  {
    xxxBroadcastDisplaySettingsChange(_grpdeskRitInput, 0, 0);
    return HandleDisplayChangeForInactiveDesktops(_grpdeskRitInput, 0);
  }
  return result;
}
