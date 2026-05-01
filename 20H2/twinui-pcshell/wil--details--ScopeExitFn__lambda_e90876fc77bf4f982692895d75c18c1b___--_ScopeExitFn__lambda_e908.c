/*
 * XREFs of wil::details::ScopeExitFn__lambda_e90876fc77bf4f982692895d75c18c1b___::_ScopeExitFn__lambda_e90876fc77bf4f982692895d75c18c1b___ @ 0x1802A01C0
 * Callers:
 *     _ViewEventDispatcher::_OverrideNavigationLevelForView_::_1_::dtor$1 @ 0x1802AC677 (_ViewEventDispatcher--_OverrideNavigationLevelForView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_e90876fc77bf4f982692895d75c18c1b___::_ScopeExitFn__lambda_e90876fc77bf4f982692895d75c18c1b___(
        __int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 880LL))(*v1, 2LL);
  }
  return result;
}
