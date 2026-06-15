/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1b5f3552e533da1bfd8ea0b4289215e2__void_::_Move @ 0x1800E7960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_1b5f3552e533da1bfd8ea0b4289215e2__void_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(a1 + 8);
  *a2 = off_18014B468;
  a2[1] = 0LL;
  if ( a2 + 1 != v2 )
  {
    a2[1] = *v2;
    *v2 = 0LL;
  }
  return a2;
}
