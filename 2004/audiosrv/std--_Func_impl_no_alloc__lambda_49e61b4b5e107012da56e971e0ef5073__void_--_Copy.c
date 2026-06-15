/*
 * XREFs of std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Copy @ 0x1800EEBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_18014B9E8;
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  v2 = a1[3];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[2] = a1[2];
  a2[3] = a1[3];
  return a2;
}
