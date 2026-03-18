/*
 * XREFs of ?RemoveWindowFromGroup@CWindowGroupManager@@QAEJPAUtagWND@@@Z @ 0x19F464
 * Callers:
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F490 (-SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_G.c)
 * Callees:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___ @ 0x19E81D (CWindowGroupManager--_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___.c)
 */

int __thiscall CWindowGroupManager::RemoveWindowFromGroup(CWindowGroupManager *this, struct tagWND *a2)
{
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = *((_DWORD *)a2 + 45);
  return CWindowGroupManager::_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___(
           `anonymous namespace'::g_windowGroupManager,
           &v3,
           (int ***)&a2);
}
