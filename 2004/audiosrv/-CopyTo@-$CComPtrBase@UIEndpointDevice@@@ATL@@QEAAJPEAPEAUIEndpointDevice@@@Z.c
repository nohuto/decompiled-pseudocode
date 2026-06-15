/*
 * XREFs of ?CopyTo@?$CComPtrBase@UIEndpointDevice@@@ATL@@QEAAJPEAPEAUIEndpointDevice@@@Z @ 0x18013DEE0
 * Callers:
 *     ?AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z @ 0x180056AB0 (-AddEndpointDevice@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIEndpointDevice@@@Z @ 0x18013E0B0 (-GetDefaultAudioEndpointForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18013E1C0 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x18013ED00 (-GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x18013EF10 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z @ 0x18013F180 (-GetNextDevice@EndpointCollection@@QEAAJPEAPEAU__POSITION@@PEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtrBase<IEndpointDevice>::CopyTo(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v3 = *a1;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return 0LL;
}
