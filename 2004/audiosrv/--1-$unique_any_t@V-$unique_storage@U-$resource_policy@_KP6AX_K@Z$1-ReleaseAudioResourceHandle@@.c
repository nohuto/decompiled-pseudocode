/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E4054
 * Callers:
 *     _lambda_db18f22ab46b33b274128dc9e227aeaf_::operator() @ 0x18007082C (_lambda_db18f22ab46b33b274128dc9e227aeaf_--operator().c)
 *     __lambda_db18f22ab46b33b274128dc9e227aeaf_::operator()_::_1_::dtor$1 @ 0x1800709CD (__lambda_db18f22ab46b33b274128dc9e227aeaf_--operator()_--_1_--dtor$1.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$3 @ 0x18007C4C0 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$20 @ 0x1800ECC3E (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$20.c)
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$7 @ 0x1800EE8F4 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$7.c)
 *     _TelephonyController::CreateCallInstance_::_1_::dtor$0 @ 0x180141C94 (_TelephonyController--CreateCallInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800EDC0C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,void (*)(unsigned __int64),&void ReleaseAudioResourceHandle(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>>(
        unsigned __int64 *a1)
{
  unsigned __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseAudioResourceHandle(v1);
}
