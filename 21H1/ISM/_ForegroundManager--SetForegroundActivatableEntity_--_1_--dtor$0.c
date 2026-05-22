/*
 * XREFs of _ForegroundManager::SetForegroundActivatableEntity_::_1_::dtor$0 @ 0x1800466AF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForegroundManager::SetForegroundActivatableEntity_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
