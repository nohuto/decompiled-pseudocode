/*
 * XREFs of ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C0094B7C
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C003ED78 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00942E4 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 *     ?IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z @ 0x1C020B3DC (-IsWindowSubjectToShellSizingPolicy@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0223630 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223854 (xxxHandleNCMouseGuys.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023D268 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C0094BC0 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     _anonymous_namespace_::EligibleWindow @ 0x1C0094D18 (_anonymous_namespace_--EligibleWindow.c)
 */

bool __fastcall ShellWindowManagement::WindowSubjectToBehavior(
        ShellWindowManagement **this,
        struct tagWND *a2,
        unsigned int a3)
{
  struct tagWND *v3; // r9

  if ( ShellWindowManagement::BehaviorEnabled(this[3], a2, a3) )
    return anonymous_namespace_::EligibleWindow(v3);
  else
    return 0;
}
