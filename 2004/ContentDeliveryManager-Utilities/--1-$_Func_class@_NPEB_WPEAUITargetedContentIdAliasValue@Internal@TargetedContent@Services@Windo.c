/*
 * XREFs of ??1?$_Func_class@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@std@@U67@U67@U67@U67@@std@@QEAA@XZ @ 0x180035A2C
 * Callers:
 *     _CreativeFramework::TargetedContent::GetSubscriptionBehavior_::_1_::dtor$1 @ 0x1800CFCB2 (_CreativeFramework--TargetedContent--GetSubscriptionBehavior_--_1_--dtor$1.c)
 *     _CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier_::_1_::dtor$8 @ 0x1800D53B0 (_CreativeFramework--Actions--SwapStartTileService--GetSourceTileIdentifier_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::~_Func_class<bool,wchar_t const *,Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasValue *,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>(
        _QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)a1[3];
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*v1 + 40LL))(a1[3], 0LL);
    if ( v1 != a1 )
      operator delete(v1);
    a1[3] = 0LL;
  }
}
