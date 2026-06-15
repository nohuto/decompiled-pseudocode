/*
 * XREFs of ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800D5AE8
 * Callers:
 *     _EndpointDevice::InitTopologyIdInfo_::_1_::dtor$6 @ 0x18007AF6E (_EndpointDevice--InitTopologyIdInfo_--_1_--dtor$6.c)
 *     _CPolicyConfig::DisconnectAllRenderEndpoints_::_1_::dtor$3 @ 0x1800D7738 (_CPolicyConfig--DisconnectAllRenderEndpoints_--_1_--dtor$3.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForExclusive_::_1_::dtor$1 @ 0x1800EE0E6 (_CAudioResourceManager--RetryGetSaDeviceForExclusive_--_1_--dtor$1.c)
 *     _PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor$2 @ 0x18011106E (_PhoneCallAudio--SwitchActivePhoneCallEndpoint_--_1_--dtor$2.c)
 *     _PhoneCallAudio::SwitchActivePhoneCallEndpoint_::_1_::dtor$6 @ 0x18011109E (_PhoneCallAudio--SwitchActivePhoneCallEndpoint_--_1_--dtor$6.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 */

void __fastcall wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 16) )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      *(void ***)a1,
      *(void **)(a1 + 8));
}
