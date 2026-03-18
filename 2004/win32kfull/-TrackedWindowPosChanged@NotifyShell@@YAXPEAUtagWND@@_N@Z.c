/*
 * XREFs of ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023E508
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C005A958 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00AFF48 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C02431FC (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C00ADFEC (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023E410 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 */

void __fastcall NotifyShell::TrackedWindowPosChanged(NotifyShell *this, struct tagWND *a2, unsigned int a3)
{
  char v3; // di

  v3 = (char)a2;
  if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)this, (struct tagWND *)0x10, a3) )
    anonymous_namespace_::NotifyShellWindowPosChangedCommon((unsigned __int64 *)this, v3, 0, 0);
}
