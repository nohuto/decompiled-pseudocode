/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001A370
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$1 @ 0x18003B876 (_CApplication--CApplication_--_1_--dtor$1.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$9 @ 0x18003BB9A (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$9.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$10 @ 0x18003BBB0 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$10.c)
 *     _CProcess::CProcess_::_1_::dtor$6 @ 0x18003BCD0 (_CProcess--CProcess_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$7 @ 0x18003BCE9 (_CProcess--CProcess_--_1_--dtor$7.c)
 *     _CProcess::CProcess_::_1_::dtor$8 @ 0x18003BD02 (_CProcess--CProcess_--_1_--dtor$8.c)
 *     _CProcess::CProcess_::_1_::dtor$9 @ 0x18003BD1B (_CProcess--CProcess_--_1_--dtor$9.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$7 @ 0x18003C19B (_CApplicationManager--RpcGetProcess_--_1_--dtor$7.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$8 @ 0x18003C1AD (_CApplicationManager--RpcGetProcess_--_1_--dtor$8.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$3 @ 0x18003CBBF (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$3.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$0 @ 0x18003CC6A (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$1 @ 0x18003CC7C (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$1.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$7 @ 0x18003CCB2 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$7.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
