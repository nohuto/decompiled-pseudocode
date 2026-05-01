/*
 * XREFs of _TabViewManager::OnShellHookMessage_::_1_::dtor$0 @ 0x180273B23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::OnShellHookMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a2 + 48));
}
