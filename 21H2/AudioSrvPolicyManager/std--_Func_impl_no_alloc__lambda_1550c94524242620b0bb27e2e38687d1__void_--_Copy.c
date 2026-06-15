/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy @ 0x180018AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_18003EE50;
  v2 = *(_QWORD *)(a1 + 8);
  a2[1] = v2;
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  return a2;
}
