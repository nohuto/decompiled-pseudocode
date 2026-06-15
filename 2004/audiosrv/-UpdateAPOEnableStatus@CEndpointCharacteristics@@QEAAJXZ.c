/*
 * XREFs of ?UpdateAPOEnableStatus@CEndpointCharacteristics@@QEAAJXZ @ 0x180120304
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001C5C0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180023B20 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800E9EF8 (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18011904C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPE_ea_18011904C.c)
 *     ?AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18011AE6C (-AreAllNonCriticalAPOsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18011E1C0 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::UpdateAPOEnableStatus(CEndpointCharacteristics *this)
{
  int v2; // esi
  _DWORD *v3; // r14
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall ***v8)(_QWORD, GUID *, LPVOID *); // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // eax
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  LPVOID pv; // [rsp+40h] [rbp-29h] BYREF
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  LPVOID v21; // [rsp+50h] [rbp-19h] BYREF
  int v22[2]; // [rsp+58h] [rbp-11h] BYREF
  PROPVARIANT *v23; // [rsp+60h] [rbp-9h]
  char v24; // [rsp+68h] [rbp-1h]
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v26; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  LPVOID v28; // [rsp+D8h] [rbp+6Fh] BYREF
  LPVOID v29; // [rsp+E0h] [rbp+77h] BYREF
  LPVOID v30; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_OWORD *)pvar = 0LL;
  v26 = 0LL;
  v23 = pvar;
  v24 = 1;
  v2 = 1;
  v3 = (_DWORD *)((char *)this + 252);
  while ( 1 )
  {
    v4 = 0;
    if ( !*((_DWORD *)this + 61) )
    {
      if ( !*((_DWORD *)this + 60) )
        CEndpointCharacteristics::InitializeAPOInfo(this);
      if ( *v3 )
        goto LABEL_30;
    }
    if ( (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
      goto LABEL_30;
    if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &byte_18019E740[20 * v2],
           pvar) >= 0
      && LOWORD(pvar[0]) == 19
      && LODWORD(pvar[1]) >= 0x64 )
    {
      v4 = 1;
    }
    else
    {
      PropVariantClear(pvar);
      if ( (*(int (__fastcall **)(_QWORD, char *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
             *((_QWORD *)this + 5),
             &byte_18019E790[20 * v2],
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v4 = LODWORD(pvar[1]) >= 0x64;
      }
    }
    PropVariantClear(pvar);
    if ( !v4 )
      goto LABEL_30;
    v29 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v29,
      0LL);
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &v29) >= 0 )
    {
      pv = 0LL;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      mmdDevGetInstanceIdFromMMDeviceId(v29, &pv);
      if ( (unsigned int)dword_18019D478 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 0x200000000000LL) )
      {
        LODWORD(v28) = v2;
        v21 = pv;
        *(_QWORD *)v22 = v29;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          v5,
          byte_18016B100,
          v6,
          v7,
          (void **)v22,
          &v21,
          (__int64)&v28);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
    v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, LPVOID *))*((_QWORD *)this + 2);
    v30 = 0LL;
    v9 = (**v8)(v8, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, &v30);
    v10 = v9;
    if ( v9 < 0 )
      break;
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v30 + 40LL))(v30, 2LL, &v20);
    v10 = v11;
    if ( v11 < 0 )
    {
      v16 = 640LL;
LABEL_48:
      v17 = (unsigned int)v11;
LABEL_49:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      goto LABEL_51;
    }
    if ( !v20 )
    {
      v10 = -2147024894;
      v17 = 2147942402LL;
      v16 = 641LL;
      goto LABEL_49;
    }
    LOWORD(pvar[0]) = 19;
    LODWORD(pvar[1]) = 1;
    v11 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v20 + 48LL))(
            v20,
            &PKEY_AudioEndpoint_Disable_SysFx,
            pvar);
    v10 = v11;
    if ( v11 < 0 )
    {
      v16 = 645LL;
      goto LABEL_48;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 48LL))(
            *((_QWORD *)this + 5),
            &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
            pvar);
    v10 = v11;
    if ( v11 < 0 )
    {
      v16 = 649LL;
      goto LABEL_48;
    }
    if ( !*((_QWORD *)this + 10) )
    {
      v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)v30 + 40LL))(v30, 0LL);
      v10 = v11;
      if ( v11 < 0 )
      {
        v16 = 654LL;
        goto LABEL_48;
      }
    }
    PropVariantClear(pvar);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
    if ( v29 )
      CoTaskMemFree(v29);
LABEL_30:
    ++v2;
    ++v3;
    if ( v2 >= 4 )
    {
      if ( CEndpointCharacteristics::AreEnhancementsEnabled(this)
        && (unsigned int)CEndpointCharacteristics::AreAllNonCriticalAPOsDisabled(this) )
      {
        v28 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v28,
          0LL);
        if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &v28) >= 0 )
        {
          v29 = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            &v29,
            0LL);
          mmdDevGetInstanceIdFromMMDeviceId(v28, &v29);
          if ( (unsigned int)dword_18019D478 > 4 && tlgKeywordOn((__int64)&dword_18019D478, 0x200000000000LL) )
          {
            v30 = v29;
            *(_QWORD *)v22 = v28;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
              (__int64)&dword_18019D478,
              byte_18016B0B1,
              v12,
              v13,
              (void **)v22,
              &v30);
          }
          if ( v29 )
            CoTaskMemFree(v29);
        }
        LOWORD(pvar[0]) = 19;
        LODWORD(pvar[1]) = 0;
        v14 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 48LL))(
                *((_QWORD *)this + 5),
                &PKEY_Endpoint_AllNonCriticalAPOsDisabled,
                pvar);
        v10 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2AA,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v14);
          v15 = v28;
          goto LABEL_41;
        }
        PropVariantClear(pvar);
        if ( v28 )
          CoTaskMemFree(v28);
      }
      v10 = 0;
      goto LABEL_55;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27E,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v9);
LABEL_51:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
  v15 = v29;
LABEL_41:
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_55:
  PropVariantClear(pvar);
  return v10;
}
