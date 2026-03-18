/*
 * XREFs of ?HandleWindowInGroupDestruction@CWindowGroupManager@@QAEXPAUtagWND@@@Z @ 0x19F245
 * Callers:
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YGXPAUtagWND@@@Z @ 0x19F1FB (-HandleWindowDestruction@WindowGroupingWindowManagement@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___ @ 0x19E86C (CWindowGroupManager--_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___.c)
 */

void __thiscall CWindowGroupManager::HandleWindowInGroupDestruction(CWindowGroupManager *this, struct tagWND *a2)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = *((_DWORD *)a2 + 45);
  CWindowGroupManager::_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___(
    `anonymous namespace'::g_windowGroupManager,
    &v2,
    (int ***)&a2);
}
