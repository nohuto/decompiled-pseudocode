/*
 * XREFs of _xxxProcessDelegateCapturedPointers@4 @ 0xF1CCE
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ?PopFirstPendingDelegateCapture@@YGKPAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x15B20E (-PopFirstPendingDelegateCapture@@YGKPAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YGHKPAUtagWND@@H@Z @ 0x15B489 (-xxxNotifyCaptureChangeIfCaptured@@YGHKPAUtagWND@@H@Z.c)
 */

void __thiscall xxxProcessDelegateCapturedPointers(_DWORD *this)
{
  unsigned int v2; // ecx
  struct tagWND *v3; // [esp+0h] [ebp-8h]
  int v4; // [esp+4h] [ebp-4h]

  while ( this[158] )
  {
    this[158] = 0;
    while ( PopFirstPendingDelegateCapture(v3) )
      xxxNotifyCaptureChangeIfCaptured(v2, v3, v4);
  }
}
