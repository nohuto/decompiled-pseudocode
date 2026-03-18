/*
 * XREFs of ??1USB4_HOSTROUTER_MGR@@QEAA@XZ @ 0x1C03B5CF8
 * Callers:
 *     ?DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ @ 0x1C03B342C (-DestroyStaticUSB4Class@MONITOR_MGR@@SAXXZ.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C000E608 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0027E28 (-reset@-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAX$$A6AJPEAX@Z$1?IoUnregisterPlugPlayNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006B7F4 (--1-$unique_storage@U-$resource_policy@PEAX$$A6AJPEAX@Z$1-IoUnregisterPlugPlayNotification@@YAJ0.c)
 */

void __fastcall USB4_HOSTROUTER_MGR::~USB4_HOSTROUTER_MGR(void **this)
{
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    this,
    0LL);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 10));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 1));
  wil::details::unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (void *),&long IoUnregisterPlugPlayNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(this);
}
