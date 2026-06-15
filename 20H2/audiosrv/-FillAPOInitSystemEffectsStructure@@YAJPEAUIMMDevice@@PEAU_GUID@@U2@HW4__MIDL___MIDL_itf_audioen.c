/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1801313A4
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x18012EAF0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180131AFC (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002A4D4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18004A888 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  int v10; // eax
  HRESULT v11; // ebx
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  bool v17; // bl
  const PROPERTYKEY *v18; // rax
  unsigned int v19; // r14d
  LPVOID *v20; // rcx
  struct KSDATAFORMAT_WAVEFORMATEX *v21; // rdx
  void *v22; // rax
  int v23; // eax
  void *v24; // rcx
  __int64 v25; // rdx
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  PROPVARIANT *v31; // rbx
  __int64 v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  IPropertyStore *v35; // rax
  IPropertyStore *v36; // rax
  IMMDeviceCollection *v37; // rax
  LPVOID *ppv; // [rsp+28h] [rbp-E0h]
  LPVOID v40; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A8h] BYREF
  IMMDeviceCollection *v42; // [rsp+68h] [rbp-A0h] BYREF
  IPropertyStore *v43; // [rsp+70h] [rbp-98h] BYREF
  LPVOID *p_pv; // [rsp+78h] [rbp-90h]
  struct KSDATAFORMAT_WAVEFORMATEX *v45; // [rsp+80h] [rbp-88h] BYREF
  char v46; // [rsp+88h] [rbp-80h]
  UINT v47; // [rsp+90h] [rbp-78h] BYREF
  UINT v48; // [rsp+94h] [rbp-74h] BYREF
  LPVOID v49; // [rsp+98h] [rbp-70h] BYREF
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+B0h] [rbp-58h]
  LPVOID v52; // [rsp+B8h] [rbp-50h] BYREF
  IPropertyStore *v53; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-40h] BYREF
  PROPVARIANT *v55; // [rsp+D0h] [rbp-38h] BYREF
  char v56; // [rsp+D8h] [rbp-30h]
  PROPVARIANT *v57; // [rsp+E0h] [rbp-28h]
  char v58; // [rsp+E8h] [rbp-20h]
  GUID fmtid; // [rsp+F0h] [rbp-18h] BYREF
  DWORD pid; // [rsp+100h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  v43 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
          a1,
          0LL,
          &v43);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v54 = 0LL;
    v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
            &v54);
    v11 = v12;
    if ( v12 < 0 )
    {
      v13 = (unsigned int)v12;
      v14 = 54LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)v13);
LABEL_70:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v54);
      goto LABEL_71;
    }
    if ( !v54 )
    {
      v11 = -2147418113;
      v13 = 2147549183LL;
      v14 = 55LL;
      goto LABEL_7;
    }
    v53 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, IPropertyStore **))(*(_QWORD *)v54 + 40LL))(v54, 0LL, &v53);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v15);
LABEL_69:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
      goto LABEL_70;
    }
    *(_OWORD *)pvar = 0LL;
    Src = 0LL;
    v55 = pvar;
    v56 = 1;
    v16 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v43->lpVtbl->GetValue)(
            v43,
            &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
            pvar);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v16);
      PropVariantClear(pvar);
      goto LABEL_69;
    }
    v17 = LOWORD(pvar[0]) == 72;
    PropVariantClear(pvar);
    v42 = 0LL;
    v47 = 0;
    v48 = 0;
    v18 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    v19 = 3;
    if ( a5 != eKeywordDetectorConnector )
      v18 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v18->fmtid;
    pid = v18->pid;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54) || v17 )
      goto LABEL_67;
    *(_OWORD *)pvar = 0LL;
    Src = 0LL;
    v57 = pvar;
    v58 = 1;
    v40 = 0LL;
    if ( a5 != eKeywordDetectorConnector )
      v19 = 0;
    if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v43->lpVtbl->GetValue)(v43, &fmtid, pvar) < 0
      || LOWORD(pvar[0]) != 65 )
    {
      v52 = 0LL;
      v11 = CoCreateInstance(
              &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
              0LL,
              0x17u,
              &GUID_0f0058a4_87be_41e6_bcd3_26b19f7e9177,
              &v52);
      if ( v11 >= 0 )
      {
        v49 = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &v49,
          0LL);
        v23 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &v49);
        v11 = v23;
        if ( v23 >= 0 )
        {
          pv = 0LL;
          p_pv = &pv;
          v45 = 0LL;
          v46 = 1;
          v11 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD, struct KSDATAFORMAT_WAVEFORMATEX **))(*(_QWORD *)v52 + 304LL))(
                  v52,
                  v49,
                  v19,
                  0LL,
                  &v45);
          if ( v46 )
          {
            v24 = *p_pv;
            *p_pv = v45;
            if ( v24 )
              CoTaskMemFree(v24);
          }
          if ( v11 >= 0 )
          {
            p_pv = &v40;
            v45 = 0LL;
            v46 = 1;
            v11 = CreateKSFormatFromWFXFormat((const struct tWAVEFORMATEX *)pv, &v45);
            if ( v46 )
            {
              v26 = *p_pv;
              *p_pv = v45;
              if ( v26 )
                CoTaskMemFree(v26);
            }
            if ( v11 >= 0 )
            {
              v28 = pv;
              pv = 0LL;
              if ( v28 )
                CoTaskMemFree(v28);
              if ( v49 )
                CoTaskMemFree(v49);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v52);
LABEL_54:
              v55 = 0LL;
              ppv = (LPVOID *)&v55;
              v29 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))a1->lpVtbl->Activate)(
                      a1,
                      &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                      23LL);
              v11 = v29;
              if ( v29 < 0 )
              {
                v30 = 117LL;
LABEL_60:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v30,
                  (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
                  (const char *)(unsigned int)v29);
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v55);
                goto LABEL_61;
              }
              v31 = v55;
              v32 = (__int64)v42;
              v42 = 0LL;
              if ( v32 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              LODWORD(ppv) = v19;
              v29 = (*((__int64 (__fastcall **)(PROPVARIANT *, LPVOID, _QWORD, __int64, LPVOID *, IMMDeviceCollection **, UINT *, UINT *))*v31
                     + 13))(
                      v31,
                      v40,
                      *(unsigned int *)v40,
                      1LL,
                      ppv,
                      &v42,
                      &v47,
                      &v48);
              v11 = v29;
              if ( v29 < 0 )
              {
                v30 = 120LL;
                goto LABEL_60;
              }
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v55);
              v34 = v40;
              v40 = 0LL;
              if ( v34 )
                CoTaskMemFree(v34);
              PropVariantClear(pvar);
LABEL_67:
              a6->APOInit.cbSize = 88;
              a6->APOInit.clsid = *a2;
              v35 = v43;
              v43 = 0LL;
              a6->pAPOEndpointProperties = v35;
              v36 = v53;
              v53 = 0LL;
              a6->pAPOSystemEffectsProperties = v36;
              a6->pReserved = 0LL;
              v37 = v42;
              v42 = 0LL;
              a6->pDeviceCollection = v37;
              a6->nSoftwareIoDeviceInCollection = v47;
              a6->nSoftwareIoConnectorIndex = v48;
              a6->AudioProcessingMode = *a3;
              a6->InitializeForDiscoveryOnly = a4;
              v11 = 0;
LABEL_68:
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
              goto LABEL_69;
            }
            v25 = 112LL;
          }
          else
          {
            v25 = 110LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v25,
            (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
            (const char *)(unsigned int)v11);
          v27 = pv;
          pv = 0LL;
          if ( v27 )
            CoTaskMemFree(v27);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6A,
            (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
            (const char *)(unsigned int)v23);
        }
        if ( v49 )
          CoTaskMemFree(v49);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67,
          (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
          (const char *)(unsigned int)v11);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v52);
      goto LABEL_61;
    }
    v20 = &v40;
    p_pv = &v40;
    v21 = 0LL;
    v45 = 0LL;
    v46 = 1;
    if ( LODWORD(pvar[1]) < 0x12uLL || LODWORD(pvar[1]) < (unsigned __int64)Src->cbSize + 18 )
    {
      v11 = -2147024809;
    }
    else
    {
      v11 = CreateKSFormatFromWFXFormat(Src, &v45);
      if ( !v46 )
        goto LABEL_27;
      v21 = v45;
      v20 = p_pv;
    }
    v22 = *v20;
    *v20 = v21;
    if ( v22 )
      CoTaskMemFree(v22);
LABEL_27:
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
        (const char *)(unsigned int)v11);
LABEL_61:
      v33 = v40;
      v40 = 0LL;
      if ( v33 )
        CoTaskMemFree(v33);
      PropVariantClear(pvar);
      goto LABEL_68;
    }
    goto LABEL_54;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (__int64)"avcore\\audiocore\\server\\lib\\sysfxutil\\sysfxutil.cpp",
    (const char *)(unsigned int)v10);
LABEL_71:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
  return (unsigned int)v11;
}
