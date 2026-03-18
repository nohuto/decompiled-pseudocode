/*
 * XREFs of _SetNewForegroundQueue@4 @ 0x18960
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 * Callees:
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall SetNewForegroundQueue(int a1)
{
  int v1; // esi
  int i; // ecx
  int result; // eax

  v1 = gObjDummyLock;
  if ( a1 )
    v1 = a1;
  for ( i = 3; i; --i )
    v1 += 4;
  result = _gpqForeground;
  _gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  gForegroundQRawMouseRequested = 0;
  return result;
}
