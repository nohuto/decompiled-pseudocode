/*
 * XREFs of ?FindNewMonitor@@YGPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x144E6D
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 */

struct tagMONITOR *__thiscall FindNewMonitor(const void *this)
{
  int i; // esi

  for ( i = *(_DWORD *)(_gpDispInfo + 56); ; i = *(_DWORD *)(i + 28) )
  {
    if ( !i )
      return 0;
    if ( EqualRectInl(this, (const void *)(*(_DWORD *)(i + 20) + 16)) )
      break;
  }
  return (struct tagMONITOR *)i;
}
