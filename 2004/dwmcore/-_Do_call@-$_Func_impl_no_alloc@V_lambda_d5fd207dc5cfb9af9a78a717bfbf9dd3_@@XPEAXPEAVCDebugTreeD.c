/*
 * XREFs of ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d5fd207dc5cfb9af9a78a717bfbf9dd3_@@XPEAXPEAVCDebugTreeDumper@@@std@@EEAAX$$QEAPEAX$$QEAPEAVCDebugTreeDumper@@@Z @ 0x1801C3640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::_Func_impl_no_alloc<_lambda_d5fd207dc5cfb9af9a78a717bfbf9dd3_,void,void *,CDebugTreeDumper *>::_Do_call(
        __int64 a1,
        __int64 *a2,
        CDebugTreeDumper **a3)
{
  __int64 v3; // rcx
  struct IBitmapRealization *v4; // rdx

  v3 = *a2;
  v4 = 0LL;
  if ( v3 )
    v4 = (struct IBitmapRealization *)(v3 + *(int *)(*(_QWORD *)(v3 + 8) + 12LL) + 8LL);
  CDebugTreeDumper::Dump(*a3, v4);
}
