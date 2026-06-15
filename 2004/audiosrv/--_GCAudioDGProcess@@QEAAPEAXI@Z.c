/*
 * XREFs of ??_GCAudioDGProcess@@QEAAPEAXI@Z @ 0x1800B8BEC
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800BB3D0 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180052EFC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioDGProcess *__fastcall CAudioDGProcess::`scalar deleting destructor'(CAudioDGProcess *this, void *a2)
{
  void *v3; // rdx
  char *v4; // rcx

  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 15,
    a2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 14,
    v3);
  v4 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
