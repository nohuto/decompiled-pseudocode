/*
 * XREFs of _WindowEventDispatcher::RecoverViews_::_1_::dtor$1 @ 0x1802B7503
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::RecoverViews_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::shared_ptr<UwpAppViewInfo>::~shared_ptr<UwpAppViewInfo>(a2 + 80);
}
