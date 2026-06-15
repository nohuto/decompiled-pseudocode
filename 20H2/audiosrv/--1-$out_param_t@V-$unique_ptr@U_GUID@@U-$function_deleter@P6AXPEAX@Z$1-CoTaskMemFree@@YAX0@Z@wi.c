/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x180045388
 * Callers:
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$5 @ 0x180070E74 (_InitializeStreamAndModeDescriptors_--_1_--dtor$5.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$8 @ 0x180070E98 (_InitializeStreamAndModeDescriptors_--_1_--dtor$8.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$12 @ 0x180070EC8 (_InitializeStreamAndModeDescriptors_--_1_--dtor$12.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$3 @ 0x1800768F2 (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$3.c)
 *     _CEndpointCharacteristics::DiscoverProcessingModeCapabilities_::_1_::dtor$17 @ 0x18007693A (_CEndpointCharacteristics--DiscoverProcessingModeCapabilities_--_1_--dtor$17.c)
 *     _CreateSaDevice_::_1_::dtor$9 @ 0x180078620 (_CreateSaDevice_--_1_--dtor$9.c)
 *     _CreateSaDevice_::_1_::dtor$10 @ 0x180078640 (_CreateSaDevice_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
