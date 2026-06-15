/*
 * XREFs of ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x1800FB848
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800FB094 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 *a3)
{
  int v6; // ebx
  bool v7; // zf
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h]
  PROPVARIANT v11[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h]
  LPVOID pv; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_27;
  }
  v14 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 2LL, &v14);
  if ( v6 < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v6 < 0
      || (unsigned int)_o__wcsicmp(a3, pv)
      && ((v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
                  v14,
                  &PKEY_MonitorOutput,
                  pvar),
           v6 < 0)
       || (LOWORD(pvar[0]) != 31 || !pvar[1] || (unsigned int)_o__wcsicmp(a3, pvar[1]))
       && (unsigned int)_o__wcsicmp(a3, pv)
       && (unsigned int)_o__wcsicmp(a3, pvar[1])
       && (PropVariantClear(pvar),
           LOWORD(pvar[0]) = 31,
           pvar[1] = a3,
           v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 48LL))(
                  v14,
                  &PKEY_MonitorOutput,
                  pvar),
           LOWORD(pvar[0]) = 0,
           v6 < 0)) )
    {
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
         v14,
         &PKEY_MonitorEnabled,
         v11);
  if ( v6 >= 0 )
  {
    if ( LOWORD(v11[0]) == 11 )
    {
      if ( *((_BYTE *)this + 352) )
      {
        if ( LOWORD(v11[1]) == 0xFFFF )
          goto LABEL_27;
      }
      else if ( !LOWORD(v11[1]) )
      {
        goto LABEL_27;
      }
    }
    LOWORD(v11[0]) = 11;
    v7 = *((_BYTE *)this + 352) == 0;
    LOWORD(v11[1]) = -1;
    if ( v7 )
      LOWORD(v11[1]) = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v14 + 48LL))(
           v14,
           &PKEY_MonitorEnabled,
           v11);
  }
LABEL_27:
  PropVariantClear(v11);
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v14);
  return (unsigned int)v6;
}
