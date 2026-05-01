/*
 * XREFs of ?SetUntrackMouseMovementCallback@SearchAppDesktopExperienceView@@UEAAXV?$function@$$A6AXXZ@std@@@Z @ 0x1800A4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180047804 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004A074 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@wil@@QEAA_NXZ @ 0x180099684 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsDynamicSearchBox@@@details@w.c)
 *     ??1?$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ @ 0x1800B90B8 (--1-$function@$$A6A_NUAPP_LAYOUT_ENUM_ITEM@@@Z@std@@QEAA@XZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x180208730 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SearchAppDesktopExperienceView::SetUntrackMouseMovementCallback(RTL_SRWLOCK *a1, RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v4; // rdi
  RTL_SRWLOCK *v6; // [rsp+40h] [rbp+18h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_FeedsDynamicSearchBox>::GetImpl'::`2'::impl) )
  {
    wil::srwlock::lock_exclusive(a1 + 37, &v6);
    v4 = a1 + 29;
    if ( v4 != a2 )
    {
      std::function<bool (APP_LAYOUT_ENUM_ITEM)>::~function<bool (APP_LAYOUT_ENUM_ITEM)>(v4);
      std::_Func_class<void,>::_Reset_move(v4, a2);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v6);
  }
  return std::function<bool (APP_LAYOUT_ENUM_ITEM)>::~function<bool (APP_LAYOUT_ENUM_ITEM)>(a2);
}
