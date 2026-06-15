/*
 * XREFs of ?FindEndpointDeviceInCollection@AudioDeviceMgr@@AEAAJPEBGPEAPEAUIEndpointDevice@@PEAPEAUIEndpointCollection@@@Z @ 0x18013DF1C
 * Callers:
 *     ?GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z @ 0x18013E1C0 (-GetEndpointDevice@AudioDeviceMgr@@AEAAJPEBGPEAHPEAPEAUIEndpointDevice@@@Z.c)
 *     ?ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z @ 0x18013E6C8 (-ProcessOnDeviceRemoved@AudioDeviceMgr@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAUIEndpointCollection@@@Z @ 0x1800582C8 (-GetEndpointCollection@AudioDeviceMgr@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAP.c)
 *     ?CopyTo@?$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z @ 0x180058310 (-CopyTo@-$CComPtrBase@UIEndpointCollection@@@ATL@@QEAAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18005834C (-GetDataFlow@AudioDeviceMgr@@AEAAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AudioDeviceMgr::FindEndpointDeviceInCollection(
        AudioDeviceMgr *this,
        const unsigned __int16 *a2,
        struct IEndpointDevice **a3,
        struct IEndpointCollection **a4)
{
  unsigned int v8; // edi
  struct IEndpointCollection *v9; // rbx
  int DataFlow; // eax
  AudioDeviceMgr *v11; // rcx
  struct IEndpointCollection *v13; // [rsp+20h] [rbp-28h] BYREF
  struct IMMDevice *v14; // [rsp+28h] [rbp-20h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v15; // [rsp+58h] [rbp+10h] BYREF

  v8 = 0;
  v14 = 0LL;
  v9 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      DataFlow = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 5)
                                                                                                  + 40LL))(
                   *((_QWORD *)this + 5),
                   a2,
                   &v14);
      if ( DataFlow < 0
        || (DataFlow = AudioDeviceMgr::GetDataFlow(v11, v14, &v15), DataFlow < 0)
        || (DataFlow = AudioDeviceMgr::GetEndpointCollection(this, v15, &v13), v9 = v13, DataFlow < 0)
        || (DataFlow = (*(__int64 (__fastcall **)(struct IEndpointCollection *, const unsigned __int16 *, struct IEndpointDevice **))(*(_QWORD *)v13 + 48LL))(
                         v13,
                         a2,
                         a3),
            DataFlow < 0) )
      {
        v8 = DataFlow;
      }
      else if ( a4 )
      {
        ATL::CComPtrBase<IEndpointCollection>::CopyTo(&v13, a4);
      }
    }
    else
    {
      v8 = -2147467261;
    }
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v9 )
    (*(void (__fastcall **)(struct IEndpointCollection *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v14 )
    ((void (__fastcall *)(struct IMMDevice *))v14->lpVtbl->Release)(v14);
  return v8;
}
