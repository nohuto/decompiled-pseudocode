/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x1C00C25C4
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x1C00BF898 (zzzReattachThreads.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0116BF4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0BBC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 */

__int64 zzzInputFocusReceivedWindowEvent()
{
  unsigned int v0; // ecx

  v0 = 35;
  if ( !gdwDeferWinEvent )
    v0 = 33;
  return xxxWindowEvent(0x80000002, v0);
}
