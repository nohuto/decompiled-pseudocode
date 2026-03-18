/*
 * XREFs of _zzzInputFocusReceivedWindowEvent@4 @ 0x177FE
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 */

int __thiscall zzzInputFocusReceivedWindowEvent(void *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // ecx

  v2 = *(_DWORD *)(_gpqForeground + 60);
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 8) + 240);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 20);
  else
    v4 = 0;
  return xxxWindowEvent(-2147483646, v2, v4, this, _gdwDeferWinEvent != 0 ? 35 : 33);
}
