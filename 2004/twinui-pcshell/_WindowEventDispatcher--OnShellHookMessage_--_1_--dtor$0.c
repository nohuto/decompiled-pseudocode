/*
 * XREFs of _WindowEventDispatcher::OnShellHookMessage_::_1_::dtor$0 @ 0x180101EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::OnShellHookMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(a2 + 72);
}
