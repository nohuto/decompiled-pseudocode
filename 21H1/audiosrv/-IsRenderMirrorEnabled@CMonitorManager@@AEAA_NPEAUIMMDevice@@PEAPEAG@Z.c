/*
 * XREFs of ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005E948
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180061D9C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FB238 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800FB6B8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800FBC64 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FCC44 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800FE830 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x1800FDAF8 (-IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall CMonitorManager::IsRenderMirrorEnabled(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 **a3)
{
  char v6; // di
  __int64 v8; // rcx
  __int64 v9; // rbx
  LPVOID pv; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  PROPVARIANT v12[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-20h]
  PROPVARIANT pvar[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v15; // [rsp+68h] [rbp-8h]
  LPVOID v16; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+48h] BYREF

  v11 = 0LL;
  pv = 0LL;
  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v15 = 0LL;
  v6 = 0;
  if ( a3 && a2 )
  {
    *a3 = 0LL;
    if ( *((_BYTE *)this + 352) )
    {
      v11 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v11) >= 0
        && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
             v11,
             &PKEY_MonitorEnabled,
             pvar) >= 0
        && LOWORD(pvar[0]) == 11
        && LOWORD(pvar[1]) == 0xFFFF
        && CMonitorManager::IsEndpointActiveHmdEndpoint(this, a2) )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv) >= 0
          && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
               v11,
               &PKEY_MonitorOutput,
               v12) >= 0
          && LOWORD(v12[0]) == 31
          && v12[1] )
        {
          v16 = 0LL;
          v8 = *((_QWORD *)this + 8);
          v17 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, 0LL, 0LL, &v17) >= 0 )
          {
            v9 = v17;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &v16,
              0LL);
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 40LL))(v9, &v16) >= 0
              && !(unsigned int)_o__wcsicmp(pv, v16)
              && (unsigned int)_o__wcsicmp(pv, v12[1]) )
            {
              *a3 = (unsigned __int16 *)v12[1];
              LOWORD(v12[0]) = 0;
              v6 = 1;
            }
          }
          if ( v16 )
            CoTaskMemFree(v16);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  PropVariantClear(pvar);
  PropVariantClear(v12);
  if ( pv )
    CoTaskMemFree(pv);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return v6;
}
