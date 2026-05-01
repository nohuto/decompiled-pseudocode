/*
 * XREFs of wistd::__function::__func__lambda_a4c446dfbe63852ef8502038325ba970__void___cdecl(unsigned_long_const_&)_::__move @ 0x180371E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_a4c446dfbe63852ef8502038325ba970__void___cdecl_unsigned_long_const____::__move(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 (__fastcall ***v3)(void *); // rcx
  __int64 (__fastcall ***v4)(void *); // rdx

  result = &off_1804949B8;
  v3 = (__int64 (__fastcall ***)(void *))(a1 + 8);
  *a2 = &off_1804949B8;
  v4 = (__int64 (__fastcall ***)(void *))(a2 + 1);
  *v4 = 0LL;
  if ( v4 != v3 )
  {
    result = *v3;
    *v4 = *v3;
    *v3 = 0LL;
  }
  return result;
}
