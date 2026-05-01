/*
 * XREFs of wistd::__function::__func__lambda_fd1fb3cc1dfa65b16fd1b2f47571851e__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800A2210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_fd1fb3cc1dfa65b16fd1b2f47571851e__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  return TouchKeyboardExperienceManager::OnLockScreenActiveChanged(
           *(TouchKeyboardExperienceManager **)(a1 + 8),
           *a2 != 0);
}
