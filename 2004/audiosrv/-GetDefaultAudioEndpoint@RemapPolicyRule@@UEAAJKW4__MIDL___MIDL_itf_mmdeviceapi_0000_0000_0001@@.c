/*
 * XREFs of ?GetDefaultAudioEndpoint@RemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180115730
 * Callers:
 *     ?GetDefaultAudioEndpoint@CommunicationsRemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180115710 (-GetDefaultAudioEndpoint@CommunicationsRemapPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 * Callees:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18000E480 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RemapPolicyRule::GetDefaultAudioEndpoint(
        _DWORD *a1,
        unsigned int a2,
        int a3,
        int a4,
        bool *a5,
        __int64 a6)
{
  int v7; // r9d
  bool *v8; // rbx
  int DefaultAudioEndpoint; // esi
  struct IMMDevice *v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a4 != a1[16] )
    return 2147943568LL;
  v7 = a1[19];
  v8 = a5;
  v11 = 0LL;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(
                           (__int64)g_DynamicAudioEndpointManager,
                           a2,
                           a3,
                           v7,
                           a5,
                           &v11);
  if ( DefaultAudioEndpoint >= 0 )
  {
    DefaultAudioEndpoint = ((__int64 (__fastcall *)(struct IMMDevice *, __int64))v11->lpVtbl->GetId)(v11, a6);
    if ( DefaultAudioEndpoint >= 0 )
    {
      if ( v8 )
      {
        if ( !*v8 )
          *v8 = (a1[20] & 2) != 0;
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v11);
  return (unsigned int)DefaultAudioEndpoint;
}
