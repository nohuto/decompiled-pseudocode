/*
 * XREFs of wil::details::ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___::_ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___ @ 0x1802DCFD4
 * Callers:
 *     _WindowWrapperBase::FlushStashedWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x180105FDE (_WindowWrapperBase--FlushStashedWindowingEnvironmentSettings_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___::_ScopeExitFn__lambda_09d0551c02c1222a98ab31aba36cde4e___(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 8) = 0;
    v2 = *(_QWORD *)(result + 152);
    *(_QWORD *)(result + 152) = 0LL;
    if ( v2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
