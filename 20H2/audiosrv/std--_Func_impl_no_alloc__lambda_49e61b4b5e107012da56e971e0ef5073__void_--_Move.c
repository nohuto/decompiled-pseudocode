/*
 * XREFs of std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Move @ 0x1800EE0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Move(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *result; // rax

  *a2 = off_18014A9E8;
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  a2[2] = a1[2];
  a2[3] = a1[3];
  result = a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  return result;
}
