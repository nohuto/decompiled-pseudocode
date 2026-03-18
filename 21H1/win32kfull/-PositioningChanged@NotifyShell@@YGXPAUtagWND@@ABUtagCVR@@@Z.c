/*
 * XREFs of ?PositioningChanged@NotifyShell@@YGXPAUtagWND@@ABUtagCVR@@@Z @ 0x2624C
 * Callers:
 *     ?xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z @ 0x38532 (-xxxSendChangedMsgs@@YGXPAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     ?IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z @ 0x26AC0 (-IsShellParticipatesInSizing@@YG_NPAUtagWND@@@Z.c)
 *     ?CuratedWindowHidden@NotifyShell@@YGXPAUtagWND@@@Z @ 0xAC8F6 (-CuratedWindowHidden@NotifyShell@@YGXPAUtagWND@@@Z.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335 (-TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x19C38C (_anonymous_namespace_--WindowSizingUpdate.c)
 */

void __fastcall NotifyShell::PositioningChanged(int a1, int a2)
{
  int v4; // eax
  NotifyShell *v5; // [esp+0h] [ebp-Ch]
  NotifyShell *v6; // [esp+0h] [ebp-Ch]
  struct tagWND *v7; // [esp+4h] [ebp-8h]
  struct tagWND *v8; // [esp+4h] [ebp-8h]
  unsigned int v9; // [esp+8h] [ebp-4h]
  bool v10; // [esp+8h] [ebp-4h]

  v4 = *(_DWORD *)(a2 + 24);
  if ( (v4 & 0x80u) != 0 )
  {
    NotifyShell::CuratedWindowHidden(v5, v7);
    v4 = *(_DWORD *)(a2 + 24);
  }
  if ( (((unsigned int)&loc_2100BE + 2) & v4) == 0
    && (v4 & 3) != 3
    && (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 23) & 0x10) != 0
    && !GetWindowCloakState(a1) )
  {
    if ( ShellWindowManagement::WindowSubjectToBehavior(v5, v7, v9) )
      NotifyShell::TrackedWindowPosChanged(v6, v8, v10);
    if ( IsShellParticipatesInSizing(v6) )
      anonymous_namespace_::WindowSizingUpdate(a1);
  }
}
