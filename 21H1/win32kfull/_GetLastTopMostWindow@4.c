/*
 * XREFs of _GetLastTopMostWindow@4 @ 0x933C8
 * Callers:
 *     ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC (-xxxActivateOnMinimize@@YGHPAUtagWND@@@Z.c)
 *     ?ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z @ 0x327EE (-ZOrderByOwner@@YGPAUtagSMWP@@PAU1@@Z.c)
 *     ?TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z @ 0x32AE4 (-TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z @ 0x32CDC (-CheckTopmost@@YGHPAUtagWINDOWPOS@@@Z.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     ?ValidateZorder@@YGHPAUtagCVR@@@Z @ 0x93140 (-ValidateZorder@@YGHPAUtagCVR@@@Z.c)
 *     _CalcForegroundInsertAfter@4 @ 0x932A2 (_CalcForegroundInsertAfter@4.c)
 *     __GetNextQueueWindow@12 @ 0x15D1B0 (__GetNextQueueWindow@12.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 */

int __thiscall GetLastTopMostWindow(_DWORD *this)
{
  int ThreadDesktopWindow; // eax
  int v2; // ecx
  int v3; // edx

  if ( !this || (ThreadDesktopWindow = _GetDesktopWindow(this)) == 0 )
  {
    ThreadDesktopWindow = GetThreadDesktopWindow(_gptiCurrent);
    if ( !ThreadDesktopWindow )
      return 0;
  }
  v2 = *(_DWORD *)(ThreadDesktopWindow + 60);
  if ( !v2 || (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 16) & 8) == 0 )
    return 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 48);
    if ( !v3 || (*(_BYTE *)(*(_DWORD *)(v3 + 20) + 16) & 8) == 0 )
      break;
    v2 = *(_DWORD *)(v2 + 48);
  }
  return v2;
}
