/*
 * XREFs of ?RawInputMouseRequestedByForeground@@YGHXZ @ 0x146B7C
 * Callers:
 *     _EditionGetMouseWheelRoutingMode@0 @ 0x14799B (_EditionGetMouseWheelRoutingMode@0.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall RawInputMouseRequestedByForeground()
{
  int v0; // eax
  BOOL result; // eax

  result = 0;
  if ( _gpqForeground )
  {
    v0 = *(_DWORD *)(_gpqForeground + 52);
    if ( v0 )
    {
      if ( gForegroundQRawMouseRequested && IsDesktopApp(*(_DWORD *)(v0 + 232)) )
        return 1;
    }
  }
  return result;
}
