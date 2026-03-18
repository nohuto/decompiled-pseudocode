/*
 * XREFs of _IsValidMonitor@4 @ 0x15D06
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall IsValidMonitor(_DWORD *this)
{
  _DWORD *i; // eax

  for ( i = *(_DWORD **)(_gpDispInfo + 56); i; i = (_DWORD *)i[7] )
  {
    if ( i == this )
      return 1;
  }
  return 0;
}
