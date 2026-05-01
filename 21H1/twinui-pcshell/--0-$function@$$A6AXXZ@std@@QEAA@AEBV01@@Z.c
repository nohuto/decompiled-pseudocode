/*
 * XREFs of ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180302BF0
 * Callers:
 *     ??R_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@QEBAXXZ @ 0x180303810 (--R_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@QEBAXXZ.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x180306964 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<void (void)>::function<void (void)>(__int64 a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
    *(_QWORD *)(a1 + 56) = (**v3)(v3, a1);
  return a1;
}
