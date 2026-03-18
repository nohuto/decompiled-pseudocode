/*
 * XREFs of ?GetGroupActiveWindow@CWindowGroupManager@@QAEPAUtagWND@@PAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x19F0FC
 * Callers:
 *     _lambda_3dfc3574f1764bae2e3df8ef16480b1e_::operator() @ 0xEF93E (_lambda_3dfc3574f1764bae2e3df8ef16480b1e_--operator().c)
 * Callees:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_fe5adaad091bae322a0ae467cfe968c7___ @ 0x19E91D (CWindowGroupManager--_ExecuteGroupAction__lambda_fe5adaad091bae322a0ae467cfe968c7___.c)
 */

int __stdcall CWindowGroupManager::GetGroupActiveWindow(int a1, int a2)
{
  _DWORD v3[2]; // [esp+4h] [ebp-Ch] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0;
  v3[0] = a1;
  a1 = *(_DWORD *)(a1 + 180);
  v3[1] = &v4;
  CWindowGroupManager::_ExecuteGroupAction__lambda_fe5adaad091bae322a0ae467cfe968c7___(
    `anonymous namespace'::g_windowGroupManager,
    &a1,
    (int)v3);
  return v4;
}
