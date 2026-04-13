/*
 * XREFs of ??_ESubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAPEAXI@Z @ 0x180047190
 * Callers:
 *     <none>
 * Callees:
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180040444 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@PEAX@2@@Z @ 0x180045BD4 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAppInstallInfoRecord@ContentManagement@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800460E4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVAppInstal.c)
 */

ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *__fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::`vector deleting destructor'(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        char a2)
{
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  wil::details *v10; // rcx

  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = (_QWORD **)*((_QWORD *)this + 11);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 11) + 8LL) = *((_QWORD *)this + 11);
  *((_QWORD *)this + 12) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      std::_List_buy<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>::_Freenode(
        (__int64)v7,
        (__int64)v6);
      v6 = v8;
      v7 = (_QWORD *)*((_QWORD *)this + 11);
    }
    while ( v8 != v7 );
  }
  operator delete(v7);
  v10 = (wil::details *)*((_QWORD *)this + 9);
  if ( v10 )
    wil::details::delete_wnf_subscription_state(v10, v9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::IIterable<ContentManagement::AppInstallInfoRecord *>,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
