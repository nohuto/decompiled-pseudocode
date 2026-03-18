/*
 * XREFs of ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023D268
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0017D1C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C003ED78 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0241F5C (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C0094B7C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023D170 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

void __fastcall NotifyShell::TrackedWindowPosChanged(NotifyShell *this, struct tagWND *a2, unsigned int a3)
{
  char v3; // di

  v3 = (char)a2;
  if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)this, (struct tagWND *)0x10, a3) )
    anonymous_namespace_::NotifyShellWindowPosChangedCommon((__int64 *)this, v3, 0, 0);
}
