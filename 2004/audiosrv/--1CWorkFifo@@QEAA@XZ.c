/*
 * XREFs of ??1CWorkFifo@@QEAA@XZ @ 0x1801066A0
 * Callers:
 *     _Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager_::_1_::dtor$7 @ 0x18007D40A (_Sarm--CSpatialAudioResourceManager--CSpatialAudioResourceManager_--_1_--dtor$7.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180052EFC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180109A60 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@AEAAXXZ @ 0x18010A0E0 (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CWorkFifo::~CWorkFifo(wil::details **this)
{
  void *v2; // rdx
  wil::details *v3; // rcx

  CWorkFifo::Shutdown((CWorkFifo *)this);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    this + 28,
    v2);
  _Mtx_destroy_in_situ((_Mtx_t)(this + 18));
  std::deque<std::shared_ptr<CWorkFifo::WorkItem>>::_Tidy(this + 12);
  v3 = this[12];
  this[12] = 0LL;
  std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x10);
}
