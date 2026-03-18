/*
 * XREFs of ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C (-PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z.c)
 *     ?xxxShowWindowViaMinMax@@YGXPAUtagWND@@IK@Z @ 0xB3A8C (-xxxShowWindowViaMinMax@@YGXPAUtagWND@@IK@Z.c)
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z @ 0x1A0652 (-xxxSetWindowShowState@@YG_NPAUtagWND@@EPAUtagRECT@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x19C27B (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

void __fastcall NotifyShell::TrackedWindowPosChanged(_DWORD *a1, char a2)
{
  if ( ShellWindowManagement::WindowSubjectToBehavior((int)a1, 0x10u) )
    anonymous_namespace_::NotifyShellWindowPosChangedCommon(a1, a2, 0, 0);
}
