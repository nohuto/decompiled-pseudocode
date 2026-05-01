/*
 * XREFs of wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::__move @ 0x1801EAC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rdx

  *a2 = &off_1804914B8;
  result = *(_QWORD *)(a1 + 8);
  v3 = (__int64 *)(a1 + 16);
  a2[1] = result;
  v4 = a2 + 2;
  *v4 = 0LL;
  if ( v4 != v3 )
  {
    result = *v3;
    *v4 = *v3;
    *v3 = 0LL;
  }
  return result;
}
