/*
 * XREFs of _KioskPositioner::GetUserSidString_::_1_::dtor$0 @ 0x1800B6300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KioskPositioner::GetUserSidString_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::~unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>(a2 + 64);
}
