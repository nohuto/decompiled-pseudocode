/*
 * XREFs of wil::details::ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___::_ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___ @ 0x1802B1698
 * Callers:
 *     _WindowEventDispatcher::OverrideNavigationLevelForView_::_1_::dtor$1 @ 0x1802B67C9 (_WindowEventDispatcher--OverrideNavigationLevelForView_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___::_ScopeExitFn__lambda_dc5431aa45b5fb1eaf191f19667a39ef___(
        __int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 312LL))(*v1, 2LL);
  }
  return result;
}
