/*
 * XREFs of ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1C00AFF48
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F48C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C00ADFEC (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     ?IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z @ 0x1C00AE6A8 (-IsShellParticipatesInSizing@@YA_NPEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C00B2AEC (GetWindowCloakState.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C011A2E8 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023E508 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023E648 (_anonymous_namespace_--WindowSizingUpdate.c)
 */

void __fastcall NotifyShell::PositioningChanged(NotifyShell *this, struct tagWND *a2, const struct tagCVR *a3)
{
  int v3; // eax
  unsigned int v6; // r8d
  bool v7; // r8

  v3 = *((_DWORD *)a2 + 8);
  if ( (v3 & 0x80u) != 0 )
  {
    NotifyShell::CuratedWindowHidden(this, a2);
    v3 = *((_DWORD *)a2 + 8);
  }
  if ( (v3 & 0x2100C0) == 0
    && (v3 & 3) != 3
    && (*(_BYTE *)(*((_QWORD *)this + 5) + 31LL) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState(this) )
  {
    if ( ShellWindowManagement::WindowSubjectToBehavior((ShellWindowManagement **)this, (struct tagWND *)0x10, v6) )
      NotifyShell::TrackedWindowPosChanged(this, 0LL, v7);
    if ( IsShellParticipatesInSizing(this) )
      anonymous_namespace_::WindowSizingUpdate(this);
  }
}
