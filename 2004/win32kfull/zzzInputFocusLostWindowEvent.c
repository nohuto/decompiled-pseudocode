/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C00350E4
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0033BEC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034844 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0037E18 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E0640 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ZapActiveAndFocus @ 0x1C024A250 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 */

__int64 __fastcall zzzInputFocusLostWindowEvent(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx
  int v3; // r8d

  if ( gpqForeground
    && (v1 = *(_QWORD *)(gpqForeground + 112LL)) != 0
    && v1 != a1
    && *(_QWORD *)(a1 + 16) == *(_QWORD *)(v1 + 16) )
  {
    v2 = 35;
    v3 = 33;
  }
  else
  {
    v2 = 51;
    v3 = 49;
  }
  if ( !gdwDeferWinEvent )
    v2 = v3;
  return xxxWindowEvent(0x80000003, v2);
}
