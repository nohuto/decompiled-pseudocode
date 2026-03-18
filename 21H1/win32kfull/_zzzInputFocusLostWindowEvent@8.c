/*
 * XREFs of _zzzInputFocusLostWindowEvent@8 @ 0x1768E
 * Callers:
 *     ?xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x17292 (-xxxDeactivate@@YGXPAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x18278 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     ?CancelInputState@@YGXPAUtagTHREADINFO@@K@Z @ 0x14CC2B (-CancelInputState@@YGXPAUtagTHREADINFO@@K@Z.c)
 *     _ZapActiveAndFocus@0 @ 0x1A6BDA (_ZapActiveAndFocus@0.c)
 * Callees:
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 */

int __fastcall zzzInputFocusLostWindowEvent(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  if ( _gpqForeground
    && (v2 = *(_DWORD *)(_gpqForeground + 60)) != 0
    && v2 != a1
    && *(_DWORD *)(a1 + 8) == *(_DWORD *)(v2 + 8) )
  {
    v3 = _gdwDeferWinEvent != 0 ? 35 : 33;
  }
  else
  {
    v2 = a1;
    v3 = _gdwDeferWinEvent != 0 ? 51 : 49;
  }
  return xxxWindowEvent(-2147483645, v2, 0, a2, v3);
}
