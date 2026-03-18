/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C00C2554
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00C0444 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00C1CB4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DF980 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ZapActiveAndFocus @ 0x1C0248CA0 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
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
