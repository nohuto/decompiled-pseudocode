/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Do_call @ 0x1800E6CB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5f3c57522b2025466ab3412ccff4c793_::operator() @ 0x18006FAA0 (_lambda_5f3c57522b2025466ab3412ccff4c793_--operator().c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_b2f72c50110305d9aa06d2931c2147e0__void_::_Do_call(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v2 = a1 + 8;
  if ( v1[3] >= 8uLL )
    v1 = (_QWORD *)*v1;
  v5 = v1;
  v4[0] = v2;
  v4[1] = &v5;
  return lambda_5f3c57522b2025466ab3412ccff4c793_::operator()((__int64)v4);
}
