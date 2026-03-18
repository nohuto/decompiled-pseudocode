/*
 * XREFs of ?UpdateWindowInGroup@CWindowGroupManager@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F66A
 * Callers:
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F490 (-SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_G.c)
 * Callees:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___ @ 0x19E8BD (CWindowGroupManager--_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___.c)
 */

int __stdcall CWindowGroupManager::UpdateWindowInGroup(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [esp+4h] [ebp-10h] BYREF

  v4[0] = a1;
  a1 = *(_DWORD *)(a1 + 180);
  v4[1] = a2;
  v4[2] = a3;
  return CWindowGroupManager::_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___(
           `anonymous namespace'::g_windowGroupManager,
           &a1,
           (int)v4);
}
