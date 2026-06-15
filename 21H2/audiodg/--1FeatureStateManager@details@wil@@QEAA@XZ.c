/*
 * XREFs of ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x140020FEC
 * Callers:
 *     ?destroy@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x14001CBEC (-destroy@-$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXX.c)
 * Callees:
 *     ??$invoke@P6AXPEAX@ZAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAX@Z @ 0x14001EB58 (--$invoke@P6AXPEAX@ZAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@ZAEAPEAX@Z.c)
 *     ??1SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x140021110 (--1SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1400223F8 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     ?Release@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ @ 0x140026394 (-Release@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAXXZ.c)
 *     ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x140027E68 (-UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z.c)
 *     ?UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z @ 0x140027E98 (-UnsubscribeWilWnf@details@wil@@YAXPEAU__WIL__WNF_USER_SUBSCRIPTION@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x140028794 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14003B1D0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details::FeatureStateManager::~FeatureStateManager(wil::details::FeatureStateManager *this)
{
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v2; // rdx
  wil::details *v3; // rcx
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v4; // rcx
  struct __WIL__WNF_USER_SUBSCRIPTION *v5; // rdx
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  struct _TP_TIMER *v8; // rcx
  struct _TP_TIMER *v9; // rcx
  void *v10; // rcx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall *v12)(wil::details *__hidden, void *); // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 48,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (char *)this + 56,
    0LL);
  v3 = (wil::details *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v3 )
    wil::details::FreeProcessHeap(v3, v2);
  v4 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)*((_QWORD *)this + 30);
  if ( v4 )
    wil::details::UnsubscribeProcessWideUsageFlush(v4, v2);
  wil::details_abi::SubscriptionList::~SubscriptionList((wil::details::FeatureStateManager *)((char *)this + 168));
  if ( *((_QWORD *)this + 20) )
  {
    v11 = *((_QWORD *)this + 20);
    v12 = wil::details::UnregisterWilFeatureConfigurationChange;
    wistd::invoke<void (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v12, &v11);
  }
  v6 = (wil::details *)*((_QWORD *)this + 19);
  if ( v6 )
    wil::details::UnsubscribeWilWnf(v6, v5);
  v7 = (wil::details *)*((_QWORD *)this + 18);
  if ( v7 )
    wil::details::UnsubscribeWilWnf(v7, v5);
  wil::details_abi::SubscriptionList::~SubscriptionList((wil::details::FeatureStateManager *)((char *)this + 72));
  v8 = (struct _TP_TIMER *)*((_QWORD *)this + 7);
  if ( v8 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v8);
  v9 = (struct _TP_TIMER *)*((_QWORD *)this + 6);
  if ( v9 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v9);
  v10 = (void *)*((_QWORD *)this + 2);
  if ( v10 )
    wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Release(v10);
}
