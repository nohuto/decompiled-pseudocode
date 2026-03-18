/*
 * XREFs of _HideMouseTrails@16 @ 0x1436A8
 * Callers:
 *     <none>
 * Callees:
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 */

int __stdcall HideMouseTrails(int a1, int a2, int a3, int a4)
{
  int result; // eax

  if ( gMouseTrailsToHide > 0 )
  {
    result = _InterlockedDecrement(&gMouseTrailsToHide);
    if ( result < (int)WPP_MAIN_CB.DeviceQueue.Lock )
      return GreMovePointer(*(_DWORD **)(_gpDispInfo + 20), *(_DWORD *)(_gpsi + 4428), *(HDEV *)(_gpsi + 4432), 1);
  }
  return result;
}
