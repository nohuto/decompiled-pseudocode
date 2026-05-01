/*
 * XREFs of ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x1801574C0
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18001F930 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z @ 0x180020B60 (-_HandleGhostStatusChange@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@0@Z.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x180021B30 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180023128 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180023610 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x18015CCB0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z @ 0x18015D9B0 (-SetForcedVisibilityWhileEnsured@CImmersiveApp@@UEAAX_N@Z.c)
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180023460 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(
        CImmersiveApp::CImmersiveWindowCollection *a1,
        unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)a1 + 8 * a2 + 216) = 0;
  v2 = CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(a1);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D6D,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
