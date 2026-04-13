/*
 * XREFs of ??1?$function@$$A6A_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@@Z@std@@QEAA@XZ @ 0x180030C88
 * Callers:
 *     _CreativeFramework::TargetedContent::GetSubscriptionBehavior_::_1_::dtor$0 @ 0x1800CD475 (_CreativeFramework--TargetedContent--GetSubscriptionBehavior_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier_::_1_::dtor$6 @ 0x1800D2B73 (_CreativeFramework--Actions--SwapStartTileService--GetSourceTileIdentifier_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::function<bool (CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &)>::~function<bool (CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &)>(
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
