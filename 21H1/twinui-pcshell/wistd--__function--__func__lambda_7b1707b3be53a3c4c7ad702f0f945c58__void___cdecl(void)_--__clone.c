/*
 * XREFs of wistd::__function::__func__lambda_7b1707b3be53a3c4c7ad702f0f945c58__void___cdecl(void)_::__clone @ 0x180191C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_7b1707b3be53a3c4c7ad702f0f945c58__void___cdecl_void__::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *a2 = &off_18046E098;
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  v3 = *(_QWORD *)(a1 + 16);
  a2[2] = v3;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
