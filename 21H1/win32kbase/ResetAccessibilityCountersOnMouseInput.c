/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1C0045B70
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C360C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C01CEBE0 (ApiSetEditionKillAccessibilityTimer.c)
 */

ReEnterLeaveCrit *ResetAccessibilityCountersOnMouseInput()
{
  ReEnterLeaveCrit *result; // rax
  __int64 v1; // rcx
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF
  int v3; // [rsp+30h] [rbp+8h] BYREF

  gStickyKeysLeftShiftCount = 0;
  gStickyKeysRightShiftCount = 0;
  _InterlockedOr(v2, 0);
  if ( gtmridFKActivation )
  {
    result = ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v3);
    if ( gtmridFKActivation )
    {
      result = (ReEnterLeaveCrit *)ApiSetEditionKillAccessibilityTimer();
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v3 )
      return (ReEnterLeaveCrit *)UserSessionSwitchLeaveCrit(v1);
  }
  return result;
}
