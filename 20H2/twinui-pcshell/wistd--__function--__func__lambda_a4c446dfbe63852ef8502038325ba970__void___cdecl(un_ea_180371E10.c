/*
 * XREFs of wistd::__function::__func__lambda_a4c446dfbe63852ef8502038325ba970__void___cdecl(unsigned_long_const_&)_::__clone @ 0x180371E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall wistd::__function::__func__lambda_a4c446dfbe63852ef8502038325ba970__void___cdecl_unsigned_long_const____::__clone(
        __int64 a1,
        _QWORD *a2))(void *)
{
  __int64 (__fastcall **result)(void *); // rax
  __int64 v3; // rcx

  result = &off_1804949B8;
  *a2 = &off_1804949B8;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    return (__int64 (__fastcall **)(void *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
