/*
 * XREFs of wil::details::ScopeExitFn__lambda_9f2aee48b89f6a64464cabb7f1a1bbd3___::_ScopeExitFn__lambda_9f2aee48b89f6a64464cabb7f1a1bbd3___ @ 0x1802A00B0
 * Callers:
 *     _ViewEventDispatcher::RecoverViews_::_1_::dtor$4 @ 0x1802A4D95 (_ViewEventDispatcher--RecoverViews_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_9f2aee48b89f6a64464cabb7f1a1bbd3___::_ScopeExitFn__lambda_9f2aee48b89f6a64464cabb7f1a1bbd3___(
        __int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 840LL))(*v1);
  }
  return result;
}
