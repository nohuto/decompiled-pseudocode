/*
 * XREFs of ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x18025B29C
 * Callers:
 *     ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x18025B2E0 (--_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x18025B31C (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 */

void __fastcall CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(CHolographicInteropTaskQueue *this)
{
  CHolographicInteropTaskQueue *v2; // rcx
  void *v3; // rdx

  *(_QWORD *)this = &CHolographicInteropTaskQueue::`vftable';
  CHolographicInteropTaskQueue::ClearList(this, (union _SLIST_HEADER *)this + 1);
  CHolographicInteropTaskQueue::ClearList(v2, (union _SLIST_HEADER *)this + 2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 6,
    v3);
}
