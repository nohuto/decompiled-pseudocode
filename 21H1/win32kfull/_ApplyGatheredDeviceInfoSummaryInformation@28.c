/*
 * XREFs of _ApplyGatheredDeviceInfoSummaryInformation@28 @ 0xEB8F6
 * Callers:
 *     <none>
 * Callees:
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall ApplyGatheredDeviceInfoSummaryInformation(int a1, ULONG a2, int a3, int a4, int a5, int a6, int a7)
{
  int result; // eax

  if ( a1 )
  {
    if ( a1 == 1 )
      return ApplyGatheredKeyboardDeviceCount(a6);
    result = a1 - 2;
    if ( a1 != 2 )
      return result;
  }
  result = UpdateTPCurrentActiveState();
  if ( a2 )
  {
    if ( !WPP_MAIN_CB.AlignmentRequirement )
    {
      _gdwGTERMFlags |= 1u;
      *(_DWORD *)(_gpsi + 1572) = 1;
      SetGlobalCursorLevel(0);
      result = GreMovePointer(*(_DWORD **)(_gpDispInfo + 20), *(_DWORD *)(_gpsi + 4428), *(HDEV *)(_gpsi + 4432), 1);
    }
  }
  else if ( WPP_MAIN_CB.AlignmentRequirement )
  {
    _gdwGTERMFlags &= ~1u;
    *(_DWORD *)(_gpsi + 1572) = 0;
    SetGlobalCursorLevel(-1);
    result = ForceResetMouseButtonsDownState();
  }
  if ( !a1 )
  {
    *(_DWORD *)(_gpsi + 1668) = a3;
    *(_DWORD *)(_gpsi + 1796) = a4 != 0;
    result = a5;
    *(_DWORD *)(_gpsi + 1860) = a5;
  }
  WPP_MAIN_CB.AlignmentRequirement = a2;
  return result;
}
