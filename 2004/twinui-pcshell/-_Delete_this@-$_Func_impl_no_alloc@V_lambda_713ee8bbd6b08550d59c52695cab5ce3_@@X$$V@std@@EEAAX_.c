/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@X$$V@std@@EEAAX_N@Z @ 0x180327630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_713ee8bbd6b08550d59c52695cab5ce3_,void,>::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
