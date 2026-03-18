/*
 * XREFs of ?xxxForceForegroundWindowNoRestoreFocus@@YG_NPAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x14183D
 * Callers:
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x141881 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     _EditionChangeForegroundQueueForMouseInput@8 @ 0x147787 (_EditionChangeForegroundQueueForMouseInput@8.c)
 *     _NtUserNavigateFocus@8 @ 0x16716A (_NtUserNavigateFocus@8.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z @ 0x19FC53 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AAE_NPAUtagWND@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 */

bool __fastcall xxxForceForegroundWindowNoRestoreFocus(int a1, int a2)
{
  int v3; // edi

  v3 = 0;
  if ( !(unsigned __int8)IsInputThread() && _gptiRit != _gptiCurrent )
    v3 = _gptiCurrent;
  return xxxSetForegroundWindow2(a1, v3, a2 | 0x40) != 0;
}
