/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058F30
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x180058E8C (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800486CC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CE34 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180055030 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180059844 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005C53C (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005E95C (-DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z.c)
 *     _o___std_exception_destroy_0 @ 0x18006B58E (_o___std_exception_destroy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z @ 0x1801194E8 (--$throw_exception@Ufail_fast@gsl@@@details@gsl@@YAX$$QEAUfail_fast@1@@Z.c)
 *     ??0fail_fast@gsl@@QEAA@QEBD@Z @ 0x1801195B8 (--0fail_fast@gsl@@QEAA@QEBD@Z.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x180121744 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        int a3)
{
  int v6; // edi
  int v7; // ebx
  struct IUnknown **v8; // r12
  struct IUnknown *v9; // rbx
  int v10; // eax
  int ClassFromEndpointId; // eax
  struct IPropertyStore **v12; // r13
  struct IUnknown *v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  struct IUnknown *v16; // rcx
  int v17; // eax
  struct IUnknown *v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // r15
  bool v22; // r14
  __int64 v23; // rdx
  void *v24; // rcx
  int v25; // eax
  void *v26; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int ppv; // [rsp+20h] [rbp-49h]
  LPVOID pv; // [rsp+30h] [rbp-39h] BYREF
  PROPVARIANT v33[2]; // [rsp+38h] [rbp-31h] BYREF
  __int64 v34; // [rsp+48h] [rbp-21h]
  struct IUnknown *v35; // [rsp+50h] [rbp-19h] BYREF
  struct IUnknown *v36; // [rsp+58h] [rbp-11h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v38; // [rsp+70h] [rbp+7h]
  LPVOID v39; // [rsp+78h] [rbp+Fh] BYREF
  void *v40; // [rsp+80h] [rbp+17h] BYREF
  struct IUnknown *v41; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v43; // [rsp+D0h] [rbp+67h] BYREF
  int v44; // [rsp+E0h] [rbp+77h]
  int v45; // [rsp+E8h] [rbp+7Fh] BYREF

  v44 = a3;
  v6 = 0;
  v39 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v43 = 0;
  *((_QWORD *)this + 30) = 0LL;
  *(_OWORD *)pvar = 0LL;
  v38 = 0LL;
  v7 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v39);
  if ( v7 >= 0 )
  {
    v8 = (struct IUnknown **)((char *)this + 16);
    v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)v39 + 40LL))(
           v39,
           a2,
           (char *)this + 16);
    if ( v7 >= 0 )
    {
      v9 = *v8;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (void **)this + 3,
        0LL);
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v9->lpVtbl[1].Release)(v9, (char *)this + 24);
      v7 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x11E,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v10,
          ppv);
      if ( v7 >= 0 )
      {
        ClassFromEndpointId = GetClassFromEndpointId(a2);
        *((_DWORD *)this + 8) = ClassFromEndpointId;
        v12 = (struct IPropertyStore **)((char *)this + 40);
        v13 = *v8;
        v14 = 0LL;
        if ( ClassFromEndpointId )
        {
          v40 = &unk_18019E728;
          LODWORD(pv) = 1;
          v41 = v13;
          v15 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
                  (char *)this + 40,
                  &v41,
                  &pv,
                  &v40);
        }
        else
        {
          v15 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, char *))v13->lpVtbl[1].AddRef)(
                  v13,
                  2LL,
                  (char *)this + 40);
        }
        v7 = v15;
        if ( v15 >= 0 )
        {
          v16 = v35;
          if ( v35 != *v8 )
          {
            ATL::AtlComQIPtrAssign(&v35, *v8, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e);
            v16 = v35;
          }
          if ( !v16 )
            goto LABEL_64;
          v17 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, char *))v16->lpVtbl[1].Release)(
                  v16,
                  0LL,
                  (char *)this + 80);
          if ( v17 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x12F,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v17,
              ppv);
          v18 = v36;
          if ( v36 != *v8 )
          {
            ATL::AtlComQIPtrAssign(&v36, *v8, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
            v18 = v36;
          }
          if ( !v18 )
          {
LABEL_64:
            v7 = -2147467262;
            goto LABEL_56;
          }
          v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v18->lpVtbl[1].QueryInterface)(v18, &v45);
          if ( v7 >= 0 )
          {
            *((_DWORD *)this + 47) = v45 != 0;
            PropVariantClear(pvar);
            if ( ((int (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, PROPVARIANT *))(*v12)->lpVtbl->GetValue)(
                   *v12,
                   &PKEY_Endpoint_KeywordDetector_ConnectorId,
                   pvar) < 0
              || (v19 = 1, LOWORD(pvar[0]) != 19) )
            {
              v19 = 0;
            }
            *((_DWORD *)this + 54) = v19;
            *(_OWORD *)v33 = 0LL;
            v34 = 0LL;
            ((void (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))(*v12)->lpVtbl->GetValue)(
              *v12,
              &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
              v33);
            *((_BYTE *)this + 8734) = LOWORD(v33[0]) == 72;
            PropVariantClear(v33);
            v7 = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this, a3 != 0);
            if ( v7 >= 0 )
            {
              v7 = ((__int64 (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v12)->lpVtbl->GetValue)(
                     *v12,
                     &PKEY_AudioEngine_LatencyCoefficient,
                     pvar);
              if ( v7 >= 0 )
              {
                if ( LOWORD(pvar[0]) == 19 )
                {
                  v20 = (int)pvar[1];
                }
                else
                {
                  if ( LOWORD(pvar[0]) )
                  {
                    v7 = -2147418113;
                    goto LABEL_56;
                  }
                  v20 = 0;
                }
                *((_DWORD *)this + 46) = v20;
                PropVariantClear(pvar);
                if ( ((int (__fastcall *)(struct IPropertyStore *, void *, PROPVARIANT *))(*v12)->lpVtbl->GetValue)(
                       *v12,
                       &PKEY_MMDEVAPI_ActiveTime,
                       pvar) >= 0
                  && LOWORD(pvar[0]) == 21 )
                {
                  *((PROPVARIANT *)this + 24) = pvar[1];
                }
                else
                {
                  *((_QWORD *)this + 24) = 0LL;
                }
                *((_DWORD *)this + 51) = 0;
                *((_DWORD *)this + 53) = 0;
                *((_DWORD *)this + 55) = 0;
                if ( !a3
                  || (v7 = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this, (bool *)&v43), v7 >= 0) )
                {
                  v21 = 0LL;
                  do
                  {
                    if ( v21 >= *((_QWORD *)this + 207) )
                    {
                      v30 = gsl::fail_fast::fail_fast(
                              (gsl::fail_fast *)v33,
                              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      v43 = v6 | 2;
                      gsl::details::throw_exception<gsl::fail_fast>(v30);
                    }
                    if ( (v6 & 2) != 0 )
                    {
                      v6 &= ~2u;
                      v33[0] = (PROPVARIANT)&std::logic_error::`vftable';
                      o___std_exception_destroy_0(&v33[1]);
                    }
                    *(_BYTE *)(v14 + *((_QWORD *)this + 208) + 52) = 1;
                    if ( v21 >= *((_QWORD *)this + 209) )
                    {
                      v29 = gsl::fail_fast::fail_fast(
                              (gsl::fail_fast *)v33,
                              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      v43 = v6 | 4;
                      gsl::details::throw_exception<gsl::fail_fast>(v29);
                    }
                    if ( (v6 & 4) != 0 )
                    {
                      v6 &= ~4u;
                      v33[0] = (PROPVARIANT)&std::logic_error::`vftable';
                      o___std_exception_destroy_0(&v33[1]);
                    }
                    *(_BYTE *)(v14 + *((_QWORD *)this + 210) + 52) = 1;
                    if ( v21 >= *((_QWORD *)this + 211) )
                    {
                      v28 = gsl::fail_fast::fail_fast(
                              (gsl::fail_fast *)v33,
                              "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
                      v43 = v6 | 8;
                      gsl::details::throw_exception<gsl::fail_fast>(v28);
                    }
                    if ( (v6 & 8) != 0 )
                    {
                      v6 &= ~8u;
                      v33[0] = (PROPVARIANT)&std::logic_error::`vftable';
                      o___std_exception_destroy_0(&v33[1]);
                    }
                    *(_BYTE *)(v14 + *((_QWORD *)this + 212) + 52) = 1;
                    ++v21;
                    v14 += 96LL;
                  }
                  while ( v14 < 384 );
                  v22 = 0;
                  if ( !v45 && v44 )
                  {
                    pv = 0LL;
                    if ( (int)CSpatialProperties::MakeActive(
                                (CEndpointCharacteristics *)((char *)this + 1768),
                                *((const unsigned __int16 **)this + 3),
                                v43,
                                *v12) >= 0 )
                    {
                      v33[0] = &pv;
                      v33[1] = 0LL;
                      LOBYTE(v34) = 1;
                      v6 |= 1u;
                      v43 = v6;
                      v22 = (int)CEndpointCharacteristics::GetDeviceFormat(
                                   this,
                                   0,
                                   0,
                                   0,
                                   (struct tWAVEFORMATEX **)&v33[1]) >= 0;
                    }
                    if ( (v6 & 1) != 0 )
                    {
                      if ( (_BYTE)v34 )
                      {
                        v24 = *(void **)v33[0];
                        *(_QWORD *)v33[0] = v33[1];
                        if ( v24 )
                          CoTaskMemFree(v24);
                      }
                    }
                    if ( v22 )
                    {
                      LOBYTE(v23) = 1;
                      CEndpointCharacteristics::SetSpatialAudioSettings(
                        (const unsigned __int16 **)this,
                        v23,
                        eHostProcessConnector,
                        (const struct tWAVEFORMATEX *)pv);
                    }
                    v25 = SpatialPolicy::DetectComboEndpoint((struct IMMDevice *)*v8);
                    if ( v25 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x188,
                        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                        (const char *)(unsigned int)v25,
                        ppv);
                    v26 = pv;
                    pv = 0LL;
                    if ( v26 )
                      CoTaskMemFree(v26);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_56:
  PropVariantClear(pvar);
  if ( v35 )
    ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
  if ( v36 )
    ((void (__fastcall *)(struct IUnknown *))v36->lpVtbl->Release)(v36);
  if ( v39 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v39 + 16LL))(v39);
  return (unsigned int)v7;
}
