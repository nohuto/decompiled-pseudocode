/*
 * XREFs of ??1CGlobalMit@@UEAA@XZ @ 0x1802340A8
 * Callers:
 *     ??_GCGlobalMit@@UEAAPEAXI@Z @ 0x180234110 (--_GCGlobalMit@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008C32C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x180167D34 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 *     ?Stop@CMit@@QEAAXXZ @ 0x18023404C (-Stop@CMit@@QEAAXXZ.c)
 */

void __fastcall CGlobalMit::~CGlobalMit(wil::details **this)
{
  void *v2; // rdx
  void *v3; // rdx

  *this = (wil::details *)&CGlobalMit::`vftable';
  CMit::Stop((CMit *)this);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    this + 18,
    v2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    this + 17,
    v3);
  CMmcssTask::UnloadRuntime((CMmcssTask *)(this + 6));
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 6));
  CMit::~CMit((CMit *)this);
}
